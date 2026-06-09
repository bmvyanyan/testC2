/****************************************************************************
** Meta object code from reading C++ file 'DialogListener.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Headers/UI/Dialogs/DialogListener.h"
#include <QtGui/qtextcursor.h>
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DialogListener.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_DialogListener_t {
    uint offsetsAndSizes[40];
    char stringdata0[15];
    char stringdata1[13];
    char stringdata2[1];
    char stringdata3[3];
    char stringdata4[11];
    char stringdata5[5];
    char stringdata6[15];
    char stringdata7[19];
    char stringdata8[13];
    char stringdata9[13];
    char stringdata10[18];
    char stringdata11[25];
    char stringdata12[4];
    char stringdata13[16];
    char stringdata14[16];
    char stringdata15[22];
    char stringdata16[5];
    char stringdata17[20];
    char stringdata18[21];
    char stringdata19[8];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_DialogListener_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_DialogListener_t qt_meta_stringdata_DialogListener = {
    {
        QT_MOC_LITERAL(0, 14),  // "DialogListener"
        QT_MOC_LITERAL(15, 12),  // "changeConfig"
        QT_MOC_LITERAL(28, 0),  // ""
        QT_MOC_LITERAL(29, 2),  // "fn"
        QT_MOC_LITERAL(32, 10),  // "changeType"
        QT_MOC_LITERAL(43, 4),  // "type"
        QT_MOC_LITERAL(48, 14),  // "onButtonCreate"
        QT_MOC_LITERAL(63, 18),  // "onButtonNewProfile"
        QT_MOC_LITERAL(82, 12),  // "onButtonLoad"
        QT_MOC_LITERAL(95, 12),  // "onButtonSave"
        QT_MOC_LITERAL(108, 17),  // "onProfileSelected"
        QT_MOC_LITERAL(126, 24),  // "handleProfileContextMenu"
        QT_MOC_LITERAL(151, 3),  // "pos"
        QT_MOC_LITERAL(155, 15),  // "onProfileRemove"
        QT_MOC_LITERAL(171, 15),  // "onProfileRename"
        QT_MOC_LITERAL(187, 21),  // "onListenerNameChanged"
        QT_MOC_LITERAL(209, 4),  // "text"
        QT_MOC_LITERAL(214, 19),  // "onProfileNameEdited"
        QT_MOC_LITERAL(234, 20),  // "onSaveProfileToggled"
        QT_MOC_LITERAL(255, 7)   // "checked"
    },
    "DialogListener",
    "changeConfig",
    "",
    "fn",
    "changeType",
    "type",
    "onButtonCreate",
    "onButtonNewProfile",
    "onButtonLoad",
    "onButtonSave",
    "onProfileSelected",
    "handleProfileContextMenu",
    "pos",
    "onProfileRemove",
    "onProfileRename",
    "onListenerNameChanged",
    "text",
    "onProfileNameEdited",
    "onSaveProfileToggled",
    "checked"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_DialogListener[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   92,    2, 0x09,    1 /* Protected */,
       4,    1,   95,    2, 0x09,    3 /* Protected */,
       6,    0,   98,    2, 0x09,    5 /* Protected */,
       7,    0,   99,    2, 0x09,    6 /* Protected */,
       8,    0,  100,    2, 0x09,    7 /* Protected */,
       9,    0,  101,    2, 0x09,    8 /* Protected */,
      10,    0,  102,    2, 0x09,    9 /* Protected */,
      11,    1,  103,    2, 0x09,   10 /* Protected */,
      13,    0,  106,    2, 0x09,   12 /* Protected */,
      14,    0,  107,    2, 0x09,   13 /* Protected */,
      15,    1,  108,    2, 0x09,   14 /* Protected */,
      17,    1,  111,    2, 0x09,   16 /* Protected */,
      18,    1,  114,    2, 0x09,   18 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void, QMetaType::Bool,   19,

       0        // eod
};

Q_CONSTINIT const QMetaObject DialogListener::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_DialogListener.offsetsAndSizes,
    qt_meta_data_DialogListener,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_DialogListener_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<DialogListener, std::true_type>,
        // method 'changeConfig'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'changeType'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'onButtonCreate'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onButtonNewProfile'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onButtonLoad'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onButtonSave'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onProfileSelected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'handleProfileContextMenu'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPoint &, std::false_type>,
        // method 'onProfileRemove'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onProfileRename'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onListenerNameChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'onProfileNameEdited'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'onSaveProfileToggled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>
    >,
    nullptr
} };

void DialogListener::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DialogListener *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->changeConfig((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->changeType((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->onButtonCreate(); break;
        case 3: _t->onButtonNewProfile(); break;
        case 4: _t->onButtonLoad(); break;
        case 5: _t->onButtonSave(); break;
        case 6: _t->onProfileSelected(); break;
        case 7: _t->handleProfileContextMenu((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 8: _t->onProfileRemove(); break;
        case 9: _t->onProfileRename(); break;
        case 10: _t->onListenerNameChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 11: _t->onProfileNameEdited((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 12: _t->onSaveProfileToggled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *DialogListener::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DialogListener::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DialogListener.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int DialogListener::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
