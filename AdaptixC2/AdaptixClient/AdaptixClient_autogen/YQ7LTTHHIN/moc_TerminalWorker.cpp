/****************************************************************************
** Meta object code from reading C++ file 'TerminalWorker.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Headers/Workers/TerminalWorker.h"
#include <QtGui/qtextcursor.h>
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TerminalWorker.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_TerminalWorker_t {
    uint offsetsAndSizes[32];
    char stringdata0[15];
    char stringdata1[24];
    char stringdata2[1];
    char stringdata3[4];
    char stringdata4[20];
    char stringdata5[9];
    char stringdata6[10];
    char stringdata7[6];
    char stringdata8[5];
    char stringdata9[9];
    char stringdata10[5];
    char stringdata11[14];
    char stringdata12[26];
    char stringdata13[10];
    char stringdata14[29];
    char stringdata15[6];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_TerminalWorker_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_TerminalWorker_t qt_meta_stringdata_TerminalWorker = {
    {
        QT_MOC_LITERAL(0, 14),  // "TerminalWorker"
        QT_MOC_LITERAL(15, 23),  // "binaryMessageToTerminal"
        QT_MOC_LITERAL(39, 0),  // ""
        QT_MOC_LITERAL(40, 3),  // "msg"
        QT_MOC_LITERAL(44, 19),  // "connectedToTerminal"
        QT_MOC_LITERAL(64, 8),  // "finished"
        QT_MOC_LITERAL(73, 9),  // "errorStop"
        QT_MOC_LITERAL(83, 5),  // "start"
        QT_MOC_LITERAL(89, 4),  // "stop"
        QT_MOC_LITERAL(94, 8),  // "sendData"
        QT_MOC_LITERAL(103, 4),  // "data"
        QT_MOC_LITERAL(108, 13),  // "onWsConnected"
        QT_MOC_LITERAL(122, 25),  // "onWsBinaryMessageReceived"
        QT_MOC_LITERAL(148, 9),  // "onWsError"
        QT_MOC_LITERAL(158, 28),  // "QAbstractSocket::SocketError"
        QT_MOC_LITERAL(187, 5)   // "error"
    },
    "TerminalWorker",
    "binaryMessageToTerminal",
    "",
    "msg",
    "connectedToTerminal",
    "finished",
    "errorStop",
    "start",
    "stop",
    "sendData",
    "data",
    "onWsConnected",
    "onWsBinaryMessageReceived",
    "onWsError",
    "QAbstractSocket::SocketError",
    "error"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_TerminalWorker[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   74,    2, 0x06,    1 /* Public */,
       4,    0,   77,    2, 0x06,    3 /* Public */,
       5,    0,   78,    2, 0x06,    4 /* Public */,
       6,    0,   79,    2, 0x06,    5 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       7,    0,   80,    2, 0x0a,    6 /* Public */,
       8,    0,   81,    2, 0x0a,    7 /* Public */,
       9,    1,   82,    2, 0x0a,    8 /* Public */,
      11,    0,   85,    2, 0x08,   10 /* Private */,
      12,    1,   86,    2, 0x08,   11 /* Private */,
      13,    1,   89,    2, 0x08,   13 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QByteArray,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray,   10,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray,    3,
    QMetaType::Void, 0x80000000 | 14,   15,

       0        // eod
};

Q_CONSTINIT const QMetaObject TerminalWorker::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_TerminalWorker.offsetsAndSizes,
    qt_meta_data_TerminalWorker,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_TerminalWorker_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TerminalWorker, std::true_type>,
        // method 'binaryMessageToTerminal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QByteArray &, std::false_type>,
        // method 'connectedToTerminal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'finished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'errorStop'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'start'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'stop'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'sendData'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QByteArray &, std::false_type>,
        // method 'onWsConnected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onWsBinaryMessageReceived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QByteArray &, std::false_type>,
        // method 'onWsError'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QAbstractSocket::SocketError, std::false_type>
    >,
    nullptr
} };

void TerminalWorker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TerminalWorker *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->binaryMessageToTerminal((*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[1]))); break;
        case 1: _t->connectedToTerminal(); break;
        case 2: _t->finished(); break;
        case 3: _t->errorStop(); break;
        case 4: _t->start(); break;
        case 5: _t->stop(); break;
        case 6: _t->sendData((*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[1]))); break;
        case 7: _t->onWsConnected(); break;
        case 8: _t->onWsBinaryMessageReceived((*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[1]))); break;
        case 9: _t->onWsError((*reinterpret_cast< std::add_pointer_t<QAbstractSocket::SocketError>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAbstractSocket::SocketError >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TerminalWorker::*)(const QByteArray & );
            if (_t _q_method = &TerminalWorker::binaryMessageToTerminal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (TerminalWorker::*)();
            if (_t _q_method = &TerminalWorker::connectedToTerminal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (TerminalWorker::*)();
            if (_t _q_method = &TerminalWorker::finished; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (TerminalWorker::*)();
            if (_t _q_method = &TerminalWorker::errorStop; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject *TerminalWorker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TerminalWorker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TerminalWorker.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int TerminalWorker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void TerminalWorker::binaryMessageToTerminal(const QByteArray & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TerminalWorker::connectedToTerminal()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void TerminalWorker::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void TerminalWorker::errorStop()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
