/****************************************************************************
** Meta object code from reading C++ file 'Vt102Emulation.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Libs/Konsole/Vt102Emulation.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Vt102Emulation.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_Vt102Emulation_t {
    uint offsetsAndSizes[42];
    char stringdata0[15];
    char stringdata1[29];
    char stringdata2[1];
    char stringdata3[15];
    char stringdata4[4];
    char stringdata5[11];
    char stringdata6[12];
    char stringdata7[7];
    char stringdata8[9];
    char stringdata9[5];
    char stringdata10[13];
    char stringdata11[11];
    char stringdata12[10];
    char stringdata13[15];
    char stringdata14[8];
    char stringdata15[7];
    char stringdata16[5];
    char stringdata17[10];
    char stringdata18[10];
    char stringdata19[12];
    char stringdata20[12];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_Vt102Emulation_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_Vt102Emulation_t qt_meta_stringdata_Vt102Emulation = {
    {
        QT_MOC_LITERAL(0, 14),  // "Vt102Emulation"
        QT_MOC_LITERAL(15, 28),  // "changeBackgroundColorRequest"
        QT_MOC_LITERAL(44, 0),  // ""
        QT_MOC_LITERAL(45, 14),  // "openUrlRequest"
        QT_MOC_LITERAL(60, 3),  // "url"
        QT_MOC_LITERAL(64, 10),  // "sendString"
        QT_MOC_LITERAL(75, 11),  // "const char*"
        QT_MOC_LITERAL(87, 6),  // "length"
        QT_MOC_LITERAL(94, 8),  // "sendText"
        QT_MOC_LITERAL(103, 4),  // "text"
        QT_MOC_LITERAL(108, 12),  // "sendKeyEvent"
        QT_MOC_LITERAL(121, 10),  // "QKeyEvent*"
        QT_MOC_LITERAL(132, 9),  // "fromPaste"
        QT_MOC_LITERAL(142, 14),  // "sendMouseEvent"
        QT_MOC_LITERAL(157, 7),  // "buttons"
        QT_MOC_LITERAL(165, 6),  // "column"
        QT_MOC_LITERAL(172, 4),  // "line"
        QT_MOC_LITERAL(177, 9),  // "eventType"
        QT_MOC_LITERAL(187, 9),  // "focusLost"
        QT_MOC_LITERAL(197, 11),  // "focusGained"
        QT_MOC_LITERAL(209, 11)   // "updateTitle"
    },
    "Vt102Emulation",
    "changeBackgroundColorRequest",
    "",
    "openUrlRequest",
    "url",
    "sendString",
    "const char*",
    "length",
    "sendText",
    "text",
    "sendKeyEvent",
    "QKeyEvent*",
    "fromPaste",
    "sendMouseEvent",
    "buttons",
    "column",
    "line",
    "eventType",
    "focusLost",
    "focusGained",
    "updateTitle"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_Vt102Emulation[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   74,    2, 0x06,    1 /* Public */,
       3,    1,   77,    2, 0x06,    3 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    2,   80,    2, 0x0a,    5 /* Public */,
       5,    1,   85,    2, 0x2a,    8 /* Public | MethodCloned */,
       8,    1,   88,    2, 0x0a,   10 /* Public */,
      10,    2,   91,    2, 0x0a,   12 /* Public */,
      13,    4,   96,    2, 0x0a,   15 /* Public */,
      18,    0,  105,    2, 0x0a,   20 /* Public */,
      19,    0,  106,    2, 0x0a,   21 /* Public */,
      20,    0,  107,    2, 0x08,   22 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QColor,    2,
    QMetaType::Void, QMetaType::QString,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6, QMetaType::Int,    2,    7,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, 0x80000000 | 11, QMetaType::Bool,    2,   12,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,   14,   15,   16,   17,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject Vt102Emulation::staticMetaObject = { {
    QMetaObject::SuperData::link<Emulation::staticMetaObject>(),
    qt_meta_stringdata_Vt102Emulation.offsetsAndSizes,
    qt_meta_data_Vt102Emulation,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_Vt102Emulation_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Vt102Emulation, std::true_type>,
        // method 'changeBackgroundColorRequest'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QColor &, std::false_type>,
        // method 'openUrlRequest'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'sendString'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const char *, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'sendString'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const char *, std::false_type>,
        // method 'sendText'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'sendKeyEvent'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QKeyEvent *, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'sendMouseEvent'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'focusLost'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'focusGained'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateTitle'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void Vt102Emulation::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Vt102Emulation *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->changeBackgroundColorRequest((*reinterpret_cast< std::add_pointer_t<QColor>>(_a[1]))); break;
        case 1: _t->openUrlRequest((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->sendString((*reinterpret_cast< std::add_pointer_t<const char*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 3: _t->sendString((*reinterpret_cast< std::add_pointer_t<const char*>>(_a[1]))); break;
        case 4: _t->sendText((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: _t->sendKeyEvent((*reinterpret_cast< std::add_pointer_t<QKeyEvent*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 6: _t->sendMouseEvent((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4]))); break;
        case 7: _t->focusLost(); break;
        case 8: _t->focusGained(); break;
        case 9: _t->updateTitle(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Vt102Emulation::*)(const QColor & );
            if (_t _q_method = &Vt102Emulation::changeBackgroundColorRequest; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Vt102Emulation::*)(const QString & );
            if (_t _q_method = &Vt102Emulation::openUrlRequest; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *Vt102Emulation::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Vt102Emulation::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Vt102Emulation.stringdata0))
        return static_cast<void*>(this);
    return Emulation::qt_metacast(_clname);
}

int Vt102Emulation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Emulation::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void Vt102Emulation::changeBackgroundColorRequest(const QColor & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Vt102Emulation::openUrlRequest(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
