// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Primitives/1.4.0/TextControls/FuseTextRenderer/CacheState.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{namespace FuseTextRenderer{struct Tolerances;}}}}

namespace g{
namespace Fuse{
namespace Controls{
namespace FuseTextRenderer{

// internal struct Tolerances :54
// {
uStructType* Tolerances_typeof();
void Tolerances__ctor__fn(Tolerances* __this, int* dummy);
void Tolerances__New1_fn(int* dummy, Tolerances* __retval);

struct Tolerances
{
    static float Epsilon_;
    static float& Epsilon() { return Epsilon_; }
    float MinWrap;
    float MaxWrap;
    float MinTruncation;
    float MaxTruncation;

    void ctor_(int dummy);
};

Tolerances Tolerances__New1(int dummy);
// }

}}}} // ::g::Fuse::Controls::FuseTextRenderer
