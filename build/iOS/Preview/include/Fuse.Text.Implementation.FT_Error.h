// This file was generated based on /usr/local/share/uno/Packages/Fuse.Text/1.4.0/Implementation/FreeType.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Text{namespace Implementation{struct FT_Error;}}}}

namespace g{
namespace Fuse{
namespace Text{
namespace Implementation{

// internal static extern class FT_Error :11
// {
uClassType* FT_Error_typeof();
void FT_Error__Check_fn(int* err);
void FT_Error__ErrorCString_fn(int* err, void** __retval);
void FT_Error__ErrorString_fn(int* err, uString** __retval);

struct FT_Error : uObject
{
    static void Check(int err);
    static void* ErrorCString(int err);
    static uString* ErrorString(int err);
};
// }

}}}} // ::g::Fuse::Text::Implementation
