// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.DatePicker/1.4.0/DatePicker.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace Controls{

// internal abstract interface IDatePickerHost :24
// {
uInterfaceType* IDatePickerHost_typeof();

struct IDatePickerHost
{
    void(*fp_OnValueChanged)(uObject*);
    static void OnValueChanged(const uInterface& __this) { __this.VTable<IDatePickerHost>()->fp_OnValueChanged(__this); }
};
// }

}}} // ::g::Fuse::Controls
