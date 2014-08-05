/****************************************************************************
** Meta object code from reading C++ file 'base_frame_graphics_view.hpp'
**
** Created: Fri Aug 1 14:49:47 2014
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/base_frame_graphics_view.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'base_frame_graphics_view.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_BaseFrameGraphicsView[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      28,   23,   22,   22, 0x05,

 // slots: signature, parameters, type, tag, flags
      51,   47,   22,   22, 0x0a,
      74,   23,   22,   22, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_BaseFrameGraphicsView[] = {
    "BaseFrameGraphicsView\0\0rect\0"
    "sig_bb_set(QRectF)\0img\0image_received(QImage)\0"
    "tracked_objet_changed(QRectF)\0"
};

void BaseFrameGraphicsView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        BaseFrameGraphicsView *_t = static_cast<BaseFrameGraphicsView *>(_o);
        switch (_id) {
        case 0: _t->sig_bb_set((*reinterpret_cast< QRectF(*)>(_a[1]))); break;
        case 1: _t->image_received((*reinterpret_cast< const QImage(*)>(_a[1]))); break;
        case 2: _t->tracked_objet_changed((*reinterpret_cast< const QRectF(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData BaseFrameGraphicsView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject BaseFrameGraphicsView::staticMetaObject = {
    { &QGraphicsView::staticMetaObject, qt_meta_stringdata_BaseFrameGraphicsView,
      qt_meta_data_BaseFrameGraphicsView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &BaseFrameGraphicsView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *BaseFrameGraphicsView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *BaseFrameGraphicsView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BaseFrameGraphicsView))
        return static_cast<void*>(const_cast< BaseFrameGraphicsView*>(this));
    return QGraphicsView::qt_metacast(_clname);
}

int BaseFrameGraphicsView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void BaseFrameGraphicsView::sig_bb_set(QRectF _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
