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
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_2;
    QPushButton *btn_open;
    QComboBox *comboBox_portName;
    QLabel *label_3;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QPushButton *btn_fast_forward;
    QPushButton *btn_fast_reverse;
    QPushButton *btn_medium_forward;
    QPushButton *btn_medium_reverse;
    QPushButton *btn_slow_forward;
    QPushButton *btn_slow_reverse;
    QGroupBox *groupBox_6;
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *groupBox_5;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox_7;
    QGridLayout *gridLayout_4;
    QLabel *label_4;
    QLabel *label_5;
    QSlider *horizontalSlider;
    QGroupBox *groupBox_10;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QLCDNumber *lcdNumber;
    QGroupBox *groupBox_4;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *lineEdit;
    QPushButton *btn_move;
    QPushButton *btn_stop;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1024, 768);
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
        verticalLayout->setSpacing(35);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(70, 70, 70, 70);
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setStyleSheet(QStringLiteral(""));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setSpacing(35);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        groupBox_3 = new QGroupBox(groupBox);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        gridLayout_2 = new QGridLayout(groupBox_3);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(40, 25, 40, 25);
        btn_open = new QPushButton(groupBox_3);
        btn_open->setObjectName(QStringLiteral("btn_open"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(1);
        sizePolicy2.setHeightForWidth(btn_open->sizePolicy().hasHeightForWidth());
        btn_open->setSizePolicy(sizePolicy2);
        btn_open->setMinimumSize(QSize(0, 0));
        btn_open->setMaximumSize(QSize(16777215, 35));
        QFont font;
        font.setPointSize(11);
        btn_open->setFont(font);
        btn_open->setIconSize(QSize(30, 30));

        gridLayout_2->addWidget(btn_open, 1, 0, 1, 2);

        comboBox_portName = new QComboBox(groupBox_3);
        comboBox_portName->setObjectName(QStringLiteral("comboBox_portName"));
        sizePolicy1.setHeightForWidth(comboBox_portName->sizePolicy().hasHeightForWidth());
        comboBox_portName->setSizePolicy(sizePolicy1);
        comboBox_portName->setMinimumSize(QSize(0, 0));
        comboBox_portName->setMaximumSize(QSize(16777215, 35));
        comboBox_portName->setFont(font);
        comboBox_portName->setSizeAdjustPolicy(QComboBox::AdjustToMinimumContentsLength);
        comboBox_portName->setMinimumContentsLength(0);

        gridLayout_2->addWidget(comboBox_portName, 0, 1, 1, 1);

        label_3 = new QLabel(groupBox_3);
        label_3->setObjectName(QStringLiteral("label_3"));
        sizePolicy2.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy2);
        label_3->setMaximumSize(QSize(16777215, 35));
        QFont font1;
        font1.setPointSize(12);
        label_3->setFont(font1);
        label_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_3, 0, 0, 1, 1);

        gridLayout_2->setColumnStretch(1, 1);

        horizontalLayout->addWidget(groupBox_3);

        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setHorizontalSpacing(40);
        gridLayout->setContentsMargins(40, 20, 40, 20);
        btn_fast_forward = new QPushButton(groupBox_2);
        btn_fast_forward->setObjectName(QStringLiteral("btn_fast_forward"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(1);
        sizePolicy3.setHeightForWidth(btn_fast_forward->sizePolicy().hasHeightForWidth());
        btn_fast_forward->setSizePolicy(sizePolicy3);
        btn_fast_forward->setMinimumSize(QSize(0, 0));
        btn_fast_forward->setMaximumSize(QSize(16777215, 35));
        btn_fast_forward->setFont(font);
        btn_fast_forward->setStyleSheet(QStringLiteral("QGroupBox{border:none}"));
        btn_fast_forward->setIconSize(QSize(30, 30));
        btn_fast_forward->setFlat(false);

        gridLayout->addWidget(btn_fast_forward, 0, 0, 1, 1);

        btn_fast_reverse = new QPushButton(groupBox_2);
        btn_fast_reverse->setObjectName(QStringLiteral("btn_fast_reverse"));
        sizePolicy3.setHeightForWidth(btn_fast_reverse->sizePolicy().hasHeightForWidth());
        btn_fast_reverse->setSizePolicy(sizePolicy3);
        btn_fast_reverse->setMinimumSize(QSize(0, 35));
        btn_fast_reverse->setMaximumSize(QSize(16777215, 35));
        btn_fast_reverse->setFont(font);
        btn_fast_reverse->setIconSize(QSize(30, 28));

        gridLayout->addWidget(btn_fast_reverse, 0, 1, 1, 1);

        btn_medium_forward = new QPushButton(groupBox_2);
        btn_medium_forward->setObjectName(QStringLiteral("btn_medium_forward"));
        sizePolicy3.setHeightForWidth(btn_medium_forward->sizePolicy().hasHeightForWidth());
        btn_medium_forward->setSizePolicy(sizePolicy3);
        btn_medium_forward->setMinimumSize(QSize(0, 0));
        btn_medium_forward->setMaximumSize(QSize(16777215, 35));
        btn_medium_forward->setFont(font);
        btn_medium_forward->setIconSize(QSize(30, 30));

        gridLayout->addWidget(btn_medium_forward, 1, 0, 1, 1);

        btn_medium_reverse = new QPushButton(groupBox_2);
        btn_medium_reverse->setObjectName(QStringLiteral("btn_medium_reverse"));
        sizePolicy3.setHeightForWidth(btn_medium_reverse->sizePolicy().hasHeightForWidth());
        btn_medium_reverse->setSizePolicy(sizePolicy3);
        btn_medium_reverse->setMinimumSize(QSize(0, 35));
        btn_medium_reverse->setMaximumSize(QSize(16777215, 35));
        btn_medium_reverse->setFont(font);
        btn_medium_reverse->setIconSize(QSize(30, 28));

        gridLayout->addWidget(btn_medium_reverse, 1, 1, 1, 1);

        btn_slow_forward = new QPushButton(groupBox_2);
        btn_slow_forward->setObjectName(QStringLiteral("btn_slow_forward"));
        sizePolicy3.setHeightForWidth(btn_slow_forward->sizePolicy().hasHeightForWidth());
        btn_slow_forward->setSizePolicy(sizePolicy3);
        btn_slow_forward->setMinimumSize(QSize(0, 0));
        btn_slow_forward->setMaximumSize(QSize(16777215, 35));
        btn_slow_forward->setFont(font);
        btn_slow_forward->setIconSize(QSize(30, 30));

        gridLayout->addWidget(btn_slow_forward, 2, 0, 1, 1);

        btn_slow_reverse = new QPushButton(groupBox_2);
        btn_slow_reverse->setObjectName(QStringLiteral("btn_slow_reverse"));
        sizePolicy3.setHeightForWidth(btn_slow_reverse->sizePolicy().hasHeightForWidth());
        btn_slow_reverse->setSizePolicy(sizePolicy3);
        btn_slow_reverse->setMinimumSize(QSize(0, 35));
        btn_slow_reverse->setMaximumSize(QSize(16777215, 35));
        btn_slow_reverse->setFont(font);
        btn_slow_reverse->setIconSize(QSize(30, 28));

        gridLayout->addWidget(btn_slow_reverse, 2, 1, 1, 1);


        horizontalLayout->addWidget(groupBox_2);

        horizontalLayout->setStretch(0, 2);
        horizontalLayout->setStretch(1, 3);

        verticalLayout->addWidget(groupBox);

        groupBox_6 = new QGroupBox(centralWidget);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        groupBox_6->setMinimumSize(QSize(0, 0));
        horizontalLayout_2 = new QHBoxLayout(groupBox_6);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 25, 0, 25);
        groupBox_5 = new QGroupBox(groupBox_6);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(groupBox_5->sizePolicy().hasHeightForWidth());
        groupBox_5->setSizePolicy(sizePolicy4);
        groupBox_5->setMinimumSize(QSize(0, 195));
        verticalLayout_2 = new QVBoxLayout(groupBox_5);
        verticalLayout_2->setSpacing(14);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 5);
        groupBox_7 = new QGroupBox(groupBox_5);
        groupBox_7->setObjectName(QStringLiteral("groupBox_7"));
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(groupBox_7->sizePolicy().hasHeightForWidth());
        groupBox_7->setSizePolicy(sizePolicy5);
        groupBox_7->setMinimumSize(QSize(0, 0));
        gridLayout_4 = new QGridLayout(groupBox_7);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setHorizontalSpacing(12);
        gridLayout_4->setVerticalSpacing(0);
        gridLayout_4->setContentsMargins(40, 25, 40, 15);
        label_4 = new QLabel(groupBox_7);
        label_4->setObjectName(QStringLiteral("label_4"));
        QSizePolicy sizePolicy6(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy6);
        label_4->setMinimumSize(QSize(0, 35));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setWeight(75);
        label_4->setFont(font2);
        label_4->setStyleSheet(QLatin1String("color: rgb(26, 188, 156);\n"
"border-radius: 8px;    \n"
"border:2px solid rgb(26, 188, 156);"));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(label_4, 0, 0, 1, 1);

        label_5 = new QLabel(groupBox_7);
        label_5->setObjectName(QStringLiteral("label_5"));
        sizePolicy6.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy6);
        label_5->setMinimumSize(QSize(0, 35));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font3.setPointSize(12);
        font3.setBold(true);
        font3.setWeight(75);
        font3.setKerning(true);
        label_5->setFont(font3);
        label_5->setStyleSheet(QLatin1String("color: rgb(231,76, 60);\n"
"border-radius: 8px;    \n"
"border:2px solid rgb(231,76, 60);"));

        gridLayout_4->addWidget(label_5, 0, 2, 1, 1);

        horizontalSlider = new QSlider(groupBox_7);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setEnabled(false);
        horizontalSlider->setMinimumSize(QSize(0, 50));
        horizontalSlider->setFont(font);
        horizontalSlider->setStyleSheet(QStringLiteral(""));
        horizontalSlider->setMaximum(170);
        horizontalSlider->setSingleStep(1);
        horizontalSlider->setPageStep(0);
        horizontalSlider->setValue(50);
        horizontalSlider->setTracking(false);
        horizontalSlider->setOrientation(Qt::Horizontal);
        horizontalSlider->setTickPosition(QSlider::TicksBothSides);
        horizontalSlider->setTickInterval(0);

        gridLayout_4->addWidget(horizontalSlider, 0, 1, 1, 1);


        verticalLayout_2->addWidget(groupBox_7);

        groupBox_10 = new QGroupBox(groupBox_5);
        groupBox_10->setObjectName(QStringLiteral("groupBox_10"));
        sizePolicy5.setHeightForWidth(groupBox_10->sizePolicy().hasHeightForWidth());
        groupBox_10->setSizePolicy(sizePolicy5);
        groupBox_10->setMinimumSize(QSize(0, 0));
        horizontalLayout_3 = new QHBoxLayout(groupBox_10);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayout_3->setContentsMargins(40, 10, 0, 10);
        label = new QLabel(groupBox_10);
        label->setObjectName(QStringLiteral("label"));
        sizePolicy5.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy5);
        QFont font4;
        font4.setPointSize(13);
        font4.setBold(true);
        font4.setWeight(75);
        label->setFont(font4);
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(label);

        lcdNumber = new QLCDNumber(groupBox_10);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        lcdNumber->setMinimumSize(QSize(200, 0));
        lcdNumber->setMaximumSize(QSize(200, 75));
        QFont font5;
        font5.setPointSize(20);
        lcdNumber->setFont(font5);
        lcdNumber->setLayoutDirection(Qt::LeftToRight);
        lcdNumber->setLineWidth(1);
        lcdNumber->setMidLineWidth(1);
        lcdNumber->setSmallDecimalPoint(false);
        lcdNumber->setDigitCount(9);
        lcdNumber->setSegmentStyle(QLCDNumber::Filled);
        lcdNumber->setProperty("intValue", QVariant(0));

        horizontalLayout_3->addWidget(lcdNumber);

        groupBox_4 = new QGroupBox(groupBox_10);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        horizontalLayout_4 = new QHBoxLayout(groupBox_4);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        lineEdit = new QLineEdit(groupBox_4);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setMinimumSize(QSize(0, 35));
        lineEdit->setMaximumSize(QSize(16777215, 35));
        lineEdit->setFont(font);

        verticalLayout_3->addWidget(lineEdit);

        btn_move = new QPushButton(groupBox_4);
        btn_move->setObjectName(QStringLiteral("btn_move"));
        QSizePolicy sizePolicy7(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(btn_move->sizePolicy().hasHeightForWidth());
        btn_move->setSizePolicy(sizePolicy7);
        btn_move->setMinimumSize(QSize(100, 35));
        btn_move->setMaximumSize(QSize(16777215, 35));
        btn_move->setFont(font);
        btn_move->setIconSize(QSize(30, 20));

        verticalLayout_3->addWidget(btn_move);


        horizontalLayout_4->addLayout(verticalLayout_3);

        btn_stop = new QPushButton(groupBox_4);
        btn_stop->setObjectName(QStringLiteral("btn_stop"));
        sizePolicy7.setHeightForWidth(btn_stop->sizePolicy().hasHeightForWidth());
        btn_stop->setSizePolicy(sizePolicy7);
        btn_stop->setMinimumSize(QSize(0, 80));
        btn_stop->setMaximumSize(QSize(16777215, 0));
        btn_stop->setFont(font);
        btn_stop->setIconSize(QSize(30, 30));

        horizontalLayout_4->addWidget(btn_stop, 0, Qt::AlignTop);

        horizontalLayout_4->setStretch(0, 3);
        horizontalLayout_4->setStretch(1, 2);

        horizontalLayout_3->addWidget(groupBox_4);

        horizontalLayout_3->setStretch(1, 1);
        horizontalLayout_3->setStretch(2, 1);

        verticalLayout_2->addWidget(groupBox_10);


        horizontalLayout_2->addWidget(groupBox_5);


        verticalLayout->addWidget(groupBox_6);

        verticalLayout->setStretch(0, 1);
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        btn_fast_forward->setDefault(false);
        btn_stop->setDefault(true);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        groupBox->setTitle(QString());
        groupBox_3->setTitle(QString());
        btn_open->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200\344\270\262\345\217\243", Q_NULLPTR));
        comboBox_portName->setCurrentText(QString());
        label_3->setText(QApplication::translate("MainWindow", "\344\270\262\345\217\243\351\200\211\346\213\251\357\274\232", Q_NULLPTR));
        groupBox_2->setTitle(QString());
        btn_fast_forward->setText(QApplication::translate("MainWindow", "\346\255\243\345\220\221\345\277\253\350\275\254", Q_NULLPTR));
        btn_fast_reverse->setText(QApplication::translate("MainWindow", "\345\217\215\345\220\221\345\277\253\350\275\254", Q_NULLPTR));
        btn_medium_forward->setText(QApplication::translate("MainWindow", "\346\255\243\345\220\221\346\205\242\350\275\254", Q_NULLPTR));
        btn_medium_reverse->setText(QApplication::translate("MainWindow", "\345\217\215\345\220\221\346\205\242\350\275\254", Q_NULLPTR));
        btn_slow_forward->setText(QApplication::translate("MainWindow", "\346\255\243\345\220\221\345\276\256\350\275\254", Q_NULLPTR));
        btn_slow_reverse->setText(QApplication::translate("MainWindow", "\345\217\215\345\220\221\345\276\256\350\275\254", Q_NULLPTR));
        groupBox_6->setTitle(QString());
        groupBox_5->setTitle(QString());
        groupBox_7->setTitle(QString());
        label_4->setText(QApplication::translate("MainWindow", " \346\255\243 \351\231\220 \344\275\215 ", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", " \350\264\237 \351\231\220 \344\275\215 ", Q_NULLPTR));
        groupBox_10->setTitle(QString());
        label->setText(QApplication::translate("MainWindow", "\345\275\223\345\211\215\344\275\215\347\275\256:", Q_NULLPTR));
        lineEdit->setPlaceholderText(QApplication::translate("MainWindow", "  \350\257\267\350\276\223\345\205\245\344\275\215\347\275\256...", Q_NULLPTR));
        btn_move->setText(QApplication::translate("MainWindow", "\350\277\220\345\212\250\345\210\260\350\276\223\345\205\245\344\275\215\347\275\256", Q_NULLPTR));
        btn_stop->setText(QApplication::translate("MainWindow", "\345\201\234\346\255\242\350\277\220\345\212\250", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
