/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../CSC3002_GAME/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[24];
    char stringdata0[236];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 13), // "slotDrawScene"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 11), // "slotNewGame"
QT_MOC_LITERAL(4, 38, 12), // "slotSaveGame"
QT_MOC_LITERAL(5, 51, 12), // "slotLoadGame"
QT_MOC_LITERAL(6, 64, 18), // "slotMovePlayerItem"
QT_MOC_LITERAL(7, 83, 1), // "x"
QT_MOC_LITERAL(8, 85, 1), // "y"
QT_MOC_LITERAL(9, 87, 8), // "slotShop"
QT_MOC_LITERAL(10, 96, 9), // "slotEvent"
QT_MOC_LITERAL(11, 106, 3), // "str"
QT_MOC_LITERAL(12, 110, 8), // "slotHelp"
QT_MOC_LITERAL(13, 119, 9), // "slotprof1"
QT_MOC_LITERAL(14, 129, 9), // "slotprof2"
QT_MOC_LITERAL(15, 139, 11), // "slotlackpf2"
QT_MOC_LITERAL(16, 151, 9), // "slotprof3"
QT_MOC_LITERAL(17, 161, 11), // "slotlackpf3"
QT_MOC_LITERAL(18, 173, 7), // "sloteat"
QT_MOC_LITERAL(19, 181, 9), // "slotsleep"
QT_MOC_LITERAL(20, 191, 9), // "slotstudy"
QT_MOC_LITERAL(21, 201, 11), // "slotlecture"
QT_MOC_LITERAL(22, 213, 7), // "slotgym"
QT_MOC_LITERAL(23, 221, 14) // "slotlackenergy"

    },
    "MainWindow\0slotDrawScene\0\0slotNewGame\0"
    "slotSaveGame\0slotLoadGame\0slotMovePlayerItem\0"
    "x\0y\0slotShop\0slotEvent\0str\0slotHelp\0"
    "slotprof1\0slotprof2\0slotlackpf2\0"
    "slotprof3\0slotlackpf3\0sloteat\0slotsleep\0"
    "slotstudy\0slotlecture\0slotgym\0"
    "slotlackenergy"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  109,    2, 0x0a /* Public */,
       3,    0,  110,    2, 0x0a /* Public */,
       4,    0,  111,    2, 0x0a /* Public */,
       5,    0,  112,    2, 0x0a /* Public */,
       6,    2,  113,    2, 0x0a /* Public */,
       9,    0,  118,    2, 0x0a /* Public */,
      10,    1,  119,    2, 0x0a /* Public */,
      12,    0,  122,    2, 0x0a /* Public */,
      13,    0,  123,    2, 0x0a /* Public */,
      14,    0,  124,    2, 0x0a /* Public */,
      15,    0,  125,    2, 0x0a /* Public */,
      16,    0,  126,    2, 0x0a /* Public */,
      17,    0,  127,    2, 0x0a /* Public */,
      18,    0,  128,    2, 0x0a /* Public */,
      19,    0,  129,    2, 0x0a /* Public */,
      20,    0,  130,    2, 0x0a /* Public */,
      21,    0,  131,    2, 0x0a /* Public */,
      22,    0,  132,    2, 0x0a /* Public */,
      23,    0,  133,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    7,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotDrawScene(); break;
        case 1: _t->slotNewGame(); break;
        case 2: _t->slotSaveGame(); break;
        case 3: _t->slotLoadGame(); break;
        case 4: _t->slotMovePlayerItem((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->slotShop(); break;
        case 6: _t->slotEvent((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->slotHelp(); break;
        case 8: _t->slotprof1(); break;
        case 9: _t->slotprof2(); break;
        case 10: _t->slotlackpf2(); break;
        case 11: _t->slotprof3(); break;
        case 12: _t->slotlackpf3(); break;
        case 13: _t->sloteat(); break;
        case 14: _t->slotsleep(); break;
        case 15: _t->slotstudy(); break;
        case 16: _t->slotlecture(); break;
        case 17: _t->slotgym(); break;
        case 18: _t->slotlackenergy(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 19)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 19;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE