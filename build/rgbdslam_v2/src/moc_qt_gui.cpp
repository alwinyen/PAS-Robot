/****************************************************************************
** Meta object code from reading C++ file 'qt_gui.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/rgbdslam_v2/src/qt_gui.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qt_gui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Graphical_UI_t {
    QByteArrayData data[81];
    char stringdata0[1110];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Graphical_UI_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Graphical_UI_t qt_meta_stringdata_Graphical_UI = {
    {
QT_MOC_LITERAL(0, 0, 12), // "Graphical_UI"
QT_MOC_LITERAL(1, 13, 5), // "reset"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 11), // "togglePause"
QT_MOC_LITERAL(4, 32, 11), // "getOneFrame"
QT_MOC_LITERAL(5, 44, 15), // "deleteLastFrame"
QT_MOC_LITERAL(6, 60, 13), // "sendAllClouds"
QT_MOC_LITERAL(7, 74, 11), // "saveBagfile"
QT_MOC_LITERAL(8, 86, 8), // "filename"
QT_MOC_LITERAL(9, 95, 13), // "saveAllClouds"
QT_MOC_LITERAL(10, 109, 12), // "openPCDFiles"
QT_MOC_LITERAL(11, 122, 12), // "filenamelist"
QT_MOC_LITERAL(12, 135, 11), // "openBagFile"
QT_MOC_LITERAL(13, 147, 12), // "saveG2OGraph"
QT_MOC_LITERAL(14, 160, 15), // "saveAllFeatures"
QT_MOC_LITERAL(15, 176, 14), // "saveTrajectory"
QT_MOC_LITERAL(16, 191, 14), // "saveOctomapSig"
QT_MOC_LITERAL(17, 206, 17), // "computeOctomapSig"
QT_MOC_LITERAL(18, 224, 20), // "saveIndividualClouds"
QT_MOC_LITERAL(19, 245, 13), // "file_basename"
QT_MOC_LITERAL(20, 259, 10), // "evaluation"
QT_MOC_LITERAL(21, 270, 13), // "optimizeGraph"
QT_MOC_LITERAL(22, 284, 21), // "occupancyFilterClouds"
QT_MOC_LITERAL(23, 306, 15), // "printEdgeErrors"
QT_MOC_LITERAL(24, 322, 24), // "pruneEdgesWithErrorAbove"
QT_MOC_LITERAL(25, 347, 13), // "toggleMapping"
QT_MOC_LITERAL(26, 361, 11), // "clearClouds"
QT_MOC_LITERAL(27, 373, 14), // "setVisualImage"
QT_MOC_LITERAL(28, 388, 19), // "setFeatureFlowImage"
QT_MOC_LITERAL(29, 408, 15), // "setFeatureImage"
QT_MOC_LITERAL(30, 424, 13), // "setDepthImage"
QT_MOC_LITERAL(31, 438, 12), // "sendFinished"
QT_MOC_LITERAL(32, 451, 11), // "showOptions"
QT_MOC_LITERAL(33, 463, 8), // "showBusy"
QT_MOC_LITERAL(34, 472, 2), // "id"
QT_MOC_LITERAL(35, 475, 11), // "const char*"
QT_MOC_LITERAL(36, 487, 7), // "message"
QT_MOC_LITERAL(37, 495, 3), // "max"
QT_MOC_LITERAL(38, 499, 7), // "setBusy"
QT_MOC_LITERAL(39, 507, 3), // "val"
QT_MOC_LITERAL(40, 511, 11), // "set2DStream"
QT_MOC_LITERAL(41, 523, 5), // "is_on"
QT_MOC_LITERAL(42, 529, 13), // "saveAllImages"
QT_MOC_LITERAL(43, 543, 17), // "saveVectorGraphic"
QT_MOC_LITERAL(44, 561, 8), // "resetCmd"
QT_MOC_LITERAL(45, 570, 12), // "reloadConfig"
QT_MOC_LITERAL(46, 583, 7), // "sendAll"
QT_MOC_LITERAL(47, 591, 8), // "setParam"
QT_MOC_LITERAL(48, 600, 14), // "setStereoShift"
QT_MOC_LITERAL(49, 615, 15), // "setRotationGrid"
QT_MOC_LITERAL(50, 631, 7), // "saveAll"
QT_MOC_LITERAL(51, 639, 11), // "saveOctomap"
QT_MOC_LITERAL(52, 651, 14), // "computeOctomap"
QT_MOC_LITERAL(53, 666, 14), // "saveIndividual"
QT_MOC_LITERAL(54, 681, 12), // "quickSaveAll"
QT_MOC_LITERAL(55, 694, 12), // "saveFeatures"
QT_MOC_LITERAL(56, 707, 5), // "pause"
QT_MOC_LITERAL(57, 713, 5), // "about"
QT_MOC_LITERAL(58, 719, 4), // "help"
QT_MOC_LITERAL(59, 724, 7), // "setInfo"
QT_MOC_LITERAL(60, 732, 8), // "setInfo2"
QT_MOC_LITERAL(61, 741, 9), // "setStatus"
QT_MOC_LITERAL(62, 751, 14), // "getOneFrameCmd"
QT_MOC_LITERAL(63, 766, 18), // "deleteLastFrameCmd"
QT_MOC_LITERAL(64, 785, 20), // "saveTrajectoryDialog"
QT_MOC_LITERAL(65, 806, 17), // "openBagFileDialog"
QT_MOC_LITERAL(66, 824, 13), // "saveBagDialog"
QT_MOC_LITERAL(67, 838, 18), // "openPCDFilesDialog"
QT_MOC_LITERAL(68, 857, 18), // "saveG2OGraphDialog"
QT_MOC_LITERAL(69, 876, 17), // "optimizeGraphTrig"
QT_MOC_LITERAL(70, 894, 14), // "showEdgeErrors"
QT_MOC_LITERAL(71, 909, 23), // "pruneEdgesWithHighError"
QT_MOC_LITERAL(72, 933, 16), // "toggleFullscreen"
QT_MOC_LITERAL(73, 950, 18), // "toggleCloudStorage"
QT_MOC_LITERAL(74, 969, 24), // "toggleOnlineVoxelMapping"
QT_MOC_LITERAL(75, 994, 26), // "toggleLandmarkOptimization"
QT_MOC_LITERAL(76, 1021, 17), // "toggleMappingPriv"
QT_MOC_LITERAL(77, 1039, 16), // "toggleScreencast"
QT_MOC_LITERAL(78, 1056, 10), // "param_name"
QT_MOC_LITERAL(79, 1067, 20), // "setOctoMapResolution"
QT_MOC_LITERAL(80, 1088, 21) // "triggerCloudFiltering"

    },
    "Graphical_UI\0reset\0\0togglePause\0"
    "getOneFrame\0deleteLastFrame\0sendAllClouds\0"
    "saveBagfile\0filename\0saveAllClouds\0"
    "openPCDFiles\0filenamelist\0openBagFile\0"
    "saveG2OGraph\0saveAllFeatures\0"
    "saveTrajectory\0saveOctomapSig\0"
    "computeOctomapSig\0saveIndividualClouds\0"
    "file_basename\0evaluation\0optimizeGraph\0"
    "occupancyFilterClouds\0printEdgeErrors\0"
    "pruneEdgesWithErrorAbove\0toggleMapping\0"
    "clearClouds\0setVisualImage\0"
    "setFeatureFlowImage\0setFeatureImage\0"
    "setDepthImage\0sendFinished\0showOptions\0"
    "showBusy\0id\0const char*\0message\0max\0"
    "setBusy\0val\0set2DStream\0is_on\0"
    "saveAllImages\0saveVectorGraphic\0"
    "resetCmd\0reloadConfig\0sendAll\0setParam\0"
    "setStereoShift\0setRotationGrid\0saveAll\0"
    "saveOctomap\0computeOctomap\0saveIndividual\0"
    "quickSaveAll\0saveFeatures\0pause\0about\0"
    "help\0setInfo\0setInfo2\0setStatus\0"
    "getOneFrameCmd\0deleteLastFrameCmd\0"
    "saveTrajectoryDialog\0openBagFileDialog\0"
    "saveBagDialog\0openPCDFilesDialog\0"
    "saveG2OGraphDialog\0optimizeGraphTrig\0"
    "showEdgeErrors\0pruneEdgesWithHighError\0"
    "toggleFullscreen\0toggleCloudStorage\0"
    "toggleOnlineVoxelMapping\0"
    "toggleLandmarkOptimization\0toggleMappingPriv\0"
    "toggleScreencast\0param_name\0"
    "setOctoMapResolution\0triggerCloudFiltering"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Graphical_UI[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      70,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      22,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  364,    2, 0x06 /* Public */,
       3,    0,  365,    2, 0x06 /* Public */,
       4,    0,  366,    2, 0x06 /* Public */,
       5,    0,  367,    2, 0x06 /* Public */,
       6,    0,  368,    2, 0x06 /* Public */,
       7,    1,  369,    2, 0x06 /* Public */,
       9,    1,  372,    2, 0x06 /* Public */,
      10,    1,  375,    2, 0x06 /* Public */,
      12,    1,  378,    2, 0x06 /* Public */,
      13,    1,  381,    2, 0x06 /* Public */,
      14,    1,  384,    2, 0x06 /* Public */,
      15,    1,  387,    2, 0x06 /* Public */,
      16,    1,  390,    2, 0x06 /* Public */,
      17,    1,  393,    2, 0x06 /* Public */,
      18,    1,  396,    2, 0x06 /* Public */,
      20,    0,  399,    2, 0x06 /* Public */,
      21,    0,  400,    2, 0x06 /* Public */,
      22,    0,  401,    2, 0x06 /* Public */,
      23,    1,  402,    2, 0x06 /* Public */,
      24,    1,  405,    2, 0x06 /* Public */,
      25,    1,  408,    2, 0x06 /* Public */,
      26,    0,  411,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      27,    1,  412,    2, 0x0a /* Public */,
      28,    1,  415,    2, 0x0a /* Public */,
      29,    1,  418,    2, 0x0a /* Public */,
      30,    1,  421,    2, 0x0a /* Public */,
      31,    0,  424,    2, 0x0a /* Public */,
      32,    0,  425,    2, 0x0a /* Public */,
      33,    3,  426,    2, 0x0a /* Public */,
      38,    3,  433,    2, 0x0a /* Public */,
      40,    1,  440,    2, 0x0a /* Public */,
      42,    0,  443,    2, 0x0a /* Public */,
      43,    0,  444,    2, 0x08 /* Private */,
      44,    0,  445,    2, 0x08 /* Private */,
      45,    0,  446,    2, 0x08 /* Private */,
      46,    0,  447,    2, 0x08 /* Private */,
      47,    0,  448,    2, 0x08 /* Private */,
      48,    0,  449,    2, 0x08 /* Private */,
      49,    0,  450,    2, 0x08 /* Private */,
      50,    0,  451,    2, 0x08 /* Private */,
      51,    0,  452,    2, 0x08 /* Private */,
      52,    0,  453,    2, 0x08 /* Private */,
      53,    0,  454,    2, 0x08 /* Private */,
      54,    0,  455,    2, 0x08 /* Private */,
      55,    0,  456,    2, 0x08 /* Private */,
      56,    1,  457,    2, 0x08 /* Private */,
      57,    0,  460,    2, 0x08 /* Private */,
      58,    0,  461,    2, 0x08 /* Private */,
      59,    1,  462,    2, 0x08 /* Private */,
      60,    1,  465,    2, 0x08 /* Private */,
      61,    1,  468,    2, 0x08 /* Private */,
      62,    0,  471,    2, 0x08 /* Private */,
      63,    0,  472,    2, 0x08 /* Private */,
      64,    0,  473,    2, 0x08 /* Private */,
      65,    0,  474,    2, 0x08 /* Private */,
      66,    0,  475,    2, 0x08 /* Private */,
      67,    0,  476,    2, 0x08 /* Private */,
      68,    0,  477,    2, 0x08 /* Private */,
      69,    0,  478,    2, 0x08 /* Private */,
      70,    0,  479,    2, 0x08 /* Private */,
      71,    0,  480,    2, 0x08 /* Private */,
      72,    1,  481,    2, 0x08 /* Private */,
      73,    1,  484,    2, 0x08 /* Private */,
      74,    1,  487,    2, 0x08 /* Private */,
      75,    1,  490,    2, 0x08 /* Private */,
      76,    1,  493,    2, 0x08 /* Private */,
      77,    1,  496,    2, 0x08 /* Private */,
      47,    1,  499,    2, 0x08 /* Private */,
      79,    0,  502,    2, 0x08 /* Private */,
      80,    0,  503,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QStringList,   11,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString,   19,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Float,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QImage,    2,
    QMetaType::Void, QMetaType::QImage,    2,
    QMetaType::Void, QMetaType::QImage,    2,
    QMetaType::Void, QMetaType::QImage,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 35, QMetaType::Int,   34,   36,   37,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 35, QMetaType::Int,   34,   36,   39,
    QMetaType::Void, QMetaType::Bool,   41,
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
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
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
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::QString,   78,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Graphical_UI::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Graphical_UI *_t = static_cast<Graphical_UI *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->reset(); break;
        case 1: _t->togglePause(); break;
        case 2: _t->getOneFrame(); break;
        case 3: _t->deleteLastFrame(); break;
        case 4: _t->sendAllClouds(); break;
        case 5: _t->saveBagfile((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->saveAllClouds((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->openPCDFiles((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 8: _t->openBagFile((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: _t->saveG2OGraph((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 10: _t->saveAllFeatures((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 11: _t->saveTrajectory((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 12: _t->saveOctomapSig((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 13: _t->computeOctomapSig((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 14: _t->saveIndividualClouds((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 15: _t->evaluation(); break;
        case 16: _t->optimizeGraph(); break;
        case 17: _t->occupancyFilterClouds(); break;
        case 18: _t->printEdgeErrors((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 19: _t->pruneEdgesWithErrorAbove((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 20: _t->toggleMapping((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 21: _t->clearClouds(); break;
        case 22: _t->setVisualImage((*reinterpret_cast< QImage(*)>(_a[1]))); break;
        case 23: _t->setFeatureFlowImage((*reinterpret_cast< QImage(*)>(_a[1]))); break;
        case 24: _t->setFeatureImage((*reinterpret_cast< QImage(*)>(_a[1]))); break;
        case 25: _t->setDepthImage((*reinterpret_cast< QImage(*)>(_a[1]))); break;
        case 26: _t->sendFinished(); break;
        case 27: _t->showOptions(); break;
        case 28: _t->showBusy((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 29: _t->setBusy((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const char*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 30: _t->set2DStream((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 31: _t->saveAllImages(); break;
        case 32: _t->saveVectorGraphic(); break;
        case 33: _t->resetCmd(); break;
        case 34: _t->reloadConfig(); break;
        case 35: _t->sendAll(); break;
        case 36: _t->setParam(); break;
        case 37: _t->setStereoShift(); break;
        case 38: _t->setRotationGrid(); break;
        case 39: _t->saveAll(); break;
        case 40: _t->saveOctomap(); break;
        case 41: _t->computeOctomap(); break;
        case 42: _t->saveIndividual(); break;
        case 43: _t->quickSaveAll(); break;
        case 44: _t->saveFeatures(); break;
        case 45: _t->pause((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 46: _t->about(); break;
        case 47: _t->help(); break;
        case 48: _t->setInfo((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 49: _t->setInfo2((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 50: _t->setStatus((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 51: _t->getOneFrameCmd(); break;
        case 52: _t->deleteLastFrameCmd(); break;
        case 53: _t->saveTrajectoryDialog(); break;
        case 54: _t->openBagFileDialog(); break;
        case 55: _t->saveBagDialog(); break;
        case 56: _t->openPCDFilesDialog(); break;
        case 57: _t->saveG2OGraphDialog(); break;
        case 58: _t->optimizeGraphTrig(); break;
        case 59: _t->showEdgeErrors(); break;
        case 60: _t->pruneEdgesWithHighError(); break;
        case 61: _t->toggleFullscreen((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 62: _t->toggleCloudStorage((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 63: _t->toggleOnlineVoxelMapping((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 64: _t->toggleLandmarkOptimization((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 65: _t->toggleMappingPriv((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 66: _t->toggleScreencast((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 67: _t->setParam((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 68: _t->setOctoMapResolution(); break;
        case 69: _t->triggerCloudFiltering(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Graphical_UI::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Graphical_UI::reset)) {
                *result = 0;
            }
        }
        {
            typedef void (Graphical_UI::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Graphical_UI::togglePause)) {
                *result = 1;
            }
        }
        {
            typedef void (Graphical_UI::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Graphical_UI::getOneFrame)) {
                *result = 2;
            }
        }
        {
            typedef void (Graphical_UI::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Graphical_UI::deleteLastFrame)) {
                *result = 3;
            }
        }
        {
            typedef void (Graphical_UI::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Graphical_UI::sendAllClouds)) {
                *result = 4;
            }
        }
        {
            typedef void (Graphical_UI::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Graphical_UI::saveBagfile)) {
                *result = 5;
            }
        }
        {
            typedef void (Graphical_UI::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Graphical_UI::saveAllClouds)) {
                *result = 6;
            }
        }
        {
            typedef void (Graphical_UI::*_t)(QStringList );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Graphical_UI::openPCDFiles)) {
                *result = 7;
            }
        }
        {
            typedef void (Graphical_UI::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Graphical_UI::openBagFile)) {
                *result = 8;
            }
        }
        {
            typedef void (Graphical_UI::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Graphical_UI::saveG2OGraph)) {
                *result = 9;
            }
        }
        {
            typedef void (Graphical_UI::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Graphical_UI::saveAllFeatures)) {
                *result = 10;
            }
        }
        {
            typedef void (Graphical_UI::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Graphical_UI::saveTrajectory)) {
                *result = 11;
            }
        }
        {
            typedef void (Graphical_UI::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Graphical_UI::saveOctomapSig)) {
                *result = 12;
            }
        }
        {
            typedef void (Graphical_UI::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Graphical_UI::computeOctomapSig)) {
                *result = 13;
            }
        }
        {
            typedef void (Graphical_UI::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Graphical_UI::saveIndividualClouds)) {
                *result = 14;
            }
        }
        {
            typedef void (Graphical_UI::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Graphical_UI::evaluation)) {
                *result = 15;
            }
        }
        {
            typedef void (Graphical_UI::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Graphical_UI::optimizeGraph)) {
                *result = 16;
            }
        }
        {
            typedef void (Graphical_UI::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Graphical_UI::occupancyFilterClouds)) {
                *result = 17;
            }
        }
        {
            typedef void (Graphical_UI::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Graphical_UI::printEdgeErrors)) {
                *result = 18;
            }
        }
        {
            typedef void (Graphical_UI::*_t)(float );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Graphical_UI::pruneEdgesWithErrorAbove)) {
                *result = 19;
            }
        }
        {
            typedef void (Graphical_UI::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Graphical_UI::toggleMapping)) {
                *result = 20;
            }
        }
        {
            typedef void (Graphical_UI::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Graphical_UI::clearClouds)) {
                *result = 21;
            }
        }
    }
}

const QMetaObject Graphical_UI::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Graphical_UI.data,
      qt_meta_data_Graphical_UI,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Graphical_UI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Graphical_UI::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Graphical_UI.stringdata0))
        return static_cast<void*>(const_cast< Graphical_UI*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int Graphical_UI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 70)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 70;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 70)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 70;
    }
    return _id;
}

// SIGNAL 0
void Graphical_UI::reset()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void Graphical_UI::togglePause()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void Graphical_UI::getOneFrame()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void Graphical_UI::deleteLastFrame()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void Graphical_UI::sendAllClouds()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}

// SIGNAL 5
void Graphical_UI::saveBagfile(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void Graphical_UI::saveAllClouds(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void Graphical_UI::openPCDFiles(QStringList _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void Graphical_UI::openBagFile(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void Graphical_UI::saveG2OGraph(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void Graphical_UI::saveAllFeatures(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void Graphical_UI::saveTrajectory(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void Graphical_UI::saveOctomapSig(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void Graphical_UI::computeOctomapSig(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void Graphical_UI::saveIndividualClouds(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void Graphical_UI::evaluation()
{
    QMetaObject::activate(this, &staticMetaObject, 15, Q_NULLPTR);
}

// SIGNAL 16
void Graphical_UI::optimizeGraph()
{
    QMetaObject::activate(this, &staticMetaObject, 16, Q_NULLPTR);
}

// SIGNAL 17
void Graphical_UI::occupancyFilterClouds()
{
    QMetaObject::activate(this, &staticMetaObject, 17, Q_NULLPTR);
}

// SIGNAL 18
void Graphical_UI::printEdgeErrors(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void Graphical_UI::pruneEdgesWithErrorAbove(float _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void Graphical_UI::toggleMapping(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void Graphical_UI::clearClouds()
{
    QMetaObject::activate(this, &staticMetaObject, 21, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
