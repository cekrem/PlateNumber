// This file was generated based on /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.4.0/DataToResource.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.UnaryOperator.h>
namespace g{namespace Fuse{namespace Reactive{struct DataToResource;}}}
namespace g{namespace Fuse{namespace Reactive{struct Expression;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class DataToResource :33
// {
::g::Fuse::Reactive::UnaryOperator_type* DataToResource_typeof();
void DataToResource__ctor_2_fn(DataToResource* __this, ::g::Fuse::Reactive::Expression* data);
void DataToResource__New1_fn(::g::Fuse::Reactive::Expression* data, DataToResource** __retval);
void DataToResource__Subscribe_fn(DataToResource* __this, uObject* context, uObject* listener, uObject** __retval);

struct DataToResource : ::g::Fuse::Reactive::UnaryOperator
{
    void ctor_2(::g::Fuse::Reactive::Expression* data);
    static DataToResource* New1(::g::Fuse::Reactive::Expression* data);
};
// }

}}} // ::g::Fuse::Reactive
