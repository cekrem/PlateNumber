// This file was generated based on PlateNumber.unoproj.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.PlateNumber_bundle.h>
#include <Uno.IO.Bundle.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.String.h>
static uString* STRINGS[2];

namespace g{

// public static generated class PlateNumber_bundle :0
// {
// static PlateNumber_bundle() :0
static void PlateNumber_bundle__cctor__fn(uType* __type)
{
    PlateNumber_bundle::ProfilePage43007964_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"PlateNumber"*/]))->GetFile(::STRINGS[1/*"profilepage...*/]);
}

static void PlateNumber_bundle_build(uType* type)
{
    ::STRINGS[0] = uString::Const("PlateNumber");
    ::STRINGS[1] = uString::Const("profilepage-959e2408.js");
    type->SetFields(0,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&PlateNumber_bundle::ProfilePage43007964_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("ProfilePage43007964", 0));
}

uClassType* PlateNumber_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("PlateNumber_bundle", options);
    type->fp_build_ = PlateNumber_bundle_build;
    type->fp_cctor_ = PlateNumber_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::IO::BundleFile*> PlateNumber_bundle::ProfilePage43007964_;
// }

} // ::g
