/****************************************************************************
** Meta object code from reading C++ file 'konsole.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Libs/Konsole/konsole.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'konsole.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_QTermWidget_t {
    uint offsetsAndSizes[150];
    char stringdata0[12];
    char stringdata1[9];
    char stringdata2[1];
    char stringdata3[14];
    char stringdata4[13];
    char stringdata5[14];
    char stringdata6[15];
    char stringdata7[11];
    char stringdata8[13];
    char stringdata9[9];
    char stringdata10[7];
    char stringdata11[11];
    char stringdata12[9];
    char stringdata13[8];
    char stringdata14[13];
    char stringdata15[6];
    char stringdata16[26];
    char stringdata17[8];
    char stringdata18[9];
    char stringdata19[12];
    char stringdata20[17];
    char stringdata21[5];
    char stringdata22[4];
    char stringdata23[15];
    char stringdata24[8];
    char stringdata25[13];
    char stringdata26[6];
    char stringdata27[9];
    char stringdata28[26];
    char stringdata29[15];
    char stringdata30[6];
    char stringdata31[8];
    char stringdata32[25];
    char stringdata33[13];
    char stringdata34[6];
    char stringdata35[19];
    char stringdata36[19];
    char stringdata37[12];
    char stringdata38[14];
    char stringdata39[14];
    char stringdata40[15];
    char stringdata41[15];
    char stringdata42[10];
    char stringdata43[7];
    char stringdata44[8];
    char stringdata45[8];
    char stringdata46[15];
    char stringdata47[3];
    char stringdata48[16];
    char stringdata49[12];
    char stringdata50[6];
    char stringdata51[20];
    char stringdata52[12];
    char stringdata53[11];
    char stringdata54[7];
    char stringdata55[7];
    char stringdata56[6];
    char stringdata57[4];
    char stringdata58[13];
    char stringdata59[7];
    char stringdata60[11];
    char stringdata61[9];
    char stringdata62[7];
    char stringdata63[9];
    char stringdata64[15];
    char stringdata65[16];
    char stringdata66[19];
    char stringdata67[17];
    char stringdata68[13];
    char stringdata69[17];
    char stringdata70[17];
    char stringdata71[14];
    char stringdata72[31];
    char stringdata73[12];
    char stringdata74[22];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_QTermWidget_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_QTermWidget_t qt_meta_stringdata_QTermWidget = {
    {
        QT_MOC_LITERAL(0, 11),  // "QTermWidget"
        QT_MOC_LITERAL(12, 8),  // "finished"
        QT_MOC_LITERAL(21, 0),  // ""
        QT_MOC_LITERAL(22, 13),  // "copyAvailable"
        QT_MOC_LITERAL(36, 12),  // "termGetFocus"
        QT_MOC_LITERAL(49, 13),  // "termLostFocus"
        QT_MOC_LITERAL(63, 14),  // "termKeyPressed"
        QT_MOC_LITERAL(78, 10),  // "QKeyEvent*"
        QT_MOC_LITERAL(89, 12),  // "urlActivated"
        QT_MOC_LITERAL(102, 8),  // "uint32_t"
        QT_MOC_LITERAL(111, 6),  // "opcode"
        QT_MOC_LITERAL(118, 10),  // "notifyBell"
        QT_MOC_LITERAL(129, 8),  // "activity"
        QT_MOC_LITERAL(138, 7),  // "silence"
        QT_MOC_LITERAL(146, 12),  // "stateChanged"
        QT_MOC_LITERAL(159, 5),  // "state"
        QT_MOC_LITERAL(165, 25),  // "flowControlEnabledChanged"
        QT_MOC_LITERAL(191, 7),  // "enabled"
        QT_MOC_LITERAL(199, 8),  // "sendData"
        QT_MOC_LITERAL(208, 11),  // "const char*"
        QT_MOC_LITERAL(220, 16),  // "dupDisplayOutput"
        QT_MOC_LITERAL(237, 4),  // "data"
        QT_MOC_LITERAL(242, 3),  // "len"
        QT_MOC_LITERAL(246, 14),  // "profileChanged"
        QT_MOC_LITERAL(261, 7),  // "profile"
        QT_MOC_LITERAL(269, 12),  // "titleChanged"
        QT_MOC_LITERAL(282, 5),  // "title"
        QT_MOC_LITERAL(288, 8),  // "newTitle"
        QT_MOC_LITERAL(297, 25),  // "changeTabTextColorRequest"
        QT_MOC_LITERAL(323, 14),  // "termSizeChange"
        QT_MOC_LITERAL(338, 5),  // "lines"
        QT_MOC_LITERAL(344, 7),  // "columns"
        QT_MOC_LITERAL(352, 24),  // "mousePressEventForwarded"
        QT_MOC_LITERAL(377, 12),  // "QMouseEvent*"
        QT_MOC_LITERAL(390, 5),  // "event"
        QT_MOC_LITERAL(396, 18),  // "zmodemSendDetected"
        QT_MOC_LITERAL(415, 18),  // "zmodemRecvDetected"
        QT_MOC_LITERAL(434, 11),  // "handleCtrlC"
        QT_MOC_LITERAL(446, 13),  // "copyClipboard"
        QT_MOC_LITERAL(460, 13),  // "copySelection"
        QT_MOC_LITERAL(474, 14),  // "pasteClipboard"
        QT_MOC_LITERAL(489, 14),  // "pasteSelection"
        QT_MOC_LITERAL(504, 9),  // "selectAll"
        QT_MOC_LITERAL(514, 6),  // "zoomIn"
        QT_MOC_LITERAL(521, 7),  // "zoomOut"
        QT_MOC_LITERAL(529, 7),  // "setSize"
        QT_MOC_LITERAL(537, 14),  // "setKeyBindings"
        QT_MOC_LITERAL(552, 2),  // "kb"
        QT_MOC_LITERAL(555, 15),  // "clearScrollback"
        QT_MOC_LITERAL(571, 11),  // "clearScreen"
        QT_MOC_LITERAL(583, 5),  // "clear"
        QT_MOC_LITERAL(589, 19),  // "toggleShowSearchBar"
        QT_MOC_LITERAL(609, 11),  // "saveHistory"
        QT_MOC_LITERAL(621, 10),  // "QIODevice*"
        QT_MOC_LITERAL(632, 6),  // "device"
        QT_MOC_LITERAL(639, 6),  // "format"
        QT_MOC_LITERAL(646, 5),  // "start"
        QT_MOC_LITERAL(652, 3),  // "end"
        QT_MOC_LITERAL(656, 12),  // "QTextStream*"
        QT_MOC_LITERAL(669, 6),  // "stream"
        QT_MOC_LITERAL(676, 10),  // "screenShot"
        QT_MOC_LITERAL(687, 8),  // "QPixmap*"
        QT_MOC_LITERAL(696, 6),  // "pixmap"
        QT_MOC_LITERAL(703, 8),  // "fileName"
        QT_MOC_LITERAL(712, 14),  // "repaintDisplay"
        QT_MOC_LITERAL(727, 15),  // "sessionFinished"
        QT_MOC_LITERAL(743, 18),  // "updateTerminalSize"
        QT_MOC_LITERAL(762, 16),  // "selectionChanged"
        QT_MOC_LITERAL(779, 12),  // "textSelected"
        QT_MOC_LITERAL(792, 16),  // "monitorTimerDone"
        QT_MOC_LITERAL(809, 16),  // "activityStateSet"
        QT_MOC_LITERAL(826, 13),  // "cursorChanged"
        QT_MOC_LITERAL(840, 30),  // "Emulation::KeyboardCursorShape"
        QT_MOC_LITERAL(871, 11),  // "cursorShape"
        QT_MOC_LITERAL(883, 21)   // "blinkingCursorEnabled"
    },
    "QTermWidget",
    "finished",
    "",
    "copyAvailable",
    "termGetFocus",
    "termLostFocus",
    "termKeyPressed",
    "QKeyEvent*",
    "urlActivated",
    "uint32_t",
    "opcode",
    "notifyBell",
    "activity",
    "silence",
    "stateChanged",
    "state",
    "flowControlEnabledChanged",
    "enabled",
    "sendData",
    "const char*",
    "dupDisplayOutput",
    "data",
    "len",
    "profileChanged",
    "profile",
    "titleChanged",
    "title",
    "newTitle",
    "changeTabTextColorRequest",
    "termSizeChange",
    "lines",
    "columns",
    "mousePressEventForwarded",
    "QMouseEvent*",
    "event",
    "zmodemSendDetected",
    "zmodemRecvDetected",
    "handleCtrlC",
    "copyClipboard",
    "copySelection",
    "pasteClipboard",
    "pasteSelection",
    "selectAll",
    "zoomIn",
    "zoomOut",
    "setSize",
    "setKeyBindings",
    "kb",
    "clearScrollback",
    "clearScreen",
    "clear",
    "toggleShowSearchBar",
    "saveHistory",
    "QIODevice*",
    "device",
    "format",
    "start",
    "end",
    "QTextStream*",
    "stream",
    "screenShot",
    "QPixmap*",
    "pixmap",
    "fileName",
    "repaintDisplay",
    "sessionFinished",
    "updateTerminalSize",
    "selectionChanged",
    "textSelected",
    "monitorTimerDone",
    "activityStateSet",
    "cursorChanged",
    "Emulation::KeyboardCursorShape",
    "cursorShape",
    "blinkingCursorEnabled"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_QTermWidget[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      51,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      21,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  320,    2, 0x06,    1 /* Public */,
       3,    1,  321,    2, 0x06,    2 /* Public */,
       4,    0,  324,    2, 0x06,    4 /* Public */,
       5,    0,  325,    2, 0x06,    5 /* Public */,
       6,    1,  326,    2, 0x06,    6 /* Public */,
       8,    2,  329,    2, 0x06,    8 /* Public */,
      11,    0,  334,    2, 0x06,   11 /* Public */,
      12,    0,  335,    2, 0x06,   12 /* Public */,
      13,    0,  336,    2, 0x06,   13 /* Public */,
      14,    1,  337,    2, 0x06,   14 /* Public */,
      16,    1,  340,    2, 0x06,   16 /* Public */,
      18,    2,  343,    2, 0x06,   18 /* Public */,
      20,    2,  348,    2, 0x06,   21 /* Public */,
      23,    1,  353,    2, 0x06,   24 /* Public */,
      25,    2,  356,    2, 0x06,   26 /* Public */,
      28,    1,  361,    2, 0x06,   29 /* Public */,
      29,    2,  364,    2, 0x06,   31 /* Public */,
      32,    1,  369,    2, 0x06,   34 /* Public */,
      35,    0,  372,    2, 0x06,   36 /* Public */,
      36,    0,  373,    2, 0x06,   37 /* Public */,
      37,    0,  374,    2, 0x06,   38 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      38,    0,  375,    2, 0x0a,   39 /* Public */,
      39,    0,  376,    2, 0x0a,   40 /* Public */,
      40,    0,  377,    2, 0x0a,   41 /* Public */,
      41,    0,  378,    2, 0x0a,   42 /* Public */,
      42,    0,  379,    2, 0x0a,   43 /* Public */,
      43,    0,  380,    2, 0x0a,   44 /* Public */,
      44,    0,  381,    2, 0x0a,   45 /* Public */,
      45,    1,  382,    2, 0x0a,   46 /* Public */,
      46,    1,  385,    2, 0x0a,   48 /* Public */,
      48,    0,  388,    2, 0x0a,   50 /* Public */,
      49,    0,  389,    2, 0x0a,   51 /* Public */,
      50,    0,  390,    2, 0x0a,   52 /* Public */,
      51,    0,  391,    2, 0x0a,   53 /* Public */,
      52,    4,  392,    2, 0x0a,   54 /* Public */,
      52,    3,  401,    2, 0x2a,   59 /* Public | MethodCloned */,
      52,    2,  408,    2, 0x2a,   63 /* Public | MethodCloned */,
      52,    1,  413,    2, 0x2a,   66 /* Public | MethodCloned */,
      52,    4,  416,    2, 0x0a,   68 /* Public */,
      52,    3,  425,    2, 0x2a,   73 /* Public | MethodCloned */,
      52,    2,  432,    2, 0x2a,   77 /* Public | MethodCloned */,
      52,    1,  437,    2, 0x2a,   80 /* Public | MethodCloned */,
      60,    1,  440,    2, 0x0a,   82 /* Public */,
      60,    1,  443,    2, 0x0a,   84 /* Public */,
      64,    0,  446,    2, 0x0a,   86 /* Public */,
      65,    0,  447,    2, 0x09,   87 /* Protected */,
      66,    0,  448,    2, 0x09,   88 /* Protected */,
      67,    1,  449,    2, 0x09,   89 /* Protected */,
      69,    0,  452,    2, 0x09,   91 /* Protected */,
      70,    1,  453,    2, 0x09,   92 /* Protected */,
      71,    2,  456,    2, 0x08,   94 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    2,
    QMetaType::Void, QMetaType::QUrl, 0x80000000 | 9,    2,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void, QMetaType::Bool,   17,
    QMetaType::Void, 0x80000000 | 19, QMetaType::Int,    2,    2,
    QMetaType::Void, 0x80000000 | 19, QMetaType::Int,   21,   22,
    QMetaType::Void, QMetaType::QString,   24,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   26,   27,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   30,   31,
    QMetaType::Void, 0x80000000 | 33,   34,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Int,
    QMetaType::Int,
    QMetaType::Void, QMetaType::QSize,    2,
    QMetaType::Void, QMetaType::QString,   47,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 53, QMetaType::Int, QMetaType::Int, QMetaType::Int,   54,   55,   56,   57,
    QMetaType::Void, 0x80000000 | 53, QMetaType::Int, QMetaType::Int,   54,   55,   56,
    QMetaType::Void, 0x80000000 | 53, QMetaType::Int,   54,   55,
    QMetaType::Void, 0x80000000 | 53,   54,
    QMetaType::Void, 0x80000000 | 58, QMetaType::Int, QMetaType::Int, QMetaType::Int,   59,   55,   56,   57,
    QMetaType::Void, 0x80000000 | 58, QMetaType::Int, QMetaType::Int,   59,   55,   56,
    QMetaType::Void, 0x80000000 | 58, QMetaType::Int,   59,   55,
    QMetaType::Void, 0x80000000 | 58,   59,
    QMetaType::Void, 0x80000000 | 61,   62,
    QMetaType::Void, QMetaType::QString,   63,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   68,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, 0x80000000 | 72, QMetaType::Bool,   73,   74,

       0        // eod
};

Q_CONSTINIT const QMetaObject QTermWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_QTermWidget.offsetsAndSizes,
    qt_meta_data_QTermWidget,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_QTermWidget_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QTermWidget, std::true_type>,
        // method 'finished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'copyAvailable'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'termGetFocus'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'termLostFocus'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'termKeyPressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QKeyEvent *, std::false_type>,
        // method 'urlActivated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QUrl &, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint32_t, std::false_type>,
        // method 'notifyBell'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'activity'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'silence'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'stateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'flowControlEnabledChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'sendData'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const char *, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'dupDisplayOutput'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const char *, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'profileChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'titleChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'changeTabTextColorRequest'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'termSizeChange'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'mousePressEventForwarded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QMouseEvent *, std::false_type>,
        // method 'zmodemSendDetected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'zmodemRecvDetected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'handleCtrlC'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'copyClipboard'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'copySelection'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'pasteClipboard'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'pasteSelection'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'selectAll'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'zoomIn'
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'zoomOut'
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'setSize'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QSize &, std::false_type>,
        // method 'setKeyBindings'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'clearScrollback'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'clearScreen'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'clear'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'toggleShowSearchBar'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'saveHistory'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QIODevice *, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'saveHistory'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QIODevice *, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'saveHistory'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QIODevice *, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'saveHistory'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QIODevice *, std::false_type>,
        // method 'saveHistory'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QTextStream *, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'saveHistory'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QTextStream *, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'saveHistory'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QTextStream *, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'saveHistory'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QTextStream *, std::false_type>,
        // method 'screenShot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QPixmap *, std::false_type>,
        // method 'screenShot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'repaintDisplay'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'sessionFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateTerminalSize'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'selectionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'monitorTimerDone'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'activityStateSet'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'cursorChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Emulation::KeyboardCursorShape, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>
    >,
    nullptr
} };

void QTermWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QTermWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->finished(); break;
        case 1: _t->copyAvailable((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 2: _t->termGetFocus(); break;
        case 3: _t->termLostFocus(); break;
        case 4: _t->termKeyPressed((*reinterpret_cast< std::add_pointer_t<QKeyEvent*>>(_a[1]))); break;
        case 5: _t->urlActivated((*reinterpret_cast< std::add_pointer_t<QUrl>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<uint32_t>>(_a[2]))); break;
        case 6: _t->notifyBell(); break;
        case 7: _t->activity(); break;
        case 8: _t->silence(); break;
        case 9: _t->stateChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 10: _t->flowControlEnabledChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 11: _t->sendData((*reinterpret_cast< std::add_pointer_t<const char*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 12: _t->dupDisplayOutput((*reinterpret_cast< std::add_pointer_t<const char*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 13: _t->profileChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 14: _t->titleChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 15: _t->changeTabTextColorRequest((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 16: _t->termSizeChange((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 17: _t->mousePressEventForwarded((*reinterpret_cast< std::add_pointer_t<QMouseEvent*>>(_a[1]))); break;
        case 18: _t->zmodemSendDetected(); break;
        case 19: _t->zmodemRecvDetected(); break;
        case 20: _t->handleCtrlC(); break;
        case 21: _t->copyClipboard(); break;
        case 22: _t->copySelection(); break;
        case 23: _t->pasteClipboard(); break;
        case 24: _t->pasteSelection(); break;
        case 25: _t->selectAll(); break;
        case 26: { int _r = _t->zoomIn();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 27: { int _r = _t->zoomOut();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 28: _t->setSize((*reinterpret_cast< std::add_pointer_t<QSize>>(_a[1]))); break;
        case 29: _t->setKeyBindings((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 30: _t->clearScrollback(); break;
        case 31: _t->clearScreen(); break;
        case 32: _t->clear(); break;
        case 33: _t->toggleShowSearchBar(); break;
        case 34: _t->saveHistory((*reinterpret_cast< std::add_pointer_t<QIODevice*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4]))); break;
        case 35: _t->saveHistory((*reinterpret_cast< std::add_pointer_t<QIODevice*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        case 36: _t->saveHistory((*reinterpret_cast< std::add_pointer_t<QIODevice*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 37: _t->saveHistory((*reinterpret_cast< std::add_pointer_t<QIODevice*>>(_a[1]))); break;
        case 38: _t->saveHistory((*reinterpret_cast< std::add_pointer_t<QTextStream*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4]))); break;
        case 39: _t->saveHistory((*reinterpret_cast< std::add_pointer_t<QTextStream*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        case 40: _t->saveHistory((*reinterpret_cast< std::add_pointer_t<QTextStream*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 41: _t->saveHistory((*reinterpret_cast< std::add_pointer_t<QTextStream*>>(_a[1]))); break;
        case 42: _t->screenShot((*reinterpret_cast< std::add_pointer_t<QPixmap*>>(_a[1]))); break;
        case 43: _t->screenShot((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 44: _t->repaintDisplay(); break;
        case 45: _t->sessionFinished(); break;
        case 46: _t->updateTerminalSize(); break;
        case 47: _t->selectionChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 48: _t->monitorTimerDone(); break;
        case 49: _t->activityStateSet((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 50: _t->cursorChanged((*reinterpret_cast< std::add_pointer_t<Emulation::KeyboardCursorShape>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 34:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QIODevice* >(); break;
            }
            break;
        case 35:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QIODevice* >(); break;
            }
            break;
        case 36:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QIODevice* >(); break;
            }
            break;
        case 37:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QIODevice* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QTermWidget::*)();
            if (_t _q_method = &QTermWidget::finished; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QTermWidget::*)(bool );
            if (_t _q_method = &QTermWidget::copyAvailable; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QTermWidget::*)();
            if (_t _q_method = &QTermWidget::termGetFocus; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QTermWidget::*)();
            if (_t _q_method = &QTermWidget::termLostFocus; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (QTermWidget::*)(QKeyEvent * );
            if (_t _q_method = &QTermWidget::termKeyPressed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (QTermWidget::*)(const QUrl & , uint32_t );
            if (_t _q_method = &QTermWidget::urlActivated; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (QTermWidget::*)();
            if (_t _q_method = &QTermWidget::notifyBell; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (QTermWidget::*)();
            if (_t _q_method = &QTermWidget::activity; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (QTermWidget::*)();
            if (_t _q_method = &QTermWidget::silence; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (QTermWidget::*)(int );
            if (_t _q_method = &QTermWidget::stateChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (QTermWidget::*)(bool );
            if (_t _q_method = &QTermWidget::flowControlEnabledChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (QTermWidget::*)(const char * , int );
            if (_t _q_method = &QTermWidget::sendData; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (QTermWidget::*)(const char * , int );
            if (_t _q_method = &QTermWidget::dupDisplayOutput; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (QTermWidget::*)(const QString & );
            if (_t _q_method = &QTermWidget::profileChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (QTermWidget::*)(int , const QString & );
            if (_t _q_method = &QTermWidget::titleChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (QTermWidget::*)(int );
            if (_t _q_method = &QTermWidget::changeTabTextColorRequest; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (QTermWidget::*)(int , int );
            if (_t _q_method = &QTermWidget::termSizeChange; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (QTermWidget::*)(QMouseEvent * );
            if (_t _q_method = &QTermWidget::mousePressEventForwarded; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (QTermWidget::*)();
            if (_t _q_method = &QTermWidget::zmodemSendDetected; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (QTermWidget::*)();
            if (_t _q_method = &QTermWidget::zmodemRecvDetected; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (QTermWidget::*)();
            if (_t _q_method = &QTermWidget::handleCtrlC; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 20;
                return;
            }
        }
    }
}

const QMetaObject *QTermWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QTermWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QTermWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QTermWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 51)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 51;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 51)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 51;
    }
    return _id;
}

// SIGNAL 0
void QTermWidget::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QTermWidget::copyAvailable(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QTermWidget::termGetFocus()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QTermWidget::termLostFocus()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void QTermWidget::termKeyPressed(QKeyEvent * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QTermWidget::urlActivated(const QUrl & _t1, uint32_t _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QTermWidget::notifyBell()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void QTermWidget::activity()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void QTermWidget::silence()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void QTermWidget::stateChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void QTermWidget::flowControlEnabledChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void QTermWidget::sendData(const char * _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void QTermWidget::dupDisplayOutput(const char * _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void QTermWidget::profileChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void QTermWidget::titleChanged(int _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void QTermWidget::changeTabTextColorRequest(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void QTermWidget::termSizeChange(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void QTermWidget::mousePressEventForwarded(QMouseEvent * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void QTermWidget::zmodemSendDetected()
{
    QMetaObject::activate(this, &staticMetaObject, 18, nullptr);
}

// SIGNAL 19
void QTermWidget::zmodemRecvDetected()
{
    QMetaObject::activate(this, &staticMetaObject, 19, nullptr);
}

// SIGNAL 20
void QTermWidget::handleCtrlC()
{
    QMetaObject::activate(this, &staticMetaObject, 20, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
