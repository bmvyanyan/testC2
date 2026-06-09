/****************************************************************************
** Meta object code from reading C++ file 'TunnelEndpoint.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Headers/Client/TunnelEndpoint.h"
#include <QtGui/qtextcursor.h>
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TunnelEndpoint.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_TunnelEndpoint_t {
    uint offsetsAndSizes[18];
    char stringdata0[15];
    char stringdata1[18];
    char stringdata2[1];
    char stringdata3[20];
    char stringdata4[14];
    char stringdata5[14];
    char stringdata6[7];
    char stringdata7[10];
    char stringdata8[18];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_TunnelEndpoint_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_TunnelEndpoint_t qt_meta_stringdata_TunnelEndpoint = {
    {
        QT_MOC_LITERAL(0, 14),  // "TunnelEndpoint"
        QT_MOC_LITERAL(15, 17),  // "onStartLpfChannel"
        QT_MOC_LITERAL(33, 0),  // ""
        QT_MOC_LITERAL(34, 19),  // "onStartSocksChannel"
        QT_MOC_LITERAL(54, 13),  // "onWorkerReady"
        QT_MOC_LITERAL(68, 13),  // "TunnelWorker*"
        QT_MOC_LITERAL(82, 6),  // "worker"
        QT_MOC_LITERAL(89, 9),  // "channelId"
        QT_MOC_LITERAL(99, 17)   // "onHandshakeFailed"
    },
    "TunnelEndpoint",
    "onStartLpfChannel",
    "",
    "onStartSocksChannel",
    "onWorkerReady",
    "TunnelWorker*",
    "worker",
    "channelId",
    "onHandshakeFailed"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_TunnelEndpoint[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   38,    2, 0x08,    1 /* Private */,
       3,    0,   39,    2, 0x08,    2 /* Private */,
       4,    2,   40,    2, 0x08,    3 /* Private */,
       8,    0,   45,    2, 0x08,    6 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5, QMetaType::QString,    6,    7,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject TunnelEndpoint::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_TunnelEndpoint.offsetsAndSizes,
    qt_meta_data_TunnelEndpoint,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_TunnelEndpoint_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TunnelEndpoint, std::true_type>,
        // method 'onStartLpfChannel'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onStartSocksChannel'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onWorkerReady'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<TunnelWorker *, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'onHandshakeFailed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void TunnelEndpoint::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TunnelEndpoint *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onStartLpfChannel(); break;
        case 1: _t->onStartSocksChannel(); break;
        case 2: _t->onWorkerReady((*reinterpret_cast< std::add_pointer_t<TunnelWorker*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 3: _t->onHandshakeFailed(); break;
        default: ;
        }
    }
}

const QMetaObject *TunnelEndpoint::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TunnelEndpoint::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TunnelEndpoint.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int TunnelEndpoint::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
