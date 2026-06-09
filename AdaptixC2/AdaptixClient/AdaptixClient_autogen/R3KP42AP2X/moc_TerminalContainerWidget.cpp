/****************************************************************************
** Meta object code from reading C++ file 'TerminalContainerWidget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Headers/UI/Widgets/TerminalContainerWidget.h"
#include <QtGui/qtextcursor.h>
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TerminalContainerWidget.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_TerminalTab_t {
    uint offsetsAndSizes[28];
    char stringdata0[12];
    char stringdata1[19];
    char stringdata2[1];
    char stringdata3[4];
    char stringdata4[8];
    char stringdata5[7];
    char stringdata6[17];
    char stringdata7[16];
    char stringdata8[19];
    char stringdata9[4];
    char stringdata10[17];
    char stringdata11[12];
    char stringdata12[5];
    char stringdata13[5];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_TerminalTab_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_TerminalTab_t qt_meta_stringdata_TerminalTab = {
    {
        QT_MOC_LITERAL(0, 11),  // "TerminalTab"
        QT_MOC_LITERAL(12, 18),  // "handleTerminalMenu"
        QT_MOC_LITERAL(31, 0),  // ""
        QT_MOC_LITERAL(32, 3),  // "pos"
        QT_MOC_LITERAL(36, 7),  // "onStart"
        QT_MOC_LITERAL(44, 6),  // "onStop"
        QT_MOC_LITERAL(51, 16),  // "onProgramChanged"
        QT_MOC_LITERAL(68, 15),  // "onKeytabChanged"
        QT_MOC_LITERAL(84, 18),  // "recvDataFromSocket"
        QT_MOC_LITERAL(103, 3),  // "msg"
        QT_MOC_LITERAL(107, 16),  // "sendDataToSocket"
        QT_MOC_LITERAL(124, 11),  // "const char*"
        QT_MOC_LITERAL(136, 4),  // "data"
        QT_MOC_LITERAL(141, 4)   // "size"
    },
    "TerminalTab",
    "handleTerminalMenu",
    "",
    "pos",
    "onStart",
    "onStop",
    "onProgramChanged",
    "onKeytabChanged",
    "recvDataFromSocket",
    "msg",
    "sendDataToSocket",
    "const char*",
    "data",
    "size"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_TerminalTab[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   56,    2, 0x0a,    1 /* Public */,
       4,    0,   59,    2, 0x0a,    3 /* Public */,
       5,    0,   60,    2, 0x0a,    4 /* Public */,
       6,    0,   61,    2, 0x0a,    5 /* Public */,
       7,    0,   62,    2, 0x0a,    6 /* Public */,
       8,    1,   63,    2, 0x0a,    7 /* Public */,
      10,    2,   66,    2, 0x0a,    9 /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QPoint,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray,    9,
    QMetaType::Void, 0x80000000 | 11, QMetaType::Int,   12,   13,

       0        // eod
};

Q_CONSTINIT const QMetaObject TerminalTab::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_TerminalTab.offsetsAndSizes,
    qt_meta_data_TerminalTab,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_TerminalTab_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TerminalTab, std::true_type>,
        // method 'handleTerminalMenu'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPoint &, std::false_type>,
        // method 'onStart'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onStop'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onProgramChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onKeytabChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'recvDataFromSocket'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QByteArray &, std::false_type>,
        // method 'sendDataToSocket'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const char *, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void TerminalTab::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TerminalTab *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->handleTerminalMenu((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 1: _t->onStart(); break;
        case 2: _t->onStop(); break;
        case 3: _t->onProgramChanged(); break;
        case 4: _t->onKeytabChanged(); break;
        case 5: _t->recvDataFromSocket((*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[1]))); break;
        case 6: _t->sendDataToSocket((*reinterpret_cast< std::add_pointer_t<const char*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject *TerminalTab::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TerminalTab::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TerminalTab.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int TerminalTab::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}
namespace {
struct qt_meta_stringdata_TerminalContainerWidget_t {
    uint offsetsAndSizes[8];
    char stringdata0[24];
    char stringdata1[20];
    char stringdata2[1];
    char stringdata3[6];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_TerminalContainerWidget_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_TerminalContainerWidget_t qt_meta_stringdata_TerminalContainerWidget = {
    {
        QT_MOC_LITERAL(0, 23),  // "TerminalContainerWidget"
        QT_MOC_LITERAL(24, 19),  // "onTabCloseRequested"
        QT_MOC_LITERAL(44, 0),  // ""
        QT_MOC_LITERAL(45, 5)   // "index"
    },
    "TerminalContainerWidget",
    "onTabCloseRequested",
    "",
    "index"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_TerminalContainerWidget[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   20,    2, 0x08,    1 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,

       0        // eod
};

Q_CONSTINIT const QMetaObject TerminalContainerWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<DockTab::staticMetaObject>(),
    qt_meta_stringdata_TerminalContainerWidget.offsetsAndSizes,
    qt_meta_data_TerminalContainerWidget,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_TerminalContainerWidget_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TerminalContainerWidget, std::true_type>,
        // method 'onTabCloseRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void TerminalContainerWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TerminalContainerWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onTabCloseRequested((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *TerminalContainerWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TerminalContainerWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TerminalContainerWidget.stringdata0))
        return static_cast<void*>(this);
    return DockTab::qt_metacast(_clname);
}

int TerminalContainerWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DockTab::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
