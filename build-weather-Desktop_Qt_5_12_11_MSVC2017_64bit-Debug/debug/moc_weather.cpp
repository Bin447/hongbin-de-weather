/****************************************************************************
** Meta object code from reading C++ file 'weather.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.11)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../weather/class_weather/weather.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'weather.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.11. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WEATHER_t {
    QByteArrayData data[11];
    char stringdata0[178];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WEATHER_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WEATHER_t qt_meta_stringdata_WEATHER = {
    {
QT_MOC_LITERAL(0, 0, 7), // "WEATHER"
QT_MOC_LITERAL(1, 8, 24), // "signal_emit_weather_info"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 13), // "WEATHER_INFO*"
QT_MOC_LITERAL(4, 48, 12), // "slot_new_obj"
QT_MOC_LITERAL(5, 61, 21), // "slot_refresh_manually"
QT_MOC_LITERAL(6, 83, 26), // "slot_manager_read_finished"
QT_MOC_LITERAL(7, 110, 14), // "QNetworkReply*"
QT_MOC_LITERAL(8, 125, 5), // "reply"
QT_MOC_LITERAL(9, 131, 22), // "slot_change_local_city"
QT_MOC_LITERAL(10, 154, 23) // "slot_tim_update_weather"

    },
    "WEATHER\0signal_emit_weather_info\0\0"
    "WEATHER_INFO*\0slot_new_obj\0"
    "slot_refresh_manually\0slot_manager_read_finished\0"
    "QNetworkReply*\0reply\0slot_change_local_city\0"
    "slot_tim_update_weather"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WEATHER[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   47,    2, 0x08 /* Private */,
       5,    0,   48,    2, 0x08 /* Private */,
       6,    1,   49,    2, 0x08 /* Private */,
       9,    1,   52,    2, 0x08 /* Private */,
      10,    0,   55,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,

       0        // eod
};

void WEATHER::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WEATHER *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signal_emit_weather_info((*reinterpret_cast< WEATHER_INFO*(*)>(_a[1]))); break;
        case 1: _t->slot_new_obj(); break;
        case 2: _t->slot_refresh_manually(); break;
        case 3: _t->slot_manager_read_finished((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 4: _t->slot_change_local_city((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->slot_tim_update_weather(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (WEATHER::*)(WEATHER_INFO * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WEATHER::signal_emit_weather_info)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject WEATHER::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_WEATHER.data,
    qt_meta_data_WEATHER,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WEATHER::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WEATHER::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WEATHER.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int WEATHER::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void WEATHER::signal_emit_weather_info(WEATHER_INFO * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
