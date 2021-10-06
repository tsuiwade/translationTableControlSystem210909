#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QSerialPort>
#include <QSerialPortInfo>
#include <QDebug>
#include <QMessageBox>
#include <QString>
#include <QLineEdit>
#include <QPushButton>
#include <QtCore/qmath.h>
#include <QPropertyAnimation>
#include <dialog.h>
#include <QThread>
#include <QTimer>
#include <QSequentialAnimationGroup>
#include "maskwidget.h"
#include <QApplication>
#include <QLineEdit>
#include <QListView>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow) {

    ui->setupUi(this);

    this->init();

    tipDialog = new Dialog();


    MaskWidget::instance()->setMainWidget(this);
    MaskWidget::instance()->setNames(QStringList("NumKeyboard"));

    ui->lineEdit->setValidator(new QIntValidator(this));
    ui->lineEdit->installEventFilter(this);
    ui->comboBox_portName->installEventFilter(this);
    ui->comboBox_portName->setView(new QListView());

    //    串口在收到数据后，会将数据存入接收缓冲区。此时，我们可以通过readAll()函数将接收缓冲区的数据读出来。当串口的接收缓冲区有数据时，QSerilaPort对象会发出一个readyRead()的信号。因此，我们可以编写一个槽函数来读数据：
    QObject::connect(&serial, &QSerialPort::readyRead, this, &MainWindow::serialPort_readyRead);

//下拉框默认设置
    MainWindow::portSearch();
}
void MainWindow::init() {
    this->setWindowTitle("平移台控制软件");
    this->showFullScreen();

    ui->btn_fast_forward->setIcon(QIcon(":/icons/fast_forward.png"));
    ui->btn_fast_reverse->setIcon(QIcon(":/icons/fast_reverse.png"));
    ui->btn_medium_forward->setIcon(QIcon(":/icons/medium_forward.png"));
    ui->btn_medium_reverse->setIcon(QIcon(":/icons/medium_reverse.png"));
    ui->btn_slow_forward->setIcon(QIcon(":/icons/slow_forward.png"));
    ui->btn_slow_reverse->setIcon(QIcon(":/icons/slow_reverse.png"));
    ui->btn_open->setIcon(QIcon(":/icons/port_on.png"));
    ui->btn_stop->setIcon(QIcon(":/icons/stop.png"));
    ui->btn_move->setIcon(QIcon(":/icons/move.png"));

    QList<QWidget*> qList = {ui->horizontalSlider, ui->comboBox_portName,  ui->centralWidget}; //

    QList<QPushButton*> btnList = ui->centralWidget->findChildren<QPushButton*>();
    QList<QLineEdit*> lineList = ui->centralWidget->findChildren<QLineEdit*>();
    for (auto i : btnList)  qList.append(i);
    for (auto i : lineList)  qList.append(i);

    for (auto i : qList) {
        QGraphicsDropShadowEffect * shadow_effect = new QGraphicsDropShadowEffect(this);
        shadow_effect->setOffset(2, 2);
        shadow_effect->setColor(QColor(55, 55, 55));
        shadow_effect->setBlurRadius(8);

        i->setGraphicsEffect(shadow_effect);
    }
}


bool MainWindow::eventFilter(QObject * obj, QEvent * event) {
    if(event->type() == QEvent::MouseButtonPress) {
        if(obj == ui->comboBox_portName) {
            ui->comboBox_portName->clear();
            MainWindow::portSearch();
        }
    }
    return QWidget::eventFilter(obj, event);
}


MainWindow::~MainWindow() {
    delete ui;
}



void MainWindow::serialPort_readyRead() {
    //从接收缓冲区中读取数据
    QByteArray buffer = serial.readAll();
    //从界面中读取以前收到的数据
    if(buffer.size() == 4 && buffer[0] == '\x5A') {

//            QString str;
//            for(int i = 0; i < buffer.length(); i++) {
//                QString byteStr = QString::number(static_cast<uchar>(buffer[i]), 16);
//                str += byteStr;
//            }
//            qDebug() << "recordedQByteArray";
//            qDebug() << QString::number(static_cast<uchar>(buffer[1]), 16);
//            qDebug() << QString::number(static_cast<uchar>(buffer[2]), 16);
//            qDebug() << QString::number(static_cast<uchar>(buffer[3]), 16);


        position = ((static_cast<unsigned int>(buffer[1]) & 0xFF) << 16) +
                   ((static_cast<unsigned int>(buffer[2]) & 0xFF) << 8)
                   + (static_cast<unsigned int>(buffer[3]) & 0xFF);
//        ui->label->setText(QString::asprintf("当前位置:    %d", position));
        ui->lcdNumber->display(position);
        ui->horizontalSlider->setValue(qLn(position + 1) * 10.0);
    }
    if(buffer.size() == 4  && buffer[0] == '\xAA' && buffer[1] == '\x55' && buffer[2] == '\xAA' && buffer[3] == '\x55') {
        ui->btn_move->setText("运动到记录位置");
        tipDialog->show();
        ui->btn_move->setEnabled(true);
    }
}


void MainWindow::on_btn_open_clicked() {
    if(ui->btn_open->text() == QString("打开串口")) {
        //设置串口名
        QString spTxt = ui->comboBox_portName->currentText();
        spTxt = spTxt.section(':', 0, 0);
        serial.setPortName(spTxt);
        //设置波特率
        serial.setBaudRate(9600);

        //设置数据位数
        serial.setDataBits(QSerialPort::Data8);

        serial.setParity(QSerialPort::NoParity);
        //设置停止位

        serial.setStopBits(QSerialPort::OneStop);

        serial.setFlowControl(QSerialPort::NoFlowControl);

        //打开串口
        if(!serial.open(QIODevice::ReadWrite)) {
            QMessageBox::about(NULL, "提示", "无法打开串口！");
            return;
        }

        //下拉菜单控件失能
        ui->comboBox_portName->setEnabled(false);
        QIcon myicon = QIcon(":/icons/port_off.png");
        ui->btn_open->setIcon(myicon);
        ui->btn_open->setIconSize(QSize(30, 30));
        ui->btn_open->setText(QString("关闭串口"));

    } else {
        //关闭串口
        serial.close();
        //下拉菜单控件使能
        ui->comboBox_portName->setEnabled(true);
        QIcon myicon = QIcon(":/icons/port_on.png");
        ui->btn_open->setIcon(myicon);
        ui->btn_open->setIconSize(QSize(30, 30));
        ui->btn_open->setText(QString("打开串口"));
    }
}

void MainWindow::portSearch() {
    ui->comboBox_portName->clear();
    foreach(const QSerialPortInfo &info, QSerialPortInfo::availablePorts()) {
        ui->comboBox_portName->addItem(info.portName() + ": " + info.description());
    }
}


void MainWindow::on_btn_stop_clicked() {
    QApplication::inputMethod()->show();

    //停止运动
    if(!ui->btn_move->isEnabled()) {
        ui->btn_move->setText("运动到记录位置");
        ui->btn_move->setEnabled(true);
    }
    QByteArray array;
    array[0] = 0xAA;
    array[1] = 0x55;
    array[2] = 0x10;
    array[3] = 0x00;
    array[4] = 0x00;
    array[5] = 0x00;
    array[6] = 0x0F;
    serial.write(array);
}


void MainWindow::on_btn_move_clicked() {
    int intVar = ui->lineEdit->text().toInt();

    QByteArray array1;
    int len_intVar = sizeof(intVar);
    array1.resize(len_intVar);
    memcpy(array1.data(), &intVar, len_intVar);

    QByteArray recordedArray;
    recordedArray[0] = 0xAA;
    recordedArray[1] = 0x55;
    recordedArray[2] = 0x1A;
    recordedArray[3] = array1[2];
    recordedArray[4] = array1[1];
    recordedArray[5] = array1[0];
    recordedArray[6] = 0xAA + 0x55 + 0x1A + recordedArray[3] + recordedArray[4] + recordedArray[5];
    serial.write(recordedArray);

    ui->btn_move->setText(QString::asprintf("运动到%d", intVar));



    QTimer *pTimer = new QTimer(this);
    connect(pTimer, SIGNAL(timeout()), this, SLOT(slot_Timerout()));
    pTimer->setSingleShot(true);
    pTimer->start(200);



}

void MainWindow::slot_Timerout() {

    QByteArray array;
    array[0] = 0xAA;
    array[1] = 0x55;
    array[2] = 0x18;
    array[3] = 0x00;
    array[4] = 0x00;
    array[5] = 0x00;
    array[6] = 0x17;
    MainWindow::serial.write(array);

    //运动到记录位置
    ui->btn_move->setText("正在移动...");
    ui->btn_move->setEnabled(false);


}


void MainWindow::on_btn_fast_forward_clicked() {
    //正快
    QByteArray array;
    array[0] = 0xAA;
    array[1] = 0x55;
    array[2] = 0x11;
    array[3] = 0x00;
    array[4] = 0x00;
    array[5] = 0x00;
    array[6] = 0x10;
    serial.write(array);
}

void MainWindow::on_btn_fast_reverse_clicked() {
    //反向快转
    QByteArray array;
    array[0] = 0xAA;
    array[1] = 0x55;
    array[2] = 0x14;
    array[3] = 0x00;
    array[4] = 0x00;
    array[5] = 0x00;
    array[6] = 0x13;
    serial.write(array);
}

void MainWindow::on_btn_medium_forward_clicked() {
    //正向慢转
    QByteArray array;
    array[0] = 0xAA;
    array[1] = 0x55;
    array[2] = 0x12;
    array[3] = 0x00;
    array[4] = 0x00;
    array[5] = 0x00;
    array[6] = 0x11;
    serial.write(array);
}

void MainWindow::on_btn_medium_reverse_clicked() {
    //反向慢转
    QByteArray array;
    array[0] = 0xAA;
    array[1] = 0x55;
    array[2] = 0x15;
    array[3] = 0x00;
    array[4] = 0x00;
    array[5] = 0x00;
    array[6] = 0x14;
    serial.write(array);
}

void MainWindow::on_btn_slow_forward_clicked() {
    //正向微转
    QByteArray array;
    array[0] = 0xAA;
    array[1] = 0x55;
    array[2] = 0x13;
    array[3] = 0x00;
    array[4] = 0x00;
    array[5] = 0x00;
    array[6] = 0x12;
    serial.write(array);
}

void MainWindow::on_btn_slow_reverse_clicked() {
    //反向微转
    QByteArray array;
    array[0] = 0xAA;
    array[1] = 0x55;
    array[2] = 0x16;
    array[3] = 0x00;
    array[4] = 0x00;
    array[5] = 0x00;
    array[6] = 0x15;
    serial.write(array);
}
