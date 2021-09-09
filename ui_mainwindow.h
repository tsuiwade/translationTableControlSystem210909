/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QPushButton *pushButton_2;
    QPushButton *pushButton_6;
    QPushButton *pushButton_5;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_13;
    QComboBox *comboBox_portName;
    QPushButton *btn_open;
    QSpacerItem *verticalSpacer;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QRadioButton *radioButton_2;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_2;
    QRadioButton *radioButton;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_3;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_2;
    QGridLayout *gridLayout_2;
    QLineEdit *lineEdit;
    QLabel *label_pos;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *btn_send;
    QMenuBar *menuBar;
    QMenu *menu11;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1024, 768);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(45, 25, 45, 45);
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setEnabled(true);
        groupBox->setFlat(false);
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setHorizontalSpacing(75);
        gridLayout->setVerticalSpacing(0);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(0, 35));
        QFont font;
        font.setPointSize(11);
        pushButton_2->setFont(font);

        gridLayout->addWidget(pushButton_2, 0, 2, 1, 1);

        pushButton_6 = new QPushButton(groupBox);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setMinimumSize(QSize(0, 35));
        pushButton_6->setFont(font);

        gridLayout->addWidget(pushButton_6, 2, 2, 1, 1);

        pushButton_5 = new QPushButton(groupBox);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setMinimumSize(QSize(0, 35));
        pushButton_5->setFont(font);

        gridLayout->addWidget(pushButton_5, 2, 1, 1, 1);

        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setMinimumSize(QSize(0, 35));
        pushButton->setFont(font);

        gridLayout->addWidget(pushButton, 0, 1, 1, 1);

        pushButton_3 = new QPushButton(groupBox);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setMinimumSize(QSize(0, 35));
        pushButton_3->setFont(font);

        gridLayout->addWidget(pushButton_3, 1, 1, 1, 1);

        pushButton_4 = new QPushButton(groupBox);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setMinimumSize(QSize(0, 35));
        pushButton_4->setFont(font);

        gridLayout->addWidget(pushButton_4, 1, 2, 1, 1);

        pushButton_13 = new QPushButton(groupBox);
        pushButton_13->setObjectName(QStringLiteral("pushButton_13"));

        gridLayout->addWidget(pushButton_13, 0, 0, 1, 1);

        comboBox_portName = new QComboBox(groupBox);
        comboBox_portName->setObjectName(QStringLiteral("comboBox_portName"));
        comboBox_portName->setMinimumSize(QSize(0, 35));
        comboBox_portName->setFont(font);

        gridLayout->addWidget(comboBox_portName, 1, 0, 1, 1);

        btn_open = new QPushButton(groupBox);
        btn_open->setObjectName(QStringLiteral("btn_open"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(btn_open->sizePolicy().hasHeightForWidth());
        btn_open->setSizePolicy(sizePolicy1);
        btn_open->setMinimumSize(QSize(0, 35));
        btn_open->setFont(font);

        gridLayout->addWidget(btn_open, 2, 0, 1, 1);


        verticalLayout->addWidget(groupBox);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        groupBox_3 = new QGroupBox(centralWidget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        horizontalLayout = new QHBoxLayout(groupBox_3);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(groupBox_3);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font);

        horizontalLayout->addWidget(label);

        radioButton_2 = new QRadioButton(groupBox_3);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setFont(font);
        radioButton_2->setCheckable(true);
        radioButton_2->setChecked(false);

        horizontalLayout->addWidget(radioButton_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        label_2 = new QLabel(groupBox_3);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);

        horizontalLayout->addWidget(label_2);

        radioButton = new QRadioButton(groupBox_3);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setFont(font);

        horizontalLayout->addWidget(radioButton);

        horizontalSpacer = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        verticalLayout->addWidget(groupBox_3);

        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        horizontalLayout_2 = new QHBoxLayout(groupBox_2);
        horizontalLayout_2->setSpacing(10);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, -1, 0, -1);
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        lineEdit = new QLineEdit(groupBox_2);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setMinimumSize(QSize(0, 35));
        QFont font1;
        font1.setPointSize(10);
        lineEdit->setFont(font1);

        gridLayout_2->addWidget(lineEdit, 0, 1, 1, 1);

        label_pos = new QLabel(groupBox_2);
        label_pos->setObjectName(QStringLiteral("label_pos"));
        label_pos->setMinimumSize(QSize(50, 0));
        label_pos->setFont(font);

        gridLayout_2->addWidget(label_pos, 0, 0, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_4, 0, 2, 1, 1);


        horizontalLayout_2->addLayout(gridLayout_2);

        horizontalSpacer_5 = new QSpacerItem(75, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);

        btn_send = new QPushButton(groupBox_2);
        btn_send->setObjectName(QStringLiteral("btn_send"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(1);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(btn_send->sizePolicy().hasHeightForWidth());
        btn_send->setSizePolicy(sizePolicy2);
        btn_send->setMinimumSize(QSize(100, 35));
        btn_send->setMaximumSize(QSize(16777215, 16777215));
        btn_send->setFont(font);

        horizontalLayout_2->addWidget(btn_send);


        verticalLayout->addWidget(groupBox_2);

        verticalLayout->setStretch(0, 5);
        verticalLayout->setStretch(2, 1);
        verticalLayout->setStretch(3, 1);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1024, 26));
        menu11 = new QMenu(menuBar);
        menu11->setObjectName(QStringLiteral("menu11"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menu11->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        groupBox->setTitle(QString());
        pushButton_2->setText(QApplication::translate("MainWindow", "\345\217\215\345\220\221\345\277\253\350\275\254", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("MainWindow", "\345\217\215\345\220\221\345\276\256\350\275\254", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("MainWindow", "\346\255\243\345\220\221\345\276\256\350\275\254", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "\346\255\243\345\220\221\345\277\253\350\275\254", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("MainWindow", "\346\255\243\345\220\221\346\205\242\350\275\254", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("MainWindow", "\345\217\215\345\220\221\346\205\242\350\275\254", Q_NULLPTR));
        pushButton_13->setText(QApplication::translate("MainWindow", "\346\220\234\347\264\242\344\270\262\345\217\243", Q_NULLPTR));
        btn_open->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200\344\270\262\345\217\243", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "\346\255\243\351\231\220\344\275\215", Q_NULLPTR));
        radioButton_2->setText(QString());
        label_2->setText(QApplication::translate("MainWindow", "\350\264\237\351\231\220\344\275\215", Q_NULLPTR));
        radioButton->setText(QString());
        label_pos->setText(QApplication::translate("MainWindow", "\344\275\215\347\275\256", Q_NULLPTR));
        btn_send->setText(QApplication::translate("MainWindow", "\345\256\232\344\275\215\350\277\220\345\212\250", Q_NULLPTR));
        menu11->setTitle(QApplication::translate("MainWindow", "11", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
