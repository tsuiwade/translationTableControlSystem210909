/********************************************************************************
** Form generated from reading UI file 'numkeyboard.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NUMKEYBOARD_H
#define UI_NUMKEYBOARD_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_NumKeyboard
{
public:
    QPushButton *num6Button;
    QPushButton *backspaceButton;
    QPushButton *num4Button;
    QPushButton *okButton;
    QPushButton *leftButton;
    QPushButton *num1Button;
    QPushButton *cancelButton;
    QPushButton *rightButton;
    QPushButton *num9Button;
    QPushButton *num8Button;
    QPushButton *num2Button;
    QPushButton *num7Button;
    QPushButton *dotButton;
    QPushButton *num3Button;
    QPushButton *num0Button;
    QPushButton *num5Button;
    QPushButton *signButton;
    QLineEdit *lineEdit;

    void setupUi(QDialog *NumKeyboard)
    {
        if (NumKeyboard->objectName().isEmpty())
            NumKeyboard->setObjectName(QString::fromUtf8("NumKeyboard"));
        NumKeyboard->resize(379, 440);
        num6Button = new QPushButton(NumKeyboard);
        num6Button->setObjectName(QString::fromUtf8("num6Button"));
        num6Button->setGeometry(QRect(270, 130, 101, 51));
        QFont font;
        font.setPointSize(22);
        num6Button->setFont(font);
        num6Button->setAutoFillBackground(false);
        num6Button->setAutoDefault(true);
        num6Button->setFlat(false);
        backspaceButton = new QPushButton(NumKeyboard);
        backspaceButton->setObjectName(QString::fromUtf8("backspaceButton"));
        backspaceButton->setGeometry(QRect(270, 310, 101, 51));
        QFont font1;
        font1.setPointSize(14);
        backspaceButton->setFont(font1);
        backspaceButton->setAutoFillBackground(false);
        backspaceButton->setAutoDefault(true);
        backspaceButton->setFlat(false);
        num4Button = new QPushButton(NumKeyboard);
        num4Button->setObjectName(QString::fromUtf8("num4Button"));
        num4Button->setGeometry(QRect(10, 130, 101, 51));
        num4Button->setFont(font);
        num4Button->setAutoFillBackground(false);
        num4Button->setAutoDefault(true);
        num4Button->setFlat(false);
        okButton = new QPushButton(NumKeyboard);
        okButton->setObjectName(QString::fromUtf8("okButton"));
        okButton->setGeometry(QRect(220, 380, 151, 51));
        okButton->setFont(font1);
        okButton->setAutoFillBackground(false);
        okButton->setAutoDefault(true);
        okButton->setFlat(false);
        leftButton = new QPushButton(NumKeyboard);
        leftButton->setObjectName(QString::fromUtf8("leftButton"));
        leftButton->setGeometry(QRect(10, 310, 101, 51));
        leftButton->setFont(font);
        leftButton->setAutoFillBackground(false);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/left.png"), QSize(), QIcon::Normal, QIcon::Off);
        leftButton->setIcon(icon);
        leftButton->setIconSize(QSize(50, 50));
        leftButton->setAutoDefault(true);
        leftButton->setFlat(false);
        num1Button = new QPushButton(NumKeyboard);
        num1Button->setObjectName(QString::fromUtf8("num1Button"));
        num1Button->setGeometry(QRect(10, 70, 101, 51));
        num1Button->setFont(font);
        num1Button->setAutoFillBackground(false);
        num1Button->setAutoDefault(true);
        num1Button->setFlat(false);
        cancelButton = new QPushButton(NumKeyboard);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
        cancelButton->setGeometry(QRect(10, 380, 151, 51));
        cancelButton->setFont(font1);
        cancelButton->setAutoFillBackground(false);
        cancelButton->setAutoDefault(true);
        cancelButton->setFlat(false);
        rightButton = new QPushButton(NumKeyboard);
        rightButton->setObjectName(QString::fromUtf8("rightButton"));
        rightButton->setGeometry(QRect(140, 310, 101, 51));
        rightButton->setFont(font);
        rightButton->setAutoFillBackground(false);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/right.png"), QSize(), QIcon::Normal, QIcon::Off);
        rightButton->setIcon(icon1);
        rightButton->setIconSize(QSize(50, 50));
        rightButton->setAutoDefault(true);
        rightButton->setFlat(false);
        num9Button = new QPushButton(NumKeyboard);
        num9Button->setObjectName(QString::fromUtf8("num9Button"));
        num9Button->setGeometry(QRect(270, 190, 101, 51));
        num9Button->setFont(font);
        num9Button->setAutoFillBackground(false);
        num9Button->setAutoDefault(true);
        num9Button->setFlat(false);
        num8Button = new QPushButton(NumKeyboard);
        num8Button->setObjectName(QString::fromUtf8("num8Button"));
        num8Button->setGeometry(QRect(140, 190, 101, 51));
        num8Button->setFont(font);
        num8Button->setAutoFillBackground(false);
        num8Button->setAutoDefault(true);
        num8Button->setFlat(false);
        num2Button = new QPushButton(NumKeyboard);
        num2Button->setObjectName(QString::fromUtf8("num2Button"));
        num2Button->setGeometry(QRect(140, 70, 101, 51));
        num2Button->setFont(font);
        num2Button->setAutoFillBackground(false);
        num2Button->setAutoDefault(true);
        num2Button->setFlat(false);
        num7Button = new QPushButton(NumKeyboard);
        num7Button->setObjectName(QString::fromUtf8("num7Button"));
        num7Button->setGeometry(QRect(10, 190, 101, 51));
        num7Button->setFont(font);
        num7Button->setAutoFillBackground(false);
        num7Button->setAutoDefault(true);
        num7Button->setFlat(false);
        dotButton = new QPushButton(NumKeyboard);
        dotButton->setObjectName(QString::fromUtf8("dotButton"));
        dotButton->setGeometry(QRect(10, 250, 101, 51));
        dotButton->setFont(font);
        dotButton->setAutoFillBackground(false);
        dotButton->setAutoDefault(true);
        dotButton->setFlat(false);
        num3Button = new QPushButton(NumKeyboard);
        num3Button->setObjectName(QString::fromUtf8("num3Button"));
        num3Button->setGeometry(QRect(270, 70, 101, 51));
        num3Button->setFont(font);
        num3Button->setAutoFillBackground(false);
        num3Button->setAutoDefault(true);
        num3Button->setFlat(false);
        num0Button = new QPushButton(NumKeyboard);
        num0Button->setObjectName(QString::fromUtf8("num0Button"));
        num0Button->setGeometry(QRect(140, 250, 101, 51));
        num0Button->setFont(font);
        num0Button->setAutoFillBackground(false);
        num0Button->setAutoDefault(true);
        num0Button->setFlat(false);
        num5Button = new QPushButton(NumKeyboard);
        num5Button->setObjectName(QString::fromUtf8("num5Button"));
        num5Button->setGeometry(QRect(140, 130, 101, 51));
        num5Button->setFont(font);
        num5Button->setAutoFillBackground(false);
        num5Button->setAutoDefault(true);
        num5Button->setFlat(false);
        signButton = new QPushButton(NumKeyboard);
        signButton->setObjectName(QString::fromUtf8("signButton"));
        signButton->setGeometry(QRect(270, 250, 101, 51));
        QFont font2;
        font2.setPointSize(20);
        signButton->setFont(font2);
        signButton->setAutoFillBackground(false);
        signButton->setAutoDefault(true);
        signButton->setFlat(false);
        lineEdit = new QLineEdit(NumKeyboard);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(10, 10, 361, 51));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Ubuntu"));
        font3.setPointSize(24);
        font3.setBold(false);
        font3.setItalic(false);
        font3.setWeight(50);
        lineEdit->setFont(font3);

        retranslateUi(NumKeyboard);

        num6Button->setDefault(false);
        backspaceButton->setDefault(false);
        num4Button->setDefault(false);
        okButton->setDefault(false);
        leftButton->setDefault(false);
        num1Button->setDefault(false);
        cancelButton->setDefault(false);
        rightButton->setDefault(false);
        num9Button->setDefault(false);
        num8Button->setDefault(false);
        num2Button->setDefault(false);
        num7Button->setDefault(false);
        dotButton->setDefault(false);
        num3Button->setDefault(false);
        num0Button->setDefault(false);
        num5Button->setDefault(false);
        signButton->setDefault(false);


        QMetaObject::connectSlotsByName(NumKeyboard);
    } // setupUi

    void retranslateUi(QDialog *NumKeyboard)
    {
        NumKeyboard->setWindowTitle(QCoreApplication::translate("NumKeyboard", "Dialog", nullptr));
        num6Button->setText(QCoreApplication::translate("NumKeyboard", "6", nullptr));
        backspaceButton->setText(QCoreApplication::translate("NumKeyboard", "Backspace", nullptr));
        num4Button->setText(QCoreApplication::translate("NumKeyboard", "4", nullptr));
        okButton->setText(QCoreApplication::translate("NumKeyboard", "OK", nullptr));
        leftButton->setText(QString());
        num1Button->setText(QCoreApplication::translate("NumKeyboard", "1", nullptr));
        cancelButton->setText(QCoreApplication::translate("NumKeyboard", "Cancel", nullptr));
        rightButton->setText(QString());
        num9Button->setText(QCoreApplication::translate("NumKeyboard", "9", nullptr));
        num8Button->setText(QCoreApplication::translate("NumKeyboard", "8", nullptr));
        num2Button->setText(QCoreApplication::translate("NumKeyboard", "2", nullptr));
        num7Button->setText(QCoreApplication::translate("NumKeyboard", "7", nullptr));
        dotButton->setText(QCoreApplication::translate("NumKeyboard", ".", nullptr));
        num3Button->setText(QCoreApplication::translate("NumKeyboard", "3", nullptr));
        num0Button->setText(QCoreApplication::translate("NumKeyboard", "0", nullptr));
        num5Button->setText(QCoreApplication::translate("NumKeyboard", "5", nullptr));
        signButton->setText(QCoreApplication::translate("NumKeyboard", "+/-", nullptr));
        lineEdit->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class NumKeyboard: public Ui_NumKeyboard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NUMKEYBOARD_H
