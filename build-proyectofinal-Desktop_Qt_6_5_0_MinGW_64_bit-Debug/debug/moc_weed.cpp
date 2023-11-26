/****************************************************************************
** Meta object code from reading C++ file 'weed.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../proyectofinal/weed.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'weed.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSweedENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSweedENDCLASS = QtMocHelpers::stringData(
    "weed",
    "movement",
    ""
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSweedENDCLASS_t {
    uint offsetsAndSizes[6];
    char stringdata0[5];
    char stringdata1[9];
    char stringdata2[1];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSweedENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSweedENDCLASS_t qt_meta_stringdata_CLASSweedENDCLASS = {
    {
        QT_MOC_LITERAL(0, 4),  // "weed"
        QT_MOC_LITERAL(5, 8),  // "movement"
        QT_MOC_LITERAL(14, 0)   // ""
    },
    "weed",
    "movement",
    ""
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSweedENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   20,    2, 0x08,    1 /* Private */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject weed::staticMetaObject = { {
    QMetaObject::SuperData::link<control_sprite::staticMetaObject>(),
    qt_meta_stringdata_CLASSweedENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSweedENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSweedENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<weed, std::true_type>,
        // method 'movement'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void weed::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<weed *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->movement(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *weed::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *weed::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSweedENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return control_sprite::qt_metacast(_clname);
}

int weed::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = control_sprite::qt_metacall(_c, _id, _a);
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
