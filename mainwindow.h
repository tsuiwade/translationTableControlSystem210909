#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSerialPort>
#include <QSerialPortInfo>
#include <QPushButton>
#include <QList>
#include <QLabel>
#include <QString>
#include <QStringList>
#include <QSlider>
#include <QGraphicsDropShadowEffect>
#include <QParallelAnimationGroup>
#include <dialog.h>

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
    void slot_Timerout();

    void on_btn_open_clicked();

    void serialPort_readyRead();

    void portSearch();

    void on_btn_stop_clicked();

    void on_btn_move_clicked();

    void on_btn_fast_forward_clicked();

    void on_btn_fast_reverse_clicked();

    void on_btn_medium_forward_clicked();

    void on_btn_medium_reverse_clicked();

    void on_btn_slow_forward_clicked();

    void on_btn_slow_reverse_clicked();

  public slots:
    bool eventFilter(QObject *, QEvent *);

  private:
    Dialog *tipDialog ;
    int position = 0;
//    QParallelAnimationGroup *  m_group;
    Ui::MainWindow *ui;
    QSerialPort serial;


};

#endif // MAINWINDOW_H
