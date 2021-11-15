#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTcpSocket>
#include <QPushButton>
#include <QList>
#include <QLabel>
#include <QString>
#include <QStringList>
#include <QSlider>
#include <QGraphicsDropShadowEffect>
#include <QParallelAnimationGroup>
#include <dialog.h>
//#if _MSC_VER >=1600    // MSVC2015>1899,对于MSVC2010以上版本都可以使用
//#pragma execution_character_set("utf-8")
//#endif
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow {
    Q_OBJECT

  public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void init();

  private slots:
    void    onConnected();
    void    onDisconnected();
    void    onSocketStateChange(QAbstractSocket::SocketState socketState);
    void    onSocketReadyRead();//读取socket传入的数据

    void on_btn_open_clicked();

    void on_btn_stop_clicked();

    void on_btn_move_clicked();

    void on_btn_fast_forward_clicked();

    void on_btn_fast_reverse_clicked();

    void on_btn_medium_forward_clicked();

    void on_btn_medium_reverse_clicked();

    void on_btn_slow_forward_clicked();

    void on_btn_slow_reverse_clicked();

    void on_pushButton_clicked();

  public slots:
  protected:
    void    closeEvent(QCloseEvent *event);
  private:
    QTcpSocket  *tcpClient;  //socket

    Dialog *tipDialog ;
    int position = 0;
//    QParallelAnimationGroup *  m_group;
    Ui::MainWindow *ui;


};

#endif // MAINWINDOW_H
