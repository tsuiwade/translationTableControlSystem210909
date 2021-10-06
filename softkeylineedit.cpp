#include "softkeylineedit.h"

SoftKeyLineEdit::SoftKeyLineEdit(QWidget *parent) :
    QLineEdit(parent) {
    numkeyboard = new NumKeyboard(this);
}

void SoftKeyLineEdit::mousePressEvent(QMouseEvent *e) {
    if(e->button() == Qt::LeftButton) {
        numkeyboard->setText(this->text());
        numkeyboard->show();
        if(numkeyboard->valid) {
            this->setText(numkeyboard->getText());
        }
    }
}
