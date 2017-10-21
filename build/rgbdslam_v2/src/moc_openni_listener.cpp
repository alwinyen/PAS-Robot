/****************************************************************************
** Meta object code from reading C++ file 'openni_listener.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/rgbdslam_v2/src/openni_listener.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'openni_listener.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_OpenNIListener_t {
    QByteArrayData data[21];
    char stringdata0[233];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OpenNIListener_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OpenNIListener_t qt_meta_stringdata_OpenNIListener = {
    {
QT_MOC_LITERAL(0, 0, 14), // "OpenNIListener"
QT_MOC_LITERAL(1, 15, 14), // "newVisualImage"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 15), // "newFeatureImage"
QT_MOC_LITERAL(4, 47, 19), // "newFeatureFlowImage"
QT_MOC_LITERAL(5, 67, 13), // "newDepthImage"
QT_MOC_LITERAL(6, 81, 10), // "setGUIInfo"
QT_MOC_LITERAL(7, 92, 7), // "message"
QT_MOC_LITERAL(8, 100, 11), // "setGUIInfo2"
QT_MOC_LITERAL(9, 112, 12), // "setGUIStatus"
QT_MOC_LITERAL(10, 125, 11), // "bagFinished"
QT_MOC_LITERAL(11, 137, 7), // "iamBusy"
QT_MOC_LITERAL(12, 145, 2), // "id"
QT_MOC_LITERAL(13, 148, 11), // "const char*"
QT_MOC_LITERAL(14, 160, 3), // "max"
QT_MOC_LITERAL(15, 164, 8), // "progress"
QT_MOC_LITERAL(16, 173, 3), // "val"
QT_MOC_LITERAL(17, 177, 11), // "togglePause"
QT_MOC_LITERAL(18, 189, 11), // "getOneFrame"
QT_MOC_LITERAL(19, 201, 12), // "loadPCDFiles"
QT_MOC_LITERAL(20, 214, 18) // "loadBagFileFromGUI"

    },
    "OpenNIListener\0newVisualImage\0\0"
    "newFeatureImage\0newFeatureFlowImage\0"
    "newDepthImage\0setGUIInfo\0message\0"
    "setGUIInfo2\0setGUIStatus\0bagFinished\0"
    "iamBusy\0id\0const char*\0max\0progress\0"
    "val\0togglePause\0getOneFrame\0loadPCDFiles\0"
    "loadBagFileFromGUI"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OpenNIListener[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   84,    2, 0x06 /* Public */,
       3,    1,   87,    2, 0x06 /* Public */,
       4,    1,   90,    2, 0x06 /* Public */,
       5,    1,   93,    2, 0x06 /* Public */,
       6,    1,   96,    2, 0x06 /* Public */,
       8,    1,   99,    2, 0x06 /* Public */,
       9,    1,  102,    2, 0x06 /* Public */,
      10,    0,  105,    2, 0x06 /* Public */,
      11,    3,  106,    2, 0x06 /* Public */,
      15,    3,  113,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      17,    0,  120,    2, 0x0a /* Public */,
      18,    0,  121,    2, 0x0a /* Public */,
      19,    1,  122,    2, 0x0a /* Public */,
      20,    1,  125,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QImage,    2,
    QMetaType::Void, QMetaType::QImage,    2,
    QMetaType::Void, QMetaType::QImage,    2,
    QMetaType::Void, QMetaType::QImage,    2,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 13, QMetaType::Int,   12,    7,   14,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 13, QMetaType::Int,   12,    7,   16,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QStringList,    2,
    QMetaType::Void, QMetaType::QString,    2,

       0        // eod
};

void OpenNIListener::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        OpenNIListener *_t = static_cast<OpenNIListener *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->newVisualImage((*reinterpret_cast< QImage(*)>(_a[1]))); break;
        case 1: _t->newFeatureImage((*reinterpret_cast< QImage(*)>(_a[1]))); break;
        case 2: _t->newFeatureFlowImage((*reinterpret_cast< QImage(*)>(_a[1]))); break;
        case 3: _t->newDepthImage((*reinterpret_cast< QImage(*)>(_a[1]))); break;
        case 4: _t->setGUIInfo((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->setGUIInfo2((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->setGUIStatus((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->bagFinished(); break;
        case 8: _t->iamBusy((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 9: _t->progress((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 10: _t->togglePause(); break;
        case 11: _t->getOneFrame(); break;
        case 12: _t->loadPCDFiles((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 13: _t->loadBagFileFromGUI((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (OpenNIListener::*_t)(QImage );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OpenNIListener::newVisualImage)) {
                *result = 0;
            }
        }
        {
            typedef void (OpenNIListener::*_t)(QImage );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OpenNIListener::newFeatureImage)) {
                *result = 1;
            }
        }
        {
            typedef void (OpenNIListener::*_t)(QImage );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OpenNIListener::newFeatureFlowImage)) {
                *result = 2;
            }
        }
        {
            typedef void (OpenNIListener::*_t)(QImage );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OpenNIListener::newDepthImage)) {
                *result = 3;
            }
        }
        {
            typedef void (OpenNIListener::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OpenNIListener::setGUIInfo)) {
                *result = 4;
            }
        }
        {
            typedef void (OpenNIListener::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OpenNIListener::setGUIInfo2)) {
                *result = 5;
            }
        }
        {
            typedef void (OpenNIListener::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OpenNIListener::setGUIStatus)) {
                *result = 6;
            }
        }
        {
            typedef void (OpenNIListener::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OpenNIListener::bagFinished)) {
                *result = 7;
            }
        }
        {
            typedef void (OpenNIListener::*_t)(int , const char * , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OpenNIListener::iamBusy)) {
                *result = 8;
            }
        }
        {
            typedef void (OpenNIListener::*_t)(int , const char * , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OpenNIListener::progress)) {
                *result = 9;
            }
        }
    }
}

const QMetaObject OpenNIListener::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_OpenNIListener.data,
      qt_meta_data_OpenNIListener,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *OpenNIListener::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OpenNIListener::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_OpenNIListener.stringdata0))
        return static_cast<void*>(const_cast< OpenNIListener*>(this));
    return QObject::qt_metacast(_clname);
}

int OpenNIListener::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void OpenNIListener::newVisualImage(QImage _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OpenNIListener::newFeatureImage(QImage _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void OpenNIListener::newFeatureFlowImage(QImage _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void OpenNIListener::newDepthImage(QImage _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void OpenNIListener::setGUIInfo(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void OpenNIListener::setGUIInfo2(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void OpenNIListener::setGUIStatus(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void OpenNIListener::bagFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 7, Q_NULLPTR);
}

// SIGNAL 8
void OpenNIListener::iamBusy(int _t1, const char * _t2, int _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void OpenNIListener::progress(int _t1, const char * _t2, int _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}
QT_END_MOC_NAMESPACE
