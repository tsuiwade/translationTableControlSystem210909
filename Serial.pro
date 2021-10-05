#-------------------------------------------------
#
# Project created by QtCreator 2021-08-23T11:01:34
#
#-------------------------------------------------

QT       += core gui
QT       += serialport

UI_DIR=./

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Serial
TEMPLATE = app

RC_ICONS = favicon.ico

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        KeyButton.cpp \
        NumberKeyboard.cpp \
        dialog.cpp \
        main.cpp \
        mainwindow.cpp

HEADERS += \
    AbstractKeyboard.h \
    KeyButton.h \
    NumberKeyboard.h \
    dialog.h \
        mainwindow.h \


FORMS += \
        dialog.ui \
        mainwindow.ui

RESOURCES += \
    resource.qrc

LIB_FILE ~= s,/,\\,g
