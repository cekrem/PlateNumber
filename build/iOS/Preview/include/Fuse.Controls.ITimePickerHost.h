// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.TimePicker/1.4.0/TimePicker.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace Controls{

// internal abstract interface ITimePickerHost :23
// {
uInterfaceType* ITimePickerHost_typeof();

struct ITimePickerHost
{
    void(*fp_OnValueChanged)(uObject*);
    static void OnValueChanged(const uInterface& __this) { __this.VTable<ITimePickerHost>()->fp_OnValueChanged(__this); }
};
// }

}}} // ::g::Fuse::Controls
