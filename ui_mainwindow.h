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
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
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
    QHBoxLayout *horizontalLayout_4;
    QGridLayout *gridLayout;
    QPushButton *pushButton_2;
    QPushButton *btn_open;
    QPushButton *pushButton_6;
    QPushButton *pushButton;
    QLabel *label_3;
    QComboBox *comboBox_portName;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QSpacerItem *horizontalSpacer;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QProgressBar *progressBar;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_pos;
    QLineEdit *lineEdit;
    QPushButton *btn_send;
    QPushButton *pushButton_15;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(923, 610);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(0, 0));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy1);
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(50, 50, 50, 50);
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setStyleSheet(QStringLiteral(""));
        horizontalLayout_4 = new QHBoxLayout(groupBox);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        gridLayout->setHorizontalSpacing(15);
        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(1);
        sizePolicy2.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy2);
        pushButton_2->setMinimumSize(QSize(0, 35));
        pushButton_2->setMaximumSize(QSize(16777215, 35));
        QFont font;
        font.setPointSize(11);
        pushButton_2->setFont(font);

        gridLayout->addWidget(pushButton_2, 0, 3, 1, 1);

        btn_open = new QPushButton(groupBox);
        btn_open->setObjectName(QStringLiteral("btn_open"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(1);
        sizePolicy3.setHeightForWidth(btn_open->sizePolicy().hasHeightForWidth());
        btn_open->setSizePolicy(sizePolicy3);
        btn_open->setMinimumSize(QSize(0, 0));
        btn_open->setMaximumSize(QSize(16777215, 35));
        btn_open->setFont(font);

        gridLayout->addWidget(btn_open, 2, 0, 1, 1);

        pushButton_6 = new QPushButton(groupBox);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        sizePolicy2.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy2);
        pushButton_6->setMinimumSize(QSize(0, 35));
        pushButton_6->setMaximumSize(QSize(16777215, 35));
        pushButton_6->setFont(font);

        gridLayout->addWidget(pushButton_6, 2, 3, 1, 1);

        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        sizePolicy2.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy2);
        pushButton->setMinimumSize(QSize(0, 0));
        pushButton->setMaximumSize(QSize(16777215, 35));
        pushButton->setFont(font);
        pushButton->setStyleSheet(QStringLiteral("QGroupBox{border:none}"));

        gridLayout->addWidget(pushButton, 0, 2, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        sizePolicy3.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy3);
        label_3->setMaximumSize(QSize(16777215, 35));
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        comboBox_portName = new QComboBox(groupBox);
        comboBox_portName->setObjectName(QStringLiteral("comboBox_portName"));
        sizePolicy3.setHeightForWidth(comboBox_portName->sizePolicy().hasHeightForWidth());
        comboBox_portName->setSizePolicy(sizePolicy3);
        comboBox_portName->setMinimumSize(QSize(0, 0));
        comboBox_portName->setMaximumSize(QSize(16777215, 35));
        comboBox_portName->setFont(font);
        comboBox_portName->setSizeAdjustPolicy(QComboBox::AdjustToMinimumContentsLength);

        gridLayout->addWidget(comboBox_portName, 1, 0, 1, 1);

        pushButton_3 = new QPushButton(groupBox);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        sizePolicy2.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy2);
        pushButton_3->setMinimumSize(QSize(0, 0));
        pushButton_3->setMaximumSize(QSize(16777215, 35));
        pushButton_3->setFont(font);

        gridLayout->addWidget(pushButton_3, 1, 2, 1, 1);

        pushButton_4 = new QPushButton(groupBox);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        sizePolicy2.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy2);
        pushButton_4->setMinimumSize(QSize(0, 35));
        pushButton_4->setMaximumSize(QSize(16777215, 35));
        pushButton_4->setFont(font);

        gridLayout->addWidget(pushButton_4, 1, 3, 1, 1);

        pushButton_5 = new QPushButton(groupBox);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        sizePolicy2.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy2);
        pushButton_5->setMinimumSize(QSize(0, 0));
        pushButton_5->setMaximumSize(QSize(16777215, 35));
        pushButton_5->setFont(font);

        gridLayout->addWidget(pushButton_5, 2, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(197, 32, QSizePolicy::Preferred, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 1, 1, 1);

        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));

        gridLayout->addWidget(groupBox_2, 0, 4, 3, 1);

        gridLayout->setRowStretch(0, 1);
        gridLayout->setColumnStretch(0, 1);

        horizontalLayout_4->addLayout(gridLayout);


        verticalLayout->addWidget(groupBox);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(13);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label_4);

        progressBar = new QProgressBar(centralWidget);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setMinimumSize(QSize(0, 35));
        progressBar->setFont(font);
        progressBar->setValue(57);

        horizontalLayout_2->addWidget(progressBar);

        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font);

        horizontalLayout_2->addWidget(label_5);

        horizontalLayout_2->setStretch(1, 1);

        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayout_3->setContentsMargins(-1, 11, -1, 11);
        label_pos = new QLabel(centralWidget);
        label_pos->setObjectName(QStringLiteral("label_pos"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(label_pos->sizePolicy().hasHeightForWidth());
        label_pos->setSizePolicy(sizePolicy4);
        label_pos->setMinimumSize(QSize(50, 35));
        label_pos->setMaximumSize(QSize(16777215, 35));
        label_pos->setFont(font);
        label_pos->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(label_pos, 0, Qt::AlignBottom);

        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        sizePolicy4.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy4);
        lineEdit->setMinimumSize(QSize(0, 35));
        lineEdit->setMaximumSize(QSize(16777215, 35));
        lineEdit->setFont(font);

        horizontalLayout_3->addWidget(lineEdit, 0, Qt::AlignBottom);

        btn_send = new QPushButton(centralWidget);
        btn_send->setObjectName(QStringLiteral("btn_send"));
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy5.setHorizontalStretch(1);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(btn_send->sizePolicy().hasHeightForWidth());
        btn_send->setSizePolicy(sizePolicy5);
        btn_send->setMinimumSize(QSize(100, 35));
        btn_send->setMaximumSize(QSize(16777215, 35));
        btn_send->setFont(font);

        horizontalLayout_3->addWidget(btn_send, 0, Qt::AlignBottom);

        pushButton_15 = new QPushButton(centralWidget);
        pushButton_15->setObjectName(QStringLiteral("pushButton_15"));
        sizePolicy4.setHeightForWidth(pushButton_15->sizePolicy().hasHeightForWidth());
        pushButton_15->setSizePolicy(sizePolicy4);
        pushButton_15->setMinimumSize(QSize(0, 70));
        pushButton_15->setMaximumSize(QSize(16777215, 16777215));
        pushButton_15->setFont(font);

        horizontalLayout_3->addWidget(pushButton_15, 0, Qt::AlignBottom);

        horizontalLayout_3->setStretch(1, 2);
        horizontalLayout_3->setStretch(2, 1);
        horizontalLayout_3->setStretch(3, 1);

        verticalLayout->addLayout(horizontalLayout_3);

        verticalLayout->setStretch(0, 3);
        verticalLayout->setStretch(1, 1);
        verticalLayout->setStretch(2, 1);
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        groupBox->setTitle(QString());
        pushButton_2->setText(QApplication::translate("MainWindow", "\345\217\215\345\220\221\345\277\253\350\275\254", Q_NULLPTR));
        btn_open->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200\344\270\262\345\217\243", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("MainWindow", "\345\217\215\345\220\221\345\276\256\350\275\254", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "\346\255\243\345\220\221\345\277\253\350\275\254", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "\344\270\262\345\217\243\345\217\26701", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("MainWindow", "\346\255\243\345\220\221\346\205\242\350\275\254", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("MainWindow", "\345\217\215\345\220\221\346\205\242\350\275\254", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("MainWindow", "\346\255\243\345\220\221\345\276\256\350\275\254", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "GroupBox", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "\346\255\243\351\231\220\344\275\215", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "\350\264\237\351\231\220\344\275\215", Q_NULLPTR));
        label_pos->setText(QApplication::translate("MainWindow", "\344\275\215\347\275\256", Q_NULLPTR));
        lineEdit->setInputMask(QApplication::translate("MainWindow", "\345\234\250\346\255\244\350\276\223\345\205\245", Q_NULLPTR));
        btn_send->setText(QApplication::translate("MainWindow", "\345\256\232\344\275\215\350\277\220\345\212\250", Q_NULLPTR));
        pushButton_15->setText(QApplication::translate("MainWindow", "\345\201\234\346\255\242\350\277\220\345\212\250", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
