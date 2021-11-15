#include "mainwindow.h"
#include "ui_mainwindow.h"
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
#include <QProcess>
#include  <QHostAddress>
#include  <QHostInfo>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow) {

    ui->setupUi(this);
    setWindowFlags(Qt::CustomizeWindowHint
                   | Qt::WindowTitleHint
                   | Qt::WindowMinimizeButtonHint
                   | Qt::WindowCloseButtonHint
                  );
    this->init();
    setFixedSize(this->width(), this->height());
    tipDialog = new Dialog();

    QStringList qstrList;
    qstrList << "NumKeyboard" << "Dialog" ;
    MaskWidget::instance()->setMainWidget(this);
//    MaskWidget::instance()->setNames(QStringList("NumKeyboard", "Dialog"));
    MaskWidget::instance()->setNames(QStringList(qstrList));

    ui->lineEdit->setValidator(new QIntValidator(this));
    ui->lineEdit->installEventFilter(this);
}

void MainWindow::init() {
    this->setWindowTitle("平移台控制软件");

    ui->btn_fast_forward->setIcon(QIcon(":/icons/fast_forward.png"));
    ui->btn_fast_reverse->setIcon(QIcon(":/icons/fast_reverse.png"));
    ui->btn_medium_forward->setIcon(QIcon(":/icons/medium_forward.png"));
    ui->btn_medium_reverse->setIcon(QIcon(":/icons/medium_reverse.png"));
    ui->btn_slow_forward->setIcon(QIcon(":/icons/slow_forward.png"));
    ui->btn_slow_reverse->setIcon(QIcon(":/icons/slow_reverse.png"));
    ui->btn_open->setIcon(QIcon(":/icons/port_on.png"));
    ui->btn_stop->setIcon(QIcon(":/icons/stop.png"));
    ui->btn_move->setIcon(QIcon(":/icons/move.png"));
    ui->widget_2->setLightGreen();
    ui->widget_3->setLightGreen();
    ui->statusBar->showMessage(tr("当前状态：未连接"));
    tcpClient = new QTcpSocket(this); //创建socket变量

    connect(tcpClient, SIGNAL(connected()), this, SLOT(onConnected()));
    connect(tcpClient, SIGNAL(disconnected()), this, SLOT(onDisconnected()));
    connect(tcpClient, SIGNAL(stateChanged(QAbstractSocket::SocketState)),
            this, SLOT(onSocketStateChange(QAbstractSocket::SocketState)));
    connect(tcpClient, SIGNAL(readyRead()),
            this, SLOT(onSocketReadyRead()));
    QList<QWidget*> qList = {ui->horizontalSlider, ui->lineEdit_3, ui->lineEdit_2,  ui->centralWidget}; //

    QList<QPushButton*> btnList = ui->centralWidget->findChildren<QPushButton*>();
    btnList.removeOne(ui->pushButton);
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
    ui->pushButton->setStyleSheet(tr("border-image: url(:/icons/shutdown.png);"
                                     "background: transparent"));

}




MainWindow::~MainWindow() {
    delete ui;
}
void MainWindow::onSocketStateChange(QAbstractSocket::SocketState socketState) {
    //stateChange()信号槽函数
    switch(socketState) {
    case QAbstractSocket::UnconnectedState:
        ui->statusBar->showMessage(tr("当前状态：UnconnectedState"));
        break;
    case QAbstractSocket::HostLookupState:
        ui->statusBar->showMessage(tr("当前状态：HostLookupState"));
        break;
    case QAbstractSocket::ConnectingState:
        ui->statusBar->showMessage(tr("当前状态：ConnectingState"));
        break;

    case QAbstractSocket::ConnectedState:
        ui->statusBar->showMessage(tr("当前状态：ConnectedState"));
        break;

    case QAbstractSocket::BoundState:
        ui->statusBar->showMessage(tr("当前状态：BoundState"));
        break;

    case QAbstractSocket::ClosingState:
        ui->statusBar->showMessage(tr("当前状态：ClosingState"));
        break;

    case QAbstractSocket::ListeningState:
        ui->statusBar->showMessage(tr("当前状态：ListeningState"));
    }
}
void MainWindow::onConnected() {
    ui->statusBar->showMessage(tr("已连接到服务器"));
    //下拉菜单控件失能
    ui->lineEdit_2->setEnabled(false);
    ui->lineEdit_3->setEnabled(false);
    QIcon myicon = QIcon(":/icons/port_off.png");
    ui->btn_open->setIcon(myicon);
    ui->btn_open->setIconSize(QSize(30, 30));
    ui->btn_open->setText(QString("关闭网口"));
}
void MainWindow::onDisconnected() {
    ui->statusBar->showMessage(tr("已断开与服务器的连接"));
    ui->lineEdit_2->setEnabled(true);
    ui->lineEdit_3->setEnabled(true);
    QIcon myicon = QIcon(":/icons/port_on.png");
    ui->btn_open->setIcon(myicon);
    ui->btn_open->setIconSize(QSize(30, 30));
    ui->btn_open->setText(QString("打开网口"));
}

void MainWindow::onSocketReadyRead() {
    //readyRead()信号槽函数

    QByteArray buffer = tcpClient->readAll();

    //从界面中读取以前收到的数据
    if(buffer.size() == 4 && buffer[0] == '\x5A') {
        position = ((static_cast<unsigned int>(buffer[1]) & 0xFF) << 16) +
                   ((static_cast<unsigned int>(buffer[2]) & 0xFF) << 8)
                   + (static_cast<unsigned int>(buffer[3]) & 0xFF);
        if(buffer[1] == '\xFF') position = 0;
        //        ui->label->setText(QString::asprintf("当前位置:    %d", position));
        ui->lcdNumber->display(QString::number(position / 1000.0, 'f', 1) );
        ui->horizontalSlider->setValue(position  * 0.001);
        ui->widget_2->setLightGreen();
        ui->widget_3->setLightGreen();
        ui->btn_fast_reverse->setEnabled(true);
        ui->btn_slow_reverse->setEnabled(true);
        ui->btn_medium_reverse->setEnabled(true);
        ui->btn_fast_forward->setEnabled(true);
        ui->btn_slow_forward->setEnabled(true);
        ui->btn_medium_forward->setEnabled(true);
    }

    if(buffer.size() == 4 && buffer[0] == '\xD3') { //正限位
        ui->widget_2->setRed();
        position = ((static_cast<unsigned int>(buffer[1]) & 0xFF) << 16) +
                   ((static_cast<unsigned int>(buffer[2]) & 0xFF) << 8)
                   + (static_cast<unsigned int>(buffer[3]) & 0xFF);
        ui->lcdNumber->display(QString::number(position / 1000.0, 'f', 1) );
        ui->horizontalSlider->setValue(position  * 0.001);
        ui->btn_fast_reverse->setEnabled(false);
        ui->btn_slow_reverse->setEnabled(false);
        ui->btn_medium_reverse->setEnabled(false);
    } else if(buffer.size() == 4 && buffer[0] == '\xD4') {
        ui->widget_3->setRed();
        position = ((static_cast<unsigned int>(buffer[1]) & 0xFF) << 16) +
                   ((static_cast<unsigned int>(buffer[2]) & 0xFF) << 8)
                   + (static_cast<unsigned int>(buffer[3]) & 0xFF);
        ui->lcdNumber->display(QString::number(position / 1000.0, 'f', 1) );
        ui->btn_fast_forward->setEnabled(false);
        ui->btn_slow_forward->setEnabled(false);
        ui->btn_medium_forward->setEnabled(false);
        ui->horizontalSlider->setValue(position  * 0.001);
    }
}


void MainWindow::on_btn_open_clicked() {
    if(ui->btn_open->text() == QString("打开网口")) {
        QString     addr = ui->lineEdit_3->text();
        quint16     port = ui->lineEdit_2->text().toInt();
        tcpClient->connectToHost(addr, port);
        //下拉菜单控件失能
        ui->lineEdit_2->setEnabled(false);
        ui->lineEdit_3->setEnabled(false);
        QIcon myicon = QIcon(":/icons/port_off.png");
        ui->btn_open->setIcon(myicon);
        ui->btn_open->setIconSize(QSize(30, 30));
        ui->btn_open->setText(QString("正在连接网口"));

    } else {
        //关闭网口
        ui->btn_open->setText(QString("正在关闭网口"));
        if (tcpClient->state() == QAbstractSocket::ConnectedState)
            tcpClient->disconnectFromHost();
        ui->lineEdit_2->setEnabled(true);
        ui->lineEdit_3->setEnabled(true);
        QIcon myicon = QIcon(":/icons/port_on.png");
        ui->btn_open->setIcon(myicon);
        ui->btn_open->setIconSize(QSize(30, 30));

    }
}

void MainWindow::on_btn_stop_clicked() {
//    QApplication::inputMethod()->show();
    //停止运动
    QString  msg = "on_btn_stop_clicked";
    QByteArray  str = msg.toUtf8();
    tcpClient->write(str);
}


void MainWindow::on_btn_move_clicked() {
    int intVar = ui->lineEdit->text().toFloat() * 1000;
    QString  msg = "move" + QString::number(intVar);
    QByteArray  str = msg.toUtf8();
    tcpClient->write(str);
}

void MainWindow::on_btn_fast_forward_clicked() {
    //正快
    QString  msg = "on_btn_fast_forward_clicked";
    QByteArray  str = msg.toUtf8();
    tcpClient->write(str);
}

void MainWindow::on_btn_fast_reverse_clicked() {
    //反向快转
    QString  msg = "on_btn_fast_reverse_clicked";
    QByteArray  str = msg.toUtf8();
    tcpClient->write(str);
}

void MainWindow::on_btn_medium_forward_clicked() {
    //正向慢转
    QString  msg = "on_btn_medium_forward_clicked";
    QByteArray  str = msg.toUtf8();
    tcpClient->write(str);
}

void MainWindow::on_btn_medium_reverse_clicked() {
    //反向慢转
    QString  msg = "on_btn_medium_reverse_clicked";
    QByteArray  str = msg.toUtf8();
    tcpClient->write(str);
}

void MainWindow::on_btn_slow_forward_clicked() {
    //正向微转
    QString  msg = "on_btn_slow_forward_clicked";
    QByteArray  str = msg.toUtf8();
    tcpClient->write(str);
}

void MainWindow::on_btn_slow_reverse_clicked() {
    //反向微转
    QString  msg = "on_btn_slow_reverse_clicked";
    QByteArray  str = msg.toUtf8();
    tcpClient->write(str);
}

void MainWindow::on_pushButton_clicked() {
    tipDialog->exec();
}

void MainWindow::closeEvent(QCloseEvent *event) {
    if (tcpClient->state() == QAbstractSocket::ConnectedState)
        tcpClient->disconnectFromHost();
    event->accept();
}
