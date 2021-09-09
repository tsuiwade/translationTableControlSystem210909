#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QSerialPort>        //提供访问串口的功能
#include <QSerialPortInfo>    //提供系统中存在的串口的信息
#include <QDebug>
#include <QMessageBox>
#include <QTimer>
#include <QString>
#include <QHBoxLayout>
#include <complex>
#include <QPixmap>
#include <QPainter>
#include <QLabel>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow) {

    ui->setupUi(this);
    ui->groupBox->setStyleSheet("QGroupBox{border:none}");
    ui->groupBox_2->setStyleSheet("QGroupBox{border:none}");
    ui->groupBox_3->setStyleSheet("QGroupBox{border:none}");
    this->setWindowTitle("平移台控制软件");
    this->setMaximumSize(1024, 768); //窗体最大尺寸
    this->setMinimumSize(1024, 768); //窗体最小尺寸

//    QMenu *menu1 = menuBar()->addMenu(tr("菜单栏1"), this);


//    连接信号和槽
//    串口在收到数据后，会将数据存入接收缓冲区。此时，我们可以通过readAll()函数将接收缓冲区的数据读出来。当串口的接收缓冲区有数据时，QSerilaPort对象会发出一个readyRead()的信号。因此，我们可以编写一个槽函数来读数据：
    QObject::connect(&serial, &QSerialPort::readyRead, this, &MainWindow::serialPort_readyRead);

    //发送按键失能
    ui->btn_send->setEnabled(false);


//下拉框默认设置
    MainWindow::search();

}


MainWindow::~MainWindow() {
    delete ui;
}


void MainWindow::serialPort_readyRead() {
//    //从接收缓冲区中读取数据
//    QByteArray buffer = serial.readAll();
//    //从界面中读取以前收到的数据
//    QString recv = ui->textEdit_recv->toPlainText();
//    recv += QString(buffer);
//    //清空以前的显示
//    ui->textEdit_recv->clear();
//    //重新显示
//    ui->textEdit_recv->append(recv);
}


void MainWindow::search() {

    ui->comboBox_portName->clear();
    //通过QSerialPortInfo查找可用串口
    foreach(const QSerialPortInfo &info, QSerialPortInfo::availablePorts()) {
        ui->comboBox_portName->addItem(info.portName());

//        QAction *act1 = new QAction(tr("子菜单"));
        QAction *act1 = new QAction(info.portName());
        ui->menu11->addAction(act1);

    }
}

void MainWindow::on_btn_open_clicked() {
    if(ui->btn_open->text() == QString("打开串口")) {
        //设置串口名
        serial.setPortName(ui->comboBox_portName->currentText());
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
        ui->btn_open->setText(QString("关闭串口"));

        //发送按键使能
        ui->btn_send->setEnabled(true);

    } else {
        //关闭串口
        serial.close();
        //下拉菜单控件使能
        ui->comboBox_portName->setEnabled(true);
        ui->btn_open->setText(QString("打开串口"));

        //发送按键失能
        ui->btn_send->setEnabled(false);
    }
}

void MainWindow::on_btn_send_clicked() {
    QByteArray data = ui->lineEdit->text().toUtf8();
    serial.write(data);
}

void MainWindow::on_pushButton_clicked() {
    QString str("1");
    QByteArray data = str.toUtf8();
    serial.write(data);
}

void MainWindow::on_pushButton_2_clicked() {
    QString str("2");
    QByteArray data = str.toUtf8();
    serial.write(data);
}

void MainWindow::on_pushButton_3_clicked() {
    QString str("3");
    QByteArray data = str.toUtf8();
    serial.write(data);
}

void MainWindow::on_pushButton_4_clicked() {
    QString str("4");
    QByteArray data = str.toUtf8();
    serial.write(data);
}

void MainWindow::on_pushButton_5_clicked() {
    QString str("5");
    QByteArray data = str.toUtf8();
    serial.write(data);
}

void MainWindow::on_pushButton_6_clicked() {
    QString str("6");
    QByteArray data = str.toUtf8();
    serial.write(data);
}
