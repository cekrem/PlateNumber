// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/Runtime/Reflection/ReflectionCache.cs.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct TypeName;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Runtime{struct ReflectionCache;}}}}
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Runtime{

// internal static extern class ReflectionCache :10
// {
uClassType* ReflectionCache_typeof();
void ReflectionCache__AddToTypeCache_fn(::g::Uno::Collections::Dictionary* typeDictionary);
void ReflectionCache__GetFields_fn(uType* type, uArray** __retval);
void ReflectionCache__GetFunctions_fn(uType* type, uArray** __retval);
void ReflectionCache__GetType_fn(::g::Outracks::Simulator::Bytecode::TypeName* typeName, uType** __retval);

struct ReflectionCache : uObject
{
    static uSStrong< ::g::Uno::Collections::Dictionary*> _functionCache_;
    static uSStrong< ::g::Uno::Collections::Dictionary*>& _functionCache() { return ReflectionCache_typeof()->Init(), _functionCache_; }
    static uSStrong< ::g::Uno::Collections::Dictionary*> _fieldCache_;
    static uSStrong< ::g::Uno::Collections::Dictionary*>& _fieldCache() { return ReflectionCache_typeof()->Init(), _fieldCache_; }
    static uSStrong< ::g::Uno::Collections::List*> _typeCache_;
    static uSStrong< ::g::Uno::Collections::List*>& _typeCache() { return ReflectionCache_typeof()->Init(), _typeCache_; }

    static void AddToTypeCache(::g::Uno::Collections::Dictionary* typeDictionary);
    static uArray* GetFields(uType* type);
    static uArray* GetFunctions(uType* type);
    static uType* GetType(::g::Outracks::Simulator::Bytecode::TypeName* typeName);
};
// }

}}}} // ::g::Outracks::Simulator::Runtime
