// This file was generated based on /usr/local/share/uno/Packages/Fuse.Text/1.4.0/Implementation/ICU.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Text{namespace Implementation{struct ICU;}}}}

namespace g{
namespace Fuse{
namespace Text{
namespace Implementation{

// internal static extern class ICU :23
// {
uClassType* ICU_typeof();
void ICU__CheckError_fn(int* errorCode);
void ICU__ErrorCString_fn(int* errorCode, void** __retval);
void ICU__IsFailure_fn(int* errorCode, int* __retval);

struct ICU : uObject
{
    static void CheckError(int errorCode);
    static void* ErrorCString(int errorCode);
    static int IsFailure(int errorCode);
};
// }

}}}} // ::g::Fuse::Text::Implementation
