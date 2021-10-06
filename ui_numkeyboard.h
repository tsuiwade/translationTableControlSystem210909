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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_NumKeyboard
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLineEdit *lineEdit;
    QPushButton *num1Button;
    QPushButton *num2Button;
    QPushButton *num3Button;
    QPushButton *num4Button;
    QPushButton *num5Button;
    QPushButton *num6Button;
    QPushButton *num7Button;
    QPushButton *num8Button;
    QPushButton *num9Button;
    QPushButton *leftButton;
    QPushButton *num0Button;
    QPushButton *rightButton;
    QPushButton *backspaceButton;
    QPushButton *cancelButton;
    QPushButton *okButton;

    void setupUi(QDialog *NumKeyboard)
    {
        if (NumKeyboard->objectName().isEmpty())
            NumKeyboard->setObjectName(QString::fromUtf8("NumKeyboard"));
        NumKeyboard->resize(461, 483);
        gridLayout_2 = new QGridLayout(NumKeyboard);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(0);
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(NumKeyboard);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(20);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(30, 50, 30, 50);
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        QFont font;
        font.setFamily(QString::fromUtf8("Ubuntu"));
        font.setPointSize(24);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        lineEdit->setFont(font);

        gridLayout->addWidget(lineEdit, 0, 0, 1, 3);

        num1Button = new QPushButton(groupBox);
        num1Button->setObjectName(QString::fromUtf8("num1Button"));
        num1Button->setMinimumSize(QSize(0, 50));
        num1Button->setMaximumSize(QSize(16777215, 45));
        QFont font1;
        font1.setPointSize(22);
        num1Button->setFont(font1);
        num1Button->setAutoFillBackground(false);
        num1Button->setAutoDefault(true);
        num1Button->setFlat(false);

        gridLayout->addWidget(num1Button, 1, 0, 1, 1);

        num2Button = new QPushButton(groupBox);
        num2Button->setObjectName(QString::fromUtf8("num2Button"));
        num2Button->setMinimumSize(QSize(0, 50));
        num2Button->setMaximumSize(QSize(16777215, 45));
        num2Button->setFont(font1);
        num2Button->setAutoFillBackground(false);
        num2Button->setAutoDefault(true);
        num2Button->setFlat(false);

        gridLayout->addWidget(num2Button, 1, 1, 1, 1);

        num3Button = new QPushButton(groupBox);
        num3Button->setObjectName(QString::fromUtf8("num3Button"));
        num3Button->setMinimumSize(QSize(0, 50));
        num3Button->setMaximumSize(QSize(16777215, 45));
        num3Button->setFont(font1);
        num3Button->setAutoFillBackground(false);
        num3Button->setAutoDefault(true);
        num3Button->setFlat(false);

        gridLayout->addWidget(num3Button, 1, 2, 1, 1);

        num4Button = new QPushButton(groupBox);
        num4Button->setObjectName(QString::fromUtf8("num4Button"));
        num4Button->setMinimumSize(QSize(0, 50));
        num4Button->setMaximumSize(QSize(16777215, 45));
        num4Button->setFont(font1);
        num4Button->setAutoFillBackground(false);
        num4Button->setAutoDefault(true);
        num4Button->setFlat(false);

        gridLayout->addWidget(num4Button, 2, 0, 1, 1);

        num5Button = new QPushButton(groupBox);
        num5Button->setObjectName(QString::fromUtf8("num5Button"));
        num5Button->setMinimumSize(QSize(0, 50));
        num5Button->setMaximumSize(QSize(16777215, 45));
        num5Button->setFont(font1);
        num5Button->setAutoFillBackground(false);
        num5Button->setAutoDefault(true);
        num5Button->setFlat(false);

        gridLayout->addWidget(num5Button, 2, 1, 1, 1);

        num6Button = new QPushButton(groupBox);
        num6Button->setObjectName(QString::fromUtf8("num6Button"));
        num6Button->setMinimumSize(QSize(0, 50));
        num6Button->setMaximumSize(QSize(16777215, 45));
        num6Button->setFont(font1);
        num6Button->setAutoFillBackground(false);
        num6Button->setAutoDefault(true);
        num6Button->setFlat(false);

        gridLayout->addWidget(num6Button, 2, 2, 1, 1);

        num7Button = new QPushButton(groupBox);
        num7Button->setObjectName(QString::fromUtf8("num7Button"));
        num7Button->setMinimumSize(QSize(0, 50));
        num7Button->setMaximumSize(QSize(16777215, 45));
        num7Button->setFont(font1);
        num7Button->setAutoFillBackground(false);
        num7Button->setAutoDefault(true);
        num7Button->setFlat(false);

        gridLayout->addWidget(num7Button, 3, 0, 1, 1);

        num8Button = new QPushButton(groupBox);
        num8Button->setObjectName(QString::fromUtf8("num8Button"));
        num8Button->setMinimumSize(QSize(0, 50));
        num8Button->setMaximumSize(QSize(16777215, 45));
        num8Button->setFont(font1);
        num8Button->setAutoFillBackground(false);
        num8Button->setAutoDefault(true);
        num8Button->setFlat(false);

        gridLayout->addWidget(num8Button, 3, 1, 1, 1);

        num9Button = new QPushButton(groupBox);
        num9Button->setObjectName(QString::fromUtf8("num9Button"));
        num9Button->setMinimumSize(QSize(0, 50));
        num9Button->setMaximumSize(QSize(16777215, 45));
        num9Button->setFont(font1);
        num9Button->setAutoFillBackground(false);
        num9Button->setAutoDefault(true);
        num9Button->setFlat(false);

        gridLayout->addWidget(num9Button, 3, 2, 1, 1);

        leftButton = new QPushButton(groupBox);
        leftButton->setObjectName(QString::fromUtf8("leftButton"));
        leftButton->setMinimumSize(QSize(0, 45));
        leftButton->setMaximumSize(QSize(16777215, 45));
        leftButton->setFont(font1);
        leftButton->setAutoFillBackground(false);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/left.png"), QSize(), QIcon::Normal, QIcon::Off);
        leftButton->setIcon(icon);
        leftButton->setIconSize(QSize(50, 50));
        leftButton->setAutoDefault(true);
        leftButton->setFlat(false);

        gridLayout->addWidget(leftButton, 4, 0, 1, 1);

        num0Button = new QPushButton(groupBox);
        num0Button->setObjectName(QString::fromUtf8("num0Button"));
        num0Button->setMinimumSize(QSize(0, 50));
        num0Button->setMaximumSize(QSize(16777215, 45));
        num0Button->setFont(font1);
        num0Button->setAutoFillBackground(false);
        num0Button->setAutoDefault(true);
        num0Button->setFlat(false);

        gridLayout->addWidget(num0Button, 4, 1, 1, 1);

        rightButton = new QPushButton(groupBox);
        rightButton->setObjectName(QString::fromUtf8("rightButton"));
        rightButton->setMinimumSize(QSize(0, 50));
        rightButton->setMaximumSize(QSize(16777215, 45));
        rightButton->setFont(font1);
        rightButton->setAutoFillBackground(false);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/right.png"), QSize(), QIcon::Normal, QIcon::Off);
        rightButton->setIcon(icon1);
        rightButton->setIconSize(QSize(50, 50));
        rightButton->setAutoDefault(true);
        rightButton->setFlat(false);

        gridLayout->addWidget(rightButton, 4, 2, 1, 1);

        backspaceButton = new QPushButton(groupBox);
        backspaceButton->setObjectName(QString::fromUtf8("backspaceButton"));
        backspaceButton->setMinimumSize(QSize(0, 50));
        backspaceButton->setMaximumSize(QSize(16777215, 45));
        QFont font2;
        font2.setPointSize(14);
        backspaceButton->setFont(font2);
        backspaceButton->setAutoFillBackground(false);
        backspaceButton->setAutoDefault(true);
        backspaceButton->setFlat(false);

        gridLayout->addWidget(backspaceButton, 5, 0, 1, 1);

        cancelButton = new QPushButton(groupBox);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
        cancelButton->setMinimumSize(QSize(0, 50));
        cancelButton->setMaximumSize(QSize(16777215, 45));
        cancelButton->setFont(font2);
        cancelButton->setAutoFillBackground(false);
        cancelButton->setAutoDefault(true);
        cancelButton->setFlat(false);

        gridLayout->addWidget(cancelButton, 5, 1, 1, 1);

        okButton = new QPushButton(groupBox);
        okButton->setObjectName(QString::fromUtf8("okButton"));
        okButton->setMinimumSize(QSize(0, 50));
        okButton->setMaximumSize(QSize(16777215, 45));
        okButton->setFont(font2);
        okButton->setAutoFillBackground(false);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/tick.png"), QSize(), QIcon::Normal, QIcon::Off);
        okButton->setIcon(icon2);
        okButton->setIconSize(QSize(30, 30));
        okButton->setAutoDefault(true);
        okButton->setFlat(false);

        gridLayout->addWidget(okButton, 5, 2, 1, 1);


        gridLayout_2->addWidget(groupBox, 0, 0, 1, 1);


        retranslateUi(NumKeyboard);

        num1Button->setDefault(false);
        num2Button->setDefault(false);
        num3Button->setDefault(false);
        num4Button->setDefault(false);
        num5Button->setDefault(false);
        num6Button->setDefault(false);
        num7Button->setDefault(false);
        num8Button->setDefault(false);
        num9Button->setDefault(false);
        leftButton->setDefault(false);
        num0Button->setDefault(false);
        rightButton->setDefault(false);
        backspaceButton->setDefault(false);
        cancelButton->setDefault(false);
        okButton->setDefault(false);


        QMetaObject::connectSlotsByName(NumKeyboard);
    } // setupUi

    void retranslateUi(QDialog *NumKeyboard)
    {
        NumKeyboard->setWindowTitle(QCoreApplication::translate("NumKeyboard", "Dialog", nullptr));
        groupBox->setTitle(QString());
        lineEdit->setText(QString());
        num1Button->setText(QCoreApplication::translate("NumKeyboard", "1", nullptr));
        num2Button->setText(QCoreApplication::translate("NumKeyboard", "2", nullptr));
        num3Button->setText(QCoreApplication::translate("NumKeyboard", "3", nullptr));
        num4Button->setText(QCoreApplication::translate("NumKeyboard", "4", nullptr));
        num5Button->setText(QCoreApplication::translate("NumKeyboard", "5", nullptr));
        num6Button->setText(QCoreApplication::translate("NumKeyboard", "6", nullptr));
        num7Button->setText(QCoreApplication::translate("NumKeyboard", "7", nullptr));
        num8Button->setText(QCoreApplication::translate("NumKeyboard", "8", nullptr));
        num9Button->setText(QCoreApplication::translate("NumKeyboard", "9", nullptr));
        leftButton->setText(QString());
        num0Button->setText(QCoreApplication::translate("NumKeyboard", "0", nullptr));
        rightButton->setText(QString());
        backspaceButton->setText(QCoreApplication::translate("NumKeyboard", "Backspace", nullptr));
        cancelButton->setText(QCoreApplication::translate("NumKeyboard", "Cancel", nullptr));
        okButton->setText(QCoreApplication::translate("NumKeyboard", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NumKeyboard: public Ui_NumKeyboard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NUMKEYBOARD_H
