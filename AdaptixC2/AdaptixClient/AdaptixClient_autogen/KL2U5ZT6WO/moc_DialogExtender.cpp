/****************************************************************************
** Meta object code from reading C++ file 'DialogExtender.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Headers/UI/Dialogs/DialogExtender.h"
#include <QtGui/qtextcursor.h>
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DialogExtender.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace {
struct qt_meta_stringdata_DialogExtender_t {
    uint offsetsAndSizes[36];
    char stringdata0[15];
    char stringdata1[11];
    char stringdata2[1];
    char stringdata3[4];
    char stringdata4[13];
    char stringdata5[15];
    char stringdata6[15];
    char stringdata7[16];
    char stringdata8[15];
    char stringdata9[12];
    char stringdata10[4];
    char stringdata11[7];
    char stringdata12[17];
    char stringdata13[21];
    char stringdata14[22];
    char stringdata15[18];
    char stringdata16[17];
    char stringdata17[6];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_DialogExtender_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_DialogExtender_t qt_meta_stringdata_DialogExtender = {
    {
        QT_MOC_LITERAL(0, 14),  // "DialogExtender"
        QT_MOC_LITERAL(15, 10),  // "handleMenu"
        QT_MOC_LITERAL(26, 0),  // ""
        QT_MOC_LITERAL(27, 3),  // "pos"
        QT_MOC_LITERAL(31, 12),  // "onActionLoad"
        QT_MOC_LITERAL(44, 14),  // "onActionReload"
        QT_MOC_LITERAL(59, 14),  // "onActionEnable"
        QT_MOC_LITERAL(74, 15),  // "onActionDisable"
        QT_MOC_LITERAL(90, 14),  // "onActionRemove"
        QT_MOC_LITERAL(105, 11),  // "onRowSelect"
        QT_MOC_LITERAL(117, 3),  // "row"
        QT_MOC_LITERAL(121, 6),  // "column"
        QT_MOC_LITERAL(128, 16),  // "handleServerMenu"
        QT_MOC_LITERAL(145, 20),  // "onServerActionEnable"
        QT_MOC_LITERAL(166, 21),  // "onServerActionDisable"
        QT_MOC_LITERAL(188, 17),  // "onServerRowSelect"
        QT_MOC_LITERAL(206, 16),  // "onProjectChanged"
        QT_MOC_LITERAL(223, 5)   // "index"
    },
    "DialogExtender",
    "handleMenu",
    "",
    "pos",
    "onActionLoad",
    "onActionReload",
    "onActionEnable",
    "onActionDisable",
    "onActionRemove",
    "onRowSelect",
    "row",
    "column",
    "handleServerMenu",
    "onServerActionEnable",
    "onServerActionDisable",
    "onServerRowSelect",
    "onProjectChanged",
    "index"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_DialogExtender[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   86,    2, 0x10a,    1 /* Public | MethodIsConst  */,
       4,    0,   89,    2, 0x10a,    3 /* Public | MethodIsConst  */,
       5,    0,   90,    2, 0x10a,    4 /* Public | MethodIsConst  */,
       6,    0,   91,    2, 0x10a,    5 /* Public | MethodIsConst  */,
       7,    0,   92,    2, 0x10a,    6 /* Public | MethodIsConst  */,
       8,    0,   93,    2, 0x10a,    7 /* Public | MethodIsConst  */,
       9,    2,   94,    2, 0x10a,    8 /* Public | MethodIsConst  */,
      12,    1,   99,    2, 0x0a,   11 /* Public */,
      13,    0,  102,    2, 0x0a,   13 /* Public */,
      14,    0,  103,    2, 0x0a,   14 /* Public */,
      15,    2,  104,    2, 0x10a,   15 /* Public | MethodIsConst  */,
      16,    1,  109,    2, 0x0a,   18 /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QPoint,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   10,   11,
    QMetaType::Void, QMetaType::QPoint,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   10,   11,
    QMetaType::Void, QMetaType::Int,   17,

       0        // eod
};

Q_CONSTINIT const QMetaObject DialogExtender::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_DialogExtender.offsetsAndSizes,
    qt_meta_data_DialogExtender,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_DialogExtender_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<DialogExtender, std::true_type>,
        // method 'handleMenu'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPoint &, std::false_type>,
        // method 'onActionLoad'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onActionReload'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onActionEnable'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onActionDisable'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onActionRemove'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onRowSelect'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'handleServerMenu'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPoint &, std::false_type>,
        // method 'onServerActionEnable'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onServerActionDisable'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onServerRowSelect'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'onProjectChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void DialogExtender::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DialogExtender *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->handleMenu((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 1: _t->onActionLoad(); break;
        case 2: _t->onActionReload(); break;
        case 3: _t->onActionEnable(); break;
        case 4: _t->onActionDisable(); break;
        case 5: _t->onActionRemove(); break;
        case 6: _t->onRowSelect((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 7: _t->handleServerMenu((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 8: _t->onServerActionEnable(); break;
        case 9: _t->onServerActionDisable(); break;
        case 10: _t->onServerRowSelect((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 11: _t->onProjectChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *DialogExtender::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DialogExtender::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DialogExtender.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int DialogExtender::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
