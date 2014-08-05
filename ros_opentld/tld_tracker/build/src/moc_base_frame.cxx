/****************************************************************************
** Meta object code from reading C++ file 'base_frame.hpp'
**
** Created: Fri Aug 1 14:49:49 2014
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/base_frame.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'base_frame.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_BaseFrame[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      17,   11,   10,   10, 0x05,
      47,   44,   10,   10, 0x05,
      86,   82,   10,   10, 0x05,
     126,  115,   10,   10, 0x05,

 // slots: signature, parameters, type, tag, flags
     154,   10,   10,   10, 0x0a,
     173,   10,   10,   10, 0x0a,
     199,   10,   10,   10, 0x0a,
     217,   10,   10,   10, 0x0a,
     236,   10,   10,   10, 0x0a,
     251,   10,   10,   10, 0x0a,
     266,   10,   10,   10, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_BaseFrame[] = {
    "BaseFrame\0\0image\0sig_image_received(QImage)\0"
    "bb\0sig_tracked_object_changed(QRectF)\0"
    "fps\0sig_fps_tracker_changed(int)\0"
    "confidence\0sig_confidence_changed(int)\0"
    "clear_background()\0clear_and_stop_tracking()\0"
    "toggle_learning()\0alternating_mode()\0"
    "export_model()\0import_model()\0reset()\0"
};

void BaseFrame::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        BaseFrame *_t = static_cast<BaseFrame *>(_o);
        switch (_id) {
        case 0: _t->sig_image_received((*reinterpret_cast< const QImage(*)>(_a[1]))); break;
        case 1: _t->sig_tracked_object_changed((*reinterpret_cast< const QRectF(*)>(_a[1]))); break;
        case 2: _t->sig_fps_tracker_changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->sig_confidence_changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->clear_background(); break;
        case 5: _t->clear_and_stop_tracking(); break;
        case 6: _t->toggle_learning(); break;
        case 7: _t->alternating_mode(); break;
        case 8: _t->export_model(); break;
        case 9: _t->import_model(); break;
        case 10: _t->reset(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData BaseFrame::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject BaseFrame::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_BaseFrame,
      qt_meta_data_BaseFrame, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &BaseFrame::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *BaseFrame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *BaseFrame::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BaseFrame))
        return static_cast<void*>(const_cast< BaseFrame*>(this));
    return QWidget::qt_metacast(_clname);
}

int BaseFrame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void BaseFrame::sig_image_received(const QImage & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void BaseFrame::sig_tracked_object_changed(const QRectF & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void BaseFrame::sig_fps_tracker_changed(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void BaseFrame::sig_confidence_changed(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
