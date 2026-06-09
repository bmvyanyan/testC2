/****************************************************************************
** Meta object code from reading C++ file 'TerminalDisplay.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Libs/Konsole/TerminalDisplay.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TerminalDisplay.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_TerminalDisplay_t {
    uint offsetsAndSizes[176];
    char stringdata0[16];
    char stringdata1[17];
    char stringdata2[1];
    char stringdata3[11];
    char stringdata4[2];
    char stringdata5[10];
    char stringdata6[12];
    char stringdata7[7];
    char stringdata8[7];
    char stringdata9[5];
    char stringdata10[10];
    char stringdata11[25];
    char stringdata12[13];
    char stringdata13[6];
    char stringdata14[24];
    char stringdata15[7];
    char stringdata16[6];
    char stringdata17[25];
    char stringdata18[26];
    char stringdata19[17];
    char stringdata20[9];
    char stringdata21[22];
    char stringdata22[9];
    char stringdata23[6];
    char stringdata24[9];
    char stringdata25[16];
    char stringdata26[16];
    char stringdata27[12];
    char stringdata28[14];
    char stringdata29[13];
    char stringdata30[14];
    char stringdata31[11];
    char stringdata32[17];
    char stringdata33[12];
    char stringdata34[12];
    char stringdata35[14];
    char stringdata36[21];
    char stringdata37[14];
    char stringdata38[17];
    char stringdata39[5];
    char stringdata40[15];
    char stringdata41[15];
    char stringdata42[10];
    char stringdata43[29];
    char stringdata44[8];
    char stringdata45[26];
    char stringdata46[16];
    char stringdata47[10];
    char stringdata48[13];
    char stringdata49[10];
    char stringdata50[19];
    char stringdata51[4];
    char stringdata52[22];
    char stringdata53[19];
    char stringdata54[5];
    char stringdata55[19];
    char stringdata56[6];
    char stringdata57[19];
    char stringdata58[19];
    char stringdata59[8];
    char stringdata60[17];
    char stringdata61[20];
    char stringdata62[8];
    char stringdata63[11];
    char stringdata64[11];
    char stringdata65[11];
    char stringdata66[2];
    char stringdata67[11];
    char stringdata68[2];
    char stringdata69[10];
    char stringdata70[5];
    char stringdata71[5];
    char stringdata72[5];
    char stringdata73[5];
    char stringdata74[10];
    char stringdata75[15];
    char stringdata76[23];
    char stringdata77[9];
    char stringdata78[7];
    char stringdata79[25];
    char stringdata80[4];
    char stringdata81[25];
    char stringdata82[6];
    char stringdata83[11];
    char stringdata84[17];
    char stringdata85[11];
    char stringdata86[15];
    char stringdata87[19];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_TerminalDisplay_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_TerminalDisplay_t qt_meta_stringdata_TerminalDisplay = {
    {
        QT_MOC_LITERAL(0, 15),  // "TerminalDisplay"
        QT_MOC_LITERAL(16, 16),  // "keyPressedSignal"
        QT_MOC_LITERAL(33, 0),  // ""
        QT_MOC_LITERAL(34, 10),  // "QKeyEvent*"
        QT_MOC_LITERAL(45, 1),  // "e"
        QT_MOC_LITERAL(47, 9),  // "fromPaste"
        QT_MOC_LITERAL(57, 11),  // "mouseSignal"
        QT_MOC_LITERAL(69, 6),  // "button"
        QT_MOC_LITERAL(76, 6),  // "column"
        QT_MOC_LITERAL(83, 4),  // "line"
        QT_MOC_LITERAL(88, 9),  // "eventType"
        QT_MOC_LITERAL(98, 24),  // "mousePressEventForwarded"
        QT_MOC_LITERAL(123, 12),  // "QMouseEvent*"
        QT_MOC_LITERAL(136, 5),  // "event"
        QT_MOC_LITERAL(142, 23),  // "changedFontMetricSignal"
        QT_MOC_LITERAL(166, 6),  // "height"
        QT_MOC_LITERAL(173, 5),  // "width"
        QT_MOC_LITERAL(179, 24),  // "changedContentSizeSignal"
        QT_MOC_LITERAL(204, 25),  // "changedContentCountSignal"
        QT_MOC_LITERAL(230, 16),  // "configureRequest"
        QT_MOC_LITERAL(247, 8),  // "position"
        QT_MOC_LITERAL(256, 21),  // "overrideShortcutCheck"
        QT_MOC_LITERAL(278, 8),  // "keyEvent"
        QT_MOC_LITERAL(287, 5),  // "bool&"
        QT_MOC_LITERAL(293, 8),  // "override"
        QT_MOC_LITERAL(302, 15),  // "isBusySelecting"
        QT_MOC_LITERAL(318, 15),  // "sendStringToEmu"
        QT_MOC_LITERAL(334, 11),  // "const char*"
        QT_MOC_LITERAL(346, 13),  // "copyAvailable"
        QT_MOC_LITERAL(360, 12),  // "termGetFocus"
        QT_MOC_LITERAL(373, 13),  // "termLostFocus"
        QT_MOC_LITERAL(387, 10),  // "notifyBell"
        QT_MOC_LITERAL(398, 16),  // "usesMouseChanged"
        QT_MOC_LITERAL(415, 11),  // "handleCtrlC"
        QT_MOC_LITERAL(427, 11),  // "updateImage"
        QT_MOC_LITERAL(439, 13),  // "updateFilters"
        QT_MOC_LITERAL(453, 20),  // "updateLineProperties"
        QT_MOC_LITERAL(474, 13),  // "copyClipboard"
        QT_MOC_LITERAL(488, 16),  // "QClipboard::Mode"
        QT_MOC_LITERAL(505, 4),  // "mode"
        QT_MOC_LITERAL(510, 14),  // "pasteClipboard"
        QT_MOC_LITERAL(525, 14),  // "pasteSelection"
        QT_MOC_LITERAL(540, 9),  // "selectAll"
        QT_MOC_LITERAL(550, 28),  // "setFlowControlWarningEnabled"
        QT_MOC_LITERAL(579, 7),  // "enabled"
        QT_MOC_LITERAL(587, 25),  // "flowControlWarningEnabled"
        QT_MOC_LITERAL(613, 15),  // "outputSuspended"
        QT_MOC_LITERAL(629, 9),  // "suspended"
        QT_MOC_LITERAL(639, 12),  // "setUsesMouse"
        QT_MOC_LITERAL(652, 9),  // "usesMouse"
        QT_MOC_LITERAL(662, 18),  // "usingPrimaryScreen"
        QT_MOC_LITERAL(681, 3),  // "use"
        QT_MOC_LITERAL(685, 21),  // "setBracketedPasteMode"
        QT_MOC_LITERAL(707, 18),  // "bracketedPasteMode"
        QT_MOC_LITERAL(726, 4),  // "bell"
        QT_MOC_LITERAL(731, 18),  // "setBackgroundColor"
        QT_MOC_LITERAL(750, 5),  // "color"
        QT_MOC_LITERAL(756, 18),  // "setForegroundColor"
        QT_MOC_LITERAL(775, 18),  // "setColorTableColor"
        QT_MOC_LITERAL(794, 7),  // "colorId"
        QT_MOC_LITERAL(802, 16),  // "selectionChanged"
        QT_MOC_LITERAL(819, 19),  // "setSelectionOpacity"
        QT_MOC_LITERAL(839, 7),  // "opacity"
        QT_MOC_LITERAL(847, 10),  // "getCursorX"
        QT_MOC_LITERAL(858, 10),  // "getCursorY"
        QT_MOC_LITERAL(869, 10),  // "setCursorX"
        QT_MOC_LITERAL(880, 1),  // "x"
        QT_MOC_LITERAL(882, 10),  // "setCursorY"
        QT_MOC_LITERAL(893, 1),  // "y"
        QT_MOC_LITERAL(895, 9),  // "screenGet"
        QT_MOC_LITERAL(905, 4),  // "row1"
        QT_MOC_LITERAL(910, 4),  // "col1"
        QT_MOC_LITERAL(915, 4),  // "row2"
        QT_MOC_LITERAL(920, 4),  // "col2"
        QT_MOC_LITERAL(925, 9),  // "setLocked"
        QT_MOC_LITERAL(935, 14),  // "repaintDisplay"
        QT_MOC_LITERAL(950, 22),  // "setMessageParentWidget"
        QT_MOC_LITERAL(973, 8),  // "QWidget*"
        QT_MOC_LITERAL(982, 6),  // "parent"
        QT_MOC_LITERAL(989, 24),  // "set_fix_quardCRT_issue33"
        QT_MOC_LITERAL(1014, 3),  // "fix"
        QT_MOC_LITERAL(1018, 24),  // "scrollBarPositionChanged"
        QT_MOC_LITERAL(1043, 5),  // "value"
        QT_MOC_LITERAL(1049, 10),  // "blinkEvent"
        QT_MOC_LITERAL(1060, 16),  // "blinkCursorEvent"
        QT_MOC_LITERAL(1077, 10),  // "enableBell"
        QT_MOC_LITERAL(1088, 14),  // "swapColorTable"
        QT_MOC_LITERAL(1103, 18)   // "tripleClickTimeout"
    },
    "TerminalDisplay",
    "keyPressedSignal",
    "",
    "QKeyEvent*",
    "e",
    "fromPaste",
    "mouseSignal",
    "button",
    "column",
    "line",
    "eventType",
    "mousePressEventForwarded",
    "QMouseEvent*",
    "event",
    "changedFontMetricSignal",
    "height",
    "width",
    "changedContentSizeSignal",
    "changedContentCountSignal",
    "configureRequest",
    "position",
    "overrideShortcutCheck",
    "keyEvent",
    "bool&",
    "override",
    "isBusySelecting",
    "sendStringToEmu",
    "const char*",
    "copyAvailable",
    "termGetFocus",
    "termLostFocus",
    "notifyBell",
    "usesMouseChanged",
    "handleCtrlC",
    "updateImage",
    "updateFilters",
    "updateLineProperties",
    "copyClipboard",
    "QClipboard::Mode",
    "mode",
    "pasteClipboard",
    "pasteSelection",
    "selectAll",
    "setFlowControlWarningEnabled",
    "enabled",
    "flowControlWarningEnabled",
    "outputSuspended",
    "suspended",
    "setUsesMouse",
    "usesMouse",
    "usingPrimaryScreen",
    "use",
    "setBracketedPasteMode",
    "bracketedPasteMode",
    "bell",
    "setBackgroundColor",
    "color",
    "setForegroundColor",
    "setColorTableColor",
    "colorId",
    "selectionChanged",
    "setSelectionOpacity",
    "opacity",
    "getCursorX",
    "getCursorY",
    "setCursorX",
    "x",
    "setCursorY",
    "y",
    "screenGet",
    "row1",
    "col1",
    "row2",
    "col2",
    "setLocked",
    "repaintDisplay",
    "setMessageParentWidget",
    "QWidget*",
    "parent",
    "set_fix_quardCRT_issue33",
    "fix",
    "scrollBarPositionChanged",
    "value",
    "blinkEvent",
    "blinkCursorEvent",
    "enableBell",
    "swapColorTable",
    "tripleClickTimeout"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_TerminalDisplay[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      53,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      16,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,  332,    2, 0x06,    1 /* Public */,
       6,    4,  337,    2, 0x06,    4 /* Public */,
      11,    1,  346,    2, 0x06,    9 /* Public */,
      14,    2,  349,    2, 0x06,   11 /* Public */,
      17,    2,  354,    2, 0x06,   14 /* Public */,
      18,    2,  359,    2, 0x06,   17 /* Public */,
      19,    1,  364,    2, 0x06,   20 /* Public */,
      21,    2,  367,    2, 0x06,   22 /* Public */,
      25,    1,  372,    2, 0x06,   25 /* Public */,
      26,    1,  375,    2, 0x06,   27 /* Public */,
      28,    1,  378,    2, 0x06,   29 /* Public */,
      29,    0,  381,    2, 0x06,   31 /* Public */,
      30,    0,  382,    2, 0x06,   32 /* Public */,
      31,    0,  383,    2, 0x06,   33 /* Public */,
      32,    0,  384,    2, 0x06,   34 /* Public */,
      33,    0,  385,    2, 0x06,   35 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      34,    0,  386,    2, 0x0a,   36 /* Public */,
      35,    0,  387,    2, 0x0a,   37 /* Public */,
      36,    0,  388,    2, 0x0a,   38 /* Public */,
      37,    1,  389,    2, 0x0a,   39 /* Public */,
      37,    0,  392,    2, 0x2a,   41 /* Public | MethodCloned */,
      40,    0,  393,    2, 0x0a,   42 /* Public */,
      41,    0,  394,    2, 0x0a,   43 /* Public */,
      42,    0,  395,    2, 0x0a,   44 /* Public */,
      43,    1,  396,    2, 0x0a,   45 /* Public */,
      45,    0,  399,    2, 0x10a,   47 /* Public | MethodIsConst  */,
      46,    1,  400,    2, 0x0a,   48 /* Public */,
      48,    1,  403,    2, 0x0a,   50 /* Public */,
      49,    0,  406,    2, 0x10a,   52 /* Public | MethodIsConst  */,
      50,    1,  407,    2, 0x0a,   53 /* Public */,
      52,    1,  410,    2, 0x0a,   55 /* Public */,
      53,    0,  413,    2, 0x10a,   57 /* Public | MethodIsConst  */,
      54,    0,  414,    2, 0x0a,   58 /* Public */,
      55,    1,  415,    2, 0x0a,   59 /* Public */,
      57,    1,  418,    2, 0x0a,   61 /* Public */,
      58,    2,  421,    2, 0x0a,   63 /* Public */,
      60,    0,  426,    2, 0x0a,   66 /* Public */,
      61,    1,  427,    2, 0x0a,   67 /* Public */,
      63,    0,  430,    2, 0x10a,   69 /* Public | MethodIsConst  */,
      64,    0,  431,    2, 0x10a,   70 /* Public | MethodIsConst  */,
      65,    1,  432,    2, 0x0a,   71 /* Public */,
      67,    1,  435,    2, 0x0a,   73 /* Public */,
      69,    5,  438,    2, 0x0a,   75 /* Public */,
      74,    1,  449,    2, 0x0a,   81 /* Public */,
      75,    0,  452,    2, 0x0a,   83 /* Public */,
      76,    1,  453,    2, 0x0a,   84 /* Public */,
      79,    1,  456,    2, 0x0a,   86 /* Public */,
      81,    1,  459,    2, 0x09,   88 /* Protected */,
      83,    0,  462,    2, 0x09,   90 /* Protected */,
      84,    0,  463,    2, 0x09,   91 /* Protected */,
      85,    0,  464,    2, 0x09,   92 /* Protected */,
      86,    0,  465,    2, 0x08,   93 /* Private */,
      87,    0,  466,    2, 0x08,   94 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool,    4,    5,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,    7,    8,    9,   10,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   15,   16,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   15,   16,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    9,    8,
    QMetaType::Void, QMetaType::QPoint,   20,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 23,   22,   24,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, 0x80000000 | 27,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 38,   39,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   44,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   47,
    QMetaType::Void, QMetaType::Bool,   49,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   51,
    QMetaType::Void, QMetaType::Bool,   53,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QColor,   56,
    QMetaType::Void, QMetaType::QColor,   56,
    QMetaType::Void, QMetaType::Int, QMetaType::QColor,   59,   56,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QReal,   62,
    QMetaType::Int,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Int,   66,
    QMetaType::Void, QMetaType::Int,   68,
    QMetaType::QString, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,   70,   71,   72,   73,   39,
    QMetaType::Void, QMetaType::Bool,   44,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 77,   78,
    QMetaType::Void, QMetaType::Bool,   80,
    QMetaType::Void, QMetaType::Int,   82,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject TerminalDisplay::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_TerminalDisplay.offsetsAndSizes,
    qt_meta_data_TerminalDisplay,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_TerminalDisplay_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TerminalDisplay, std::true_type>,
        // method 'keyPressedSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QKeyEvent *, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'mouseSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'mousePressEventForwarded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QMouseEvent *, std::false_type>,
        // method 'changedFontMetricSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'changedContentSizeSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'changedContentCountSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'configureRequest'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPoint &, std::false_type>,
        // method 'overrideShortcutCheck'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QKeyEvent *, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool &, std::false_type>,
        // method 'isBusySelecting'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'sendStringToEmu'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const char *, std::false_type>,
        // method 'copyAvailable'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'termGetFocus'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'termLostFocus'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'notifyBell'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'usesMouseChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'handleCtrlC'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateImage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateFilters'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateLineProperties'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'copyClipboard'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QClipboard::Mode, std::false_type>,
        // method 'copyClipboard'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'pasteClipboard'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'pasteSelection'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'selectAll'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setFlowControlWarningEnabled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'flowControlWarningEnabled'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'outputSuspended'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setUsesMouse'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'usesMouse'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'usingPrimaryScreen'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setBracketedPasteMode'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'bracketedPasteMode'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'bell'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setBackgroundColor'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QColor &, std::false_type>,
        // method 'setForegroundColor'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QColor &, std::false_type>,
        // method 'setColorTableColor'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QColor &, std::false_type>,
        // method 'selectionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setSelectionOpacity'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qreal, std::false_type>,
        // method 'getCursorX'
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'getCursorY'
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'setCursorX'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'setCursorY'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'screenGet'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'setLocked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'repaintDisplay'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setMessageParentWidget'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QWidget *, std::false_type>,
        // method 'set_fix_quardCRT_issue33'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'scrollBarPositionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'blinkEvent'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'blinkCursorEvent'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'enableBell'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'swapColorTable'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'tripleClickTimeout'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void TerminalDisplay::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TerminalDisplay *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->keyPressedSignal((*reinterpret_cast< std::add_pointer_t<QKeyEvent*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 1: _t->mouseSignal((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4]))); break;
        case 2: _t->mousePressEventForwarded((*reinterpret_cast< std::add_pointer_t<QMouseEvent*>>(_a[1]))); break;
        case 3: _t->changedFontMetricSignal((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 4: _t->changedContentSizeSignal((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 5: _t->changedContentCountSignal((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 6: _t->configureRequest((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 7: _t->overrideShortcutCheck((*reinterpret_cast< std::add_pointer_t<QKeyEvent*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool&>>(_a[2]))); break;
        case 8: _t->isBusySelecting((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 9: _t->sendStringToEmu((*reinterpret_cast< std::add_pointer_t<const char*>>(_a[1]))); break;
        case 10: _t->copyAvailable((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 11: _t->termGetFocus(); break;
        case 12: _t->termLostFocus(); break;
        case 13: _t->notifyBell(); break;
        case 14: _t->usesMouseChanged(); break;
        case 15: _t->handleCtrlC(); break;
        case 16: _t->updateImage(); break;
        case 17: _t->updateFilters(); break;
        case 18: _t->updateLineProperties(); break;
        case 19: _t->copyClipboard((*reinterpret_cast< std::add_pointer_t<QClipboard::Mode>>(_a[1]))); break;
        case 20: _t->copyClipboard(); break;
        case 21: _t->pasteClipboard(); break;
        case 22: _t->pasteSelection(); break;
        case 23: _t->selectAll(); break;
        case 24: _t->setFlowControlWarningEnabled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 25: { bool _r = _t->flowControlWarningEnabled();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 26: _t->outputSuspended((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 27: _t->setUsesMouse((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 28: { bool _r = _t->usesMouse();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 29: _t->usingPrimaryScreen((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 30: _t->setBracketedPasteMode((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 31: { bool _r = _t->bracketedPasteMode();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 32: _t->bell(); break;
        case 33: _t->setBackgroundColor((*reinterpret_cast< std::add_pointer_t<QColor>>(_a[1]))); break;
        case 34: _t->setForegroundColor((*reinterpret_cast< std::add_pointer_t<QColor>>(_a[1]))); break;
        case 35: _t->setColorTableColor((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QColor>>(_a[2]))); break;
        case 36: _t->selectionChanged(); break;
        case 37: _t->setSelectionOpacity((*reinterpret_cast< std::add_pointer_t<qreal>>(_a[1]))); break;
        case 38: { int _r = _t->getCursorX();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 39: { int _r = _t->getCursorY();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 40: _t->setCursorX((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 41: _t->setCursorY((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 42: { QString _r = _t->screenGet((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[5])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 43: _t->setLocked((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 44: _t->repaintDisplay(); break;
        case 45: _t->setMessageParentWidget((*reinterpret_cast< std::add_pointer_t<QWidget*>>(_a[1]))); break;
        case 46: _t->set_fix_quardCRT_issue33((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 47: _t->scrollBarPositionChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 48: _t->blinkEvent(); break;
        case 49: _t->blinkCursorEvent(); break;
        case 50: _t->enableBell(); break;
        case 51: _t->swapColorTable(); break;
        case 52: _t->tripleClickTimeout(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 45:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QWidget* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TerminalDisplay::*)(QKeyEvent * , bool );
            if (_t _q_method = &TerminalDisplay::keyPressedSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (TerminalDisplay::*)(int , int , int , int );
            if (_t _q_method = &TerminalDisplay::mouseSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (TerminalDisplay::*)(QMouseEvent * );
            if (_t _q_method = &TerminalDisplay::mousePressEventForwarded; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (TerminalDisplay::*)(int , int );
            if (_t _q_method = &TerminalDisplay::changedFontMetricSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (TerminalDisplay::*)(int , int );
            if (_t _q_method = &TerminalDisplay::changedContentSizeSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (TerminalDisplay::*)(int , int );
            if (_t _q_method = &TerminalDisplay::changedContentCountSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (TerminalDisplay::*)(const QPoint & );
            if (_t _q_method = &TerminalDisplay::configureRequest; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (TerminalDisplay::*)(QKeyEvent * , bool & );
            if (_t _q_method = &TerminalDisplay::overrideShortcutCheck; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (TerminalDisplay::*)(bool );
            if (_t _q_method = &TerminalDisplay::isBusySelecting; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (TerminalDisplay::*)(const char * );
            if (_t _q_method = &TerminalDisplay::sendStringToEmu; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (TerminalDisplay::*)(bool );
            if (_t _q_method = &TerminalDisplay::copyAvailable; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (TerminalDisplay::*)();
            if (_t _q_method = &TerminalDisplay::termGetFocus; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (TerminalDisplay::*)();
            if (_t _q_method = &TerminalDisplay::termLostFocus; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (TerminalDisplay::*)();
            if (_t _q_method = &TerminalDisplay::notifyBell; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (TerminalDisplay::*)();
            if (_t _q_method = &TerminalDisplay::usesMouseChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (TerminalDisplay::*)();
            if (_t _q_method = &TerminalDisplay::handleCtrlC; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 15;
                return;
            }
        }
    }
}

const QMetaObject *TerminalDisplay::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TerminalDisplay::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TerminalDisplay.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int TerminalDisplay::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 53)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 53;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 53)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 53;
    }
    return _id;
}

// SIGNAL 0
void TerminalDisplay::keyPressedSignal(QKeyEvent * _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TerminalDisplay::mouseSignal(int _t1, int _t2, int _t3, int _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void TerminalDisplay::mousePressEventForwarded(QMouseEvent * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void TerminalDisplay::changedFontMetricSignal(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void TerminalDisplay::changedContentSizeSignal(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void TerminalDisplay::changedContentCountSignal(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void TerminalDisplay::configureRequest(const QPoint & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void TerminalDisplay::overrideShortcutCheck(QKeyEvent * _t1, bool & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void TerminalDisplay::isBusySelecting(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void TerminalDisplay::sendStringToEmu(const char * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void TerminalDisplay::copyAvailable(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void TerminalDisplay::termGetFocus()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void TerminalDisplay::termLostFocus()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void TerminalDisplay::notifyBell()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}

// SIGNAL 14
void TerminalDisplay::usesMouseChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 14, nullptr);
}

// SIGNAL 15
void TerminalDisplay::handleCtrlC()
{
    QMetaObject::activate(this, &staticMetaObject, 15, nullptr);
}
namespace {
struct qt_meta_stringdata_AutoScrollHandler_t {
    uint offsetsAndSizes[2];
    char stringdata0[18];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_AutoScrollHandler_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_AutoScrollHandler_t qt_meta_stringdata_AutoScrollHandler = {
    {
        QT_MOC_LITERAL(0, 17)   // "AutoScrollHandler"
    },
    "AutoScrollHandler"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_AutoScrollHandler[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

Q_CONSTINIT const QMetaObject AutoScrollHandler::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_AutoScrollHandler.offsetsAndSizes,
    qt_meta_data_AutoScrollHandler,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_AutoScrollHandler_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<AutoScrollHandler, std::true_type>
    >,
    nullptr
} };

void AutoScrollHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *AutoScrollHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AutoScrollHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AutoScrollHandler.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int AutoScrollHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_stringdata_ScrollBar_t {
    uint offsetsAndSizes[2];
    char stringdata0[10];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_ScrollBar_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_ScrollBar_t qt_meta_stringdata_ScrollBar = {
    {
        QT_MOC_LITERAL(0, 9)   // "ScrollBar"
    },
    "ScrollBar"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_ScrollBar[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

Q_CONSTINIT const QMetaObject ScrollBar::staticMetaObject = { {
    QMetaObject::SuperData::link<QScrollBar::staticMetaObject>(),
    qt_meta_stringdata_ScrollBar.offsetsAndSizes,
    qt_meta_data_ScrollBar,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_ScrollBar_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ScrollBar, std::true_type>
    >,
    nullptr
} };

void ScrollBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *ScrollBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ScrollBar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ScrollBar.stringdata0))
        return static_cast<void*>(this);
    return QScrollBar::qt_metacast(_clname);
}

int ScrollBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QScrollBar::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {
struct qt_meta_stringdata_MultilineConfirmationMessageBox_t {
    uint offsetsAndSizes[2];
    char stringdata0[32];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_MultilineConfirmationMessageBox_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_MultilineConfirmationMessageBox_t qt_meta_stringdata_MultilineConfirmationMessageBox = {
    {
        QT_MOC_LITERAL(0, 31)   // "MultilineConfirmationMessageBox"
    },
    "MultilineConfirmationMessageBox"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_MultilineConfirmationMessageBox[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

Q_CONSTINIT const QMetaObject MultilineConfirmationMessageBox::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_MultilineConfirmationMessageBox.offsetsAndSizes,
    qt_meta_data_MultilineConfirmationMessageBox,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_MultilineConfirmationMessageBox_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MultilineConfirmationMessageBox, std::true_type>
    >,
    nullptr
} };

void MultilineConfirmationMessageBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *MultilineConfirmationMessageBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MultilineConfirmationMessageBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MultilineConfirmationMessageBox.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int MultilineConfirmationMessageBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
