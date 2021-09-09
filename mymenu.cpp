#include "mymenu.h"

MyMenu::MyMenu(QWidget *parent):QMenu(parent)
{
 }

MyMenu::~MyMenu()
{
}

void MyMenu::mousePressEvent(QMouseEvent *event)
{
    if(event->button() == Qt::LeftButton)
    {
        emit clicked();  //触发clicked信号
    }

    MyMenu::mousePressEvent(event);  //将该事件传给父类处理，这句话很重要，如果没有，父类无法处理本来的点击事件
}
