/****************************************************************************
** Meta object code from reading C++ file 'glviewer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/rgbdslam_v2/src/glviewer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'glviewer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_GLViewer_t {
    QByteArrayData data[48];
    char stringdata0[669];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GLViewer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GLViewer_t qt_meta_stringdata_GLViewer = {
    {
QT_MOC_LITERAL(0, 0, 8), // "GLViewer"
QT_MOC_LITERAL(1, 9, 13), // "cloudRendered"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 16), // "pointcloud_type*"
QT_MOC_LITERAL(4, 41, 15), // "clickedPosition"
QT_MOC_LITERAL(5, 57, 1), // "x"
QT_MOC_LITERAL(6, 59, 1), // "y"
QT_MOC_LITERAL(7, 61, 1), // "z"
QT_MOC_LITERAL(8, 63, 12), // "setXRotation"
QT_MOC_LITERAL(9, 76, 5), // "angle"
QT_MOC_LITERAL(10, 82, 12), // "setYRotation"
QT_MOC_LITERAL(11, 95, 12), // "setZRotation"
QT_MOC_LITERAL(12, 108, 14), // "setStereoShift"
QT_MOC_LITERAL(13, 123, 5), // "shift"
QT_MOC_LITERAL(14, 129, 15), // "setRotationGrid"
QT_MOC_LITERAL(15, 145, 18), // "rot_step_in_degree"
QT_MOC_LITERAL(16, 164, 16), // "toggleFollowMode"
QT_MOC_LITERAL(17, 181, 2), // "on"
QT_MOC_LITERAL(18, 184, 15), // "toggleShowEdges"
QT_MOC_LITERAL(19, 200, 13), // "toggleShowIDs"
QT_MOC_LITERAL(20, 214, 14), // "toggleShowGrid"
QT_MOC_LITERAL(21, 229, 13), // "toggleShowTFs"
QT_MOC_LITERAL(22, 243, 15), // "toggleShowPoses"
QT_MOC_LITERAL(23, 259, 16), // "toggleShowClouds"
QT_MOC_LITERAL(24, 276, 17), // "toggleShowOctoMap"
QT_MOC_LITERAL(25, 294, 18), // "toggleShowFeatures"
QT_MOC_LITERAL(26, 313, 21), // "toggleBackgroundColor"
QT_MOC_LITERAL(27, 335, 12), // "toggleStereo"
QT_MOC_LITERAL(28, 348, 13), // "addPointCloud"
QT_MOC_LITERAL(29, 362, 2), // "pc"
QT_MOC_LITERAL(30, 365, 9), // "transform"
QT_MOC_LITERAL(31, 375, 11), // "addFeatures"
QT_MOC_LITERAL(32, 387, 78), // "const std::vector<Eigen::Vect..."
QT_MOC_LITERAL(33, 466, 20), // "feature_locations_3d"
QT_MOC_LITERAL(34, 487, 16), // "updateTransforms"
QT_MOC_LITERAL(35, 504, 18), // "QList<QMatrix4x4>*"
QT_MOC_LITERAL(36, 523, 10), // "transforms"
QT_MOC_LITERAL(37, 534, 8), // "setEdges"
QT_MOC_LITERAL(38, 543, 29), // "const QList<QPair<int,int> >*"
QT_MOC_LITERAL(39, 573, 9), // "edge_list"
QT_MOC_LITERAL(40, 583, 14), // "deleteLastNode"
QT_MOC_LITERAL(41, 598, 5), // "reset"
QT_MOC_LITERAL(42, 604, 19), // "toggleTriangulation"
QT_MOC_LITERAL(43, 624, 8), // "drawToPS"
QT_MOC_LITERAL(44, 633, 7), // "filname"
QT_MOC_LITERAL(45, 641, 13), // "setRenderable"
QT_MOC_LITERAL(46, 655, 11), // "Renderable*"
QT_MOC_LITERAL(47, 667, 1) // "r"

    },
    "GLViewer\0cloudRendered\0\0pointcloud_type*\0"
    "clickedPosition\0x\0y\0z\0setXRotation\0"
    "angle\0setYRotation\0setZRotation\0"
    "setStereoShift\0shift\0setRotationGrid\0"
    "rot_step_in_degree\0toggleFollowMode\0"
    "on\0toggleShowEdges\0toggleShowIDs\0"
    "toggleShowGrid\0toggleShowTFs\0"
    "toggleShowPoses\0toggleShowClouds\0"
    "toggleShowOctoMap\0toggleShowFeatures\0"
    "toggleBackgroundColor\0toggleStereo\0"
    "addPointCloud\0pc\0transform\0addFeatures\0"
    "const std::vector<Eigen::Vector4f,Eigen::aligned_allocator<Eigen::Vect"
    "or4f> >*\0"
    "feature_locations_3d\0updateTransforms\0"
    "QList<QMatrix4x4>*\0transforms\0setEdges\0"
    "const QList<QPair<int,int> >*\0edge_list\0"
    "deleteLastNode\0reset\0toggleTriangulation\0"
    "drawToPS\0filname\0setRenderable\0"
    "Renderable*\0r"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GLViewer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      27,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  149,    2, 0x06 /* Public */,
       4,    3,  152,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,  159,    2, 0x0a /* Public */,
      10,    1,  162,    2, 0x0a /* Public */,
      11,    1,  165,    2, 0x0a /* Public */,
      12,    1,  168,    2, 0x0a /* Public */,
      14,    1,  171,    2, 0x0a /* Public */,
      16,    1,  174,    2, 0x0a /* Public */,
      18,    1,  177,    2, 0x0a /* Public */,
      19,    1,  180,    2, 0x0a /* Public */,
      20,    1,  183,    2, 0x0a /* Public */,
      21,    1,  186,    2, 0x0a /* Public */,
      22,    1,  189,    2, 0x0a /* Public */,
      23,    1,  192,    2, 0x0a /* Public */,
      24,    1,  195,    2, 0x0a /* Public */,
      25,    1,  198,    2, 0x0a /* Public */,
      26,    1,  201,    2, 0x0a /* Public */,
      27,    1,  204,    2, 0x0a /* Public */,
      28,    2,  207,    2, 0x0a /* Public */,
      31,    1,  212,    2, 0x0a /* Public */,
      34,    1,  215,    2, 0x0a /* Public */,
      37,    1,  218,    2, 0x0a /* Public */,
      40,    0,  221,    2, 0x0a /* Public */,
      41,    0,  222,    2, 0x0a /* Public */,
      42,    0,  223,    2, 0x0a /* Public */,
      43,    1,  224,    2, 0x0a /* Public */,
      45,    1,  227,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Float,    5,    6,    7,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Double,   13,
    QMetaType::Void, QMetaType::Double,   15,
    QMetaType::Void, QMetaType::Bool,   17,
    QMetaType::Void, QMetaType::Bool,   17,
    QMetaType::Void, QMetaType::Bool,   17,
    QMetaType::Void, QMetaType::Bool,   17,
    QMetaType::Void, QMetaType::Bool,   17,
    QMetaType::Void, QMetaType::Bool,   17,
    QMetaType::Void, QMetaType::Bool,   17,
    QMetaType::Void, QMetaType::Bool,   17,
    QMetaType::Void, QMetaType::Bool,   17,
    QMetaType::Void, QMetaType::Bool,   17,
    QMetaType::Void, QMetaType::Bool,   17,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QMatrix4x4,   29,   30,
    QMetaType::Void, 0x80000000 | 32,   33,
    QMetaType::Void, 0x80000000 | 35,   36,
    QMetaType::Void, 0x80000000 | 38,   39,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   44,
    QMetaType::Void, 0x80000000 | 46,   47,

       0        // eod
};

void GLViewer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GLViewer *_t = static_cast<GLViewer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->cloudRendered((*reinterpret_cast< pointcloud_type*(*)>(_a[1]))); break;
        case 1: _t->clickedPosition((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3]))); break;
        case 2: _t->setXRotation((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->setYRotation((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->setZRotation((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->setStereoShift((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 6: _t->setRotationGrid((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 7: _t->toggleFollowMode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->toggleShowEdges((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->toggleShowIDs((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->toggleShowGrid((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->toggleShowTFs((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->toggleShowPoses((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->toggleShowClouds((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->toggleShowOctoMap((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->toggleShowFeatures((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: _t->toggleBackgroundColor((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 17: _t->toggleStereo((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 18: _t->addPointCloud((*reinterpret_cast< pointcloud_type*(*)>(_a[1])),(*reinterpret_cast< QMatrix4x4(*)>(_a[2]))); break;
        case 19: _t->addFeatures((*reinterpret_cast< const std::vector<Eigen::Vector4f,Eigen::aligned_allocator<Eigen::Vector4f> >*(*)>(_a[1]))); break;
        case 20: _t->updateTransforms((*reinterpret_cast< QList<QMatrix4x4>*(*)>(_a[1]))); break;
        case 21: _t->setEdges((*reinterpret_cast< const QList<QPair<int,int> >*(*)>(_a[1]))); break;
        case 22: _t->deleteLastNode(); break;
        case 23: _t->reset(); break;
        case 24: _t->toggleTriangulation(); break;
        case 25: _t->drawToPS((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 26: _t->setRenderable((*reinterpret_cast< Renderable*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (GLViewer::*_t)(pointcloud_type * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GLViewer::cloudRendered)) {
                *result = 0;
            }
        }
        {
            typedef void (GLViewer::*_t)(float , float , float );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GLViewer::clickedPosition)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject GLViewer::staticMetaObject = {
    { &QGLWidget::staticMetaObject, qt_meta_stringdata_GLViewer.data,
      qt_meta_data_GLViewer,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *GLViewer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GLViewer::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_GLViewer.stringdata0))
        return static_cast<void*>(const_cast< GLViewer*>(this));
    return QGLWidget::qt_metacast(_clname);
}

int GLViewer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGLWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 27)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 27;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 27)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 27;
    }
    return _id;
}

// SIGNAL 0
void GLViewer::cloudRendered(pointcloud_type * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GLViewer::clickedPosition(float _t1, float _t2, float _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
