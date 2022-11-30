/****************************************************************************
** Meta object code from reading C++ file 'manualconfirmation.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../ManualConfirmation/manualconfirmation.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'manualconfirmation.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.4.0. It"
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
struct qt_meta_stringdata_ManualConfirmation_t {
    uint offsetsAndSizes[16];
    char stringdata0[19];
    char stringdata1[10];
    char stringdata2[1];
    char stringdata3[6];
    char stringdata4[8];
    char stringdata5[11];
    char stringdata6[13];
    char stringdata7[11];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_ManualConfirmation_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_ManualConfirmation_t qt_meta_stringdata_ManualConfirmation = {
    {
        QT_MOC_LITERAL(0, 18),  // "ManualConfirmation"
        QT_MOC_LITERAL(19, 9),  // "writeFile"
        QT_MOC_LITERAL(29, 0),  // ""
        QT_MOC_LITERAL(30, 5),  // "judge"
        QT_MOC_LITERAL(36, 7),  // "showCPP"
        QT_MOC_LITERAL(44, 10),  // "writeEQUAL"
        QT_MOC_LITERAL(55, 12),  // "writeINEQUAL"
        QT_MOC_LITERAL(68, 10)   // "writeDOUBT"
    },
    "ManualConfirmation",
    "writeFile",
    "",
    "judge",
    "showCPP",
    "writeEQUAL",
    "writeINEQUAL",
    "writeDOUBT"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_ManualConfirmation[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   44,    2, 0x08,    1 /* Private */,
       4,    0,   47,    2, 0x08,    3 /* Private */,
       5,    0,   48,    2, 0x08,    4 /* Private */,
       6,    0,   49,    2, 0x08,    5 /* Private */,
       7,    0,   50,    2, 0x08,    6 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject ManualConfirmation::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_ManualConfirmation.offsetsAndSizes,
    qt_meta_data_ManualConfirmation,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_ManualConfirmation_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ManualConfirmation, std::true_type>,
        // method 'writeFile'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'showCPP'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'writeEQUAL'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'writeINEQUAL'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'writeDOUBT'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void ManualConfirmation::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ManualConfirmation *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->writeFile((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->showCPP(); break;
        case 2: _t->writeEQUAL(); break;
        case 3: _t->writeINEQUAL(); break;
        case 4: _t->writeDOUBT(); break;
        default: ;
        }
    }
}

const QMetaObject *ManualConfirmation::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ManualConfirmation::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ManualConfirmation.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int ManualConfirmation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
