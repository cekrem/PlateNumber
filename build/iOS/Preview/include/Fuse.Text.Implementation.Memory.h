// This file was generated based on /usr/local/share/uno/Packages/Fuse.Text/1.4.0/Implementation/Util.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Text{namespace Implementation{struct Memory;}}}}

namespace g{
namespace Fuse{
namespace Text{
namespace Implementation{

// internal static extern class Memory :9
// {
uClassType* Memory_typeof();
void Memory__Copy_fn(uArray* dst, void** src, int* len);

struct Memory : uObject
{
    static void Copy(uArray* dst, void* src, int len);
};
// }

}}}} // ::g::Fuse::Text::Implementation
