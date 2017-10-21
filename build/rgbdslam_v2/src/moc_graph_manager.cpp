/****************************************************************************
** Meta object code from reading C++ file 'graph_manager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/rgbdslam_v2/src/graph_manager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'graph_manager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_GraphManager_t {
    QByteArrayData data[66];
    char stringdata0[942];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GraphManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GraphManager_t qt_meta_stringdata_GraphManager = {
    {
QT_MOC_LITERAL(0, 0, 12), // "GraphManager"
QT_MOC_LITERAL(1, 13, 23), // "newTransformationMatrix"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 12), // "sendFinished"
QT_MOC_LITERAL(4, 51, 10), // "setGUIInfo"
QT_MOC_LITERAL(5, 62, 7), // "message"
QT_MOC_LITERAL(6, 70, 12), // "setGUIStatus"
QT_MOC_LITERAL(7, 83, 13), // "setPointCloud"
QT_MOC_LITERAL(8, 97, 16), // "pointcloud_type*"
QT_MOC_LITERAL(9, 114, 2), // "pc"
QT_MOC_LITERAL(10, 117, 14), // "transformation"
QT_MOC_LITERAL(11, 132, 11), // "setFeatures"
QT_MOC_LITERAL(12, 144, 78), // "const std::vector<Eigen::Vect..."
QT_MOC_LITERAL(13, 223, 16), // "updateTransforms"
QT_MOC_LITERAL(14, 240, 18), // "QList<QMatrix4x4>*"
QT_MOC_LITERAL(15, 259, 15), // "transformations"
QT_MOC_LITERAL(16, 275, 11), // "setGUIInfo2"
QT_MOC_LITERAL(17, 287, 13), // "setGraphEdges"
QT_MOC_LITERAL(18, 301, 29), // "const QList<QPair<int,int> >*"
QT_MOC_LITERAL(19, 331, 9), // "edge_list"
QT_MOC_LITERAL(20, 341, 14), // "deleteLastNode"
QT_MOC_LITERAL(21, 356, 13), // "resetGLViewer"
QT_MOC_LITERAL(22, 370, 8), // "setGraph"
QT_MOC_LITERAL(23, 379, 28), // "const g2o::OptimizableGraph*"
QT_MOC_LITERAL(24, 408, 7), // "iamBusy"
QT_MOC_LITERAL(25, 416, 2), // "id"
QT_MOC_LITERAL(26, 419, 11), // "const char*"
QT_MOC_LITERAL(27, 431, 3), // "max"
QT_MOC_LITERAL(28, 435, 8), // "progress"
QT_MOC_LITERAL(29, 444, 3), // "val"
QT_MOC_LITERAL(30, 448, 17), // "renderableOctomap"
QT_MOC_LITERAL(31, 466, 11), // "Renderable*"
QT_MOC_LITERAL(32, 478, 1), // "r"
QT_MOC_LITERAL(33, 480, 5), // "reset"
QT_MOC_LITERAL(34, 486, 15), // "deleteLastFrame"
QT_MOC_LITERAL(35, 502, 15), // "clearPointCloud"
QT_MOC_LITERAL(36, 518, 22), // "const pointcloud_type*"
QT_MOC_LITERAL(37, 541, 16), // "clearPointClouds"
QT_MOC_LITERAL(38, 558, 16), // "reducePointCloud"
QT_MOC_LITERAL(39, 575, 13), // "optimizeGraph"
QT_MOC_LITERAL(40, 589, 4), // "iter"
QT_MOC_LITERAL(41, 594, 11), // "nonthreaded"
QT_MOC_LITERAL(42, 606, 15), // "printEdgeErrors"
QT_MOC_LITERAL(43, 622, 24), // "pruneEdgesWithErrorAbove"
QT_MOC_LITERAL(44, 647, 11), // "sanityCheck"
QT_MOC_LITERAL(45, 659, 13), // "toggleMapping"
QT_MOC_LITERAL(46, 673, 21), // "filterNodesByPosition"
QT_MOC_LITERAL(47, 695, 1), // "x"
QT_MOC_LITERAL(48, 697, 1), // "y"
QT_MOC_LITERAL(49, 699, 1), // "z"
QT_MOC_LITERAL(50, 701, 13), // "sendAllClouds"
QT_MOC_LITERAL(51, 715, 21), // "threaded_if_available"
QT_MOC_LITERAL(52, 737, 16), // "saveBagfileAsync"
QT_MOC_LITERAL(53, 754, 8), // "filename"
QT_MOC_LITERAL(54, 763, 11), // "saveBagfile"
QT_MOC_LITERAL(55, 775, 20), // "saveIndividualClouds"
QT_MOC_LITERAL(56, 796, 13), // "file_basename"
QT_MOC_LITERAL(57, 810, 8), // "threaded"
QT_MOC_LITERAL(58, 819, 13), // "saveAllClouds"
QT_MOC_LITERAL(59, 833, 15), // "saveAllFeatures"
QT_MOC_LITERAL(60, 849, 11), // "saveOctomap"
QT_MOC_LITERAL(61, 861, 14), // "saveTrajectory"
QT_MOC_LITERAL(62, 876, 12), // "filebasename"
QT_MOC_LITERAL(63, 889, 17), // "with_ground_truth"
QT_MOC_LITERAL(64, 907, 12), // "saveG2OGraph"
QT_MOC_LITERAL(65, 920, 21) // "occupancyFilterClouds"

    },
    "GraphManager\0newTransformationMatrix\0"
    "\0sendFinished\0setGUIInfo\0message\0"
    "setGUIStatus\0setPointCloud\0pointcloud_type*\0"
    "pc\0transformation\0setFeatures\0"
    "const std::vector<Eigen::Vector4f,Eigen::aligned_allocator<Eigen::Vect"
    "or4f> >*\0"
    "updateTransforms\0QList<QMatrix4x4>*\0"
    "transformations\0setGUIInfo2\0setGraphEdges\0"
    "const QList<QPair<int,int> >*\0edge_list\0"
    "deleteLastNode\0resetGLViewer\0setGraph\0"
    "const g2o::OptimizableGraph*\0iamBusy\0"
    "id\0const char*\0max\0progress\0val\0"
    "renderableOctomap\0Renderable*\0r\0reset\0"
    "deleteLastFrame\0clearPointCloud\0"
    "const pointcloud_type*\0clearPointClouds\0"
    "reducePointCloud\0optimizeGraph\0iter\0"
    "nonthreaded\0printEdgeErrors\0"
    "pruneEdgesWithErrorAbove\0sanityCheck\0"
    "toggleMapping\0filterNodesByPosition\0"
    "x\0y\0z\0sendAllClouds\0threaded_if_available\0"
    "saveBagfileAsync\0filename\0saveBagfile\0"
    "saveIndividualClouds\0file_basename\0"
    "threaded\0saveAllClouds\0saveAllFeatures\0"
    "saveOctomap\0saveTrajectory\0filebasename\0"
    "with_ground_truth\0saveG2OGraph\0"
    "occupancyFilterClouds"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GraphManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      44,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      15,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  234,    2, 0x06 /* Public */,
       3,    0,  237,    2, 0x06 /* Public */,
       4,    1,  238,    2, 0x06 /* Public */,
       6,    1,  241,    2, 0x06 /* Public */,
       7,    2,  244,    2, 0x06 /* Public */,
      11,    1,  249,    2, 0x06 /* Public */,
      13,    1,  252,    2, 0x06 /* Public */,
      16,    1,  255,    2, 0x06 /* Public */,
      17,    1,  258,    2, 0x06 /* Public */,
      20,    0,  261,    2, 0x06 /* Public */,
      21,    0,  262,    2, 0x06 /* Public */,
      22,    1,  263,    2, 0x06 /* Public */,
      24,    3,  266,    2, 0x06 /* Public */,
      28,    3,  273,    2, 0x06 /* Public */,
      30,    1,  280,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      33,    0,  283,    2, 0x0a /* Public */,
      34,    0,  284,    2, 0x0a /* Public */,
      35,    1,  285,    2, 0x0a /* Public */,
      37,    0,  288,    2, 0x0a /* Public */,
      38,    1,  289,    2, 0x0a /* Public */,
      39,    2,  292,    2, 0x0a /* Public */,
      39,    1,  297,    2, 0x2a /* Public | MethodCloned */,
      39,    0,  300,    2, 0x2a /* Public | MethodCloned */,
      42,    1,  301,    2, 0x0a /* Public */,
      43,    1,  304,    2, 0x0a /* Public */,
      44,    1,  307,    2, 0x0a /* Public */,
      45,    1,  310,    2, 0x0a /* Public */,
      46,    3,  313,    2, 0x0a /* Public */,
      50,    1,  320,    2, 0x0a /* Public */,
      50,    0,  323,    2, 0x2a /* Public | MethodCloned */,
      52,    1,  324,    2, 0x0a /* Public */,
      54,    1,  327,    2, 0x0a /* Public */,
      55,    2,  330,    2, 0x0a /* Public */,
      55,    1,  335,    2, 0x2a /* Public | MethodCloned */,
      58,    2,  338,    2, 0x0a /* Public */,
      58,    1,  343,    2, 0x2a /* Public | MethodCloned */,
      59,    2,  346,    2, 0x0a /* Public */,
      59,    1,  351,    2, 0x2a /* Public | MethodCloned */,
      60,    2,  354,    2, 0x0a /* Public */,
      60,    1,  359,    2, 0x2a /* Public | MethodCloned */,
      61,    2,  362,    2, 0x0a /* Public */,
      61,    1,  367,    2, 0x2a /* Public | MethodCloned */,
      64,    1,  370,    2, 0x0a /* Public */,
      65,    0,  373,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, 0x80000000 | 8, QMetaType::QMatrix4x4,    9,   10,
    QMetaType::Void, 0x80000000 | 12,    2,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, 0x80000000 | 18,   19,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 23,    2,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 26, QMetaType::Int,   25,    5,   27,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 26, QMetaType::Int,   25,    5,   29,
    QMetaType::Void, 0x80000000 | 31,   32,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 36,    9,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 36,    9,
    QMetaType::Double, QMetaType::Double, QMetaType::Bool,   40,   41,
    QMetaType::Double, QMetaType::Double,   40,
    QMetaType::Double,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::UInt, QMetaType::Float,    2,
    QMetaType::Void, QMetaType::Float,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Float,   47,   48,   49,
    QMetaType::Void, QMetaType::Bool,   51,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   53,
    QMetaType::Void, QMetaType::QString,   53,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,   56,   57,
    QMetaType::Void, QMetaType::QString,   56,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,   53,   57,
    QMetaType::Void, QMetaType::QString,   53,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,   53,   57,
    QMetaType::Void, QMetaType::QString,   53,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,   53,   57,
    QMetaType::Void, QMetaType::QString,   53,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,   62,   63,
    QMetaType::Void, QMetaType::QString,   62,
    QMetaType::Void, QMetaType::QString,   53,
    QMetaType::Void,

       0        // eod
};

void GraphManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GraphManager *_t = static_cast<GraphManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->newTransformationMatrix((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->sendFinished(); break;
        case 2: _t->setGUIInfo((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->setGUIStatus((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->setPointCloud((*reinterpret_cast< pointcloud_type*(*)>(_a[1])),(*reinterpret_cast< QMatrix4x4(*)>(_a[2]))); break;
        case 5: _t->setFeatures((*reinterpret_cast< const std::vector<Eigen::Vector4f,Eigen::aligned_allocator<Eigen::Vector4f> >*(*)>(_a[1]))); break;
        case 6: _t->updateTransforms((*reinterpret_cast< QList<QMatrix4x4>*(*)>(_a[1]))); break;
        case 7: _t->setGUIInfo2((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->setGraphEdges((*reinterpret_cast< const QList<QPair<int,int> >*(*)>(_a[1]))); break;
        case 9: _t->deleteLastNode(); break;
        case 10: _t->resetGLViewer(); break;
        case 11: _t->setGraph((*reinterpret_cast< const g2o::OptimizableGraph*(*)>(_a[1]))); break;
        case 12: _t->iamBusy((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 13: _t->progress((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 14: _t->renderableOctomap((*reinterpret_cast< Renderable*(*)>(_a[1]))); break;
        case 15: _t->reset(); break;
        case 16: _t->deleteLastFrame(); break;
        case 17: _t->clearPointCloud((*reinterpret_cast< const pointcloud_type*(*)>(_a[1]))); break;
        case 18: _t->clearPointClouds(); break;
        case 19: _t->reducePointCloud((*reinterpret_cast< const pointcloud_type*(*)>(_a[1]))); break;
        case 20: { double _r = _t->optimizeGraph((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 21: { double _r = _t->optimizeGraph((*reinterpret_cast< double(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 22: { double _r = _t->optimizeGraph();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = _r; }  break;
        case 23: _t->printEdgeErrors((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 24: { uint _r = _t->pruneEdgesWithErrorAbove((*reinterpret_cast< float(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< uint*>(_a[0]) = _r; }  break;
        case 25: _t->sanityCheck((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 26: _t->toggleMapping((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 27: _t->filterNodesByPosition((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3]))); break;
        case 28: _t->sendAllClouds((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 29: _t->sendAllClouds(); break;
        case 30: _t->saveBagfileAsync((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 31: _t->saveBagfile((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 32: _t->saveIndividualClouds((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 33: _t->saveIndividualClouds((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 34: _t->saveAllClouds((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 35: _t->saveAllClouds((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 36: _t->saveAllFeatures((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 37: _t->saveAllFeatures((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 38: _t->saveOctomap((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 39: _t->saveOctomap((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 40: _t->saveTrajectory((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 41: _t->saveTrajectory((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 42: _t->saveG2OGraph((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 43: _t->occupancyFilterClouds(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (GraphManager::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GraphManager::newTransformationMatrix)) {
                *result = 0;
            }
        }
        {
            typedef void (GraphManager::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GraphManager::sendFinished)) {
                *result = 1;
            }
        }
        {
            typedef void (GraphManager::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GraphManager::setGUIInfo)) {
                *result = 2;
            }
        }
        {
            typedef void (GraphManager::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GraphManager::setGUIStatus)) {
                *result = 3;
            }
        }
        {
            typedef void (GraphManager::*_t)(pointcloud_type * , QMatrix4x4 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GraphManager::setPointCloud)) {
                *result = 4;
            }
        }
        {
            typedef void (GraphManager::*_t)(const std::vector<Eigen::Vector4f,Eigen::aligned_allocator<Eigen::Vector4f> > * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GraphManager::setFeatures)) {
                *result = 5;
            }
        }
        {
            typedef void (GraphManager::*_t)(QList<QMatrix4x4> * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GraphManager::updateTransforms)) {
                *result = 6;
            }
        }
        {
            typedef void (GraphManager::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GraphManager::setGUIInfo2)) {
                *result = 7;
            }
        }
        {
            typedef void (GraphManager::*_t)(const QList<QPair<int,int> > * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GraphManager::setGraphEdges)) {
                *result = 8;
            }
        }
        {
            typedef void (GraphManager::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GraphManager::deleteLastNode)) {
                *result = 9;
            }
        }
        {
            typedef void (GraphManager::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GraphManager::resetGLViewer)) {
                *result = 10;
            }
        }
        {
            typedef void (GraphManager::*_t)(const g2o::OptimizableGraph * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GraphManager::setGraph)) {
                *result = 11;
            }
        }
        {
            typedef void (GraphManager::*_t)(int , const char * , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GraphManager::iamBusy)) {
                *result = 12;
            }
        }
        {
            typedef void (GraphManager::*_t)(int , const char * , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GraphManager::progress)) {
                *result = 13;
            }
        }
        {
            typedef void (GraphManager::*_t)(Renderable * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GraphManager::renderableOctomap)) {
                *result = 14;
            }
        }
    }
}

const QMetaObject GraphManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_GraphManager.data,
      qt_meta_data_GraphManager,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *GraphManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GraphManager::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_GraphManager.stringdata0))
        return static_cast<void*>(const_cast< GraphManager*>(this));
    return QObject::qt_metacast(_clname);
}

int GraphManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 44)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 44;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 44)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 44;
    }
    return _id;
}

// SIGNAL 0
void GraphManager::newTransformationMatrix(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GraphManager::sendFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void GraphManager::setGUIInfo(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void GraphManager::setGUIStatus(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void GraphManager::setPointCloud(pointcloud_type * _t1, QMatrix4x4 _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void GraphManager::setFeatures(const std::vector<Eigen::Vector4f,Eigen::aligned_allocator<Eigen::Vector4f> > * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void GraphManager::updateTransforms(QList<QMatrix4x4> * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void GraphManager::setGUIInfo2(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void GraphManager::setGraphEdges(const QList<QPair<int,int> > * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void GraphManager::deleteLastNode()
{
    QMetaObject::activate(this, &staticMetaObject, 9, Q_NULLPTR);
}

// SIGNAL 10
void GraphManager::resetGLViewer()
{
    QMetaObject::activate(this, &staticMetaObject, 10, Q_NULLPTR);
}

// SIGNAL 11
void GraphManager::setGraph(const g2o::OptimizableGraph * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void GraphManager::iamBusy(int _t1, const char * _t2, int _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void GraphManager::progress(int _t1, const char * _t2, int _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void GraphManager::renderableOctomap(Renderable * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}
QT_END_MOC_NAMESPACE
