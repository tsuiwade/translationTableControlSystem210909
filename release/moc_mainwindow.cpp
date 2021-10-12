/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[17];
    char stringdata0[332];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 13), // "slot_Timerout"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 19), // "on_btn_open_clicked"
QT_MOC_LITERAL(4, 46, 20), // "serialPort_readyRead"
QT_MOC_LITERAL(5, 67, 10), // "portSearch"
QT_MOC_LITERAL(6, 78, 19), // "on_btn_stop_clicked"
QT_MOC_LITERAL(7, 98, 19), // "on_btn_move_clicked"
QT_MOC_LITERAL(8, 118, 27), // "on_btn_fast_forward_clicked"
QT_MOC_LITERAL(9, 146, 27), // "on_btn_fast_reverse_clicked"
QT_MOC_LITERAL(10, 174, 29), // "on_btn_medium_forward_clicked"
QT_MOC_LITERAL(11, 204, 29), // "on_btn_medium_reverse_clicked"
QT_MOC_LITERAL(12, 234, 27), // "on_btn_slow_forward_clicked"
QT_MOC_LITERAL(13, 262, 27), // "on_btn_slow_reverse_clicked"
QT_MOC_LITERAL(14, 290, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(15, 312, 11), // "eventFilter"
QT_MOC_LITERAL(16, 324, 7) // "QEvent*"

    },
    "MainWindow\0slot_Timerout\0\0on_btn_open_clicked\0"
    "serialPort_readyRead\0portSearch\0"
    "on_btn_stop_clicked\0on_btn_move_clicked\0"
    "on_btn_fast_forward_clicked\0"
    "on_btn_fast_reverse_clicked\0"
    "on_btn_medium_forward_clicked\0"
    "on_btn_medium_reverse_clicked\0"
    "on_btn_slow_forward_clicked\0"
    "on_btn_slow_reverse_clicked\0"
    "on_pushButton_clicked\0eventFilter\0"
    "QEvent*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x08 /* Private */,
       3,    0,   85,    2, 0x08 /* Private */,
       4,    0,   86,    2, 0x08 /* Private */,
       5,    0,   87,    2, 0x08 /* Private */,
       6,    0,   88,    2, 0x08 /* Private */,
       7,    0,   89,    2, 0x08 /* Private */,
       8,    0,   90,    2, 0x08 /* Private */,
       9,    0,   91,    2, 0x08 /* Private */,
      10,    0,   92,    2, 0x08 /* Private */,
      11,    0,   93,    2, 0x08 /* Private */,
      12,    0,   94,    2, 0x08 /* Private */,
      13,    0,   95,    2, 0x08 /* Private */,
      14,    0,   96,    2, 0x08 /* Private */,
      15,    2,   97,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool, QMetaType::QObjectStar, 0x80000000 | 16,    2,    2,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slot_Timerout(); break;
        case 1: _t->on_btn_open_clicked(); break;
        case 2: _t->serialPort_readyRead(); break;
        case 3: _t->portSearch(); break;
        case 4: _t->on_btn_stop_clicked(); break;
        case 5: _t->on_btn_move_clicked(); break;
        case 6: _t->on_btn_fast_forward_clicked(); break;
        case 7: _t->on_btn_fast_reverse_clicked(); break;
        case 8: _t->on_btn_medium_forward_clicked(); break;
        case 9: _t->on_btn_medium_reverse_clicked(); break;
        case 10: _t->on_btn_slow_forward_clicked(); break;
        case 11: _t->on_btn_slow_reverse_clicked(); break;
        case 12: _t->on_pushButton_clicked(); break;
        case 13: { bool _r = _t->eventFilter((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
