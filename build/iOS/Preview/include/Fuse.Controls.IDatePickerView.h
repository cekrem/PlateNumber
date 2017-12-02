// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.DatePicker/1.4.0/DatePicker.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{struct DateTime;}}

namespace g{
namespace Fuse{
namespace Controls{

// internal abstract interface IDatePickerView :14
// {
uInterfaceType* IDatePickerView_typeof();

struct IDatePickerView
{
    void(*fp_get_MaxValue)(uObject*, ::g::Uno::DateTime*);
    void(*fp_set_MaxValue)(uObject*, ::g::Uno::DateTime*);
    void(*fp_get_MinValue)(uObject*, ::g::Uno::DateTime*);
    void(*fp_set_MinValue)(uObject*, ::g::Uno::DateTime*);
    void(*fp_OnRooted)(uObject*);
    void(*fp_OnUnrooted)(uObject*);
    void(*fp_get_Value)(uObject*, ::g::Uno::DateTime*);
    void(*fp_set_Value)(uObject*, ::g::Uno::DateTime*);
    static ::g::Uno::DateTime MaxValue(const uInterface& __this);
    static void MaxValue(const uInterface& __this, ::g::Uno::DateTime value);
    static ::g::Uno::DateTime MinValue(const uInterface& __this);
    static void MinValue(const uInterface& __this, ::g::Uno::DateTime value);
    static void OnRooted(const uInterface& __this) { __this.VTable<IDatePickerView>()->fp_OnRooted(__this); }
    static void OnUnrooted(const uInterface& __this) { __this.VTable<IDatePickerView>()->fp_OnUnrooted(__this); }
    static ::g::Uno::DateTime Value(const uInterface& __this);
    static void Value(const uInterface& __this, ::g::Uno::DateTime value);
};

}}} // ::g::Fuse::Controls

#include <Uno.DateTime.h>

namespace g{
namespace Fuse{
namespace Controls{

inline ::g::Uno::DateTime IDatePickerView::MaxValue(const uInterface& __this) { ::g::Uno::DateTime __retval; return __this.VTable<IDatePickerView>()->fp_get_MaxValue(__this, &__retval), __retval; }
inline void IDatePickerView::MaxValue(const uInterface& __this, ::g::Uno::DateTime value) { __this.VTable<IDatePickerView>()->fp_set_MaxValue(__this, &value); }
inline ::g::Uno::DateTime IDatePickerView::MinValue(const uInterface& __this) { ::g::Uno::DateTime __retval; return __this.VTable<IDatePickerView>()->fp_get_MinValue(__this, &__retval), __retval; }
inline void IDatePickerView::MinValue(const uInterface& __this, ::g::Uno::DateTime value) { __this.VTable<IDatePickerView>()->fp_set_MinValue(__this, &value); }
inline ::g::Uno::DateTime IDatePickerView::Value(const uInterface& __this) { ::g::Uno::DateTime __retval; return __this.VTable<IDatePickerView>()->fp_get_Value(__this, &__retval), __retval; }
inline void IDatePickerView::Value(const uInterface& __this, ::g::Uno::DateTime value) { __this.VTable<IDatePickerView>()->fp_set_Value(__this, &value); }
// }

}}} // ::g::Fuse::Controls
