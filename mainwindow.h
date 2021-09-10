#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSerialPort>
#include <QSerialPortInfo>
#include <QPushButton>
#include <QList>
#include <QLabel>
#include <QGraphicsDropShadowEffect>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow {
    Q_OBJECT

  public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

  private slots:
    void on_btn_send_clicked();

    void on_btn_open_clicked();

    void serialPort_readyRead();



    void on_pushButton_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void portSearch();

  public slots:
    bool eventFilter(QObject *, QEvent *);

  private:
    Ui::MainWindow *ui;
    QSerialPort serial;

    QPushButton     *btn_center;
    QLabel *m_label;
    QList<QPushButton*> btn_list;
    QList<QGraphicsDropShadowEffect*> effect_list;
};

#endif // MAINWINDOW_H
