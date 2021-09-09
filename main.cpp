#include "mainwindow.h"
#include <QApplication>
#include <QFile>

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

//    w.setWindowFlags(w.windowFlags() & ~Qt::WindowMaximizeButtonHint & ~Qt::WindowMinimizeButtonHint);

//    w.showMaximized();


//    QFile file(":/round_button.qss");
//    file.open(QIODevice::ReadOnly);
//    a.setStyleSheet(file.readAll());

    return a.exec();
}
