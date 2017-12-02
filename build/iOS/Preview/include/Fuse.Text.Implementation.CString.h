// This file was generated based on /usr/local/share/uno/Packages/Fuse.Text/1.4.0/Implementation/Util.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Text{namespace Implementation{struct CString;}}}}

namespace g{
namespace Fuse{
namespace Text{
namespace Implementation{

// internal static extern class CString :19
// {
uClassType* CString_typeof();
void CString__strlen_fn(void** cstr, int* __retval);
void CString__ToString_fn(void** cstr, uString** __retval);

struct CString : uObject
{
    static int strlen(void* cstr);
    static uString* ToString(void* cstr);
};
// }

}}}} // ::g::Fuse::Text::Implementation
