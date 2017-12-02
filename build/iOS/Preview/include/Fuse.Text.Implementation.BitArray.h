// This file was generated based on /usr/local/share/uno/Packages/Fuse.Text/1.4.0/Implementation/BitArray.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Text{namespace Implementation{struct BitArray;}}}}

namespace g{
namespace Fuse{
namespace Text{
namespace Implementation{

// internal sealed class BitArray :3
// {
uType* BitArray_typeof();
void BitArray__ctor__fn(BitArray* __this, int* length);
void BitArray__Index_fn(BitArray* __this, int* i, int* __retval);
void BitArray__get_Item_fn(BitArray* __this, int* i, bool* __retval);
void BitArray__set_Item_fn(BitArray* __this, int* i, bool* value);
void BitArray__Mask_fn(BitArray* __this, int* i, uint8_t* __retval);
void BitArray__New1_fn(int* length, BitArray** __retval);

struct BitArray : uObject
{
    uStrong<uArray*> Data;
    int Count;

    void ctor_(int length);
    int Index(int i);
    bool Item(int i);
    void Item(int i, bool value);
    uint8_t Mask(int i);
    static BitArray* New1(int length);
};
// }

}}}} // ::g::Fuse::Text::Implementation
