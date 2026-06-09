/****************************************************************************
** Meta object code from reading C++ file 'AxScriptManager.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Headers/Client/AxScript/AxScriptManager.h"
#include <QtGui/qtextcursor.h>
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AxScriptManager.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_AxScriptManager_t {
    uint offsetsAndSizes[30];
    char stringdata0[16];
    char stringdata1[20];
    char stringdata2[1];
    char stringdata3[8];
    char stringdata4[18];
    char stringdata5[13];
    char stringdata6[8];
    char stringdata7[21];
    char stringdata8[20];
    char stringdata9[5];
    char stringdata10[22];
    char stringdata11[14];
    char stringdata12[23];
    char stringdata13[16];
    char stringdata14[21];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_AxScriptManager_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_AxScriptManager_t qt_meta_stringdata_AxScriptManager = {
    {
        QT_MOC_LITERAL(0, 15),  // "AxScriptManager"
        QT_MOC_LITERAL(16, 19),  // "consolePrintMessage"
        QT_MOC_LITERAL(36, 0),  // ""
        QT_MOC_LITERAL(37, 7),  // "message"
        QT_MOC_LITERAL(45, 17),  // "consolePrintError"
        QT_MOC_LITERAL(63, 12),  // "emitNewAgent"
        QT_MOC_LITERAL(76, 7),  // "agentId"
        QT_MOC_LITERAL(84, 20),  // "emitFileBrowserDisks"
        QT_MOC_LITERAL(105, 19),  // "emitFileBrowserList"
        QT_MOC_LITERAL(125, 4),  // "path"
        QT_MOC_LITERAL(130, 21),  // "emitFileBrowserUpload"
        QT_MOC_LITERAL(152, 13),  // "localFilename"
        QT_MOC_LITERAL(166, 22),  // "emitProcessBrowserList"
        QT_MOC_LITERAL(189, 15),  // "emitReadyClient"
        QT_MOC_LITERAL(205, 20)   // "emitDisconnectClient"
    },
    "AxScriptManager",
    "consolePrintMessage",
    "",
    "message",
    "consolePrintError",
    "emitNewAgent",
    "agentId",
    "emitFileBrowserDisks",
    "emitFileBrowserList",
    "path",
    "emitFileBrowserUpload",
    "localFilename",
    "emitProcessBrowserList",
    "emitReadyClient",
    "emitDisconnectClient"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_AxScriptManager[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   68,    2, 0x0a,    1 /* Public */,
       4,    1,   71,    2, 0x0a,    3 /* Public */,
       5,    1,   74,    2, 0x0a,    5 /* Public */,
       7,    1,   77,    2, 0x0a,    7 /* Public */,
       8,    2,   80,    2, 0x0a,    9 /* Public */,
      10,    3,   85,    2, 0x0a,   12 /* Public */,
      12,    1,   92,    2, 0x0a,   16 /* Public */,
      13,    0,   95,    2, 0x0a,   18 /* Public */,
      14,    0,   96,    2, 0x0a,   19 /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    6,    9,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,    6,    9,   11,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject AxScriptManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_AxScriptManager.offsetsAndSizes,
    qt_meta_data_AxScriptManager,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_AxScriptManager_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<AxScriptManager, std::true_type>,
        // method 'consolePrintMessage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'consolePrintError'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'emitNewAgent'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'emitFileBrowserDisks'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'emitFileBrowserList'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'emitFileBrowserUpload'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'emitProcessBrowserList'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'emitReadyClient'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'emitDisconnectClient'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void AxScriptManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AxScriptManager *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->consolePrintMessage((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->consolePrintError((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->emitNewAgent((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->emitFileBrowserDisks((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->emitFileBrowserList((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 5: _t->emitFileBrowserUpload((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 6: _t->emitProcessBrowserList((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 7: _t->emitReadyClient(); break;
        case 8: _t->emitDisconnectClient(); break;
        default: ;
        }
    }
}

const QMetaObject *AxScriptManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AxScriptManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AxScriptManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int AxScriptManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
