/****************************************************************************
** Meta object code from reading C++ file 'AbstractDock.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Headers/UI/Widgets/AbstractDock.h"
#include <QtGui/qtextcursor.h>
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AbstractDock.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_DockTab_t {
    uint offsetsAndSizes[28];
    char stringdata0[8];
    char stringdata1[20];
    char stringdata2[1];
    char stringdata3[10];
    char stringdata4[15];
    char stringdata5[20];
    char stringdata6[12];
    char stringdata7[7];
    char stringdata8[6];
    char stringdata9[5];
    char stringdata10[14];
    char stringdata11[13];
    char stringdata12[9];
    char stringdata13[26];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_DockTab_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_DockTab_t qt_meta_stringdata_DockTab = {
    {
        QT_MOC_LITERAL(0, 7),  // "DockTab"
        QT_MOC_LITERAL(8, 19),  // "onCurrentTabChanged"
        QT_MOC_LITERAL(28, 0),  // ""
        QT_MOC_LITERAL(29, 9),  // "isCurrent"
        QT_MOC_LITERAL(39, 14),  // "setupAutoBlink"
        QT_MOC_LITERAL(54, 19),  // "onTableRowsInserted"
        QT_MOC_LITERAL(74, 11),  // "QModelIndex"
        QT_MOC_LITERAL(86, 6),  // "parent"
        QT_MOC_LITERAL(93, 5),  // "first"
        QT_MOC_LITERAL(99, 4),  // "last"
        QT_MOC_LITERAL(104, 13),  // "onTextChanged"
        QT_MOC_LITERAL(118, 12),  // "triggerBlink"
        QT_MOC_LITERAL(131, 8),  // "onScroll"
        QT_MOC_LITERAL(140, 25)   // "checkNewContentVisibility"
    },
    "DockTab",
    "onCurrentTabChanged",
    "",
    "isCurrent",
    "setupAutoBlink",
    "onTableRowsInserted",
    "QModelIndex",
    "parent",
    "first",
    "last",
    "onTextChanged",
    "triggerBlink",
    "onScroll",
    "checkNewContentVisibility"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_DockTab[] = {

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
       1,    1,   56,    2, 0x08,    1 /* Private */,
       4,    0,   59,    2, 0x08,    3 /* Private */,
       5,    3,   60,    2, 0x08,    4 /* Private */,
      10,    0,   67,    2, 0x08,    8 /* Private */,
      11,    0,   68,    2, 0x08,    9 /* Private */,
      12,    0,   69,    2, 0x08,   10 /* Private */,
      13,    0,   70,    2, 0x08,   11 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6, QMetaType::Int, QMetaType::Int,    7,    8,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject DockTab::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_DockTab.offsetsAndSizes,
    qt_meta_data_DockTab,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_DockTab_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<DockTab, std::true_type>,
        // method 'onCurrentTabChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setupAutoBlink'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onTableRowsInserted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'onTextChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'triggerBlink'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onScroll'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'checkNewContentVisibility'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void DockTab::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DockTab *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onCurrentTabChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->setupAutoBlink(); break;
        case 2: _t->onTableRowsInserted((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        case 3: _t->onTextChanged(); break;
        case 4: _t->triggerBlink(); break;
        case 5: _t->onScroll(); break;
        case 6: _t->checkNewContentVisibility(); break;
        default: ;
        }
    }
}

const QMetaObject *DockTab::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DockTab::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DockTab.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int DockTab::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
