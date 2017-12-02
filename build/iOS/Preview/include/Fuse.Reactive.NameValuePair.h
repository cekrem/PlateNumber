// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.4.0/NameValuePair.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.BinaryOperator.h>
#include <Fuse.Reactive.IExpression.h>
namespace g{namespace Fuse{namespace Reactive{struct Expression;}}}
namespace g{namespace Fuse{namespace Reactive{struct NameValuePair;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class NameValuePair :6
// {
::g::Fuse::Reactive::BinaryOperator_type* NameValuePair_typeof();
void NameValuePair__ctor_2_fn(NameValuePair* __this, ::g::Fuse::Reactive::Expression* name, ::g::Fuse::Reactive::Expression* value);
void NameValuePair__Compute_fn(NameValuePair* __this, uObject* name, uObject* value, uObject** __retval);
void NameValuePair__New1_fn(::g::Fuse::Reactive::Expression* name, ::g::Fuse::Reactive::Expression* value, NameValuePair** __retval);

struct NameValuePair : ::g::Fuse::Reactive::BinaryOperator
{
    void ctor_2(::g::Fuse::Reactive::Expression* name, ::g::Fuse::Reactive::Expression* value);
    static NameValuePair* New1(::g::Fuse::Reactive::Expression* name, ::g::Fuse::Reactive::Expression* value);
};
// }

}}} // ::g::Fuse::Reactive
