/****************************************************************************
** Meta object code from reading C++ file 'ros_service_ui.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/rgbdslam_v2/src/ros_service_ui.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ros_service_ui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_RosUi_t {
    QByteArrayData data[20];
    char stringdata0[247];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RosUi_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RosUi_t qt_meta_stringdata_RosUi = {
    {
QT_MOC_LITERAL(0, 0, 5), // "RosUi"
QT_MOC_LITERAL(1, 6, 5), // "reset"
QT_MOC_LITERAL(2, 12, 0), // ""
QT_MOC_LITERAL(3, 13, 11), // "togglePause"
QT_MOC_LITERAL(4, 25, 13), // "toggleMapping"
QT_MOC_LITERAL(5, 39, 11), // "getOneFrame"
QT_MOC_LITERAL(6, 51, 15), // "deleteLastFrame"
QT_MOC_LITERAL(7, 67, 13), // "sendAllClouds"
QT_MOC_LITERAL(8, 81, 13), // "saveAllClouds"
QT_MOC_LITERAL(9, 95, 8), // "filename"
QT_MOC_LITERAL(10, 104, 14), // "saveOctomapSig"
QT_MOC_LITERAL(11, 119, 15), // "saveAllFeatures"
QT_MOC_LITERAL(12, 135, 12), // "saveG2OGraph"
QT_MOC_LITERAL(13, 148, 20), // "saveIndividualClouds"
QT_MOC_LITERAL(14, 169, 13), // "file_basename"
QT_MOC_LITERAL(15, 183, 11), // "setMaxDepth"
QT_MOC_LITERAL(16, 195, 9), // "max_depth"
QT_MOC_LITERAL(17, 205, 14), // "saveTrajectory"
QT_MOC_LITERAL(18, 220, 13), // "optimizeGraph"
QT_MOC_LITERAL(19, 234, 12) // "sendFinished"

    },
    "RosUi\0reset\0\0togglePause\0toggleMapping\0"
    "getOneFrame\0deleteLastFrame\0sendAllClouds\0"
    "saveAllClouds\0filename\0saveOctomapSig\0"
    "saveAllFeatures\0saveG2OGraph\0"
    "saveIndividualClouds\0file_basename\0"
    "setMaxDepth\0max_depth\0saveTrajectory\0"
    "optimizeGraph\0sendFinished"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RosUi[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      14,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x06 /* Public */,
       3,    0,   90,    2, 0x06 /* Public */,
       4,    1,   91,    2, 0x06 /* Public */,
       5,    0,   94,    2, 0x06 /* Public */,
       6,    0,   95,    2, 0x06 /* Public */,
       7,    0,   96,    2, 0x06 /* Public */,
       8,    1,   97,    2, 0x06 /* Public */,
      10,    1,  100,    2, 0x06 /* Public */,
      11,    1,  103,    2, 0x06 /* Public */,
      12,    1,  106,    2, 0x06 /* Public */,
      13,    1,  109,    2, 0x06 /* Public */,
      15,    1,  112,    2, 0x06 /* Public */,
      17,    1,  115,    2, 0x06 /* Public */,
      18,    0,  118,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      19,    0,  119,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void, QMetaType::Float,   16,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void RosUi::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        RosUi *_t = static_cast<RosUi *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->reset(); break;
        case 1: _t->togglePause(); break;
        case 2: _t->toggleMapping((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->getOneFrame(); break;
        case 4: _t->deleteLastFrame(); break;
        case 5: _t->sendAllClouds(); break;
        case 6: _t->saveAllClouds((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->saveOctomapSig((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->saveAllFeatures((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: _t->saveG2OGraph((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 10: _t->saveIndividualClouds((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 11: _t->setMaxDepth((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 12: _t->saveTrajectory((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 13: _t->optimizeGraph(); break;
        case 14: _t->sendFinished(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (RosUi::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RosUi::reset)) {
                *result = 0;
            }
        }
        {
            typedef void (RosUi::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RosUi::togglePause)) {
                *result = 1;
            }
        }
        {
            typedef void (RosUi::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RosUi::toggleMapping)) {
                *result = 2;
            }
        }
        {
            typedef void (RosUi::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RosUi::getOneFrame)) {
                *result = 3;
            }
        }
        {
            typedef void (RosUi::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RosUi::deleteLastFrame)) {
                *result = 4;
            }
        }
        {
            typedef void (RosUi::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RosUi::sendAllClouds)) {
                *result = 5;
            }
        }
        {
            typedef void (RosUi::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RosUi::saveAllClouds)) {
                *result = 6;
            }
        }
        {
            typedef void (RosUi::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RosUi::saveOctomapSig)) {
                *result = 7;
            }
        }
        {
            typedef void (RosUi::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RosUi::saveAllFeatures)) {
                *result = 8;
            }
        }
        {
            typedef void (RosUi::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RosUi::saveG2OGraph)) {
                *result = 9;
            }
        }
        {
            typedef void (RosUi::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RosUi::saveIndividualClouds)) {
                *result = 10;
            }
        }
        {
            typedef void (RosUi::*_t)(float );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RosUi::setMaxDepth)) {
                *result = 11;
            }
        }
        {
            typedef void (RosUi::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RosUi::saveTrajectory)) {
                *result = 12;
            }
        }
        {
            typedef void (RosUi::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&RosUi::optimizeGraph)) {
                *result = 13;
            }
        }
    }
}

const QMetaObject RosUi::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_RosUi.data,
      qt_meta_data_RosUi,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *RosUi::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RosUi::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_RosUi.stringdata0))
        return static_cast<void*>(const_cast< RosUi*>(this));
    return QObject::qt_metacast(_clname);
}

int RosUi::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void RosUi::reset()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void RosUi::togglePause()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void RosUi::toggleMapping(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void RosUi::getOneFrame()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void RosUi::deleteLastFrame()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}

// SIGNAL 5
void RosUi::sendAllClouds()
{
    QMetaObject::activate(this, &staticMetaObject, 5, Q_NULLPTR);
}

// SIGNAL 6
void RosUi::saveAllClouds(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void RosUi::saveOctomapSig(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void RosUi::saveAllFeatures(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void RosUi::saveG2OGraph(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void RosUi::saveIndividualClouds(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void RosUi::setMaxDepth(float _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void RosUi::saveTrajectory(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void RosUi::optimizeGraph()
{
    QMetaObject::activate(this, &staticMetaObject, 13, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
