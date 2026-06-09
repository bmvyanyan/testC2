/****************************************************************************
** Meta object code from reading C++ file 'Emulation.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Libs/Konsole/Emulation.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Emulation.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_Emulation_t {
    uint offsetsAndSizes[140];
    char stringdata0[10];
    char stringdata1[9];
    char stringdata2[1];
    char stringdata3[12];
    char stringdata4[5];
    char stringdata5[4];
    char stringdata6[17];
    char stringdata7[15];
    char stringdata8[8];
    char stringdata9[15];
    char stringdata10[9];
    char stringdata11[6];
    char stringdata12[19];
    char stringdata13[19];
    char stringdata14[26];
    char stringdata15[6];
    char stringdata16[24];
    char stringdata17[10];
    char stringdata18[33];
    char stringdata19[19];
    char stringdata20[14];
    char stringdata21[13];
    char stringdata22[6];
    char stringdata23[9];
    char stringdata24[17];
    char stringdata25[10];
    char stringdata26[12];
    char stringdata27[21];
    char stringdata28[19];
    char stringdata29[5];
    char stringdata30[29];
    char stringdata31[5];
    char stringdata32[22];
    char stringdata33[18];
    char stringdata34[19];
    char stringdata35[4];
    char stringdata36[14];
    char stringdata37[20];
    char stringdata38[12];
    char stringdata39[22];
    char stringdata40[26];
    char stringdata41[28];
    char stringdata42[8];
    char stringdata43[12];
    char stringdata44[24];
    char stringdata45[13];
    char stringdata46[6];
    char stringdata47[8];
    char stringdata48[9];
    char stringdata49[13];
    char stringdata50[11];
    char stringdata51[10];
    char stringdata52[15];
    char stringdata53[8];
    char stringdata54[7];
    char stringdata55[5];
    char stringdata56[10];
    char stringdata57[11];
    char stringdata58[7];
    char stringdata59[7];
    char stringdata60[12];
    char stringdata61[7];
    char stringdata62[20];
    char stringdata63[8];
    char stringdata64[3];
    char stringdata65[15];
    char stringdata66[17];
    char stringdata67[9];
    char stringdata68[17];
    char stringdata69[26];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_Emulation_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_Emulation_t qt_meta_stringdata_Emulation = {
    {
        QT_MOC_LITERAL(0, 9),  // "Emulation"
        QT_MOC_LITERAL(10, 8),  // "sendData"
        QT_MOC_LITERAL(19, 0),  // ""
        QT_MOC_LITERAL(20, 11),  // "const char*"
        QT_MOC_LITERAL(32, 4),  // "data"
        QT_MOC_LITERAL(37, 3),  // "len"
        QT_MOC_LITERAL(41, 16),  // "dupDisplayOutput"
        QT_MOC_LITERAL(58, 14),  // "lockPtyRequest"
        QT_MOC_LITERAL(73, 7),  // "suspend"
        QT_MOC_LITERAL(81, 14),  // "useUtf8Request"
        QT_MOC_LITERAL(96, 8),  // "stateSet"
        QT_MOC_LITERAL(105, 5),  // "state"
        QT_MOC_LITERAL(111, 18),  // "zmodemSendDetected"
        QT_MOC_LITERAL(130, 18),  // "zmodemRecvDetected"
        QT_MOC_LITERAL(149, 25),  // "changeTabTextColorRequest"
        QT_MOC_LITERAL(175, 5),  // "color"
        QT_MOC_LITERAL(181, 23),  // "programUsesMouseChanged"
        QT_MOC_LITERAL(205, 9),  // "usesMouse"
        QT_MOC_LITERAL(215, 32),  // "programBracketedPasteModeChanged"
        QT_MOC_LITERAL(248, 18),  // "bracketedPasteMode"
        QT_MOC_LITERAL(267, 13),  // "outputChanged"
        QT_MOC_LITERAL(281, 12),  // "titleChanged"
        QT_MOC_LITERAL(294, 5),  // "title"
        QT_MOC_LITERAL(300, 8),  // "newTitle"
        QT_MOC_LITERAL(309, 16),  // "imageSizeChanged"
        QT_MOC_LITERAL(326, 9),  // "lineCount"
        QT_MOC_LITERAL(336, 11),  // "columnCount"
        QT_MOC_LITERAL(348, 20),  // "imageSizeInitialized"
        QT_MOC_LITERAL(369, 18),  // "imageResizeRequest"
        QT_MOC_LITERAL(388, 4),  // "size"
        QT_MOC_LITERAL(393, 28),  // "profileChangeCommandReceived"
        QT_MOC_LITERAL(422, 4),  // "text"
        QT_MOC_LITERAL(427, 21),  // "flowControlKeyPressed"
        QT_MOC_LITERAL(449, 17),  // "suspendKeyPressed"
        QT_MOC_LITERAL(467, 18),  // "primaryScreenInUse"
        QT_MOC_LITERAL(486, 3),  // "use"
        QT_MOC_LITERAL(490, 13),  // "cursorChanged"
        QT_MOC_LITERAL(504, 19),  // "KeyboardCursorShape"
        QT_MOC_LITERAL(524, 11),  // "cursorShape"
        QT_MOC_LITERAL(536, 21),  // "blinkingCursorEnabled"
        QT_MOC_LITERAL(558, 25),  // "handleCommandFromKeyboard"
        QT_MOC_LITERAL(584, 27),  // "KeyboardTranslator::Command"
        QT_MOC_LITERAL(612, 7),  // "command"
        QT_MOC_LITERAL(620, 11),  // "handleCtrlC"
        QT_MOC_LITERAL(632, 23),  // "outputFromKeypressEvent"
        QT_MOC_LITERAL(656, 12),  // "setImageSize"
        QT_MOC_LITERAL(669, 5),  // "lines"
        QT_MOC_LITERAL(675, 7),  // "columns"
        QT_MOC_LITERAL(683, 8),  // "sendText"
        QT_MOC_LITERAL(692, 12),  // "sendKeyEvent"
        QT_MOC_LITERAL(705, 10),  // "QKeyEvent*"
        QT_MOC_LITERAL(716, 9),  // "fromPaste"
        QT_MOC_LITERAL(726, 14),  // "sendMouseEvent"
        QT_MOC_LITERAL(741, 7),  // "buttons"
        QT_MOC_LITERAL(749, 6),  // "column"
        QT_MOC_LITERAL(756, 4),  // "line"
        QT_MOC_LITERAL(761, 9),  // "eventType"
        QT_MOC_LITERAL(771, 10),  // "sendString"
        QT_MOC_LITERAL(782, 6),  // "string"
        QT_MOC_LITERAL(789, 6),  // "length"
        QT_MOC_LITERAL(796, 11),  // "receiveData"
        QT_MOC_LITERAL(808, 6),  // "buffer"
        QT_MOC_LITERAL(815, 19),  // "dupDisplayCharacter"
        QT_MOC_LITERAL(835, 7),  // "wchar_t"
        QT_MOC_LITERAL(843, 2),  // "cc"
        QT_MOC_LITERAL(846, 14),  // "bufferedUpdate"
        QT_MOC_LITERAL(861, 16),  // "checkScreenInUse"
        QT_MOC_LITERAL(878, 8),  // "showBulk"
        QT_MOC_LITERAL(887, 16),  // "usesMouseChanged"
        QT_MOC_LITERAL(904, 25)   // "bracketedPasteModeChanged"
    },
    "Emulation",
    "sendData",
    "",
    "const char*",
    "data",
    "len",
    "dupDisplayOutput",
    "lockPtyRequest",
    "suspend",
    "useUtf8Request",
    "stateSet",
    "state",
    "zmodemSendDetected",
    "zmodemRecvDetected",
    "changeTabTextColorRequest",
    "color",
    "programUsesMouseChanged",
    "usesMouse",
    "programBracketedPasteModeChanged",
    "bracketedPasteMode",
    "outputChanged",
    "titleChanged",
    "title",
    "newTitle",
    "imageSizeChanged",
    "lineCount",
    "columnCount",
    "imageSizeInitialized",
    "imageResizeRequest",
    "size",
    "profileChangeCommandReceived",
    "text",
    "flowControlKeyPressed",
    "suspendKeyPressed",
    "primaryScreenInUse",
    "use",
    "cursorChanged",
    "KeyboardCursorShape",
    "cursorShape",
    "blinkingCursorEnabled",
    "handleCommandFromKeyboard",
    "KeyboardTranslator::Command",
    "command",
    "handleCtrlC",
    "outputFromKeypressEvent",
    "setImageSize",
    "lines",
    "columns",
    "sendText",
    "sendKeyEvent",
    "QKeyEvent*",
    "fromPaste",
    "sendMouseEvent",
    "buttons",
    "column",
    "line",
    "eventType",
    "sendString",
    "string",
    "length",
    "receiveData",
    "buffer",
    "dupDisplayCharacter",
    "wchar_t",
    "cc",
    "bufferedUpdate",
    "checkScreenInUse",
    "showBulk",
    "usesMouseChanged",
    "bracketedPasteModeChanged"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_Emulation[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      35,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      22,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,  224,    2, 0x06,    1 /* Public */,
       6,    2,  229,    2, 0x06,    4 /* Public */,
       7,    1,  234,    2, 0x06,    7 /* Public */,
       9,    1,  237,    2, 0x06,    9 /* Public */,
      10,    1,  240,    2, 0x06,   11 /* Public */,
      12,    0,  243,    2, 0x06,   13 /* Public */,
      13,    0,  244,    2, 0x06,   14 /* Public */,
      14,    1,  245,    2, 0x06,   15 /* Public */,
      16,    1,  248,    2, 0x06,   17 /* Public */,
      18,    1,  251,    2, 0x06,   19 /* Public */,
      20,    0,  254,    2, 0x06,   21 /* Public */,
      21,    2,  255,    2, 0x06,   22 /* Public */,
      24,    2,  260,    2, 0x06,   25 /* Public */,
      27,    0,  265,    2, 0x06,   28 /* Public */,
      28,    1,  266,    2, 0x06,   29 /* Public */,
      30,    1,  269,    2, 0x06,   31 /* Public */,
      32,    1,  272,    2, 0x06,   33 /* Public */,
      34,    1,  275,    2, 0x06,   35 /* Public */,
      36,    2,  278,    2, 0x06,   37 /* Public */,
      40,    1,  283,    2, 0x06,   40 /* Public */,
      43,    0,  286,    2, 0x06,   42 /* Public */,
      44,    0,  287,    2, 0x06,   43 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      45,    2,  288,    2, 0x0a,   44 /* Public */,
      48,    1,  293,    2, 0x0a,   47 /* Public */,
      49,    2,  296,    2, 0x0a,   49 /* Public */,
      52,    4,  301,    2, 0x0a,   52 /* Public */,
      57,    2,  310,    2, 0x0a,   57 /* Public */,
      57,    1,  315,    2, 0x2a,   60 /* Public | MethodCloned */,
      60,    2,  318,    2, 0x0a,   62 /* Public */,
      62,    1,  323,    2, 0x0a,   65 /* Public */,
      65,    0,  326,    2, 0x09,   67 /* Protected */,
      66,    0,  327,    2, 0x09,   68 /* Protected */,
      67,    0,  328,    2, 0x08,   69 /* Private */,
      68,    1,  329,    2, 0x08,   70 /* Private */,
      69,    1,  332,    2, 0x08,   72 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    4,    5,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    4,    5,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void, QMetaType::Bool,   17,
    QMetaType::Void, QMetaType::Bool,   19,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   22,   23,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   25,   26,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QSize,   29,
    QMetaType::Void, QMetaType::QString,   31,
    QMetaType::Void, QMetaType::Bool,   33,
    QMetaType::Void, QMetaType::Bool,   35,
    QMetaType::Void, 0x80000000 | 37, QMetaType::Bool,   38,   39,
    QMetaType::Void, 0x80000000 | 41,   42,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   46,   47,
    QMetaType::Void, QMetaType::QString,   31,
    QMetaType::Void, 0x80000000 | 50, QMetaType::Bool,    2,   51,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,   53,   54,   55,   56,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,   58,   59,
    QMetaType::Void, 0x80000000 | 3,   58,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,   61,    5,
    QMetaType::Void, 0x80000000 | 63,   64,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   17,
    QMetaType::Void, QMetaType::Bool,   19,

       0        // eod
};

Q_CONSTINIT const QMetaObject Emulation::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Emulation.offsetsAndSizes,
    qt_meta_data_Emulation,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_Emulation_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Emulation, std::true_type>,
        // method 'sendData'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const char *, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'dupDisplayOutput'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const char *, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'lockPtyRequest'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'useUtf8Request'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'stateSet'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'zmodemSendDetected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'zmodemRecvDetected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'changeTabTextColorRequest'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'programUsesMouseChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'programBracketedPasteModeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'outputChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'titleChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'imageSizeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'imageSizeInitialized'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'imageResizeRequest'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QSize &, std::false_type>,
        // method 'profileChangeCommandReceived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'flowControlKeyPressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'primaryScreenInUse'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'cursorChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<KeyboardCursorShape, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'handleCommandFromKeyboard'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<KeyboardTranslator::Command, std::false_type>,
        // method 'handleCtrlC'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'outputFromKeypressEvent'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setImageSize'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
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
        // method 'sendString'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const char *, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'sendString'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const char *, std::false_type>,
        // method 'receiveData'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const char *, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'dupDisplayCharacter'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<wchar_t, std::false_type>,
        // method 'bufferedUpdate'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'checkScreenInUse'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'showBulk'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'usesMouseChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'bracketedPasteModeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>
    >,
    nullptr
} };

void Emulation::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Emulation *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->sendData((*reinterpret_cast< std::add_pointer_t<const char*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 1: _t->dupDisplayOutput((*reinterpret_cast< std::add_pointer_t<const char*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 2: _t->lockPtyRequest((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 3: _t->useUtf8Request((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 4: _t->stateSet((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 5: _t->zmodemSendDetected(); break;
        case 6: _t->zmodemRecvDetected(); break;
        case 7: _t->changeTabTextColorRequest((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 8: _t->programUsesMouseChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 9: _t->programBracketedPasteModeChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 10: _t->outputChanged(); break;
        case 11: _t->titleChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 12: _t->imageSizeChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 13: _t->imageSizeInitialized(); break;
        case 14: _t->imageResizeRequest((*reinterpret_cast< std::add_pointer_t<QSize>>(_a[1]))); break;
        case 15: _t->profileChangeCommandReceived((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 16: _t->flowControlKeyPressed((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 17: _t->primaryScreenInUse((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 18: _t->cursorChanged((*reinterpret_cast< std::add_pointer_t<KeyboardCursorShape>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 19: _t->handleCommandFromKeyboard((*reinterpret_cast< std::add_pointer_t<KeyboardTranslator::Command>>(_a[1]))); break;
        case 20: _t->handleCtrlC(); break;
        case 21: _t->outputFromKeypressEvent(); break;
        case 22: _t->setImageSize((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 23: _t->sendText((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 24: _t->sendKeyEvent((*reinterpret_cast< std::add_pointer_t<QKeyEvent*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 25: _t->sendMouseEvent((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4]))); break;
        case 26: _t->sendString((*reinterpret_cast< std::add_pointer_t<const char*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 27: _t->sendString((*reinterpret_cast< std::add_pointer_t<const char*>>(_a[1]))); break;
        case 28: _t->receiveData((*reinterpret_cast< std::add_pointer_t<const char*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 29: _t->dupDisplayCharacter((*reinterpret_cast< std::add_pointer_t<wchar_t>>(_a[1]))); break;
        case 30: _t->bufferedUpdate(); break;
        case 31: _t->checkScreenInUse(); break;
        case 32: _t->showBulk(); break;
        case 33: _t->usesMouseChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 34: _t->bracketedPasteModeChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Emulation::*)(const char * , int );
            if (_t _q_method = &Emulation::sendData; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Emulation::*)(const char * , int );
            if (_t _q_method = &Emulation::dupDisplayOutput; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Emulation::*)(bool );
            if (_t _q_method = &Emulation::lockPtyRequest; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Emulation::*)(bool );
            if (_t _q_method = &Emulation::useUtf8Request; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Emulation::*)(int );
            if (_t _q_method = &Emulation::stateSet; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Emulation::*)();
            if (_t _q_method = &Emulation::zmodemSendDetected; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (Emulation::*)();
            if (_t _q_method = &Emulation::zmodemRecvDetected; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (Emulation::*)(int );
            if (_t _q_method = &Emulation::changeTabTextColorRequest; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (Emulation::*)(bool );
            if (_t _q_method = &Emulation::programUsesMouseChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (Emulation::*)(bool );
            if (_t _q_method = &Emulation::programBracketedPasteModeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (Emulation::*)();
            if (_t _q_method = &Emulation::outputChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (Emulation::*)(int , const QString & );
            if (_t _q_method = &Emulation::titleChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (Emulation::*)(int , int );
            if (_t _q_method = &Emulation::imageSizeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (Emulation::*)();
            if (_t _q_method = &Emulation::imageSizeInitialized; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (Emulation::*)(const QSize & );
            if (_t _q_method = &Emulation::imageResizeRequest; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (Emulation::*)(const QString & );
            if (_t _q_method = &Emulation::profileChangeCommandReceived; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (Emulation::*)(bool );
            if (_t _q_method = &Emulation::flowControlKeyPressed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (Emulation::*)(bool );
            if (_t _q_method = &Emulation::primaryScreenInUse; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (Emulation::*)(KeyboardCursorShape , bool );
            if (_t _q_method = &Emulation::cursorChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (Emulation::*)(KeyboardTranslator::Command );
            if (_t _q_method = &Emulation::handleCommandFromKeyboard; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (Emulation::*)();
            if (_t _q_method = &Emulation::handleCtrlC; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (Emulation::*)();
            if (_t _q_method = &Emulation::outputFromKeypressEvent; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 21;
                return;
            }
        }
    }
}

const QMetaObject *Emulation::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Emulation::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Emulation.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Emulation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 35)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 35;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 35)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 35;
    }
    return _id;
}

// SIGNAL 0
void Emulation::sendData(const char * _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Emulation::dupDisplayOutput(const char * _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Emulation::lockPtyRequest(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Emulation::useUtf8Request(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Emulation::stateSet(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Emulation::zmodemSendDetected()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void Emulation::zmodemRecvDetected()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void Emulation::changeTabTextColorRequest(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void Emulation::programUsesMouseChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void Emulation::programBracketedPasteModeChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void Emulation::outputChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void Emulation::titleChanged(int _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void Emulation::imageSizeChanged(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void Emulation::imageSizeInitialized()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}

// SIGNAL 14
void Emulation::imageResizeRequest(const QSize & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void Emulation::profileChangeCommandReceived(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void Emulation::flowControlKeyPressed(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void Emulation::primaryScreenInUse(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void Emulation::cursorChanged(KeyboardCursorShape _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void Emulation::handleCommandFromKeyboard(KeyboardTranslator::Command _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void Emulation::handleCtrlC()
{
    QMetaObject::activate(this, &staticMetaObject, 20, nullptr);
}

// SIGNAL 21
void Emulation::outputFromKeypressEvent()
{
    QMetaObject::activate(this, &staticMetaObject, 21, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
