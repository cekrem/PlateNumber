// This file was generated based on build/iOS/Preview/cache/ux13/PlateNumber.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.PlateNumber_FuseControlsTextInputControl_Value_Property.h>
#include <Fuse.Controls.TextInputControl.h>
#include <Uno.Bool.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class PlateNumber_FuseControlsTextInputControl_Value_Property :1
// {
static void PlateNumber_FuseControlsTextInputControl_Value_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Controls::TextInputControl_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*Fuse.Controls.TextInputControl*/], offsetof(PlateNumber_FuseControlsTextInputControl_Value_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* PlateNumber_FuseControlsTextInputControl_Value_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(PlateNumber_FuseControlsTextInputControl_Value_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("PlateNumber_FuseControlsTextInputControl_Value_Property", options);
    type->fp_build_ = PlateNumber_FuseControlsTextInputControl_Value_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))PlateNumber_FuseControlsTextInputControl_Value_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))PlateNumber_FuseControlsTextInputControl_Value_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))PlateNumber_FuseControlsTextInputControl_Value_Property__Set1_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))PlateNumber_FuseControlsTextInputControl_Value_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public PlateNumber_FuseControlsTextInputControl_Value_Property(Fuse.Controls.TextInputControl obj, Uno.UX.Selector name) :4
void PlateNumber_FuseControlsTextInputControl_Value_Property__ctor_3_fn(PlateNumber_FuseControlsTextInputControl_Value_Property* __this, ::g::Fuse::Controls::TextInputControl* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed string Get(Uno.UX.PropertyObject obj) :6
void PlateNumber_FuseControlsTextInputControl_Value_Property__Get1_fn(PlateNumber_FuseControlsTextInputControl_Value_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString** __retval)
{
    uStackFrame __("PlateNumber_FuseControlsTextInputControl_Value_Property", "Get(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Fuse::Controls::TextInputControl*>(obj, ::TYPES[0/*Fuse.Controls.TextInputControl*/]))->Value(), void();
}

// public PlateNumber_FuseControlsTextInputControl_Value_Property New(Fuse.Controls.TextInputControl obj, Uno.UX.Selector name) :4
void PlateNumber_FuseControlsTextInputControl_Value_Property__New1_fn(::g::Fuse::Controls::TextInputControl* obj, ::g::Uno::UX::Selector* name, PlateNumber_FuseControlsTextInputControl_Value_Property** __retval)
{
    *__retval = PlateNumber_FuseControlsTextInputControl_Value_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :5
void PlateNumber_FuseControlsTextInputControl_Value_Property__get_Object_fn(PlateNumber_FuseControlsTextInputControl_Value_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, string v, Uno.UX.IPropertyListener origin) :7
void PlateNumber_FuseControlsTextInputControl_Value_Property__Set1_fn(PlateNumber_FuseControlsTextInputControl_Value_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString* v, uObject* origin)
{
    uStackFrame __("PlateNumber_FuseControlsTextInputControl_Value_Property", "Set(Uno.UX.PropertyObject,string,Uno.UX.IPropertyListener)");
    uPtr(uCast< ::g::Fuse::Controls::TextInputControl*>(obj, ::TYPES[0/*Fuse.Controls.TextInputControl*/]))->SetValue(v, origin);
}

// public override sealed bool get_SupportsOriginSetter() :8
void PlateNumber_FuseControlsTextInputControl_Value_Property__get_SupportsOriginSetter_fn(PlateNumber_FuseControlsTextInputControl_Value_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public PlateNumber_FuseControlsTextInputControl_Value_Property(Fuse.Controls.TextInputControl obj, Uno.UX.Selector name) [instance] :4
void PlateNumber_FuseControlsTextInputControl_Value_Property::ctor_3(::g::Fuse::Controls::TextInputControl* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public PlateNumber_FuseControlsTextInputControl_Value_Property New(Fuse.Controls.TextInputControl obj, Uno.UX.Selector name) [static] :4
PlateNumber_FuseControlsTextInputControl_Value_Property* PlateNumber_FuseControlsTextInputControl_Value_Property::New1(::g::Fuse::Controls::TextInputControl* obj, ::g::Uno::UX::Selector name)
{
    PlateNumber_FuseControlsTextInputControl_Value_Property* obj1 = (PlateNumber_FuseControlsTextInputControl_Value_Property*)uNew(PlateNumber_FuseControlsTextInputControl_Value_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g
