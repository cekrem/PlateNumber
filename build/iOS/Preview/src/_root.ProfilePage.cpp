// This file was generated based on build/iOS/Preview/cache/ux13/ProfilePage.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.PlateNumber_bundle.h>
#include <_root.PlateNumber_FuseControlsTextControl_Value_Property.h>
#include <_root.PlateNumber_FuseControlsTextInputControl_Value_Property.h>
#include <_root.ProfilePage.h>
#include <Fuse.Controls.Button.h>
#include <Fuse.Controls.ButtonBase.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextBox.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Controls.TextInputControl.h>
#include <Fuse.Drawing.Colors.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Gestures.ClickedHandler.h>
#include <Fuse.Navigation.Router.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.JavaScript.h>
#include <Uno.Float4.h>
#include <Uno.Int.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.NameTable.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.ValueChangedHandler-1.h>
static uString* STRINGS[14];
static uType* TYPES[6];

namespace g{

// public partial sealed class ProfilePage :2
// {
// static ProfilePage() :17
static void ProfilePage__cctor_4_fn(uType* __type)
{
    ::g::Uno::UX::Selector_typeof()->Init();
    ProfilePage::__g_static_nametable1_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 4, ::STRINGS[0/*"router"*/], ::STRINGS[1/*"temp_eb0"*/], ::STRINGS[2/*"temp_eb1"*/], ::STRINGS[3/*"temp_eb2"*/]);
    ProfilePage::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[4/*"Value"*/]);
}

static void ProfilePage_build(uType* type)
{
    ::STRINGS[0] = uString::Const("router");
    ::STRINGS[1] = uString::Const("temp_eb0");
    ::STRINGS[2] = uString::Const("temp_eb1");
    ::STRINGS[3] = uString::Const("temp_eb2");
    ::STRINGS[4] = uString::Const("Value");
    ::STRINGS[5] = uString::Const("plateNum");
    ::STRINGS[6] = uString::Const("plateSearch");
    ::STRINGS[7] = uString::Const("profileJson");
    ::STRINGS[8] = uString::Const("save");
    ::STRINGS[9] = uString::Const("load");
    ::STRINGS[10] = uString::Const("Pages/ProfilePage.ux");
    ::STRINGS[11] = uString::Const("Regnr:");
    ::STRINGS[12] = uString::Const("Save");
    ::STRINGS[13] = uString::Const("Load");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[4] = ::g::Fuse::Gestures::ClickedHandler_typeof();
    ::TYPES[5] = ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL);
    type->SetDependencies(
        ::g::Fuse::Drawing::Colors_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface3),
        ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/], offsetof(::g::Fuse::Controls::Panel_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface5),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface6),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface7),
        ::g::Fuse::ITemplateSource_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface8),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface9),
        ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/], offsetof(::g::Fuse::Controls::Panel_type, interface10),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface11),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface12),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface13),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface14),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface15),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface16),
        ::g::Fuse::Drawing::ISurfaceDrawable_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface17));
    type->SetFields(122,
        ::g::Fuse::Navigation::Router_typeof(), offsetof(ProfilePage, router), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(ProfilePage, temp_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(ProfilePage, temp1_Value_inst), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(ProfilePage, temp_eb0), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(ProfilePage, temp_eb1), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(ProfilePage, temp_eb2), 0,
        ::g::Uno::UX::NameTable_typeof(), offsetof(ProfilePage, __g_nametable1), 0,
        ::TYPES[0/*string[]*/], (uintptr_t)&ProfilePage::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&ProfilePage::__selector0_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)ProfilePage__New5_fn, 0, true, type, 1, ::g::Fuse::Navigation::Router_typeof()));
}

::g::Fuse::Controls::Panel_type* ProfilePage_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Page_typeof();
    options.FieldCount = 131;
    options.InterfaceCount = 18;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(ProfilePage);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("ProfilePage", options);
    type->fp_build_ = ProfilePage_build;
    type->fp_cctor_ = ProfilePage__cctor_4_fn;
    type->interface17.fp_Draw = (void(*)(uObject*, ::g::Fuse::Drawing::Surface*))::g::Fuse::Controls::Panel__FuseDrawingISurfaceDrawableDraw_fn;
    type->interface17.fp_get_IsPrimary = (void(*)(uObject*, bool*))::g::Fuse::Controls::Panel__FuseDrawingISurfaceDrawableget_IsPrimary_fn;
    type->interface17.fp_get_ElementSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Panel__FuseDrawingISurfaceDrawableget_ElementSize_fn;
    type->interface12.fp_Show = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIShowShow_fn;
    type->interface14.fp_Collapse = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsICollapseCollapse_fn;
    type->interface13.fp_Hide = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIHideHide_fn;
    type->interface16.fp_SetSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__FuseAnimationsIResizeSetSize_fn;
    type->interface15.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__FuseIActualPlacementget_ActualSize_fn;
    type->interface15.fp_get_ActualPosition = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__FuseIActualPlacementget_ActualPosition_fn;
    type->interface15.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface15.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface9.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Visual__UnoCollectionsIEnumerableFuseVisualGetEnumerator_fn;
    type->interface10.fp_Clear = (void(*)(uObject*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeClear_fn;
    type->interface10.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeContains_fn;
    type->interface6.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Visual__UnoCollectionsIListFuseNodeRemoveAt_fn;
    type->interface11.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Visual__UnoCollectionsIEnumerableFuseNodeGetEnumerator_fn;
    type->interface10.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeget_Count_fn;
    type->interface6.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Visual__UnoCollectionsIListFuseNodeget_Item_fn;
    type->interface6.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Visual__Insert1_fn;
    type->interface7.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))::g::Fuse::Controls::Control__OnPropertyChanged2_fn;
    type->interface8.fp_FindTemplate = (void(*)(uObject*, uString*, ::g::Uno::UX::Template**))::g::Fuse::Visual__FindTemplate_fn;
    type->interface10.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Visual__Add1_fn;
    type->interface10.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__Remove1_fn;
    type->interface4.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface4.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface5.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface4.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface4.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public ProfilePage(Fuse.Navigation.Router router) :21
void ProfilePage__ctor_8_fn(ProfilePage* __this, ::g::Fuse::Navigation::Router* router1)
{
    __this->ctor_8(router1);
}

// private void InitializeUX() :27
void ProfilePage__InitializeUX_fn(ProfilePage* __this)
{
    __this->InitializeUX();
}

// public ProfilePage New(Fuse.Navigation.Router router) :21
void ProfilePage__New5_fn(::g::Fuse::Navigation::Router* router1, ProfilePage** __retval)
{
    *__retval = ProfilePage::New5(router1);
}

uSStrong<uArray*> ProfilePage::__g_static_nametable1_;
::g::Uno::UX::Selector ProfilePage::__selector0_;

// public ProfilePage(Fuse.Navigation.Router router) [instance] :21
void ProfilePage::ctor_8(::g::Fuse::Navigation::Router* router1)
{
    uStackFrame __("ProfilePage", ".ctor(Fuse.Navigation.Router)");
    ctor_7();
    router = router1;
    InitializeUX();
}

// private void InitializeUX() [instance] :27
void ProfilePage::InitializeUX()
{
    uStackFrame __("ProfilePage", "InitializeUX()");
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, ProfilePage::__g_static_nametable1_);
    ::g::Fuse::Controls::TextBox* temp = ::g::Fuse::Controls::TextBox::New4();
    temp_Value_inst = ::g::PlateNumber_FuseControlsTextInputControl_Value_Property::New1(temp, ProfilePage::__selector0_);
    ::g::Fuse::Reactive::Data* temp2 = ::g::Fuse::Reactive::Data::New1(::STRINGS[5/*"plateNum"*/]);
    ::g::Fuse::Reactive::Data* temp3 = ::g::Fuse::Reactive::Data::New1(::STRINGS[6/*"plateSearch"*/]);
    ::g::Fuse::Controls::Text* temp1 = ::g::Fuse::Controls::Text::New3();
    temp1_Value_inst = ::g::PlateNumber_FuseControlsTextControl_Value_Property::New1(temp1, ProfilePage::__selector0_);
    ::g::Fuse::Reactive::Data* temp4 = ::g::Fuse::Reactive::Data::New1(::STRINGS[7/*"profileJson"*/]);
    ::g::Fuse::Reactive::Data* temp5 = ::g::Fuse::Reactive::Data::New1(::STRINGS[8/*"save"*/]);
    ::g::Fuse::Reactive::Data* temp6 = ::g::Fuse::Reactive::Data::New1(::STRINGS[9/*"load"*/]);
    ::g::Fuse::Reactive::JavaScript* temp7 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Fuse::Controls::StackPanel* temp8 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Text* temp9 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Reactive::DataBinding* temp10 = ::g::Fuse::Reactive::DataBinding::New1(temp_Value_inst, (uObject*)temp2, 3);
    temp_eb0 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp3);
    ::g::Fuse::Reactive::DataBinding* temp11 = ::g::Fuse::Reactive::DataBinding::New1(temp1_Value_inst, (uObject*)temp4, 3);
    ::g::Fuse::Controls::Button* temp12 = ::g::Fuse::Controls::Button::New5();
    temp_eb1 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp5);
    ::g::Fuse::Controls::Button* temp13 = ::g::Fuse::Controls::Button::New5();
    temp_eb2 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp6);
    temp7->LineNumber(4);
    temp7->FileName(::STRINGS[10/*"Pages/Profi...*/]);
    temp7->File(::g::Uno::UX::BundleFileSource::New1(::g::PlateNumber_bundle::ProfilePage43007964()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp12);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp13);
    temp9->Value(::STRINGS[11/*"Regnr:"*/]);
    temp9->Color(::g::Fuse::Drawing::Colors::White_);
    temp->add_ValueChanged(uDelegate::New(::TYPES[2/*Uno.UX.ValueChangedHandler<string>*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb0)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp11);
    temp12->Text(::STRINGS[12/*"Save"*/]);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp12, uDelegate::New(::TYPES[4/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb1)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp12->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb1);
    temp13->Text(::STRINGS[13/*"Load"*/]);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp13, uDelegate::New(::TYPES[4/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb2)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp13->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb2);
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[5/*Uno.Collections.ICollection<object>*/]), router);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[5/*Uno.Collections.ICollection<object>*/]), temp_eb0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[5/*Uno.Collections.ICollection<object>*/]), temp_eb1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[5/*Uno.Collections.ICollection<object>*/]), temp_eb2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp7);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp8);
}

// public ProfilePage New(Fuse.Navigation.Router router) [static] :21
ProfilePage* ProfilePage::New5(::g::Fuse::Navigation::Router* router1)
{
    ProfilePage* obj1 = (ProfilePage*)uNew(ProfilePage_typeof());
    obj1->ctor_8(router1);
    return obj1;
}
// }

} // ::g
