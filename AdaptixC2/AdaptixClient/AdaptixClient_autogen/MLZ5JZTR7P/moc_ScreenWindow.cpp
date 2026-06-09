/****************************************************************************
** Meta object code from reading C++ file 'ScreenWindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Libs/Konsole/ScreenWindow.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ScreenWindow.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_ScreenWindow_t {
    uint offsetsAndSizes[24];
    char stringdata0[13];
    char stringdata1[14];
    char stringdata2[1];
    char stringdata3[9];
    char stringdata4[5];
    char stringdata5[17];
    char stringdata6[12];
    char stringdata7[12];
    char stringdata8[20];
    char stringdata9[26];
    char stringdata10[28];
    char stringdata11[8];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_ScreenWindow_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_ScreenWindow_t qt_meta_stringdata_ScreenWindow = {
    {
        QT_MOC_LITERAL(0, 12),  // "ScreenWindow"
        QT_MOC_LITERAL(13, 13),  // "outputChanged"
        QT_MOC_LITERAL(27, 0),  // ""
        QT_MOC_LITERAL(28, 8),  // "scrolled"
        QT_MOC_LITERAL(37, 4),  // "line"
        QT_MOC_LITERAL(42, 16),  // "selectionChanged"
        QT_MOC_LITERAL(59, 11),  // "scrollToEnd"
        QT_MOC_LITERAL(71, 11),  // "handleCtrlC"
        QT_MOC_LITERAL(83, 19),  // "notifyOutputChanged"
        QT_MOC_LITERAL(103, 25),  // "handleCommandFromKeyboard"
        QT_MOC_LITERAL(129, 27),  // "KeyboardTranslator::Command"
        QT_MOC_LITERAL(157, 7)   // "command"
    },
    "ScreenWindow",
    "outputChanged",
    "",
    "scrolled",
    "line",
    "selectionChanged",
    "scrollToEnd",
    "handleCtrlC",
    "notifyOutputChanged",
    "handleCommandFromKeyboard",
    "KeyboardTranslator::Command",
    "command"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_ScreenWindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   56,    2, 0x06,    1 /* Public */,
       3,    1,   57,    2, 0x06,    2 /* Public */,
       5,    0,   60,    2, 0x06,    4 /* Public */,
       6,    0,   61,    2, 0x06,    5 /* Public */,
       7,    0,   62,    2, 0x06,    6 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       8,    0,   63,    2, 0x0a,    7 /* Public */,
       9,    1,   64,    2, 0x0a,    8 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10,   11,

       0        // eod
};

Q_CONSTINIT const QMetaObject ScreenWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ScreenWindow.offsetsAndSizes,
    qt_meta_data_ScreenWindow,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_ScreenWindow_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ScreenWindow, std::true_type>,
        // method 'outputChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'scrolled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'selectionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'scrollToEnd'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'handleCtrlC'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'notifyOutputChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'handleCommandFromKeyboard'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<KeyboardTranslator::Command, std::false_type>
    >,
    nullptr
} };

void ScreenWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ScreenWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->outputChanged(); break;
        case 1: _t->scrolled((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->selectionChanged(); break;
        case 3: _t->scrollToEnd(); break;
        case 4: _t->handleCtrlC(); break;
        case 5: _t->notifyOutputChanged(); break;
        case 6: _t->handleCommandFromKeyboard((*reinterpret_cast< std::add_pointer_t<KeyboardTranslator::Command>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ScreenWindow::*)();
            if (_t _q_method = &ScreenWindow::outputChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ScreenWindow::*)(int );
            if (_t _q_method = &ScreenWindow::scrolled; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ScreenWindow::*)();
            if (_t _q_method = &ScreenWindow::selectionChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ScreenWindow::*)();
            if (_t _q_method = &ScreenWindow::scrollToEnd; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ScreenWindow::*)();
            if (_t _q_method = &ScreenWindow::handleCtrlC; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject *ScreenWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ScreenWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ScreenWindow.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ScreenWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void ScreenWindow::outputChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ScreenWindow::scrolled(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ScreenWindow::selectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void ScreenWindow::scrollToEnd()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void ScreenWindow::handleCtrlC()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
