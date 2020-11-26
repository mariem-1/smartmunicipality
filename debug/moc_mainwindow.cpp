/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[18];
    char stringdata0[374];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 27), // "on_supprimeremploye_clicked"
QT_MOC_LITERAL(4, 62, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(5, 86, 27), // "on_supprimerposte_2_clicked"
QT_MOC_LITERAL(6, 114, 29), // "on_modifierchantier_2_clicked"
QT_MOC_LITERAL(7, 144, 27), // "on_modifierchantier_clicked"
QT_MOC_LITERAL(8, 172, 7), // "refresh"
QT_MOC_LITERAL(9, 180, 22), // "initialiser_formulaire"
QT_MOC_LITERAL(10, 203, 33), // "verifier_formulaire_ajout_emp..."
QT_MOC_LITERAL(11, 237, 17), // "on_pb_ok1_clicked"
QT_MOC_LITERAL(12, 255, 19), // "on_pb_ok1_2_clicked"
QT_MOC_LITERAL(13, 275, 23), // "on_comboBox_2_activated"
QT_MOC_LITERAL(14, 299, 4), // "arg1"
QT_MOC_LITERAL(15, 304, 21), // "on_comboBox_activated"
QT_MOC_LITERAL(16, 326, 23), // "on_comboBox_4_activated"
QT_MOC_LITERAL(17, 350, 23) // "on_comboBox_5_activated"

    },
    "MainWindow\0on_pushButton_clicked\0\0"
    "on_supprimeremploye_clicked\0"
    "on_pushButton_2_clicked\0"
    "on_supprimerposte_2_clicked\0"
    "on_modifierchantier_2_clicked\0"
    "on_modifierchantier_clicked\0refresh\0"
    "initialiser_formulaire\0"
    "verifier_formulaire_ajout_employe\0"
    "on_pb_ok1_clicked\0on_pb_ok1_2_clicked\0"
    "on_comboBox_2_activated\0arg1\0"
    "on_comboBox_activated\0on_comboBox_4_activated\0"
    "on_comboBox_5_activated"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x08 /* Private */,
       3,    0,   90,    2, 0x08 /* Private */,
       4,    0,   91,    2, 0x08 /* Private */,
       5,    0,   92,    2, 0x08 /* Private */,
       6,    0,   93,    2, 0x08 /* Private */,
       7,    0,   94,    2, 0x08 /* Private */,
       8,    0,   95,    2, 0x08 /* Private */,
       9,    0,   96,    2, 0x08 /* Private */,
      10,    0,   97,    2, 0x08 /* Private */,
      11,    0,   98,    2, 0x08 /* Private */,
      12,    0,   99,    2, 0x08 /* Private */,
      13,    1,  100,    2, 0x08 /* Private */,
      15,    1,  103,    2, 0x08 /* Private */,
      16,    1,  106,    2, 0x08 /* Private */,
      17,    1,  109,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void, QMetaType::QString,   14,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_clicked(); break;
        case 1: _t->on_supprimeremploye_clicked(); break;
        case 2: _t->on_pushButton_2_clicked(); break;
        case 3: _t->on_supprimerposte_2_clicked(); break;
        case 4: _t->on_modifierchantier_2_clicked(); break;
        case 5: _t->on_modifierchantier_clicked(); break;
        case 6: _t->refresh(); break;
        case 7: _t->initialiser_formulaire(); break;
        case 8: { bool _r = _t->verifier_formulaire_ajout_employe();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 9: _t->on_pb_ok1_clicked(); break;
        case 10: _t->on_pb_ok1_2_clicked(); break;
        case 11: _t->on_comboBox_2_activated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 12: _t->on_comboBox_activated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 13: _t->on_comboBox_4_activated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 14: _t->on_comboBox_5_activated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
