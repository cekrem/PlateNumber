// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Outracks.Optional-1.h>
#include <Outracks.Simulator.Bytecode.AddEventHandler.h>
#include <Outracks.Simulator.Bytecode.BindVariable.h>
#include <Outracks.Simulator.Bytecode.BlobLiteral.h>
#include <Outracks.Simulator.Bytecode.BooleanLiteral.h>
#include <Outracks.Simulator.Bytecode.CallDynamicMethod.h>
#include <Outracks.Simulator.Bytecode.CallLambda.h>
#include <Outracks.Simulator.Bytecode.CallStaticMethod.h>
#include <Outracks.Simulator.Bytecode.EnumLiteral.h>
#include <Outracks.Simulator.Bytecode.Expression.h>
#include <Outracks.Simulator.Bytecode.Instantiate.h>
#include <Outracks.Simulator.Bytecode.IsType.h>
#include <Outracks.Simulator.Bytecode.Lambda.h>
#include <Outracks.Simulator.Bytecode.Literal.h>
#include <Outracks.Simulator.Bytecode.LogicalOr.h>
#include <Outracks.Simulator.Bytecode.MethodGroup.h>
#include <Outracks.Simulator.Bytecode.NumberLiteral.h>
#include <Outracks.Simulator.Bytecode.NumberType.h>
#include <Outracks.Simulator.Bytecode.Parameter.h>
#include <Outracks.Simulator.Bytecode.ReadProperty.h>
#include <Outracks.Simulator.Bytecode.ReadStaticField.h>
#include <Outracks.Simulator.Bytecode.ReadVariable.h>
#include <Outracks.Simulator.Bytecode.RemoveEventHandler.h>
#include <Outracks.Simulator.Bytecode.Return.h>
#include <Outracks.Simulator.Bytecode.Signature.h>
#include <Outracks.Simulator.Bytecode.Statement.h>
#include <Outracks.Simulator.Bytecode.StaticMemberName.h>
#include <Outracks.Simulator.Bytecode.StringLiteral.h>
#include <Outracks.Simulator.Bytecode.TypeMemberName.h>
#include <Outracks.Simulator.Bytecode.TypeName.h>
#include <Outracks.Simulator.Bytecode.Variable.h>
#include <Outracks.Simulator.Bytecode.WriteProperty.h>
#include <Outracks.Simulator.ImmutableList-1.h>
#include <Outracks.Simulator.Runtime.ArrayStream.h>
#include <Outracks.Simulator.Runtime.Bundle.h>
#include <Outracks.Simulator.Runtime.CppEvent.h>
#include <Outracks.Simulator.Runtime.CppProperty.h>
#include <Outracks.Simulator.Runtime.Environment.h>
#include <Outracks.Simulator.Runtime.FileCache.h>
#include <Outracks.Simulator.Runtime.HashableWeakReference.h>
#include <Outracks.Simulator.Runtime.IEvent.h>
#include <Outracks.Simulator.Runtime.IProperty.h>
#include <Outracks.Simulator.Runtime.IReflection.h>
#include <Outracks.Simulator.Runtime.ITypeMap.h>
#include <Outracks.Simulator.Runtime.LambdaClosure.h>
#include <Outracks.Simulator.Runtime.NativeReflection.h>
#include <Outracks.Simulator.Runtime.ObjectTagRegistry.CurrentEach.h>
#include <Outracks.Simulator.Runtime.ObjectTagRegistry.h>
#include <Outracks.Simulator.Runtime.ReflectionCache.h>
#include <Outracks.Simulator.Runtime.ReflectionExtensions.h>
#include <Outracks.Simulator.Runtime.ScopeClosure.h>
#include <Outracks.Simulator.Runtime.SimpleTypeMap.h>
#include <Outracks.Simulator.Runtime.TryInvokeExtension.h>
#include <Outracks.Simulator.Runtime.UnoHostReflection.h>
#include <Outracks.Simulator.Runtime.UxFileSource.h>
#include <Outracks.Simulator.Runtime.UxProperty-1.h>
#include <Outracks.Simulator.Runtime.UxTemplate.h>
#include <Outracks.Simulator.Runtime.VariableNotBound.h>
#include <Outracks.Simulator.Runtime.WeakDictionary-2.h>
#include <Outracks.UnoHost.MemberNotFound.h>
#include <Outracks.UnoHost.Reflection.h>
#include <Outracks.UnoHost.TypeNotFound.h>
#include <Outracks.UnoHost.UnambiguousMethodNotFound.h>
#include <Uno.Action.h>
#include <Uno.Action-1.h>
#include <Uno.Action-10.h>
#include <Uno.Action-11.h>
#include <Uno.Action-12.h>
#include <Uno.Action-13.h>
#include <Uno.Action-14.h>
#include <Uno.Action-15.h>
#include <Uno.Action-16.h>
#include <Uno.Action-2.h>
#include <Uno.Action-3.h>
#include <Uno.Action-4.h>
#include <Uno.Action-5.h>
#include <Uno.Action-6.h>
#include <Uno.Action-7.h>
#include <Uno.Action-8.h>
#include <Uno.Action-9.h>
#include <Uno.ArgumentException.h>
#include <Uno.ArgumentNullException.h>
#include <Uno.Array.h>
#include <Uno.Bool.h>
#include <Uno.Byte.h>
#include <Uno.Byte2.h>
#include <Uno.Byte4.h>
#include <Uno.Char.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.EnumerableExtensions.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IEnumerator.h>
#include <Uno.Collections.IEnumerator-1.h>
#include <Uno.Collections.KeyValuePair-2.h>
#include <Uno.Collections.List-1.Enumerator.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Delegate.h>
#include <Uno.Diagnostics.Debug.h>
#include <Uno.Diagnostics.DebugMessageType.h>
#include <Uno.Double.h>
#include <Uno.Enum.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float2x2.h>
#include <Uno.Float3.h>
#include <Uno.Float3x3.h>
#include <Uno.Float4.h>
#include <Uno.Float4x4.h>
#include <Uno.Func-1.h>
#include <Uno.Func-10.h>
#include <Uno.Func-11.h>
#include <Uno.Func-12.h>
#include <Uno.Func-13.h>
#include <Uno.Func-14.h>
#include <Uno.Func-15.h>
#include <Uno.Func-16.h>
#include <Uno.Func-17.h>
#include <Uno.Func-2.h>
#include <Uno.Func-3.h>
#include <Uno.Func-4.h>
#include <Uno.Func-5.h>
#include <Uno.Func-6.h>
#include <Uno.Func-7.h>
#include <Uno.Func-8.h>
#include <Uno.Func-9.h>
#include <Uno.Graphics.Texture2D.h>
#include <Uno.Graphics.TextureCube.h>
#include <Uno.IDisposable.h>
#include <Uno.Int.h>
#include <Uno.Int2.h>
#include <Uno.Int3.h>
#include <Uno.Int4.h>
#include <Uno.InvalidOperationException.h>
#include <Uno.IO.Bundle.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.IO.SeekOrigin.h>
#include <Uno.IO.Stream.h>
#include <Uno.Long.h>
#include <Uno.NotImplementedException.h>
#include <Uno.Object.h>
#include <Uno.Reflection.CppField.h>
#include <Uno.Reflection.CppFunction.h>
#include <Uno.Reflection.CppReflection.h>
#include <Uno.Reflection.IField.h>
#include <Uno.Reflection.IFunction.h>
#include <Uno.Runtime.Implementation.Internal.ArrayEnumerable-1.h>
#include <Uno.SByte.h>
#include <Uno.SByte2.h>
#include <Uno.SByte4.h>
#include <Uno.Short.h>
#include <Uno.Short2.h>
#include <Uno.Short4.h>
#include <Uno.String.h>
#include <Uno.Type.h>
#include <Uno.UInt.h>
#include <Uno.ULong.h>
#include <Uno.UShort.h>
#include <Uno.UShort2.h>
#include <Uno.UShort4.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
#include <Uno.WeakReference-1.h>
static uString* STRINGS[54];
static uType* TYPES[105];

namespace g{
namespace Outracks{
namespace Simulator{
namespace Runtime{

// /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/Runtime/ArrayStream.cs
// ----------------------------------------------------------------------------------------

// public sealed class ArrayStream :9
// {
static void ArrayStream_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Byte_typeof()->Array();
    ::TYPES[1] = ::g::Uno::Array_typeof()->MakeMethod(1/*Copy<byte>*/, ::g::Uno::Byte_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Uno::IO::Stream_type, interface0));
    type->SetFields(0,
        ::TYPES[0/*byte[]*/], offsetof(ArrayStream, _buffer), 0,
        ::g::Uno::Int_typeof(), offsetof(ArrayStream, _nextIncrease), 0,
        ::g::Uno::Long_typeof(), offsetof(ArrayStream, _length), 0,
        ::g::Uno::Long_typeof(), offsetof(ArrayStream, _Position), 0);
    type->Reflection.SetFunctions(3,
        new uFunction("get_Capacity", NULL, (void*)ArrayStream__get_Capacity_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("GetBuffer", NULL, (void*)ArrayStream__GetBuffer_fn, 0, false, ::TYPES[0/*byte[]*/], 0),
        new uFunction(".ctor", NULL, (void*)ArrayStream__New1_fn, 0, true, type, 1, ::TYPES[0/*byte[]*/]));
}

::g::Uno::IO::Stream_type* ArrayStream_typeof()
{
    static uSStrong< ::g::Uno::IO::Stream_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::IO::Stream_typeof();
    options.FieldCount = 4;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(ArrayStream);
    options.TypeSize = sizeof(::g::Uno::IO::Stream_type);
    type = (::g::Uno::IO::Stream_type*)uClassType::New("Outracks.Simulator.Runtime.ArrayStream", options);
    type->fp_build_ = ArrayStream_build;
    type->fp_get_CanRead = (void(*)(::g::Uno::IO::Stream*, bool*))ArrayStream__get_CanRead_fn;
    type->fp_get_CanSeek = (void(*)(::g::Uno::IO::Stream*, bool*))ArrayStream__get_CanSeek_fn;
    type->fp_get_CanTimeout = (void(*)(::g::Uno::IO::Stream*, bool*))ArrayStream__get_CanTimeout_fn;
    type->fp_get_CanWrite = (void(*)(::g::Uno::IO::Stream*, bool*))ArrayStream__get_CanWrite_fn;
    type->fp_Flush = (void(*)(::g::Uno::IO::Stream*))ArrayStream__Flush_fn;
    type->fp_get_Length = (void(*)(::g::Uno::IO::Stream*, int64_t*))ArrayStream__get_Length_fn;
    type->fp_get_Position = (void(*)(::g::Uno::IO::Stream*, int64_t*))ArrayStream__get_Position_fn;
    type->fp_set_Position = (void(*)(::g::Uno::IO::Stream*, int64_t*))ArrayStream__set_Position_fn;
    type->fp_Read = (void(*)(::g::Uno::IO::Stream*, uArray*, int*, int*, int*))ArrayStream__Read_fn;
    type->fp_Seek = (void(*)(::g::Uno::IO::Stream*, int64_t*, int*, int64_t*))ArrayStream__Seek_fn;
    type->fp_SetLength = (void(*)(::g::Uno::IO::Stream*, int64_t*))ArrayStream__SetLength_fn;
    type->fp_Write = (void(*)(::g::Uno::IO::Stream*, uArray*, int*, int*))ArrayStream__Write_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Uno::IO::Stream__Dispose_fn;
    return type;
}

// public ArrayStream(byte[] buffer) :54
void ArrayStream__ctor_1_fn(ArrayStream* __this, uArray* buffer)
{
    __this->ctor_1(buffer);
}

// public override sealed bool get_CanRead() :18
void ArrayStream__get_CanRead_fn(ArrayStream* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public override sealed bool get_CanSeek() :28
void ArrayStream__get_CanSeek_fn(ArrayStream* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public override sealed bool get_CanTimeout() :33
void ArrayStream__get_CanTimeout_fn(ArrayStream* __this, bool* __retval)
{
    return *__retval = false, void();
}

// public override sealed bool get_CanWrite() :23
void ArrayStream__get_CanWrite_fn(ArrayStream* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public int get_Capacity() :46
void ArrayStream__get_Capacity_fn(ArrayStream* __this, int* __retval)
{
    *__retval = __this->Capacity();
}

// private void EnsureCapacity(int byteCount) :102
void ArrayStream__EnsureCapacity_fn(ArrayStream* __this, int* byteCount)
{
    __this->EnsureCapacity(*byteCount);
}

// public override sealed void Flush() :136
void ArrayStream__Flush_fn(ArrayStream* __this)
{
}

// public byte[] GetBuffer() :126
void ArrayStream__GetBuffer_fn(ArrayStream* __this, uArray** __retval)
{
    *__retval = __this->GetBuffer();
}

// public override sealed long get_Length() :38
void ArrayStream__get_Length_fn(ArrayStream* __this, int64_t* __retval)
{
    return *__retval = __this->_length, void();
}

// public ArrayStream New(byte[] buffer) :54
void ArrayStream__New1_fn(uArray* buffer, ArrayStream** __retval)
{
    *__retval = ArrayStream::New1(buffer);
}

// public generated override sealed long get_Position() :52
void ArrayStream__get_Position_fn(ArrayStream* __this, int64_t* __retval)
{
    return *__retval = __this->_Position, void();
}

// public generated override sealed void set_Position(long value) :52
void ArrayStream__set_Position_fn(ArrayStream* __this, int64_t* value)
{
    int64_t value_ = *value;
    __this->_Position = value_;
}

// public override sealed int Read(byte[] dst, int byteOffset, int byteCount) :74
void ArrayStream__Read_fn(ArrayStream* __this, uArray* dst, int* byteOffset, int* byteCount, int* __retval)
{
    uStackFrame __("Outracks.Simulator.Runtime.ArrayStream", "Read(byte[],int,int)");
    int byteCount_ = *byteCount;
    int byteOffset_ = *byteOffset;
    int i = 0;

    for (; (i < byteCount_) && ((__this->Position() + (int64_t)i) < __this->Length()); i++)
        uPtr(dst)->Item<uint8_t>(i + byteOffset_) = uPtr(__this->_buffer)->Item<uint8_t>((int)__this->Position() + i);

    __this->Position(__this->Position() + (int64_t)i);
    return *__retval = i, void();
}

// private void ResizeTo(int newSize) :118
void ArrayStream__ResizeTo_fn(ArrayStream* __this, int* newSize)
{
    __this->ResizeTo(*newSize);
}

// public override sealed long Seek(long byteOffset, Uno.IO.SeekOrigin origin) :85
void ArrayStream__Seek_fn(ArrayStream* __this, int64_t* byteOffset, int* origin, int64_t* __retval)
{
    int origin_ = *origin;
    int64_t byteOffset_ = *byteOffset;

    switch (origin_)
    {
        case 0:
        {
            __this->Position(byteOffset_);
            break;
        }
        case 2:
        {
            __this->Position(__this->Length() + byteOffset_);
            break;
        }
        default:
        {
            __this->Position(__this->Position() + byteOffset_);
            break;
        }
    }

    return *__retval = __this->Position(), void();
}

// public override sealed void SetLength(long value) :131
void ArrayStream__SetLength_fn(ArrayStream* __this, int64_t* value)
{
    uStackFrame __("Outracks.Simulator.Runtime.ArrayStream", "SetLength(long)");
    U_THROW(::g::Uno::NotImplementedException::New4());
}

// public override sealed void Write(byte[] src, int byteOffset, int byteCount) :60
void ArrayStream__Write_fn(ArrayStream* __this, uArray* src, int* byteOffset, int* byteCount)
{
    uStackFrame __("Outracks.Simulator.Runtime.ArrayStream", "Write(byte[],int,int)");
    int byteCount_ = *byteCount;
    int byteOffset_ = *byteOffset;
    __this->EnsureCapacity(byteCount_);

    for (int i = byteOffset_; i < (byteOffset_ + byteCount_); i++)
    {
        uPtr(__this->_buffer)->Item<uint8_t>((int)__this->Position()) = uPtr(src)->Item<uint8_t>(i);
        __this->Position(__this->Position() + 1LL);
    }

    if (__this->Position() > __this->Length())
        __this->_length = __this->Position();
}

// public ArrayStream(byte[] buffer) [instance] :54
void ArrayStream::ctor_1(uArray* buffer)
{
    uStackFrame __("Outracks.Simulator.Runtime.ArrayStream", ".ctor(byte[])");
    _buffer = uArray::New(::TYPES[0/*byte[]*/], 0);
    _nextIncrease = 256;
    ctor_();
    _buffer = buffer;
    _length = (int64_t)uPtr(_buffer)->Length();
}

// public int get_Capacity() [instance] :46
int ArrayStream::Capacity()
{
    uStackFrame __("Outracks.Simulator.Runtime.ArrayStream", "get_Capacity()");
    return uPtr(_buffer)->Length();
}

// private void EnsureCapacity(int byteCount) [instance] :102
void ArrayStream::EnsureCapacity(int byteCount)
{
    uStackFrame __("Outracks.Simulator.Runtime.ArrayStream", "EnsureCapacity(int)");

    if ((Position() + (int64_t)byteCount) <= (int64_t)Capacity())
        return;
    else if ((Position() + (int64_t)byteCount) <= (int64_t)(Capacity() + _nextIncrease))
        ResizeTo(Capacity() + _nextIncrease);
    else
        ResizeTo((int)Position() + byteCount);
}

// public byte[] GetBuffer() [instance] :126
uArray* ArrayStream::GetBuffer()
{
    return _buffer;
}

// private void ResizeTo(int newSize) [instance] :118
void ArrayStream::ResizeTo(int newSize)
{
    uStackFrame __("Outracks.Simulator.Runtime.ArrayStream", "ResizeTo(int)");
    uArray* newBuffer = uArray::New(::TYPES[0/*byte[]*/], newSize);
    ::g::Uno::Array::Copy1(::TYPES[1/*Uno.Array.Copy<byte>*/], _buffer, newBuffer, uPtr(_buffer)->Length());
    _buffer = newBuffer;
    _nextIncrease = Capacity();
}

// public ArrayStream New(byte[] buffer) [static] :54
ArrayStream* ArrayStream::New1(uArray* buffer)
{
    ArrayStream* obj1 = (ArrayStream*)uNew(ArrayStream_typeof());
    obj1->ctor_1(buffer);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/Runtime/Bundle.cs
// -----------------------------------------------------------------------------------

// public static class Bundle :5
// {
static void Bundle_build(uType* type)
{
    ::TYPES[2] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::IO::BundleFile_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Collections::IEnumerator_typeof();
    ::TYPES[4] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Uno::IO::BundleFile_typeof(), NULL);
    ::TYPES[5] = ::g::Uno::IDisposable_typeof();
    type->SetFields(0,
        ::g::Uno::IO::Bundle_typeof(), (uintptr_t)&Bundle::_bundle_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(2,
        new uFunction("AddOrUpdateFile", NULL, (void*)Bundle__AddOrUpdateFile_fn, 0, true, uVoid_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::Byte_typeof()->Array()),
        new uFunction("Initialize", NULL, (void*)Bundle__Initialize_fn, 0, true, uVoid_typeof(), 1, ::g::Uno::String_typeof()));
}

uClassType* Bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Outracks.Simulator.Runtime.Bundle", options);
    type->fp_build_ = Bundle_build;
    return type;
}

// public static extern void AddOrUpdateFile(string projectRelativeFilePath, byte[] data) :14
void Bundle__AddOrUpdateFile_fn(uString* projectRelativeFilePath, uArray* data)
{
    Bundle::AddOrUpdateFile(projectRelativeFilePath, data);
}

// public static void Initialize(string projectName) :8
void Bundle__Initialize_fn(uString* projectName)
{
    Bundle::Initialize(projectName);
}

uSStrong< ::g::Uno::IO::Bundle*> Bundle::_bundle_;

// public static extern void AddOrUpdateFile(string projectRelativeFilePath, byte[] data) [static] :14
void Bundle::AddOrUpdateFile(uString* projectRelativeFilePath, uArray* data)
{
    uStackFrame __("Outracks.Simulator.Runtime.Bundle", "AddOrUpdateFile(string,byte[])");
    ::g::Uno::IO::BundleFile* ret2;
    uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(uPtr(Bundle::_bundle_)->Files()), ::TYPES[2/*Uno.Collections.IEnumerable<Uno.IO.BundleFile>*/]));

    try
    {
        {
            while (::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::TYPES[3/*Uno.Collections.IEnumerator*/])))
            {
                ::g::Uno::IO::BundleFile* exisitingFile = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[4/*Uno.Collections.IEnumerator<Uno.IO.BundleFile>*/]), &ret2), ret2);

                if (::g::Uno::String::op_Equality(uPtr(exisitingFile)->SourcePath(), projectRelativeFilePath))
                {
                    uPtr(exisitingFile)->Update(data);
                    ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum1), ::TYPES[5/*Uno.IDisposable*/]));
                    return;
                }
            }
        }
        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum1), ::TYPES[5/*Uno.IDisposable*/]));
        }
    }

    catch (const uThrowable& __t)
    {
        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum1), ::TYPES[5/*Uno.IDisposable*/]));
        }
                throw __t;
    }

    uPtr(Bundle::_bundle_)->CreateFile(projectRelativeFilePath, data);
}

// public static void Initialize(string projectName) [static] :8
void Bundle::Initialize(uString* projectName)
{
    uStackFrame __("Outracks.Simulator.Runtime.Bundle", "Initialize(string)");
    Bundle::_bundle_ = ::g::Uno::IO::Bundle::Get(projectName);
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/Runtime/Reflection/NativeReflection.cs
// --------------------------------------------------------------------------------------------------------

// internal sealed extern class CppEvent :384
// {
static void CppEvent_build(uType* type)
{
    ::STRINGS[0] = uString::Const("add_");
    ::STRINGS[1] = uString::Const("remove_");
    ::TYPES[6] = ::g::Uno::Type_typeof()->Array();
    type->SetDependencies(
        ::g::Outracks::Simulator::Runtime::TryInvokeExtension_typeof());
    type->SetInterfaces(
        ::g::Outracks::Simulator::Runtime::IEvent_typeof(), offsetof(CppEvent_type, interface0));
    type->SetFields(0,
        ::g::Uno::Type_typeof(), offsetof(CppEvent, _declaringType), 0,
        ::g::Uno::Type_typeof(), offsetof(CppEvent, _type), 0,
        ::g::Uno::String_typeof(), offsetof(CppEvent, _name), 0);
}

CppEvent_type* CppEvent_typeof()
{
    static uSStrong<CppEvent_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(CppEvent);
    options.TypeSize = sizeof(CppEvent_type);
    type = (CppEvent_type*)uClassType::New("Outracks.Simulator.Runtime.CppEvent", options);
    type->fp_build_ = CppEvent_build;
    type->interface0.fp_get_DeclaringType = (void(*)(uObject*, uType**))CppEvent__get_DeclaringType_fn;
    type->interface0.fp_get_AddMethod = (void(*)(uObject*, uObject**))CppEvent__get_AddMethod_fn;
    type->interface0.fp_get_RemoveMethod = (void(*)(uObject*, uObject**))CppEvent__get_RemoveMethod_fn;
    return type;
}

// public CppEvent(Uno.Type declaringType, Uno.Type type, string name) :390
void CppEvent__ctor__fn(CppEvent* __this, uType* declaringType, uType* type, uString* name)
{
    __this->ctor_(declaringType, type, name);
}

// public Uno.Reflection.IFunction get_AddMethod() :404
void CppEvent__get_AddMethod_fn(CppEvent* __this, uObject** __retval)
{
    *__retval = __this->AddMethod();
}

// public Uno.Type get_DeclaringType() :399
void CppEvent__get_DeclaringType_fn(CppEvent* __this, uType** __retval)
{
    *__retval = __this->DeclaringType();
}

// public CppEvent New(Uno.Type declaringType, Uno.Type type, string name) :390
void CppEvent__New1_fn(uType* declaringType, uType* type, uString* name, CppEvent** __retval)
{
    *__retval = CppEvent::New1(declaringType, type, name);
}

// public Uno.Reflection.IFunction get_RemoveMethod() :409
void CppEvent__get_RemoveMethod_fn(CppEvent* __this, uObject** __retval)
{
    *__retval = __this->RemoveMethod();
}

// public CppEvent(Uno.Type declaringType, Uno.Type type, string name) [instance] :390
void CppEvent::ctor_(uType* declaringType, uType* type, uString* name)
{
    _declaringType = declaringType;
    _type = type;
    _name = name;
}

// public Uno.Reflection.IFunction get_AddMethod() [instance] :404
uObject* CppEvent::AddMethod()
{
    uStackFrame __("Outracks.Simulator.Runtime.CppEvent", "get_AddMethod()");
    return ::g::Outracks::Simulator::Runtime::TryInvokeExtension::GetMethod(_declaringType, ::g::Outracks::Simulator::Bytecode::TypeMemberName::New1(::g::Uno::String::op_Addition2(::STRINGS[0/*"add_"*/], _name)), uArray::Init<uType*>(::TYPES[6/*Uno.Type[]*/], 1, (uType*)_type));
}

// public Uno.Type get_DeclaringType() [instance] :399
uType* CppEvent::DeclaringType()
{
    return _declaringType;
}

// public Uno.Reflection.IFunction get_RemoveMethod() [instance] :409
uObject* CppEvent::RemoveMethod()
{
    uStackFrame __("Outracks.Simulator.Runtime.CppEvent", "get_RemoveMethod()");
    return ::g::Outracks::Simulator::Runtime::TryInvokeExtension::GetMethod(_declaringType, ::g::Outracks::Simulator::Bytecode::TypeMemberName::New1(::g::Uno::String::op_Addition2(::STRINGS[1/*"remove_"*/], _name)), uArray::Init<uType*>(::TYPES[6/*Uno.Type[]*/], 1, (uType*)_type));
}

// public CppEvent New(Uno.Type declaringType, Uno.Type type, string name) [static] :390
CppEvent* CppEvent::New1(uType* declaringType, uType* type, uString* name)
{
    CppEvent* obj1 = (CppEvent*)uNew(CppEvent_typeof());
    obj1->ctor_(declaringType, type, name);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/Runtime/Reflection/NativeReflection.cs
// --------------------------------------------------------------------------------------------------------

// internal sealed extern class CppProperty :414
// {
static void CppProperty_build(uType* type)
{
    ::STRINGS[2] = uString::Const("get_");
    ::STRINGS[3] = uString::Const("set_");
    ::TYPES[6] = ::g::Uno::Type_typeof()->Array();
    type->SetDependencies(
        ::g::Outracks::Simulator::Runtime::TryInvokeExtension_typeof());
    type->SetInterfaces(
        ::g::Outracks::Simulator::Runtime::IProperty_typeof(), offsetof(CppProperty_type, interface0));
    type->SetFields(0,
        ::g::Uno::Type_typeof(), offsetof(CppProperty, _declaringType), 0,
        ::g::Uno::Type_typeof(), offsetof(CppProperty, _type), 0,
        ::g::Uno::String_typeof(), offsetof(CppProperty, _name), 0);
}

CppProperty_type* CppProperty_typeof()
{
    static uSStrong<CppProperty_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(CppProperty);
    options.TypeSize = sizeof(CppProperty_type);
    type = (CppProperty_type*)uClassType::New("Outracks.Simulator.Runtime.CppProperty", options);
    type->fp_build_ = CppProperty_build;
    type->interface0.fp_get_DeclaringType = (void(*)(uObject*, uType**))CppProperty__get_DeclaringType_fn;
    type->interface0.fp_get_GetMethod = (void(*)(uObject*, uObject**))CppProperty__get_GetMethod_fn;
    type->interface0.fp_get_SetMethod = (void(*)(uObject*, uObject**))CppProperty__get_SetMethod_fn;
    return type;
}

// public CppProperty(Uno.Type declaringType, Uno.Type type, string name) :420
void CppProperty__ctor__fn(CppProperty* __this, uType* declaringType, uType* type, uString* name)
{
    __this->ctor_(declaringType, type, name);
}

// public Uno.Type get_DeclaringType() :429
void CppProperty__get_DeclaringType_fn(CppProperty* __this, uType** __retval)
{
    *__retval = __this->DeclaringType();
}

// public Uno.Reflection.IFunction get_GetMethod() :434
void CppProperty__get_GetMethod_fn(CppProperty* __this, uObject** __retval)
{
    *__retval = __this->GetMethod();
}

// public CppProperty New(Uno.Type declaringType, Uno.Type type, string name) :420
void CppProperty__New1_fn(uType* declaringType, uType* type, uString* name, CppProperty** __retval)
{
    *__retval = CppProperty::New1(declaringType, type, name);
}

// public Uno.Reflection.IFunction get_SetMethod() :439
void CppProperty__get_SetMethod_fn(CppProperty* __this, uObject** __retval)
{
    *__retval = __this->SetMethod();
}

// public CppProperty(Uno.Type declaringType, Uno.Type type, string name) [instance] :420
void CppProperty::ctor_(uType* declaringType, uType* type, uString* name)
{
    _declaringType = declaringType;
    _type = type;
    _name = name;
}

// public Uno.Type get_DeclaringType() [instance] :429
uType* CppProperty::DeclaringType()
{
    return _declaringType;
}

// public Uno.Reflection.IFunction get_GetMethod() [instance] :434
uObject* CppProperty::GetMethod()
{
    uStackFrame __("Outracks.Simulator.Runtime.CppProperty", "get_GetMethod()");
    return ::g::Outracks::Simulator::Runtime::TryInvokeExtension::GetMethod(_declaringType, ::g::Outracks::Simulator::Bytecode::TypeMemberName::New1(::g::Uno::String::op_Addition2(::STRINGS[2/*"get_"*/], _name)), uArray::New(::TYPES[6/*Uno.Type[]*/], 0));
}

// public Uno.Reflection.IFunction get_SetMethod() [instance] :439
uObject* CppProperty::SetMethod()
{
    uStackFrame __("Outracks.Simulator.Runtime.CppProperty", "get_SetMethod()");
    return ::g::Outracks::Simulator::Runtime::TryInvokeExtension::GetMethod(_declaringType, ::g::Outracks::Simulator::Bytecode::TypeMemberName::New1(::g::Uno::String::op_Addition2(::STRINGS[3/*"set_"*/], _name)), uArray::Init<uType*>(::TYPES[6/*Uno.Type[]*/], 1, (uType*)_type));
}

// public CppProperty New(Uno.Type declaringType, Uno.Type type, string name) [static] :420
CppProperty* CppProperty::New1(uType* declaringType, uType* type, uString* name)
{
    CppProperty* obj1 = (CppProperty*)uNew(CppProperty_typeof());
    obj1->ctor_(declaringType, type, name);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/Runtime/ObjectTagRegistry.cs
// ----------------------------------------------------------------------------------------------

// private sealed class ObjectTagRegistry.CurrentEach :146
// {
static void ObjectTagRegistry__CurrentEach_build(uType* type)
{
    ::TYPES[7] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::IDisposable_typeof(), NULL);
    ::TYPES[8] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Uno::IDisposable_typeof(), NULL);
    ::TYPES[5] = ::g::Uno::IDisposable_typeof();
    type->SetDependencies(
        ::g::Outracks::Simulator::Runtime::ObjectTagRegistry_typeof());
    type->SetInterfaces(
        ::TYPES[5/*Uno.IDisposable*/], offsetof(ObjectTagRegistry__CurrentEach_type, interface0));
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(ObjectTagRegistry__CurrentEach, _id), 0,
        ::g::Uno::Func1_typeof()->MakeType(uObject_typeof(), uObject_typeof(), NULL), offsetof(ObjectTagRegistry__CurrentEach, _func), 0,
        ::TYPES[7/*Uno.Collections.List<Uno.IDisposable>*/], offsetof(ObjectTagRegistry__CurrentEach, _garbage), 0);
}

ObjectTagRegistry__CurrentEach_type* ObjectTagRegistry__CurrentEach_typeof()
{
    static uSStrong<ObjectTagRegistry__CurrentEach_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(ObjectTagRegistry__CurrentEach);
    options.TypeSize = sizeof(ObjectTagRegistry__CurrentEach_type);
    type = (ObjectTagRegistry__CurrentEach_type*)uClassType::New("Outracks.Simulator.Runtime.ObjectTagRegistry.CurrentEach", options);
    type->fp_build_ = ObjectTagRegistry__CurrentEach_build;
    type->fp_ctor_ = (void*)ObjectTagRegistry__CurrentEach__New1_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))ObjectTagRegistry__CurrentEach__Dispose_fn;
    return type;
}

// public generated CurrentEach() :146
void ObjectTagRegistry__CurrentEach__ctor__fn(ObjectTagRegistry__CurrentEach* __this)
{
    __this->ctor_();
}

// public void Dispose() :153
void ObjectTagRegistry__CurrentEach__Dispose_fn(ObjectTagRegistry__CurrentEach* __this)
{
    __this->Dispose();
}

// public generated CurrentEach New() :146
void ObjectTagRegistry__CurrentEach__New1_fn(ObjectTagRegistry__CurrentEach** __retval)
{
    *__retval = ObjectTagRegistry__CurrentEach::New1();
}

// public void OnObjectCreated(object obj) :168
void ObjectTagRegistry__CurrentEach__OnObjectCreated_fn(ObjectTagRegistry__CurrentEach* __this, uObject* obj)
{
    __this->OnObjectCreated(obj);
}

// public void OnObjectCreated(string id, object obj) :160
void ObjectTagRegistry__CurrentEach__OnObjectCreated1_fn(ObjectTagRegistry__CurrentEach* __this, uString* id, uObject* obj)
{
    __this->OnObjectCreated1(id, obj);
}

// public generated CurrentEach() [instance] :146
void ObjectTagRegistry__CurrentEach::ctor_()
{
    _garbage = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[7/*Uno.Collections.List<Uno.IDisposable>*/]));
}

// public void Dispose() [instance] :153
void ObjectTagRegistry__CurrentEach::Dispose()
{
    uStackFrame __("Outracks.Simulator.Runtime.ObjectTagRegistry.CurrentEach", "Dispose()");
    bool ret3;
    ::g::Uno::Collections::List__Enumerator<uStrong<uObject*> > ret4;
    ::g::Uno::Collections::List__Remove_fn(uPtr(::g::Outracks::Simulator::Runtime::ObjectTagRegistry::_eaches_), this, &ret3);
    ::g::Uno::Collections::List__Enumerator<uStrong<uObject*> > enum1 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(_garbage), &ret4), ret4);

    try
    {
        {
            while (enum1.MoveNext(::TYPES[8/*Uno.Collections.List<Uno.IDisposable>.Enumerator*/]))
            {
                uObject* disposable = enum1.Current(::TYPES[8/*Uno.Collections.List<Uno.IDisposable>.Enumerator*/]);
                ::g::Uno::IDisposable::Dispose(uInterface(uPtr(disposable), ::TYPES[5/*Uno.IDisposable*/]));
            }
        }
        {
            enum1.Dispose(::TYPES[8/*Uno.Collections.List<Uno.IDisposable>.Enumerator*/]);
        }
    }

    catch (const uThrowable& __t)
    {
        {
            enum1.Dispose(::TYPES[8/*Uno.Collections.List<Uno.IDisposable>.Enumerator*/]);
        }
                throw __t;
    }
}

// public void OnObjectCreated(object obj) [instance] :168
void ObjectTagRegistry__CurrentEach::OnObjectCreated(uObject* obj)
{
    uStackFrame __("Outracks.Simulator.Runtime.ObjectTagRegistry.CurrentEach", "OnObjectCreated(object)");
    uObject* disposable = uAs<uObject*>(uPtr(_func)->Invoke(1, obj), ::TYPES[5/*Uno.IDisposable*/]);

    if (disposable != NULL)
        ::g::Uno::Collections::List__Add_fn(uPtr(_garbage), disposable);
}

// public void OnObjectCreated(string id, object obj) [instance] :160
void ObjectTagRegistry__CurrentEach::OnObjectCreated1(uString* id, uObject* obj)
{
    uStackFrame __("Outracks.Simulator.Runtime.ObjectTagRegistry.CurrentEach", "OnObjectCreated(string,object)");

    if (::g::Uno::String::op_Inequality(id, _id))
        return;

    OnObjectCreated(obj);
}

// public generated CurrentEach New() [static] :146
ObjectTagRegistry__CurrentEach* ObjectTagRegistry__CurrentEach::New1()
{
    ObjectTagRegistry__CurrentEach* obj2 = (ObjectTagRegistry__CurrentEach*)uNew(ObjectTagRegistry__CurrentEach_typeof());
    obj2->ctor_();
    return obj2;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/Runtime/Scope.cs
// ----------------------------------------------------------------------------------

// public sealed class Environment :9
// {
static void Environment_build(uType* type)
{
    ::TYPES[9] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::Variable_typeof(), uObject_typeof(), NULL);
    ::TYPES[10] = ::g::Outracks::Optional1_typeof()->MakeType(type, NULL);
    type->SetFields(0,
        ::TYPES[9/*Uno.Collections.Dictionary<Outracks.Simulator.Bytecode.Variable, object>*/], offsetof(Environment, _variableBindings), 0,
        ::TYPES[10/*Outracks.Optional<Outracks.Simulator.Runtime.Environment>*/], (uintptr_t)0, uFieldFlagsConstrained);
    type->Reflection.SetFunctions(4,
        new uFunction("Bind", NULL, (void*)Environment__Bind_fn, 0, false, uVoid_typeof(), 2, ::g::Outracks::Simulator::Bytecode::Variable_typeof(), uObject_typeof()),
        new uFunction("Bind", NULL, (void*)Environment__Bind1_fn, 0, false, uVoid_typeof(), 2, ::g::Outracks::Simulator::ImmutableList_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::Parameter_typeof(), NULL), uObject_typeof()->Array()),
        new uFunction("GetValue", NULL, (void*)Environment__GetValue_fn, 0, false, uObject_typeof(), 1, ::g::Outracks::Simulator::Bytecode::Variable_typeof()),
        new uFunction(".ctor", NULL, (void*)Environment__New1_fn, 0, true, type, 1, ::TYPES[10/*Outracks.Optional<Outracks.Simulator.Runtime.Environment>*/]));
}

uType* Environment_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(Environment);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Outracks.Simulator.Runtime.Environment", options);
    type->fp_build_ = Environment_build;
    return type;
}

// public Environment(Outracks.Optional<Outracks.Simulator.Runtime.Environment> parent) :15
void Environment__ctor__fn(Environment* __this, ::g::Outracks::Optional1<uStrong<Environment*> >* parent)
{
    __this->ctor_(*parent);
}

// public void Bind(Outracks.Simulator.Bytecode.Variable variable, object value) :26
void Environment__Bind_fn(Environment* __this, ::g::Outracks::Simulator::Bytecode::Variable* variable, uObject* value)
{
    __this->Bind(variable, value);
}

// public void Bind(Outracks.Simulator.ImmutableList<Outracks.Simulator.Bytecode.Parameter> parameters, object[] arguments) :20
void Environment__Bind1_fn(Environment* __this, ::g::Outracks::Simulator::ImmutableList* parameters, uArray* arguments)
{
    __this->Bind1(parameters, arguments);
}

// public object GetValue(Outracks.Simulator.Bytecode.Variable variable) :31
void Environment__GetValue_fn(Environment* __this, ::g::Outracks::Simulator::Bytecode::Variable* variable, uObject** __retval)
{
    *__retval = __this->GetValue(variable);
}

// public Environment New(Outracks.Optional<Outracks.Simulator.Runtime.Environment> parent) :15
void Environment__New1_fn(::g::Outracks::Optional1<uStrong<Environment*> >* parent, Environment** __retval)
{
    *__retval = Environment::New1(*parent);
}

// public Environment(Outracks.Optional<Outracks.Simulator.Runtime.Environment> parent) [instance] :15
void Environment::ctor_(::g::Outracks::Optional1<uStrong<Environment*> > parent)
{
    _variableBindings = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[9/*Uno.Collections.Dictionary<Outracks.Simulator.Bytecode.Variable, object>*/]));
    _parent().Value< ::g::Outracks::Optional1<uStrong<Environment*> > >() = parent;
}

// public void Bind(Outracks.Simulator.Bytecode.Variable variable, object value) [instance] :26
void Environment::Bind(::g::Outracks::Simulator::Bytecode::Variable* variable, uObject* value)
{
    uStackFrame __("Outracks.Simulator.Runtime.Environment", "Bind(Outracks.Simulator.Bytecode.Variable,object)");
    ::g::Uno::Collections::Dictionary__Add_fn(uPtr(_variableBindings), variable, value);
}

// public void Bind(Outracks.Simulator.ImmutableList<Outracks.Simulator.Bytecode.Parameter> parameters, object[] arguments) [instance] :20
void Environment::Bind1(::g::Outracks::Simulator::ImmutableList* parameters, uArray* arguments)
{
    uStackFrame __("Outracks.Simulator.Runtime.Environment", "Bind(Outracks.Simulator.ImmutableList<Outracks.Simulator.Bytecode.Parameter>,object[])");
    ::g::Outracks::Simulator::Bytecode::Parameter* ret4;

    for (int i = 0; i < uPtr(parameters)->Count(); i++)
        Bind(uPtr((::g::Outracks::Simulator::ImmutableList__Get_fn(uPtr(parameters), uCRef<int>(i), &ret4), ret4))->Name, uPtr(arguments)->Strong<uObject*>(i));
}

// public object GetValue(Outracks.Simulator.Bytecode.Variable variable) [instance] :31
uObject* Environment::GetValue(::g::Outracks::Simulator::Bytecode::Variable* variable)
{
    uStackFrame __("Outracks.Simulator.Runtime.Environment", "GetValue(Outracks.Simulator.Bytecode.Variable)");
    ::g::Outracks::Optional1<uStrong<Environment*> > ind1;
    ::g::Outracks::Optional1<uStrong<Environment*> > ind2;
    bool ret5;
    uObject* value;

    if ((::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(_variableBindings), variable, (void**)(&value), &ret5), ret5))
        return value;

    if ((ind1 = _parent().Value< ::g::Outracks::Optional1<uStrong<Environment*> > >(), (&ind1))->HasValue(::TYPES[10/*Outracks.Optional<Outracks.Simulator.Runtime.Environment>*/]))
        return uPtr((ind2 = _parent().Value< ::g::Outracks::Optional1<uStrong<Environment*> > >(), (&ind2))->Value(::TYPES[10/*Outracks.Optional<Outracks.Simulator.Runtime.Environment>*/]))->GetValue(variable);

    U_THROW(::g::Outracks::Simulator::Runtime::VariableNotBound::New4(variable));
}

// public Environment New(Outracks.Optional<Outracks.Simulator.Runtime.Environment> parent) [static] :15
Environment* Environment::New1(::g::Outracks::Optional1<uStrong<Environment*> > parent)
{
    Environment* obj3 = (Environment*)uNew(Environment_typeof());
    obj3->ctor_(parent);
    return obj3;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/Runtime/FileCache.cs
// --------------------------------------------------------------------------------------

// public sealed class FileCache :7
// {
// static generated FileCache() :7
static void FileCache__cctor__fn(uType* __type)
{
    FileCache::_cache_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[11/*Uno.Collections.Dictionary<string, Outracks.Simulator.Runtime.UxFileSource>*/]));
}

static void FileCache_build(uType* type)
{
    ::TYPES[11] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Outracks::Simulator::Runtime::UxFileSource_typeof(), NULL);
    type->SetFields(0,
        ::TYPES[11/*Uno.Collections.Dictionary<string, Outracks.Simulator.Runtime.UxFileSource>*/], (uintptr_t)&FileCache::_cache_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(3,
        new uFunction("GetFileSource", NULL, (void*)FileCache__GetFileSource_fn, 0, true, ::g::Outracks::Simulator::Runtime::UxFileSource_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction(".ctor", NULL, (void*)FileCache__New1_fn, 0, true, type, 0),
        new uFunction("Update", NULL, (void*)FileCache__Update_fn, 0, true, uVoid_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::Byte_typeof()->Array()));
}

uType* FileCache_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(FileCache);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Outracks.Simulator.Runtime.FileCache", options);
    type->fp_build_ = FileCache_build;
    type->fp_ctor_ = (void*)FileCache__New1_fn;
    type->fp_cctor_ = FileCache__cctor__fn;
    return type;
}

// public generated FileCache() :7
void FileCache__ctor__fn(FileCache* __this)
{
    __this->ctor_();
}

// public static Outracks.Simulator.Runtime.UxFileSource GetFileSource(string path) :20
void FileCache__GetFileSource_fn(uString* path, ::g::Outracks::Simulator::Runtime::UxFileSource** __retval)
{
    *__retval = FileCache::GetFileSource(path);
}

// public generated FileCache New() :7
void FileCache__New1_fn(FileCache** __retval)
{
    *__retval = FileCache::New1();
}

// public static void Update(string path, byte[] bytes) :11
void FileCache__Update_fn(uString* path, uArray* bytes)
{
    FileCache::Update(path, bytes);
}

uSStrong< ::g::Uno::Collections::Dictionary*> FileCache::_cache_;

// public generated FileCache() [instance] :7
void FileCache::ctor_()
{
}

// public static Outracks.Simulator.Runtime.UxFileSource GetFileSource(string path) [static] :20
::g::Outracks::Simulator::Runtime::UxFileSource* FileCache::GetFileSource(uString* path)
{
    uStackFrame __("Outracks.Simulator.Runtime.FileCache", "GetFileSource(string)");
    ::g::Outracks::Simulator::Runtime::UxFileSource* ret2;
    return (::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(FileCache::_cache_), path, &ret2), ret2);
}

// public generated FileCache New() [static] :7
FileCache* FileCache::New1()
{
    FileCache* obj1 = (FileCache*)uNew(FileCache_typeof());
    obj1->ctor_();
    return obj1;
}

// public static void Update(string path, byte[] bytes) [static] :11
void FileCache::Update(uString* path, uArray* bytes)
{
    uStackFrame __("Outracks.Simulator.Runtime.FileCache", "Update(string,byte[])");
    bool ret3;
    ::g::Outracks::Simulator::Runtime::UxFileSource* fs = NULL;

    if ((::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(FileCache::_cache_), path, (void**)(&fs), &ret3), ret3))
        uPtr(fs)->Update(bytes);
    else
        ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(FileCache::_cache_), path, ::g::Outracks::Simulator::Runtime::UxFileSource::New1(path, bytes));
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/Runtime/WeakDictionary.cs
// -------------------------------------------------------------------------------------------

// public sealed class HashableWeakReference :10
// {
static void HashableWeakReference_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::WeakReference_typeof()->MakeType(uObject_typeof(), NULL), offsetof(HashableWeakReference, _reference), 0);
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)HashableWeakReference__New1_fn, 0, true, type, 1, ::g::Uno::WeakReference_typeof()->MakeType(uObject_typeof(), NULL)),
        new uFunction("TryGetTarget", NULL, (void*)HashableWeakReference__TryGetTarget_fn, 0, false, ::g::Uno::Bool_typeof(), 1, uObject_typeof()->ByRef()));
}

uType* HashableWeakReference_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(HashableWeakReference);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Outracks.Simulator.Runtime.HashableWeakReference", options);
    type->fp_build_ = HashableWeakReference_build;
    type->fp_Equals = (void(*)(uObject*, uObject*, bool*))HashableWeakReference__Equals_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int*))HashableWeakReference__GetHashCode_fn;
    return type;
}

// public HashableWeakReference(Uno.WeakReference<object> reference) :14
void HashableWeakReference__ctor__fn(HashableWeakReference* __this, ::g::Uno::WeakReference* reference)
{
    __this->ctor_(reference);
}

// public override sealed bool Equals(object that) :33
void HashableWeakReference__Equals_fn(HashableWeakReference* __this, uObject* that, bool* __retval)
{
    uStackFrame __("Outracks.Simulator.Runtime.HashableWeakReference", "Equals(object)");

    if (::g::Uno::Object::ReferenceEquals(__this, that))
        return *__retval = true, void();

    uObject* a = NULL;
    uObject* b = NULL;

    if (!uPtr(__this->_reference)->TryGetTarget((uObject**)(&a)))
        return *__retval = false, void();

    if (!uIs(that, __this->__type) || !uPtr(uPtr(uCast<HashableWeakReference*>(that, __this->__type))->_reference)->TryGetTarget((uObject**)(&b)))
        return *__retval = false, void();

    return *__retval = ::g::Uno::Object::Equals(uPtr(a), b), void();
}

// public override sealed int GetHashCode() :24
void HashableWeakReference__GetHashCode_fn(HashableWeakReference* __this, int* __retval)
{
    uStackFrame __("Outracks.Simulator.Runtime.HashableWeakReference", "GetHashCode()");
    uObject* obj;

    if (!uPtr(__this->_reference)->TryGetTarget((uObject**)(&obj)))
        return *__retval = 0, void();

    return *__retval = ::g::Uno::Object::GetHashCode(uPtr(obj)), void();
}

// public HashableWeakReference New(Uno.WeakReference<object> reference) :14
void HashableWeakReference__New1_fn(::g::Uno::WeakReference* reference, HashableWeakReference** __retval)
{
    *__retval = HashableWeakReference::New1(reference);
}

// public bool TryGetTarget(object& obj) :19
void HashableWeakReference__TryGetTarget_fn(HashableWeakReference* __this, uObject** obj, bool* __retval)
{
    *__retval = __this->TryGetTarget(obj);
}

// public HashableWeakReference(Uno.WeakReference<object> reference) [instance] :14
void HashableWeakReference::ctor_(::g::Uno::WeakReference* reference)
{
    _reference = reference;
}

// public bool TryGetTarget(object& obj) [instance] :19
bool HashableWeakReference::TryGetTarget(uObject** obj)
{
    uStackFrame __("Outracks.Simulator.Runtime.HashableWeakReference", "TryGetTarget(object&)");
    return uPtr(_reference)->TryGetTarget((uObject**)obj);
}

// public HashableWeakReference New(Uno.WeakReference<object> reference) [static] :14
HashableWeakReference* HashableWeakReference::New1(::g::Uno::WeakReference* reference)
{
    HashableWeakReference* obj1 = (HashableWeakReference*)uNew(HashableWeakReference_typeof());
    obj1->ctor_(reference);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/Runtime/Reflection/NativeReflection.cs
// --------------------------------------------------------------------------------------------------------

// internal abstract interface IEvent :88
// {
uInterfaceType* IEvent_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Outracks.Simulator.Runtime.IEvent", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/Runtime/Reflection/NativeReflection.cs
// --------------------------------------------------------------------------------------------------------

// internal abstract interface IProperty :81
// {
uInterfaceType* IProperty_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Outracks.Simulator.Runtime.IProperty", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/Runtime/Reflection/IReflection.cs
// ---------------------------------------------------------------------------------------------------

// public abstract interface IReflection :5
// {
uInterfaceType* IReflection_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Outracks.Simulator.Runtime.IReflection", 0, 0);
    type->Reflection.SetFunctions(12,
        new uFunction("AddEventHandler", NULL, NULL, offsetof(IReflection, fp_AddEventHandler), false, uVoid_typeof(), 3, uObject_typeof(), ::g::Outracks::Simulator::Bytecode::TypeMemberName_typeof(), uObject_typeof()),
        new uFunction("CallDynamic", NULL, NULL, offsetof(IReflection, fp_CallDynamic), false, uObject_typeof(), 3, uObject_typeof(), ::g::Outracks::Simulator::Bytecode::TypeMemberName_typeof(), uObject_typeof()->Array()),
        new uFunction("CallStatic", NULL, NULL, offsetof(IReflection, fp_CallStatic), false, uObject_typeof(), 3, ::g::Outracks::Simulator::Bytecode::TypeName_typeof(), ::g::Outracks::Simulator::Bytecode::TypeMemberName_typeof(), uObject_typeof()->Array()),
        new uFunction("CreateDelegate", NULL, NULL, offsetof(IReflection, fp_CreateDelegate), false, uObject_typeof(), 4, ::g::Outracks::Simulator::Bytecode::TypeName_typeof(), uObject_typeof(), ::g::Outracks::Simulator::Bytecode::TypeMemberName_typeof(), ::g::Outracks::Optional1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::Signature_typeof(), NULL)),
        new uFunction("GetEnumValue", NULL, NULL, offsetof(IReflection, fp_GetEnumValue), false, uObject_typeof(), 2, ::g::Outracks::Simulator::Bytecode::TypeName_typeof(), ::g::Outracks::Simulator::Bytecode::TypeMemberName_typeof()),
        new uFunction("GetPropertyValue", NULL, NULL, offsetof(IReflection, fp_GetPropertyValue), false, uObject_typeof(), 2, uObject_typeof(), ::g::Outracks::Simulator::Bytecode::TypeMemberName_typeof()),
        new uFunction("GetStaticPropertyOrFieldValue", NULL, NULL, offsetof(IReflection, fp_GetStaticPropertyOrFieldValue), false, uObject_typeof(), 2, ::g::Outracks::Simulator::Bytecode::TypeName_typeof(), ::g::Outracks::Simulator::Bytecode::TypeMemberName_typeof()),
        new uFunction("Instantiate", NULL, NULL, offsetof(IReflection, fp_Instantiate), false, uObject_typeof(), 2, ::g::Outracks::Simulator::Bytecode::TypeName_typeof(), uObject_typeof()->Array()),
        new uFunction("IsSubtype", NULL, NULL, offsetof(IReflection, fp_IsSubtype), false, ::g::Uno::Bool_typeof(), 2, uObject_typeof(), ::g::Outracks::Simulator::Bytecode::TypeName_typeof()),
        new uFunction("IsType", NULL, NULL, offsetof(IReflection, fp_IsType), false, ::g::Uno::Bool_typeof(), 2, uObject_typeof(), ::g::Outracks::Simulator::Bytecode::TypeName_typeof()),
        new uFunction("RemoveEventHandler", NULL, NULL, offsetof(IReflection, fp_RemoveEventHandler), false, uVoid_typeof(), 3, uObject_typeof(), ::g::Outracks::Simulator::Bytecode::TypeMemberName_typeof(), uObject_typeof()),
        new uFunction("SetPropertyValue", NULL, NULL, offsetof(IReflection, fp_SetPropertyValue), false, uVoid_typeof(), 3, uObject_typeof(), ::g::Outracks::Simulator::Bytecode::TypeMemberName_typeof(), uObject_typeof()));
    return type;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/Runtime/Reflection/NativeReflection.cs
// --------------------------------------------------------------------------------------------------------

// public abstract interface ITypeMap :12
// {
uInterfaceType* ITypeMap_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Outracks.Simulator.Runtime.ITypeMap", 0, 0);
    type->Reflection.SetFunctions(2,
        new uFunction("ResolveType", NULL, NULL, offsetof(ITypeMap, fp_ResolveType), false, ::g::Uno::Type_typeof(), 1, ::g::Outracks::Simulator::Bytecode::Parameter_typeof()),
        new uFunction("ResolveType", NULL, NULL, offsetof(ITypeMap, fp_ResolveType1), false, ::g::Uno::Type_typeof(), 1, ::g::Outracks::Simulator::Bytecode::TypeName_typeof()));
    return type;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/Runtime/VirtualMachine.cs
// -------------------------------------------------------------------------------------------

// internal sealed class LambdaClosure :304
// {
static void LambdaClosure_build(uType* type)
{
    ::TYPES[12] = uObject_typeof()->Array();
    type->SetFields(0,
        ::g::Outracks::Simulator::Bytecode::Lambda_typeof(), offsetof(LambdaClosure, _lambda), 0,
        ::g::Uno::Func2_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::Lambda_typeof(), ::TYPES[12/*object[]*/], uObject_typeof(), NULL), offsetof(LambdaClosure, _execute), 0);
}

uType* LambdaClosure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(LambdaClosure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Outracks.Simulator.Runtime.LambdaClosure", options);
    type->fp_build_ = LambdaClosure_build;
    return type;
}

// public LambdaClosure(Outracks.Simulator.Bytecode.Lambda lambda, Uno.Func<Outracks.Simulator.Bytecode.Lambda, object[], object> execute) :309
void LambdaClosure__ctor__fn(LambdaClosure* __this, ::g::Outracks::Simulator::Bytecode::Lambda* lambda, uDelegate* execute)
{
    __this->ctor_(lambda, execute);
}

// public void Action() :315
void LambdaClosure__Action_fn(LambdaClosure* __this)
{
    __this->Action();
}

// public void Action(object a1) :320
void LambdaClosure__Action1_fn(LambdaClosure* __this, uObject* a1)
{
    __this->Action1(a1);
}

// public void Action(object a1, object a2) :325
void LambdaClosure__Action2_fn(LambdaClosure* __this, uObject* a1, uObject* a2)
{
    __this->Action2(a1, a2);
}

// public void Action(object a1, object a2, object a3) :330
void LambdaClosure__Action3_fn(LambdaClosure* __this, uObject* a1, uObject* a2, uObject* a3)
{
    __this->Action3(a1, a2, a3);
}

// public void Action(object a1, object a2, object a3, object a4) :335
void LambdaClosure__Action4_fn(LambdaClosure* __this, uObject* a1, uObject* a2, uObject* a3, uObject* a4)
{
    __this->Action4(a1, a2, a3, a4);
}

// public void Action(object a1, object a2, object a3, object a4, object a5) :340
void LambdaClosure__Action5_fn(LambdaClosure* __this, uObject* a1, uObject* a2, uObject* a3, uObject* a4, uObject* a5)
{
    __this->Action5(a1, a2, a3, a4, a5);
}

// public void Action(object a1, object a2, object a3, object a4, object a5, object a6) :345
void LambdaClosure__Action6_fn(LambdaClosure* __this, uObject* a1, uObject* a2, uObject* a3, uObject* a4, uObject* a5, uObject* a6)
{
    __this->Action6(a1, a2, a3, a4, a5, a6);
}

// public void Action(object a1, object a2, object a3, object a4, object a5, object a6, object a7) :350
void LambdaClosure__Action7_fn(LambdaClosure* __this, uObject* a1, uObject* a2, uObject* a3, uObject* a4, uObject* a5, uObject* a6, uObject* a7)
{
    __this->Action7(a1, a2, a3, a4, a5, a6, a7);
}

// public void Action(object a1, object a2, object a3, object a4, object a5, object a6, object a7, object a8) :355
void LambdaClosure__Action8_fn(LambdaClosure* __this, uObject* a1, uObject* a2, uObject* a3, uObject* a4, uObject* a5, uObject* a6, uObject* a7, uObject* a8)
{
    __this->Action8(a1, a2, a3, a4, a5, a6, a7, a8);
}

// public void Action(object a1, object a2, object a3, object a4, object a5, object a6, object a7, object a8, object a9) :360
void LambdaClosure__Action9_fn(LambdaClosure* __this, uObject* a1, uObject* a2, uObject* a3, uObject* a4, uObject* a5, uObject* a6, uObject* a7, uObject* a8, uObject* a9)
{
    __this->Action9(a1, a2, a3, a4, a5, a6, a7, a8, a9);
}

// public void Action(object a1, object a2, object a3, object a4, object a5, object a6, object a7, object a8, object a9, object a10) :365
void LambdaClosure__Action10_fn(LambdaClosure* __this, uObject* a1, uObject* a2, uObject* a3, uObject* a4, uObject* a5, uObject* a6, uObject* a7, uObject* a8, uObject* a9, uObject* a10)
{
    __this->Action10(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
}

// public void Action(object a1, object a2, object a3, object a4, object a5, object a6, object a7, object a8, object a9, object a10, object a11) :370
void LambdaClosure__Action11_fn(LambdaClosure* __this, uObject* a1, uObject* a2, uObject* a3, uObject* a4, uObject* a5, uObject* a6, uObject* a7, uObject* a8, uObject* a9, uObject* a10, uObject* a11)
{
    __this->Action11(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
}

// public void Action(object a1, object a2, object a3, object a4, object a5, object a6, object a7, object a8, object a9, object a10, object a11, object a12) :375
void LambdaClosure__Action12_fn(LambdaClosure* __this, uObject* a1, uObject* a2, uObject* a3, uObject* a4, uObject* a5, uObject* a6, uObject* a7, uObject* a8, uObject* a9, uObject* a10, uObject* a11, uObject* a12)
{
    __this->Action12(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
}

// public void Action(object a1, object a2, object a3, object a4, object a5, object a6, object a7, object a8, object a9, object a10, object a11, object a12, object a13) :380
void LambdaClosure__Action13_fn(LambdaClosure* __this, uObject* a1, uObject* a2, uObject* a3, uObject* a4, uObject* a5, uObject* a6, uObject* a7, uObject* a8, uObject* a9, uObject* a10, uObject* a11, uObject* a12, uObject* a13)
{
    __this->Action13(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
}

// public void Action(object a1, object a2, object a3, object a4, object a5, object a6, object a7, object a8, object a9, object a10, object a11, object a12, object a13, object a14) :385
void LambdaClosure__Action14_fn(LambdaClosure* __this, uObject* a1, uObject* a2, uObject* a3, uObject* a4, uObject* a5, uObject* a6, uObject* a7, uObject* a8, uObject* a9, uObject* a10, uObject* a11, uObject* a12, uObject* a13, uObject* a14)
{
    __this->Action14(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
}

// public void Action(object a1, object a2, object a3, object a4, object a5, object a6, object a7, object a8, object a9, object a10, object a11, object a12, object a13, object a14, object a15) :390
void LambdaClosure__Action15_fn(LambdaClosure* __this, uObject* a1, uObject* a2, uObject* a3, uObject* a4, uObject* a5, uObject* a6, uObject* a7, uObject* a8, uObject* a9, uObject* a10, uObject* a11, uObject* a12, uObject* a13, uObject* a14, uObject* a15)
{
    __this->Action15(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15);
}

// public void Action(object a1, object a2, object a3, object a4, object a5, object a6, object a7, object a8, object a9, object a10, object a11, object a12, object a13, object a14, object a15, object a16) :395
void LambdaClosure__Action16_fn(LambdaClosure* __this, uObject* a1, uObject* a2, uObject* a3, uObject* a4, uObject* a5, uObject* a6, uObject* a7, uObject* a8, uObject* a9, uObject* a10, uObject* a11, uObject* a12, uObject* a13, uObject* a14, uObject* a15, uObject* a16)
{
    __this->Action16(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16);
}

// public object Func() :400
void LambdaClosure__Func_fn(LambdaClosure* __this, uObject** __retval)
{
    *__retval = __this->Func();
}

// public object Func(object a1) :405
void LambdaClosure__Func1_fn(LambdaClosure* __this, uObject* a1, uObject** __retval)
{
    *__retval = __this->Func1(a1);
}

// public object Func(object a1, object a2) :410
void LambdaClosure__Func2_fn(LambdaClosure* __this, uObject* a1, uObject* a2, uObject** __retval)
{
    *__retval = __this->Func2(a1, a2);
}

// public object Func(object a1, object a2, object a3) :415
void LambdaClosure__Func3_fn(LambdaClosure* __this, uObject* a1, uObject* a2, uObject* a3, uObject** __retval)
{
    *__retval = __this->Func3(a1, a2, a3);
}

// public object Func(object a1, object a2, object a3, object a4) :420
void LambdaClosure__Func4_fn(LambdaClosure* __this, uObject* a1, uObject* a2, uObject* a3, uObject* a4, uObject** __retval)
{
    *__retval = __this->Func4(a1, a2, a3, a4);
}

// public object Func(object a1, object a2, object a3, object a4, object a5) :425
void LambdaClosure__Func5_fn(LambdaClosure* __this, uObject* a1, uObject* a2, uObject* a3, uObject* a4, uObject* a5, uObject** __retval)
{
    *__retval = __this->Func5(a1, a2, a3, a4, a5);
}

// public object Func(object a1, object a2, object a3, object a4, object a5, object a6) :430
void LambdaClosure__Func6_fn(LambdaClosure* __this, uObject* a1, uObject* a2, uObject* a3, uObject* a4, uObject* a5, uObject* a6, uObject** __retval)
{
    *__retval = __this->Func6(a1, a2, a3, a4, a5, a6);
}

// public object Func(object a1, object a2, object a3, object a4, object a5, object a6, object a7) :435
void LambdaClosure__Func7_fn(LambdaClosure* __this, uObject* a1, uObject* a2, uObject* a3, uObject* a4, uObject* a5, uObject* a6, uObject* a7, uObject** __retval)
{
    *__retval = __this->Func7(a1, a2, a3, a4, a5, a6, a7);
}

// public object Func(object a1, object a2, object a3, object a4, object a5, object a6, object a7, object a8) :440
void LambdaClosure__Func8_fn(LambdaClosure* __this, uObject* a1, uObject* a2, uObject* a3, uObject* a4, uObject* a5, uObject* a6, uObject* a7, uObject* a8, uObject** __retval)
{
    *__retval = __this->Func8(a1, a2, a3, a4, a5, a6, a7, a8);
}

// public object Func(object a1, object a2, object a3, object a4, object a5, object a6, object a7, object a8, object a9) :445
void LambdaClosure__Func9_fn(LambdaClosure* __this, uObject* a1, uObject* a2, uObject* a3, uObject* a4, uObject* a5, uObject* a6, uObject* a7, uObject* a8, uObject* a9, uObject** __retval)
{
    *__retval = __this->Func9(a1, a2, a3, a4, a5, a6, a7, a8, a9);
}

// public object Func(object a1, object a2, object a3, object a4, object a5, object a6, object a7, object a8, object a9, object a10) :450
void LambdaClosure__Func10_fn(LambdaClosure* __this, uObject* a1, uObject* a2, uObject* a3, uObject* a4, uObject* a5, uObject* a6, uObject* a7, uObject* a8, uObject* a9, uObject* a10, uObject** __retval)
{
    *__retval = __this->Func10(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
}

// public object Func(object a1, object a2, object a3, object a4, object a5, object a6, object a7, object a8, object a9, object a10, object a11) :455
void LambdaClosure__Func11_fn(LambdaClosure* __this, uObject* a1, uObject* a2, uObject* a3, uObject* a4, uObject* a5, uObject* a6, uObject* a7, uObject* a8, uObject* a9, uObject* a10, uObject* a11, uObject** __retval)
{
    *__retval = __this->Func11(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
}

// public object Func(object a1, object a2, object a3, object a4, object a5, object a6, object a7, object a8, object a9, object a10, object a11, object a12) :460
void LambdaClosure__Func12_fn(LambdaClosure* __this, uObject* a1, uObject* a2, uObject* a3, uObject* a4, uObject* a5, uObject* a6, uObject* a7, uObject* a8, uObject* a9, uObject* a10, uObject* a11, uObject* a12, uObject** __retval)
{
    *__retval = __this->Func12(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
}

// public object Func(object a1, object a2, object a3, object a4, object a5, object a6, object a7, object a8, object a9, object a10, object a11, object a12, object a13) :465
void LambdaClosure__Func13_fn(LambdaClosure* __this, uObject* a1, uObject* a2, uObject* a3, uObject* a4, uObject* a5, uObject* a6, uObject* a7, uObject* a8, uObject* a9, uObject* a10, uObject* a11, uObject* a12, uObject* a13, uObject** __retval)
{
    *__retval = __this->Func13(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
}

// public object Func(object a1, object a2, object a3, object a4, object a5, object a6, object a7, object a8, object a9, object a10, object a11, object a12, object a13, object a14) :470
void LambdaClosure__Func14_fn(LambdaClosure* __this, uObject* a1, uObject* a2, uObject* a3, uObject* a4, uObject* a5, uObject* a6, uObject* a7, uObject* a8, uObject* a9, uObject* a10, uObject* a11, uObject* a12, uObject* a13, uObject* a14, uObject** __retval)
{
    *__retval = __this->Func14(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
}

// public object Func(object a1, object a2, object a3, object a4, object a5, object a6, object a7, object a8, object a9, object a10, object a11, object a12, object a13, object a14, object a15) :475
void LambdaClosure__Func15_fn(LambdaClosure* __this, uObject* a1, uObject* a2, uObject* a3, uObject* a4, uObject* a5, uObject* a6, uObject* a7, uObject* a8, uObject* a9, uObject* a10, uObject* a11, uObject* a12, uObject* a13, uObject* a14, uObject* a15, uObject** __retval)
{
    *__retval = __this->Func15(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15);
}

// public object Func(object a1, object a2, object a3, object a4, object a5, object a6, object a7, object a8, object a9, object a10, object a11, object a12, object a13, object a14, object a15, object a16) :480
void LambdaClosure__Func16_fn(LambdaClosure* __this, uObject* a1, uObject* a2, uObject* a3, uObject* a4, uObject* a5, uObject* a6, uObject* a7, uObject* a8, uObject* a9, uObject* a10, uObject* a11, uObject* a12, uObject* a13, uObject* a14, uObject* a15, uObject* a16, uObject** __retval)
{
    *__retval = __this->Func16(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16);
}

// public LambdaClosure New(Outracks.Simulator.Bytecode.Lambda lambda, Uno.Func<Outracks.Simulator.Bytecode.Lambda, object[], object> execute) :309
void LambdaClosure__New1_fn(::g::Outracks::Simulator::Bytecode::Lambda* lambda, uDelegate* execute, LambdaClosure** __retval)
{
    *__retval = LambdaClosure::New1(lambda, execute);
}

// public LambdaClosure(Outracks.Simulator.Bytecode.Lambda lambda, Uno.Func<Outracks.Simulator.Bytecode.Lambda, object[], object> execute) [instance] :309
void LambdaClosure::ctor_(::g::Outracks::Simulator::Bytecode::Lambda* lambda, uDelegate* execute)
{
    _lambda = lambda;
    _execute = execute;
}

// public void Action() [instance] :315
void LambdaClosure::Action()
{
    uStackFrame __("Outracks.Simulator.Runtime.LambdaClosure", "Action()");
    Func();
}

// public void Action(object a1) [instance] :320
void LambdaClosure::Action1(uObject* a1)
{
    uStackFrame __("Outracks.Simulator.Runtime.LambdaClosure", "Action(object)");
    Func1(a1);
}

// public void Action(object a1, object a2) [instance] :325
void LambdaClosure::Action2(uObject* a1, uObject* a2)
{
    uStackFrame __("Outracks.Simulator.Runtime.LambdaClosure", "Action(object,object)");
    Func2(a1, a2);
}

// public void Action(object a1, object a2, object a3) [instance] :330
void LambdaClosure::Action3(uObject* a1, uObject* a2, uObject* a3)
{
    uStackFrame __("Outracks.Simulator.Runtime.LambdaClosure", "Action(object,object,object)");
    Func3(a1, a2, a3);
}

// public void Action(object a1, object a2, object a3, object a4) [instance] :335
void LambdaClosure::Action4(uObject* a1, uObject* a2, uObject* a3, uObject* a4)
{
    uStackFrame __("Outracks.Simulator.Runtime.LambdaClosure", "Action(object,object,object,object)");
    Func4(a1, a2, a3, a4);
}

// public void Action(object a1, object a2, object a3, object a4, object a5) [instance] :340
void LambdaClosure::Action5(uObject* a1, uObject* a2, uObject* a3, uObject* a4, uObject* a5)
{
    uStackFrame __("Outracks.Simulator.Runtime.LambdaClosure", "Action(object,object,object,object,object)");
    Func5(a1, a2, a3, a4, a5);
}

// public void Action(object a1, object a2, object a3, object a4, object a5, object a6) [instance] :345
void LambdaClosure::Action6(uObject* a1, uObject* a2, uObject* a3, uObject* a4, uObject* a5, uObject* a6)
{
    uStackFrame __("Outracks.Simulator.Runtime.LambdaClosure", "Action(object,object,object,object,object,object)");
    Func6(a1, a2, a3, a4, a5, a6);
}

// public void Action(object a1, object a2, object a3, object a4, object a5, object a6, object a7) [instance] :350
void LambdaClosure::Action7(uObject* a1, uObject* a2, uObject* a3, uObject* a4, uObject* a5, uObject* a6, uObject* a7)
{
    uStackFrame __("Outracks.Simulator.Runtime.LambdaClosure", "Action(object,object,object,object,object,object,object)");
    Func7(a1, a2, a3, a4, a5, a6, a7);
}

// public void Action(object a1, object a2, object a3, object a4, object a5, object a6, object a7, object a8) [instance] :355
void LambdaClosure::Action8(uObject* a1, uObject* a2, uObject* a3, uObject* a4, uObject* a5, uObject* a6, uObject* a7, uObject* a8)
{
    uStackFrame __("Outracks.Simulator.Runtime.LambdaClosure", "Action(object,object,object,object,object,object,object,object)");
    Func8(a1, a2, a3, a4, a5, a6, a7, a8);
}

// public void Action(object a1, object a2, object a3, object a4, object a5, object a6, object a7, object a8, object a9) [instance] :360
void LambdaClosure::Action9(uObject* a1, uObject* a2, uObject* a3, uObject* a4, uObject* a5, uObject* a6, uObject* a7, uObject* a8, uObject* a9)
{
    uStackFrame __("Outracks.Simulator.Runtime.LambdaClosure", "Action(object,object,object,object,object,object,object,object,object)");
    Func9(a1, a2, a3, a4, a5, a6, a7, a8, a9);
}

// public void Action(object a1, object a2, object a3, object a4, object a5, object a6, object a7, object a8, object a9, object a10) [instance] :365
void LambdaClosure::Action10(uObject* a1, uObject* a2, uObject* a3, uObject* a4, uObject* a5, uObject* a6, uObject* a7, uObject* a8, uObject* a9, uObject* a10)
{
    uStackFrame __("Outracks.Simulator.Runtime.LambdaClosure", "Action(object,object,object,object,object,object,object,object,object,object)");
    Func10(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
}

// public void Action(object a1, object a2, object a3, object a4, object a5, object a6, object a7, object a8, object a9, object a10, object a11) [instance] :370
void LambdaClosure::Action11(uObject* a1, uObject* a2, uObject* a3, uObject* a4, uObject* a5, uObject* a6, uObject* a7, uObject* a8, uObject* a9, uObject* a10, uObject* a11)
{
    uStackFrame __("Outracks.Simulator.Runtime.LambdaClosure", "Action(object,object,object,object,object,object,object,object,object,object,object)");
    Func11(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
}

// public void Action(object a1, object a2, object a3, object a4, object a5, object a6, object a7, object a8, object a9, object a10, object a11, object a12) [instance] :375
void LambdaClosure::Action12(uObject* a1, uObject* a2, uObject* a3, uObject* a4, uObject* a5, uObject* a6, uObject* a7, uObject* a8, uObject* a9, uObject* a10, uObject* a11, uObject* a12)
{
    uStackFrame __("Outracks.Simulator.Runtime.LambdaClosure", "Action(object,object,object,object,object,object,object,object,object,object,object,object)");
    Func12(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
}

// public void Action(object a1, object a2, object a3, object a4, object a5, object a6, object a7, object a8, object a9, object a10, object a11, object a12, object a13) [instance] :380
void LambdaClosure::Action13(uObject* a1, uObject* a2, uObject* a3, uObject* a4, uObject* a5, uObject* a6, uObject* a7, uObject* a8, uObject* a9, uObject* a10, uObject* a11, uObject* a12, uObject* a13)
{
    uStackFrame __("Outracks.Simulator.Runtime.LambdaClosure", "Action(object,object,object,object,object,object,object,object,object,object,object,object,object)");
    Func13(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
}

// public void Action(object a1, object a2, object a3, object a4, object a5, object a6, object a7, object a8, object a9, object a10, object a11, object a12, object a13, object a14) [instance] :385
void LambdaClosure::Action14(uObject* a1, uObject* a2, uObject* a3, uObject* a4, uObject* a5, uObject* a6, uObject* a7, uObject* a8, uObject* a9, uObject* a10, uObject* a11, uObject* a12, uObject* a13, uObject* a14)
{
    uStackFrame __("Outracks.Simulator.Runtime.LambdaClosure", "Action(object,object,object,object,object,object,object,object,object,object,object,object,object,object)");
    Func14(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
}

// public void Action(object a1, object a2, object a3, object a4, object a5, object a6, object a7, object a8, object a9, object a10, object a11, object a12, object a13, object a14, object a15) [instance] :390
void LambdaClosure::Action15(uObject* a1, uObject* a2, uObject* a3, uObject* a4, uObject* a5, uObject* a6, uObject* a7, uObject* a8, uObject* a9, uObject* a10, uObject* a11, uObject* a12, uObject* a13, uObject* a14, uObject* a15)
{
    uStackFrame __("Outracks.Simulator.Runtime.LambdaClosure", "Action(object,object,object,object,object,object,object,object,object,object,object,object,object,object,object)");
    Func15(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15);
}

// public void Action(object a1, object a2, object a3, object a4, object a5, object a6, object a7, object a8, object a9, object a10, object a11, object a12, object a13, object a14, object a15, object a16) [instance] :395
void LambdaClosure::Action16(uObject* a1, uObject* a2, uObject* a3, uObject* a4, uObject* a5, uObject* a6, uObject* a7, uObject* a8, uObject* a9, uObject* a10, uObject* a11, uObject* a12, uObject* a13, uObject* a14, uObject* a15, uObject* a16)
{
    uStackFrame __("Outracks.Simulator.Runtime.LambdaClosure", "Action(object,object,object,object,object,object,object,object,object,object,object,object,object,object,object,object)");
    Func16(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16);
}

// public object Func() [instance] :400
uObject* LambdaClosure::Func()
{
    uStackFrame __("Outracks.Simulator.Runtime.LambdaClosure", "Func()");
    return uPtr(_execute)->Invoke(2, (::g::Outracks::Simulator::Bytecode::Lambda*)_lambda, uArray::New(::TYPES[12/*object[]*/], 0));
}

// public object Func(object a1) [instance] :405
uObject* LambdaClosure::Func1(uObject* a1)
{
    uStackFrame __("Outracks.Simulator.Runtime.LambdaClosure", "Func(object)");
    return uPtr(_execute)->Invoke(2, (::g::Outracks::Simulator::Bytecode::Lambda*)_lambda, uArray::Init<uObject*>(::TYPES[12/*object[]*/], 1, a1));
}

// public object Func(object a1, object a2) [instance] :410
uObject* LambdaClosure::Func2(uObject* a1, uObject* a2)
{
    uStackFrame __("Outracks.Simulator.Runtime.LambdaClosure", "Func(object,object)");
    return uPtr(_execute)->Invoke(2, (::g::Outracks::Simulator::Bytecode::Lambda*)_lambda, uArray::Init<uObject*>(::TYPES[12/*object[]*/], 2, a1, a2));
}

// public object Func(object a1, object a2, object a3) [instance] :415
uObject* LambdaClosure::Func3(uObject* a1, uObject* a2, uObject* a3)
{
    uStackFrame __("Outracks.Simulator.Runtime.LambdaClosure", "Func(object,object,object)");
    return uPtr(_execute)->Invoke(2, (::g::Outracks::Simulator::Bytecode::Lambda*)_lambda, uArray::Init<uObject*>(::TYPES[12/*object[]*/], 3, a1, a2, a3));
}

// public object Func(object a1, object a2, object a3, object a4) [instance] :420
uObject* LambdaClosure::Func4(uObject* a1, uObject* a2, uObject* a3, uObject* a4)
{
    uStackFrame __("Outracks.Simulator.Runtime.LambdaClosure", "Func(object,object,object,object)");
    return uPtr(_execute)->Invoke(2, (::g::Outracks::Simulator::Bytecode::Lambda*)_lambda, uArray::Init<uObject*>(::TYPES[12/*object[]*/], 4, a1, a2, a3, a4));
}

// public object Func(object a1, object a2, object a3, object a4, object a5) [instance] :425
uObject* LambdaClosure::Func5(uObject* a1, uObject* a2, uObject* a3, uObject* a4, uObject* a5)
{
    uStackFrame __("Outracks.Simulator.Runtime.LambdaClosure", "Func(object,object,object,object,object)");
    return uPtr(_execute)->Invoke(2, (::g::Outracks::Simulator::Bytecode::Lambda*)_lambda, uArray::Init<uObject*>(::TYPES[12/*object[]*/], 5, a1, a2, a3, a4, a5));
}

// public object Func(object a1, object a2, object a3, object a4, object a5, object a6) [instance] :430
uObject* LambdaClosure::Func6(uObject* a1, uObject* a2, uObject* a3, uObject* a4, uObject* a5, uObject* a6)
{
    uStackFrame __("Outracks.Simulator.Runtime.LambdaClosure", "Func(object,object,object,object,object,object)");
    return uPtr(_execute)->Invoke(2, (::g::Outracks::Simulator::Bytecode::Lambda*)_lambda, uArray::Init<uObject*>(::TYPES[12/*object[]*/], 6, a1, a2, a3, a4, a5, a6));
}

// public object Func(object a1, object a2, object a3, object a4, object a5, object a6, object a7) [instance] :435
uObject* LambdaClosure::Func7(uObject* a1, uObject* a2, uObject* a3, uObject* a4, uObject* a5, uObject* a6, uObject* a7)
{
    uStackFrame __("Outracks.Simulator.Runtime.LambdaClosure", "Func(object,object,object,object,object,object,object)");
    return uPtr(_execute)->Invoke(2, (::g::Outracks::Simulator::Bytecode::Lambda*)_lambda, uArray::Init<uObject*>(::TYPES[12/*object[]*/], 7, a1, a2, a3, a4, a5, a6, a7));
}

// public object Func(object a1, object a2, object a3, object a4, object a5, object a6, object a7, object a8) [instance] :440
uObject* LambdaClosure::Func8(uObject* a1, uObject* a2, uObject* a3, uObject* a4, uObject* a5, uObject* a6, uObject* a7, uObject* a8)
{
    uStackFrame __("Outracks.Simulator.Runtime.LambdaClosure", "Func(object,object,object,object,object,object,object,object)");
    return uPtr(_execute)->Invoke(2, (::g::Outracks::Simulator::Bytecode::Lambda*)_lambda, uArray::Init<uObject*>(::TYPES[12/*object[]*/], 8, a1, a2, a3, a4, a5, a6, a7, a8));
}

// public object Func(object a1, object a2, object a3, object a4, object a5, object a6, object a7, object a8, object a9) [instance] :445
uObject* LambdaClosure::Func9(uObject* a1, uObject* a2, uObject* a3, uObject* a4, uObject* a5, uObject* a6, uObject* a7, uObject* a8, uObject* a9)
{
    uStackFrame __("Outracks.Simulator.Runtime.LambdaClosure", "Func(object,object,object,object,object,object,object,object,object)");
    return uPtr(_execute)->Invoke(2, (::g::Outracks::Simulator::Bytecode::Lambda*)_lambda, uArray::Init<uObject*>(::TYPES[12/*object[]*/], 9, a1, a2, a3, a4, a5, a6, a7, a8, a9));
}

// public object Func(object a1, object a2, object a3, object a4, object a5, object a6, object a7, object a8, object a9, object a10) [instance] :450
uObject* LambdaClosure::Func10(uObject* a1, uObject* a2, uObject* a3, uObject* a4, uObject* a5, uObject* a6, uObject* a7, uObject* a8, uObject* a9, uObject* a10)
{
    uStackFrame __("Outracks.Simulator.Runtime.LambdaClosure", "Func(object,object,object,object,object,object,object,object,object,object)");
    return uPtr(_execute)->Invoke(2, (::g::Outracks::Simulator::Bytecode::Lambda*)_lambda, uArray::Init<uObject*>(::TYPES[12/*object[]*/], 10, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10));
}

// public object Func(object a1, object a2, object a3, object a4, object a5, object a6, object a7, object a8, object a9, object a10, object a11) [instance] :455
uObject* LambdaClosure::Func11(uObject* a1, uObject* a2, uObject* a3, uObject* a4, uObject* a5, uObject* a6, uObject* a7, uObject* a8, uObject* a9, uObject* a10, uObject* a11)
{
    uStackFrame __("Outracks.Simulator.Runtime.LambdaClosure", "Func(object,object,object,object,object,object,object,object,object,object,object)");
    return uPtr(_execute)->Invoke(2, (::g::Outracks::Simulator::Bytecode::Lambda*)_lambda, uArray::Init<uObject*>(::TYPES[12/*object[]*/], 11, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11));
}

// public object Func(object a1, object a2, object a3, object a4, object a5, object a6, object a7, object a8, object a9, object a10, object a11, object a12) [instance] :460
uObject* LambdaClosure::Func12(uObject* a1, uObject* a2, uObject* a3, uObject* a4, uObject* a5, uObject* a6, uObject* a7, uObject* a8, uObject* a9, uObject* a10, uObject* a11, uObject* a12)
{
    uStackFrame __("Outracks.Simulator.Runtime.LambdaClosure", "Func(object,object,object,object,object,object,object,object,object,object,object,object)");
    return uPtr(_execute)->Invoke(2, (::g::Outracks::Simulator::Bytecode::Lambda*)_lambda, uArray::Init<uObject*>(::TYPES[12/*object[]*/], 12, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12));
}

// public object Func(object a1, object a2, object a3, object a4, object a5, object a6, object a7, object a8, object a9, object a10, object a11, object a12, object a13) [instance] :465
uObject* LambdaClosure::Func13(uObject* a1, uObject* a2, uObject* a3, uObject* a4, uObject* a5, uObject* a6, uObject* a7, uObject* a8, uObject* a9, uObject* a10, uObject* a11, uObject* a12, uObject* a13)
{
    uStackFrame __("Outracks.Simulator.Runtime.LambdaClosure", "Func(object,object,object,object,object,object,object,object,object,object,object,object,object)");
    return uPtr(_execute)->Invoke(2, (::g::Outracks::Simulator::Bytecode::Lambda*)_lambda, uArray::Init<uObject*>(::TYPES[12/*object[]*/], 13, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13));
}

// public object Func(object a1, object a2, object a3, object a4, object a5, object a6, object a7, object a8, object a9, object a10, object a11, object a12, object a13, object a14) [instance] :470
uObject* LambdaClosure::Func14(uObject* a1, uObject* a2, uObject* a3, uObject* a4, uObject* a5, uObject* a6, uObject* a7, uObject* a8, uObject* a9, uObject* a10, uObject* a11, uObject* a12, uObject* a13, uObject* a14)
{
    uStackFrame __("Outracks.Simulator.Runtime.LambdaClosure", "Func(object,object,object,object,object,object,object,object,object,object,object,object,object,object)");
    return uPtr(_execute)->Invoke(2, (::g::Outracks::Simulator::Bytecode::Lambda*)_lambda, uArray::Init<uObject*>(::TYPES[12/*object[]*/], 14, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14));
}

// public object Func(object a1, object a2, object a3, object a4, object a5, object a6, object a7, object a8, object a9, object a10, object a11, object a12, object a13, object a14, object a15) [instance] :475
uObject* LambdaClosure::Func15(uObject* a1, uObject* a2, uObject* a3, uObject* a4, uObject* a5, uObject* a6, uObject* a7, uObject* a8, uObject* a9, uObject* a10, uObject* a11, uObject* a12, uObject* a13, uObject* a14, uObject* a15)
{
    uStackFrame __("Outracks.Simulator.Runtime.LambdaClosure", "Func(object,object,object,object,object,object,object,object,object,object,object,object,object,object,object)");
    return uPtr(_execute)->Invoke(2, (::g::Outracks::Simulator::Bytecode::Lambda*)_lambda, uArray::Init<uObject*>(::TYPES[12/*object[]*/], 15, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15));
}

// public object Func(object a1, object a2, object a3, object a4, object a5, object a6, object a7, object a8, object a9, object a10, object a11, object a12, object a13, object a14, object a15, object a16) [instance] :480
uObject* LambdaClosure::Func16(uObject* a1, uObject* a2, uObject* a3, uObject* a4, uObject* a5, uObject* a6, uObject* a7, uObject* a8, uObject* a9, uObject* a10, uObject* a11, uObject* a12, uObject* a13, uObject* a14, uObject* a15, uObject* a16)
{
    uStackFrame __("Outracks.Simulator.Runtime.LambdaClosure", "Func(object,object,object,object,object,object,object,object,object,object,object,object,object,object,object,object)");
    return uPtr(_execute)->Invoke(2, (::g::Outracks::Simulator::Bytecode::Lambda*)_lambda, uArray::Init<uObject*>(::TYPES[12/*object[]*/], 16, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16));
}

// public LambdaClosure New(Outracks.Simulator.Bytecode.Lambda lambda, Uno.Func<Outracks.Simulator.Bytecode.Lambda, object[], object> execute) [static] :309
LambdaClosure* LambdaClosure::New1(::g::Outracks::Simulator::Bytecode::Lambda* lambda, uDelegate* execute)
{
    LambdaClosure* obj1 = (LambdaClosure*)uNew(LambdaClosure_typeof());
    obj1->ctor_(lambda, execute);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/Runtime/Reflection/NativeReflection.cs
// --------------------------------------------------------------------------------------------------------

// public sealed extern class NativeReflection :96
// {
static void NativeReflection_build(uType* type)
{
    ::STRINGS[4] = uString::Const("Event '");
    ::STRINGS[5] = uString::Const(".");
    ::STRINGS[6] = uString::Const("' has no add method");
    ::STRINGS[7] = uString::Const("Property '");
    ::STRINGS[8] = uString::Const("' has no getter");
    ::STRINGS[9] = uString::Const(".ctor");
    ::STRINGS[10] = uString::Const("' has no remover method");
    ::STRINGS[11] = uString::Const("obj");
    ::STRINGS[12] = uString::Const("' has no setter");
    ::TYPES[13] = ::g::Outracks::Simulator::Runtime::IEvent_typeof();
    ::TYPES[12] = uObject_typeof()->Array();
    ::TYPES[14] = ::g::Outracks::Simulator::Runtime::ITypeMap_typeof();
    ::TYPES[15] = ::g::Outracks::Optional1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::Signature_typeof(), NULL);
    ::TYPES[16] = ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(9/*ToArray<Uno.Type>*/, ::g::Uno::Type_typeof(), NULL);
    ::TYPES[17] = ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(7/*Select<Outracks.Simulator.Bytecode.Parameter, Uno.Type>*/, ::g::Outracks::Simulator::Bytecode::Parameter_typeof(), ::g::Uno::Type_typeof(), NULL);
    ::TYPES[18] = ::g::Uno::Func1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::Parameter_typeof(), ::g::Uno::Type_typeof(), NULL);
    ::TYPES[6] = ::g::Uno::Type_typeof()->Array();
    ::TYPES[19] = ::g::Uno::Reflection::IFunction_typeof();
    ::TYPES[20] = ::g::Outracks::Simulator::Runtime::IProperty_typeof();
    ::TYPES[21] = ::g::Uno::Reflection::IField_typeof();
    ::TYPES[22] = ::g::Uno::Exception_typeof();
    type->SetDependencies(
        ::g::Outracks::Simulator::Runtime::TryInvokeExtension_typeof(),
        ::g::Uno::Type_typeof());
    type->SetInterfaces(
        ::g::Outracks::Simulator::Runtime::IReflection_typeof(), offsetof(NativeReflection_type, interface0));
    type->SetFields(0,
        ::TYPES[14/*Outracks.Simulator.Runtime.ITypeMap*/], offsetof(NativeReflection, _typeMap), 0);
    type->Reflection.SetFunctions(14,
        new uFunction("AddEventHandler", NULL, (void*)NativeReflection__AddEventHandler_fn, 0, false, uVoid_typeof(), 3, uObject_typeof(), ::g::Outracks::Simulator::Bytecode::TypeMemberName_typeof(), uObject_typeof()),
        new uFunction("CallDynamic", NULL, (void*)NativeReflection__CallDynamic_fn, 0, false, uObject_typeof(), 3, uObject_typeof(), ::g::Outracks::Simulator::Bytecode::TypeMemberName_typeof(), ::TYPES[12/*object[]*/]),
        new uFunction("CallStatic", NULL, (void*)NativeReflection__CallStatic_fn, 0, false, uObject_typeof(), 3, ::g::Outracks::Simulator::Bytecode::TypeName_typeof(), ::g::Outracks::Simulator::Bytecode::TypeMemberName_typeof(), ::TYPES[12/*object[]*/]),
        new uFunction("CreateDelegate", NULL, (void*)NativeReflection__CreateDelegate_fn, 0, false, uObject_typeof(), 4, ::g::Outracks::Simulator::Bytecode::TypeName_typeof(), uObject_typeof(), ::g::Outracks::Simulator::Bytecode::TypeMemberName_typeof(), ::TYPES[15/*Outracks.Optional<Outracks.Simulator.Bytecode.Signature>*/]),
        new uFunction("GetEnumValue", NULL, (void*)NativeReflection__GetEnumValue_fn, 0, false, uObject_typeof(), 2, ::g::Outracks::Simulator::Bytecode::TypeName_typeof(), ::g::Outracks::Simulator::Bytecode::TypeMemberName_typeof()),
        new uFunction("GetPropertyValue", NULL, (void*)NativeReflection__GetPropertyValue_fn, 0, false, uObject_typeof(), 2, uObject_typeof(), ::g::Outracks::Simulator::Bytecode::TypeMemberName_typeof()),
        new uFunction("GetStaticPropertyOrFieldValue", NULL, (void*)NativeReflection__GetStaticPropertyOrFieldValue_fn, 0, false, uObject_typeof(), 2, ::g::Outracks::Simulator::Bytecode::TypeName_typeof(), ::g::Outracks::Simulator::Bytecode::TypeMemberName_typeof()),
        new uFunction("Instantiate", NULL, (void*)NativeReflection__Instantiate_fn, 0, false, uObject_typeof(), 2, ::g::Outracks::Simulator::Bytecode::TypeName_typeof(), ::TYPES[12/*object[]*/]),
        new uFunction("IsSubtype", NULL, (void*)NativeReflection__IsSubtype_fn, 0, false, ::g::Uno::Bool_typeof(), 2, uObject_typeof(), ::g::Outracks::Simulator::Bytecode::TypeName_typeof()),
        new uFunction("IsType", NULL, (void*)NativeReflection__IsType_fn, 0, false, ::g::Uno::Bool_typeof(), 2, uObject_typeof(), ::g::Outracks::Simulator::Bytecode::TypeName_typeof()),
        new uFunction(".ctor", NULL, (void*)NativeReflection__New1_fn, 0, true, type, 1, ::TYPES[14/*Outracks.Simulator.Runtime.ITypeMap*/]),
        new uFunction("RemoveEventHandler", NULL, (void*)NativeReflection__RemoveEventHandler_fn, 0, false, uVoid_typeof(), 3, uObject_typeof(), ::g::Outracks::Simulator::Bytecode::TypeMemberName_typeof(), uObject_typeof()),
        new uFunction("SetPropertyValue", NULL, (void*)NativeReflection__SetPropertyValue_fn, 0, false, uVoid_typeof(), 3, uObject_typeof(), ::g::Outracks::Simulator::Bytecode::TypeMemberName_typeof(), uObject_typeof()),
        new uFunction("SetStaticField", NULL, (void*)NativeReflection__SetStaticField_fn, 0, false, uVoid_typeof(), 3, ::g::Outracks::Simulator::Bytecode::TypeName_typeof(), ::g::Outracks::Simulator::Bytecode::TypeMemberName_typeof(), uObject_typeof()));
}

NativeReflection_type* NativeReflection_typeof()
{
    static uSStrong<NativeReflection_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(NativeReflection);
    options.TypeSize = sizeof(NativeReflection_type);
    type = (NativeReflection_type*)uClassType::New("Outracks.Simulator.Runtime.NativeReflection", options);
    type->fp_build_ = NativeReflection_build;
    type->interface0.fp_CallDynamic = (void(*)(uObject*, uObject*, ::g::Outracks::Simulator::Bytecode::TypeMemberName*, uArray*, uObject**))NativeReflection__CallDynamic_fn;
    type->interface0.fp_CallStatic = (void(*)(uObject*, ::g::Outracks::Simulator::Bytecode::TypeName*, ::g::Outracks::Simulator::Bytecode::TypeMemberName*, uArray*, uObject**))NativeReflection__CallStatic_fn;
    type->interface0.fp_SetPropertyValue = (void(*)(uObject*, uObject*, ::g::Outracks::Simulator::Bytecode::TypeMemberName*, uObject*))NativeReflection__SetPropertyValue_fn;
    type->interface0.fp_GetPropertyValue = (void(*)(uObject*, uObject*, ::g::Outracks::Simulator::Bytecode::TypeMemberName*, uObject**))NativeReflection__GetPropertyValue_fn;
    type->interface0.fp_GetStaticPropertyOrFieldValue = (void(*)(uObject*, ::g::Outracks::Simulator::Bytecode::TypeName*, ::g::Outracks::Simulator::Bytecode::TypeMemberName*, uObject**))NativeReflection__GetStaticPropertyOrFieldValue_fn;
    type->interface0.fp_CreateDelegate = (void(*)(uObject*, ::g::Outracks::Simulator::Bytecode::TypeName*, uObject*, ::g::Outracks::Simulator::Bytecode::TypeMemberName*, ::g::Outracks::Optional1<uStrong< ::g::Outracks::Simulator::Bytecode::Signature*> >*, uObject**))NativeReflection__CreateDelegate_fn;
    type->interface0.fp_AddEventHandler = (void(*)(uObject*, uObject*, ::g::Outracks::Simulator::Bytecode::TypeMemberName*, uObject*))NativeReflection__AddEventHandler_fn;
    type->interface0.fp_RemoveEventHandler = (void(*)(uObject*, uObject*, ::g::Outracks::Simulator::Bytecode::TypeMemberName*, uObject*))NativeReflection__RemoveEventHandler_fn;
    type->interface0.fp_Instantiate = (void(*)(uObject*, ::g::Outracks::Simulator::Bytecode::TypeName*, uArray*, uObject**))NativeReflection__Instantiate_fn;
    type->interface0.fp_IsSubtype = (void(*)(uObject*, uObject*, ::g::Outracks::Simulator::Bytecode::TypeName*, bool*))NativeReflection__IsSubtype_fn;
    type->interface0.fp_IsType = (void(*)(uObject*, uObject*, ::g::Outracks::Simulator::Bytecode::TypeName*, bool*))NativeReflection__IsType_fn;
    type->interface0.fp_GetEnumValue = (void(*)(uObject*, ::g::Outracks::Simulator::Bytecode::TypeName*, ::g::Outracks::Simulator::Bytecode::TypeMemberName*, uObject**))NativeReflection__GetEnumValue_fn;
    return type;
}

// public NativeReflection(Outracks.Simulator.Runtime.ITypeMap typeMap) :100
void NativeReflection__ctor__fn(NativeReflection* __this, uObject* typeMap)
{
    __this->ctor_(typeMap);
}

// public void AddEventHandler(object instance, Outracks.Simulator.Bytecode.TypeMemberName member, object handlerDelegate) :160
void NativeReflection__AddEventHandler_fn(NativeReflection* __this, uObject* instance, ::g::Outracks::Simulator::Bytecode::TypeMemberName* member, uObject* handlerDelegate)
{
    __this->AddEventHandler(instance, member, handlerDelegate);
}

// public object CallDynamic(object obj, Outracks.Simulator.Bytecode.TypeMemberName methodName, object[] arguments) :190
void NativeReflection__CallDynamic_fn(NativeReflection* __this, uObject* obj, ::g::Outracks::Simulator::Bytecode::TypeMemberName* methodName, uArray* arguments, uObject** __retval)
{
    *__retval = __this->CallDynamic(obj, methodName, arguments);
}

// public object CallStatic(Outracks.Simulator.Bytecode.TypeName typeName, Outracks.Simulator.Bytecode.TypeMemberName methodName, object[] arguments) :203
void NativeReflection__CallStatic_fn(NativeReflection* __this, ::g::Outracks::Simulator::Bytecode::TypeName* typeName, ::g::Outracks::Simulator::Bytecode::TypeMemberName* methodName, uArray* arguments, uObject** __retval)
{
    *__retval = __this->CallStatic(typeName, methodName, arguments);
}

// public object CreateDelegate(Outracks.Simulator.Bytecode.TypeName delegateTypeName, object instance, Outracks.Simulator.Bytecode.TypeMemberName methodName, Outracks.Optional<Outracks.Simulator.Bytecode.Signature> methodSignature) :143
void NativeReflection__CreateDelegate_fn(NativeReflection* __this, ::g::Outracks::Simulator::Bytecode::TypeName* delegateTypeName, uObject* instance, ::g::Outracks::Simulator::Bytecode::TypeMemberName* methodName, ::g::Outracks::Optional1<uStrong< ::g::Outracks::Simulator::Bytecode::Signature*> >* methodSignature, uObject** __retval)
{
    *__retval = __this->CreateDelegate(delegateTypeName, instance, methodName, *methodSignature);
}

// public object GetEnumValue(Outracks.Simulator.Bytecode.TypeName enumType, Outracks.Simulator.Bytecode.TypeMemberName valueName) :254
void NativeReflection__GetEnumValue_fn(NativeReflection* __this, ::g::Outracks::Simulator::Bytecode::TypeName* enumType, ::g::Outracks::Simulator::Bytecode::TypeMemberName* valueName, uObject** __retval)
{
    *__retval = __this->GetEnumValue(enumType, valueName);
}

// public object GetPropertyValue(object obj, Outracks.Simulator.Bytecode.TypeMemberName propertyName) :105
void NativeReflection__GetPropertyValue_fn(NativeReflection* __this, uObject* obj, ::g::Outracks::Simulator::Bytecode::TypeMemberName* propertyName, uObject** __retval)
{
    *__retval = __this->GetPropertyValue(obj, propertyName);
}

// public object GetStaticPropertyOrFieldValue(Outracks.Simulator.Bytecode.TypeName typeName, Outracks.Simulator.Bytecode.TypeMemberName memberName) :225
void NativeReflection__GetStaticPropertyOrFieldValue_fn(NativeReflection* __this, ::g::Outracks::Simulator::Bytecode::TypeName* typeName, ::g::Outracks::Simulator::Bytecode::TypeMemberName* memberName, uObject** __retval)
{
    *__retval = __this->GetStaticPropertyOrFieldValue(typeName, memberName);
}

// public object Instantiate(Outracks.Simulator.Bytecode.TypeName typeName, object[] args) :198
void NativeReflection__Instantiate_fn(NativeReflection* __this, ::g::Outracks::Simulator::Bytecode::TypeName* typeName, uArray* args, uObject** __retval)
{
    *__retval = __this->Instantiate(typeName, args);
}

// public bool IsSubtype(object obj, Outracks.Simulator.Bytecode.TypeName typeName) :242
void NativeReflection__IsSubtype_fn(NativeReflection* __this, uObject* obj, ::g::Outracks::Simulator::Bytecode::TypeName* typeName, bool* __retval)
{
    *__retval = __this->IsSubtype(obj, typeName);
}

// public bool IsType(object obj, Outracks.Simulator.Bytecode.TypeName typeName) :249
void NativeReflection__IsType_fn(NativeReflection* __this, uObject* obj, ::g::Outracks::Simulator::Bytecode::TypeName* typeName, bool* __retval)
{
    *__retval = __this->IsType(obj, typeName);
}

// public NativeReflection New(Outracks.Simulator.Runtime.ITypeMap typeMap) :100
void NativeReflection__New1_fn(uObject* typeMap, NativeReflection** __retval)
{
    *__retval = NativeReflection::New1(typeMap);
}

// public void RemoveEventHandler(object instance, Outracks.Simulator.Bytecode.TypeMemberName member, object handlerDelegate) :175
void NativeReflection__RemoveEventHandler_fn(NativeReflection* __this, uObject* instance, ::g::Outracks::Simulator::Bytecode::TypeMemberName* member, uObject* handlerDelegate)
{
    __this->RemoveEventHandler(instance, member, handlerDelegate);
}

// private Outracks.Simulator.Runtime.IProperty ResolveProperty(object obj, Outracks.Simulator.Bytecode.TypeMemberName propertyName, Uno.Type propertyType) :125
void NativeReflection__ResolveProperty_fn(NativeReflection* __this, uObject* obj, ::g::Outracks::Simulator::Bytecode::TypeMemberName* propertyName, uType* propertyType, uObject** __retval)
{
    *__retval = __this->ResolveProperty(obj, propertyName, propertyType);
}

// public void SetPropertyValue(object obj, Outracks.Simulator.Bytecode.TypeMemberName propertyName, object value) :115
void NativeReflection__SetPropertyValue_fn(NativeReflection* __this, uObject* obj, ::g::Outracks::Simulator::Bytecode::TypeMemberName* propertyName, uObject* value)
{
    __this->SetPropertyValue(obj, propertyName, value);
}

// public void SetStaticField(Outracks.Simulator.Bytecode.TypeName typeName, Outracks.Simulator.Bytecode.TypeMemberName fieldName, object value) :212
void NativeReflection__SetStaticField_fn(NativeReflection* __this, ::g::Outracks::Simulator::Bytecode::TypeName* typeName, ::g::Outracks::Simulator::Bytecode::TypeMemberName* fieldName, uObject* value)
{
    __this->SetStaticField(typeName, fieldName, value);
}

// public NativeReflection(Outracks.Simulator.Runtime.ITypeMap typeMap) [instance] :100
void NativeReflection::ctor_(uObject* typeMap)
{
    _typeMap = typeMap;
}

// public void AddEventHandler(object instance, Outracks.Simulator.Bytecode.TypeMemberName member, object handlerDelegate) [instance] :160
void NativeReflection::AddEventHandler(uObject* instance, ::g::Outracks::Simulator::Bytecode::TypeMemberName* member, uObject* handlerDelegate)
{
    uStackFrame __("Outracks.Simulator.Runtime.NativeReflection", "AddEventHandler(object,Outracks.Simulator.Bytecode.TypeMemberName,object)");
    uType* type = ::g::Uno::Object::GetType(uPtr(instance));
    uObject* theEvent = ::g::Outracks::Simulator::Runtime::TryInvokeExtension::GetEvent(type, member, ::g::Uno::Object::GetType(uPtr(handlerDelegate)));

    if (theEvent == NULL)
        U_THROW(::g::Outracks::UnoHost::MemberNotFound::New4(::g::Uno::Type::FullName(uPtr(type)), uPtr(member)->Name));

    uObject* adder = ::g::Outracks::Simulator::Runtime::IEvent::AddMethod(uInterface(uPtr(theEvent), ::TYPES[13/*Outracks.Simulator.Runtime.IEvent*/]));

    if (adder == NULL)
        U_THROW(::g::Uno::InvalidOperationException::New5(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[4/*"Event '"*/], ::g::Outracks::Simulator::Runtime::IEvent::DeclaringType(uInterface(uPtr(theEvent), ::TYPES[13/*Outracks.Simulator.Runtime.IEvent*/]))), ::STRINGS[5/*"."*/]), uPtr(member)->Name), ::STRINGS[6/*"' has no ad...*/])));

    ::g::Outracks::Simulator::Runtime::TryInvokeExtension::TryInvoke(adder, instance, uArray::Init<uObject*>(::TYPES[12/*object[]*/], 1, handlerDelegate));
}

// public object CallDynamic(object obj, Outracks.Simulator.Bytecode.TypeMemberName methodName, object[] arguments) [instance] :190
uObject* NativeReflection::CallDynamic(uObject* obj, ::g::Outracks::Simulator::Bytecode::TypeMemberName* methodName, uArray* arguments)
{
    uStackFrame __("Outracks.Simulator.Runtime.NativeReflection", "CallDynamic(object,Outracks.Simulator.Bytecode.TypeMemberName,object[])");
    uType* type = ::g::Uno::Object::GetType(uPtr(obj));
    return ::g::Outracks::Simulator::Runtime::TryInvokeExtension::TryInvoke(::g::Outracks::Simulator::Runtime::TryInvokeExtension::FindUnambiguousMethod(type, methodName, arguments), obj, arguments);
}

// public object CallStatic(Outracks.Simulator.Bytecode.TypeName typeName, Outracks.Simulator.Bytecode.TypeMemberName methodName, object[] arguments) [instance] :203
uObject* NativeReflection::CallStatic(::g::Outracks::Simulator::Bytecode::TypeName* typeName, ::g::Outracks::Simulator::Bytecode::TypeMemberName* methodName, uArray* arguments)
{
    uStackFrame __("Outracks.Simulator.Runtime.NativeReflection", "CallStatic(Outracks.Simulator.Bytecode.TypeName,Outracks.Simulator.Bytecode.TypeMemberName,object[])");
    uType* type = ::g::Outracks::Simulator::Runtime::ITypeMap::ResolveType1(uInterface(uPtr(_typeMap), ::TYPES[14/*Outracks.Simulator.Runtime.ITypeMap*/]), typeName);

    if (::g::Uno::Type::op_Equality(type, NULL))
        U_THROW(::g::Outracks::UnoHost::TypeNotFound::New4(uPtr(typeName)->FullName()));

    return ::g::Outracks::Simulator::Runtime::TryInvokeExtension::TryInvoke(::g::Outracks::Simulator::Runtime::TryInvokeExtension::FindUnambiguousMethod(type, methodName, arguments), NULL, arguments);
}

// public object CreateDelegate(Outracks.Simulator.Bytecode.TypeName delegateTypeName, object instance, Outracks.Simulator.Bytecode.TypeMemberName methodName, Outracks.Optional<Outracks.Simulator.Bytecode.Signature> methodSignature) [instance] :143
uObject* NativeReflection::CreateDelegate(::g::Outracks::Simulator::Bytecode::TypeName* delegateTypeName, uObject* instance, ::g::Outracks::Simulator::Bytecode::TypeMemberName* methodName, ::g::Outracks::Optional1<uStrong< ::g::Outracks::Simulator::Bytecode::Signature*> > methodSignature)
{
    uStackFrame __("Outracks.Simulator.Runtime.NativeReflection", "CreateDelegate(Outracks.Simulator.Bytecode.TypeName,object,Outracks.Simulator.Bytecode.TypeMemberName,Outracks.Optional<Outracks.Simulator.Bytecode.Signature>)");
    uType* type = ::g::Uno::Object::GetType(uPtr(instance));
    uObject* method = methodSignature.HasValue(::TYPES[15/*Outracks.Optional<Outracks.Simulator.Bytecode.Signature>*/]) ? (uObject*)::g::Outracks::Simulator::Runtime::TryInvokeExtension::GetMethod(type, methodName, (uArray*)::g::Uno::Collections::EnumerableExtensions::ToArray(::TYPES[16/*Uno.Collections.EnumerableExtensions.ToArray<Uno.Type>*/], (uObject*)::g::Uno::Collections::EnumerableExtensions::Select(::TYPES[17/*Uno.Collections.EnumerableExtensions.Select<Outracks.Simulator.Bytecode.Parameter, Uno.Type>*/], (uObject*)uPtr(methodSignature.Value(::TYPES[15/*Outracks.Optional<Outracks.Simulator.Bytecode.Signature>*/]))->Parameters, uDelegate::New(::TYPES[18/*Uno.Func<Outracks.Simulator.Bytecode.Parameter, Uno.Type>*/], uInterface(uPtr(_typeMap), ::TYPES[14/*Outracks.Simulator.Runtime.ITypeMap*/]), offsetof(::g::Outracks::Simulator::Runtime::ITypeMap, fp_ResolveType))))) : (uObject*)::g::Outracks::Simulator::Runtime::TryInvokeExtension::GetMethod(type, methodName, uArray::New(::TYPES[6/*Uno.Type[]*/], 0));

    if (method == NULL)
        U_THROW(::g::Outracks::UnoHost::MemberNotFound::New4(::g::Uno::Type::FullName(uPtr(type)), uPtr(methodName)->Name));

    return ::g::Uno::Reflection::IFunction::CreateDelegate(uInterface(uPtr(method), ::TYPES[19/*Uno.Reflection.IFunction*/]), ::g::Outracks::Simulator::Runtime::ITypeMap::ResolveType1(uInterface(uPtr(_typeMap), ::TYPES[14/*Outracks.Simulator.Runtime.ITypeMap*/]), delegateTypeName), instance);
}

// public object GetEnumValue(Outracks.Simulator.Bytecode.TypeName enumType, Outracks.Simulator.Bytecode.TypeMemberName valueName) [instance] :254
uObject* NativeReflection::GetEnumValue(::g::Outracks::Simulator::Bytecode::TypeName* enumType, ::g::Outracks::Simulator::Bytecode::TypeMemberName* valueName)
{
    uStackFrame __("Outracks.Simulator.Runtime.NativeReflection", "GetEnumValue(Outracks.Simulator.Bytecode.TypeName,Outracks.Simulator.Bytecode.TypeMemberName)");
    uType* type = ::g::Outracks::Simulator::Runtime::ITypeMap::ResolveType1(uInterface(uPtr(_typeMap), ::TYPES[14/*Outracks.Simulator.Runtime.ITypeMap*/]), enumType);
    return ::g::Uno::Enum::Parse(type, uPtr(valueName)->Name);
}

// public object GetPropertyValue(object obj, Outracks.Simulator.Bytecode.TypeMemberName propertyName) [instance] :105
uObject* NativeReflection::GetPropertyValue(uObject* obj, ::g::Outracks::Simulator::Bytecode::TypeMemberName* propertyName)
{
    uStackFrame __("Outracks.Simulator.Runtime.NativeReflection", "GetPropertyValue(object,Outracks.Simulator.Bytecode.TypeMemberName)");
    uObject* prop = ResolveProperty(obj, propertyName, NULL);
    uObject* getter = ::g::Outracks::Simulator::Runtime::IProperty::GetMethod(uInterface(uPtr(prop), ::TYPES[20/*Outracks.Simulator.Runtime.IProperty*/]));

    if (getter == NULL)
        U_THROW(::g::Uno::InvalidOperationException::New5(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[7/*"Property '"*/], ::g::Outracks::Simulator::Runtime::IProperty::DeclaringType(uInterface(uPtr(prop), ::TYPES[20/*Outracks.Simulator.Runtime.IProperty*/]))), ::STRINGS[5/*"."*/]), propertyName), ::STRINGS[8/*"' has no ge...*/])));

    return ::g::Outracks::Simulator::Runtime::TryInvokeExtension::TryInvoke(::g::Outracks::Simulator::Runtime::IProperty::GetMethod(uInterface(prop, ::TYPES[20/*Outracks.Simulator.Runtime.IProperty*/])), obj, uArray::New(::TYPES[12/*object[]*/], 0));
}

// public object GetStaticPropertyOrFieldValue(Outracks.Simulator.Bytecode.TypeName typeName, Outracks.Simulator.Bytecode.TypeMemberName memberName) [instance] :225
uObject* NativeReflection::GetStaticPropertyOrFieldValue(::g::Outracks::Simulator::Bytecode::TypeName* typeName, ::g::Outracks::Simulator::Bytecode::TypeMemberName* memberName)
{
    uStackFrame __("Outracks.Simulator.Runtime.NativeReflection", "GetStaticPropertyOrFieldValue(Outracks.Simulator.Bytecode.TypeName,Outracks.Simulator.Bytecode.TypeMemberName)");
    uType* type = ::g::Outracks::Simulator::Runtime::ITypeMap::ResolveType1(uInterface(uPtr(_typeMap), ::TYPES[14/*Outracks.Simulator.Runtime.ITypeMap*/]), typeName);

    if (::g::Uno::Type::op_Equality(type, NULL))
        U_THROW(::g::Outracks::UnoHost::TypeNotFound::New4(uPtr(typeName)->FullName()));

    uObject* prop = ::g::Outracks::Simulator::Runtime::TryInvokeExtension::GetProperty(type, memberName, NULL);

    if ((prop != NULL) && (::g::Outracks::Simulator::Runtime::IProperty::GetMethod(uInterface(uPtr(prop), ::TYPES[20/*Outracks.Simulator.Runtime.IProperty*/])) != NULL))
        return ::g::Uno::Reflection::IFunction::Invoke(uInterface(uPtr(::g::Outracks::Simulator::Runtime::IProperty::GetMethod(uInterface(uPtr(prop), ::TYPES[20/*Outracks.Simulator.Runtime.IProperty*/]))), ::TYPES[19/*Uno.Reflection.IFunction*/]), NULL, uArray::New(::TYPES[12/*object[]*/], 0));

    uObject* field = ::g::Outracks::Simulator::Runtime::TryInvokeExtension::GetField(type, memberName);

    if (field != NULL)
        return ::g::Uno::Reflection::IField::GetValue(uInterface(uPtr(field), ::TYPES[21/*Uno.Reflection.IField*/]), NULL);

    U_THROW(::g::Outracks::UnoHost::MemberNotFound::New4(uPtr(typeName)->FullName(), uPtr(memberName)->Name));
}

// public object Instantiate(Outracks.Simulator.Bytecode.TypeName typeName, object[] args) [instance] :198
uObject* NativeReflection::Instantiate(::g::Outracks::Simulator::Bytecode::TypeName* typeName, uArray* args)
{
    uStackFrame __("Outracks.Simulator.Runtime.NativeReflection", "Instantiate(Outracks.Simulator.Bytecode.TypeName,object[])");
    return CallStatic(typeName, ::g::Outracks::Simulator::Bytecode::TypeMemberName::New1(::STRINGS[9/*".ctor"*/]), args);
}

// public bool IsSubtype(object obj, Outracks.Simulator.Bytecode.TypeName typeName) [instance] :242
bool NativeReflection::IsSubtype(uObject* obj, ::g::Outracks::Simulator::Bytecode::TypeName* typeName)
{
    uStackFrame __("Outracks.Simulator.Runtime.NativeReflection", "IsSubtype(object,Outracks.Simulator.Bytecode.TypeName)");
    uType* type = ::g::Outracks::Simulator::Runtime::ITypeMap::ResolveType1(uInterface(uPtr(_typeMap), ::TYPES[14/*Outracks.Simulator.Runtime.ITypeMap*/]), typeName);

    if (::g::Uno::Type::op_Equality(type, NULL))
        return false;

    return ::g::Outracks::Simulator::Runtime::TryInvokeExtension::IsInstanceOfType(type, obj);
}

// public bool IsType(object obj, Outracks.Simulator.Bytecode.TypeName typeName) [instance] :249
bool NativeReflection::IsType(uObject* obj, ::g::Outracks::Simulator::Bytecode::TypeName* typeName)
{
    uStackFrame __("Outracks.Simulator.Runtime.NativeReflection", "IsType(object,Outracks.Simulator.Bytecode.TypeName)");
    return ::g::Uno::String::op_Equality(::g::Uno::Type::FullName(uPtr(::g::Uno::Object::GetType(uPtr(obj)))), uPtr(typeName)->FullName());
}

// public void RemoveEventHandler(object instance, Outracks.Simulator.Bytecode.TypeMemberName member, object handlerDelegate) [instance] :175
void NativeReflection::RemoveEventHandler(uObject* instance, ::g::Outracks::Simulator::Bytecode::TypeMemberName* member, uObject* handlerDelegate)
{
    uStackFrame __("Outracks.Simulator.Runtime.NativeReflection", "RemoveEventHandler(object,Outracks.Simulator.Bytecode.TypeMemberName,object)");
    uType* type = ::g::Uno::Object::GetType(uPtr(instance));
    uObject* theEvent = ::g::Outracks::Simulator::Runtime::TryInvokeExtension::GetEvent(type, member, ::g::Uno::Object::GetType(uPtr(handlerDelegate)));

    if (theEvent == NULL)
        U_THROW(::g::Outracks::UnoHost::MemberNotFound::New4(::g::Uno::Type::FullName(uPtr(type)), uPtr(member)->Name));

    uObject* remover = ::g::Outracks::Simulator::Runtime::IEvent::AddMethod(uInterface(uPtr(theEvent), ::TYPES[13/*Outracks.Simulator.Runtime.IEvent*/]));

    if (remover == NULL)
        U_THROW(::g::Uno::InvalidOperationException::New5(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[4/*"Event '"*/], ::g::Outracks::Simulator::Runtime::IEvent::DeclaringType(uInterface(uPtr(theEvent), ::TYPES[13/*Outracks.Simulator.Runtime.IEvent*/]))), ::STRINGS[5/*"."*/]), uPtr(member)->Name), ::STRINGS[10/*"' has no re...*/])));

    ::g::Outracks::Simulator::Runtime::TryInvokeExtension::TryInvoke(remover, instance, uArray::Init<uObject*>(::TYPES[12/*object[]*/], 1, handlerDelegate));
}

// private Outracks.Simulator.Runtime.IProperty ResolveProperty(object obj, Outracks.Simulator.Bytecode.TypeMemberName propertyName, Uno.Type propertyType) [instance] :125
uObject* NativeReflection::ResolveProperty(uObject* obj, ::g::Outracks::Simulator::Bytecode::TypeMemberName* propertyName, uType* propertyType)
{
    uStackFrame __("Outracks.Simulator.Runtime.NativeReflection", "ResolveProperty(object,Outracks.Simulator.Bytecode.TypeMemberName,Uno.Type)");

    if (obj == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[11/*"obj"*/]));

    uType* objType = ::g::Uno::Object::GetType(uPtr(obj));

    try
    {
        {
            return ::g::Outracks::Simulator::Runtime::TryInvokeExtension::GetProperty(objType, propertyName, propertyType);
        }
    }

    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        U_THROW(::g::Outracks::UnoHost::MemberNotFound::New4(::g::Uno::Type::FullName(uPtr(objType)), uPtr(propertyName)->Name));
    }
}

// public void SetPropertyValue(object obj, Outracks.Simulator.Bytecode.TypeMemberName propertyName, object value) [instance] :115
void NativeReflection::SetPropertyValue(uObject* obj, ::g::Outracks::Simulator::Bytecode::TypeMemberName* propertyName, uObject* value)
{
    uStackFrame __("Outracks.Simulator.Runtime.NativeReflection", "SetPropertyValue(object,Outracks.Simulator.Bytecode.TypeMemberName,object)");
    uObject* prop = ResolveProperty(obj, propertyName, (value != NULL) ? (uType*)::g::Uno::Object::GetType(uPtr(value)) : NULL);
    uObject* setter = ::g::Outracks::Simulator::Runtime::IProperty::SetMethod(uInterface(uPtr(prop), ::TYPES[20/*Outracks.Simulator.Runtime.IProperty*/]));

    if (setter == NULL)
        U_THROW(::g::Uno::InvalidOperationException::New5(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[7/*"Property '"*/], ::g::Outracks::Simulator::Runtime::IProperty::DeclaringType(uInterface(uPtr(prop), ::TYPES[20/*Outracks.Simulator.Runtime.IProperty*/]))), ::STRINGS[5/*"."*/]), propertyName), ::STRINGS[12/*"' has no se...*/])));

    ::g::Outracks::Simulator::Runtime::TryInvokeExtension::TryInvoke(setter, obj, uArray::Init<uObject*>(::TYPES[12/*object[]*/], 1, value));
}

// public void SetStaticField(Outracks.Simulator.Bytecode.TypeName typeName, Outracks.Simulator.Bytecode.TypeMemberName fieldName, object value) [instance] :212
void NativeReflection::SetStaticField(::g::Outracks::Simulator::Bytecode::TypeName* typeName, ::g::Outracks::Simulator::Bytecode::TypeMemberName* fieldName, uObject* value)
{
    uStackFrame __("Outracks.Simulator.Runtime.NativeReflection", "SetStaticField(Outracks.Simulator.Bytecode.TypeName,Outracks.Simulator.Bytecode.TypeMemberName,object)");
    uType* type = ::g::Outracks::Simulator::Runtime::ITypeMap::ResolveType1(uInterface(uPtr(_typeMap), ::TYPES[14/*Outracks.Simulator.Runtime.ITypeMap*/]), typeName);

    if (::g::Uno::Type::op_Equality(type, NULL))
        U_THROW(::g::Outracks::UnoHost::TypeNotFound::New4(uPtr(typeName)->FullName()));

    uObject* field = ::g::Outracks::Simulator::Runtime::TryInvokeExtension::GetField(type, fieldName);

    if (field == NULL)
        U_THROW(::g::Outracks::UnoHost::MemberNotFound::New4(uPtr(typeName)->FullName(), uPtr(fieldName)->Name));

    ::g::Uno::Reflection::IField::SetValue(uInterface(uPtr(field), ::TYPES[21/*Uno.Reflection.IField*/]), NULL, value);
}

// public NativeReflection New(Outracks.Simulator.Runtime.ITypeMap typeMap) [static] :100
NativeReflection* NativeReflection::New1(uObject* typeMap)
{
    NativeReflection* obj1 = (NativeReflection*)uNew(NativeReflection_typeof());
    obj1->ctor_(typeMap);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/Runtime/ObjectTagRegistry.cs
// ----------------------------------------------------------------------------------------------

// public static class ObjectTagRegistry :13
// {
// static generated ObjectTagRegistry() :13
static void ObjectTagRegistry__cctor__fn(uType* __type)
{
    ObjectTagRegistry::_tagToObjects_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[103/*Uno.Collections.Dictionary`2*/]->MakeType(::g::Uno::String_typeof(), ::g::Uno::Collections::List_typeof()->MakeType(uObject_typeof(), NULL), NULL)));
    ObjectTagRegistry::ObjectToTag_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[103/*Uno.Collections.Dictionary`2*/]->MakeType(uObject_typeof(), ::g::Uno::String_typeof(), NULL)));
    ObjectTagRegistry::_eaches_ = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::g::Uno::Collections::List_typeof()->MakeType(ObjectTagRegistry__CurrentEach_typeof(), NULL)));
}

static void ObjectTagRegistry_build(uType* type)
{
    type->SetDependencies(
        ::g::Uno::Diagnostics::Debug_typeof());
    type->SetFields(0,
        ::g::Uno::Int_typeof(), (uintptr_t)&ObjectTagRegistry::_visualId_, uFieldFlagsStatic,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::Collections::List_typeof()->MakeType(uObject_typeof(), NULL), NULL), (uintptr_t)&ObjectTagRegistry::_tagToObjects_, uFieldFlagsStatic,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(uObject_typeof(), ::g::Uno::String_typeof(), NULL), (uintptr_t)&ObjectTagRegistry::ObjectToTag_, uFieldFlagsStatic,
        ::g::Uno::Collections::List_typeof()->MakeType(ObjectTagRegistry__CurrentEach_typeof(), NULL), (uintptr_t)&ObjectTagRegistry::_eaches_, uFieldFlagsStatic,
        ::g::Uno::Action3_typeof()->MakeType(uObject_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::String_typeof(), NULL), (uintptr_t)&ObjectTagRegistry::OnObjectTagRegistered1_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("ObjectToTag", 2));
    type->Reflection.SetFunctions(11,
        new uFunction("Clear", NULL, (void*)ObjectTagRegistry__Clear_fn, 0, true, uVoid_typeof(), 0),
        new uFunction("DisposeAndUnregister", NULL, (void*)ObjectTagRegistry__DisposeAndUnregister_fn, 0, true, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("Each", NULL, (void*)ObjectTagRegistry__Each_fn, 0, true, ::g::Uno::IDisposable_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::Func1_typeof()->MakeType(uObject_typeof(), uObject_typeof(), NULL)),
        new uFunction("GetFirstObjectWithTag", NULL, (void*)ObjectTagRegistry__GetFirstObjectWithTag_fn, 0, true, uObject_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("GetObjectsWithTag", NULL, (void*)ObjectTagRegistry__GetObjectsWithTag_fn, 0, true, ::g::Uno::Collections::IEnumerable_typeof()->MakeType(uObject_typeof(), NULL), 1, ::g::Uno::String_typeof()),
        new uFunction("GetTagHash", NULL, (void*)ObjectTagRegistry__GetTagHash_fn, 0, true, ::g::Uno::String_typeof(), 1, uObject_typeof()),
        new uFunction("add_OnObjectTagRegistered", NULL, (void*)ObjectTagRegistry__add_OnObjectTagRegistered_fn, 0, true, uVoid_typeof(), 1, ::g::Uno::Action3_typeof()->MakeType(uObject_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::String_typeof(), NULL)),
        new uFunction("remove_OnObjectTagRegistered", NULL, (void*)ObjectTagRegistry__remove_OnObjectTagRegistered_fn, 0, true, uVoid_typeof(), 1, ::g::Uno::Action3_typeof()->MakeType(uObject_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::String_typeof(), NULL)),
        new uFunction("RegisterObjectTag", NULL, (void*)ObjectTagRegistry__RegisterObjectTag_fn, 0, true, uObject_typeof(), 2, uObject_typeof(), ::g::Uno::String_typeof()),
        new uFunction("get_TagToObjects", NULL, (void*)ObjectTagRegistry__get_TagToObjects_fn, 0, true, ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::Collections::List_typeof()->MakeType(uObject_typeof(), NULL), NULL), 0),
        new uFunction("TryExecuteOnObjectsWithTag", NULL, (void*)ObjectTagRegistry__TryExecuteOnObjectsWithTag_fn, 0, true, uVoid_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::Action1_typeof()->MakeType(uObject_typeof(), NULL)));
}

uClassType* ObjectTagRegistry_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.DependencyCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Outracks.Simulator.Runtime.ObjectTagRegistry", options);
    type->fp_build_ = ObjectTagRegistry_build;
    type->fp_cctor_ = ObjectTagRegistry__cctor__fn;
    return type;
}

// public static void Clear() :24
void ObjectTagRegistry__Clear_fn()
{
    ObjectTagRegistry::Clear();
}

// public static void DisposeAndUnregister(string tag) :50
void ObjectTagRegistry__DisposeAndUnregister_fn(uString* tag)
{
    ObjectTagRegistry::DisposeAndUnregister(tag);
}

// public static Uno.IDisposable Each(string tag, Uno.Func<object, object> func) :119
void ObjectTagRegistry__Each_fn(uString* tag, uDelegate* func, uObject** __retval)
{
    *__retval = ObjectTagRegistry::Each(tag, func);
}

// public static object GetFirstObjectWithTag(string tag) :85
void ObjectTagRegistry__GetFirstObjectWithTag_fn(uString* tag, uObject** __retval)
{
    *__retval = ObjectTagRegistry::GetFirstObjectWithTag(tag);
}

// public static Uno.Collections.IEnumerable<object> GetObjectsWithTag(string tag) :102
void ObjectTagRegistry__GetObjectsWithTag_fn(uString* tag, uObject** __retval)
{
    *__retval = ObjectTagRegistry::GetObjectsWithTag(tag);
}

// public static string GetTagHash(object obj) :112
void ObjectTagRegistry__GetTagHash_fn(uObject* obj, uString** __retval)
{
    *__retval = ObjectTagRegistry::GetTagHash(obj);
}

// public static generated void add_OnObjectTagRegistered(Uno.Action<object, int, string> value) :21
void ObjectTagRegistry__add_OnObjectTagRegistered_fn(uDelegate* value)
{
    ObjectTagRegistry::add_OnObjectTagRegistered(value);
}

// public static generated void remove_OnObjectTagRegistered(Uno.Action<object, int, string> value) :21
void ObjectTagRegistry__remove_OnObjectTagRegistered_fn(uDelegate* value)
{
    ObjectTagRegistry::remove_OnObjectTagRegistered(value);
}

// public static object RegisterObjectTag(object obj, string tagHash) :30
void ObjectTagRegistry__RegisterObjectTag_fn(uObject* obj, uString* tagHash, uObject** __retval)
{
    *__retval = ObjectTagRegistry::RegisterObjectTag(obj, tagHash);
}

// public static Uno.Collections.Dictionary<string, Uno.Collections.List<object>> get_TagToObjects() :18
void ObjectTagRegistry__get_TagToObjects_fn(::g::Uno::Collections::Dictionary** __retval)
{
    *__retval = ObjectTagRegistry::TagToObjects();
}

// public static void TryExecuteOnObjectsWithTag(string tag, Uno.Action<object> action) :70
void ObjectTagRegistry__TryExecuteOnObjectsWithTag_fn(uString* tag, uDelegate* action)
{
    ObjectTagRegistry::TryExecuteOnObjectsWithTag(tag, action);
}

int ObjectTagRegistry::_visualId_;
uSStrong< ::g::Uno::Collections::Dictionary*> ObjectTagRegistry::_tagToObjects_;
uSStrong< ::g::Uno::Collections::Dictionary*> ObjectTagRegistry::ObjectToTag_;
uSStrong< ::g::Uno::Collections::List*> ObjectTagRegistry::_eaches_;
uSStrong<uDelegate*> ObjectTagRegistry::OnObjectTagRegistered1_;

// public static void Clear() [static] :24
void ObjectTagRegistry::Clear()
{
    uStackFrame __("Outracks.Simulator.Runtime.ObjectTagRegistry", "Clear()");
    uPtr(ObjectTagRegistry::TagToObjects())->Clear();
    uPtr(ObjectTagRegistry::ObjectToTag_)->Clear();
}

// public static void DisposeAndUnregister(string tag) [static] :50
void ObjectTagRegistry::DisposeAndUnregister(uString* tag)
{
    uStackFrame __("Outracks.Simulator.Runtime.ObjectTagRegistry", "DisposeAndUnregister(string)");
    bool ret7;
    uObject* ret8;
    uObject* objects = ObjectTagRegistry::GetObjectsWithTag(tag);
    ::g::Uno::Collections::Dictionary__Remove_fn(uPtr(ObjectTagRegistry::_tagToObjects_), tag, &ret7);
    uObject* enum2 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(objects), ::g::Uno::Collections::IEnumerable_typeof()->MakeType(uObject_typeof(), NULL)));

    try
    {
        {
            while (::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum2), ::TYPES[3/*Uno.Collections.IEnumerator*/])))
            {
                uObject* obj = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum2), ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(uObject_typeof(), NULL)), &ret8), ret8);

                try
                {
                    {
                        uObject* disposable = uAs<uObject*>(obj, ::TYPES[5/*Uno.IDisposable*/]);

                        if (disposable != NULL)
                            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(disposable), ::TYPES[5/*Uno.IDisposable*/]));
                    }
                }

                catch (const uThrowable& __t)
                {
                    ::g::Uno::Exception* e = __t.Exception;
                    ::g::Uno::Diagnostics::Debug::Log5(uPtr(e)->ToString(), 0, uString::Const("/usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/Runtime/ObjectTagRegistry.cs"), 65);
                }
            }
        }
        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum2), ::TYPES[5/*Uno.IDisposable*/]));
        }
    }

    catch (const uThrowable& __t)
    {
        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum2), ::TYPES[5/*Uno.IDisposable*/]));
        }
                throw __t;
    }
}

// public static Uno.IDisposable Each(string tag, Uno.Func<object, object> func) [static] :119
uObject* ObjectTagRegistry::Each(uString* tag, uDelegate* func)
{
    uStackFrame __("Outracks.Simulator.Runtime.ObjectTagRegistry", "Each(string,Uno.Func<object, object>)");
    ObjectTagRegistry__CurrentEach* collection5;
    uObject* ret9;
    collection5 = ObjectTagRegistry__CurrentEach::New1();
    uPtr(collection5)->_id = tag;
    uPtr(collection5)->_func = func;
    ObjectTagRegistry__CurrentEach* each = collection5;
    uObject* enum6 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(ObjectTagRegistry::GetObjectsWithTag(tag)), ::g::Uno::Collections::IEnumerable_typeof()->MakeType(uObject_typeof(), NULL)));

    try
    {
        {
            while (::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum6), ::TYPES[3/*Uno.Collections.IEnumerator*/])))
            {
                uObject* obj = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum6), ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(uObject_typeof(), NULL)), &ret9), ret9);

                try
                {
                    {
                        uPtr(each)->OnObjectCreated(obj);
                    }
                }

                catch (const uThrowable& __t)
                {
                    ::g::Uno::Exception* e = __t.Exception;
                    ::g::Uno::Diagnostics::Debug::Log5(uPtr(e)->ToString(), 0, uString::Const("/usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/Runtime/ObjectTagRegistry.cs"), 135);
                }
            }
        }
        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum6), ::TYPES[5/*Uno.IDisposable*/]));
        }
    }

    catch (const uThrowable& __t)
    {
        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum6), ::TYPES[5/*Uno.IDisposable*/]));
        }
                throw __t;
    }

    ::g::Uno::Collections::List__Add_fn(uPtr(ObjectTagRegistry::_eaches_), each);
    return (uObject*)each;
}

// public static object GetFirstObjectWithTag(string tag) [static] :85
uObject* ObjectTagRegistry::GetFirstObjectWithTag(uString* tag)
{
    uStackFrame __("Outracks.Simulator.Runtime.ObjectTagRegistry", "GetFirstObjectWithTag(string)");
    uObject* ret10;
    uObject* enum4 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(ObjectTagRegistry::GetObjectsWithTag(tag)), ::g::Uno::Collections::IEnumerable_typeof()->MakeType(uObject_typeof(), NULL)));

    try
    {
        {
            while (::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum4), ::TYPES[3/*Uno.Collections.IEnumerator*/])))
            {
                uObject* obj = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum4), ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(uObject_typeof(), NULL)), &ret10), ret10);

                try
                {
                    {
                        uObject* __uno_retval = obj;
                        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum4), ::TYPES[5/*Uno.IDisposable*/]));
                        return __uno_retval;
                    }
                }

                catch (const uThrowable& __t)
                {
                    ::g::Uno::Exception* e = __t.Exception;
                    ::g::Uno::Diagnostics::Debug::Log5(uPtr(e)->ToString(), 0, uString::Const("/usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/Runtime/ObjectTagRegistry.cs"), 95);
                }
            }
        }
        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum4), ::TYPES[5/*Uno.IDisposable*/]));
        }
    }

    catch (const uThrowable& __t)
    {
        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum4), ::TYPES[5/*Uno.IDisposable*/]));
        }
                throw __t;
    }

    return NULL;
}

// public static Uno.Collections.IEnumerable<object> GetObjectsWithTag(string tag) [static] :102
uObject* ObjectTagRegistry::GetObjectsWithTag(uString* tag)
{
    uStackFrame __("Outracks.Simulator.Runtime.ObjectTagRegistry", "GetObjectsWithTag(string)");
    bool ret11;
    ::g::Uno::Collections::List* objects = NULL;

    if ((::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(ObjectTagRegistry::_tagToObjects_), tag, (void**)(&objects), &ret11), ret11))
        return (uObject*)objects;

    return (uObject*)((::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable*)::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable::New1(::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable_typeof()->MakeType(uObject_typeof(), NULL), uArray::New(::TYPES[12/*object[]*/], 0)));
}

// public static string GetTagHash(object obj) [static] :112
uString* ObjectTagRegistry::GetTagHash(uObject* obj)
{
    uStackFrame __("Outracks.Simulator.Runtime.ObjectTagRegistry", "GetTagHash(object)");
    bool ret12;
    uString* tagHash = NULL;
    ::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(ObjectTagRegistry::ObjectToTag_), obj, (void**)(&tagHash), &ret12);
    return tagHash;
}

// public static object RegisterObjectTag(object obj, string tagHash) [static] :30
uObject* ObjectTagRegistry::RegisterObjectTag(uObject* obj, uString* tagHash)
{
    uStackFrame __("Outracks.Simulator.Runtime.ObjectTagRegistry", "RegisterObjectTag(object,string)");
    bool ret13;
    ::g::Uno::Collections::List__Enumerator<uStrong<ObjectTagRegistry__CurrentEach*> > ret14;
    ::g::Uno::Collections::List* objects = NULL;

    if (!(::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(ObjectTagRegistry::_tagToObjects_), tagHash, (void**)(&objects), &ret13), ret13))
        ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(ObjectTagRegistry::_tagToObjects_), tagHash, objects = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::g::Uno::Collections::List_typeof()->MakeType(uObject_typeof(), NULL)));

    ::g::Uno::Collections::List__Add_fn(uPtr(objects), obj);
    ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(ObjectTagRegistry::ObjectToTag_), obj, tagHash);

    if (::g::Uno::Delegate::op_Inequality(ObjectTagRegistry::OnObjectTagRegistered1_, NULL))
        uPtr(ObjectTagRegistry::OnObjectTagRegistered1_)->Invoke(3, obj, uCRef<int>(++ObjectTagRegistry::_visualId_), tagHash);

    ::g::Uno::Collections::List__Enumerator<uStrong<ObjectTagRegistry__CurrentEach*> > enum1 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(ObjectTagRegistry::_eaches_), &ret14), ret14);

    try
    {
        {
            while (enum1.MoveNext(::g::Uno::Collections::List__Enumerator_typeof()->MakeType(ObjectTagRegistry__CurrentEach_typeof(), NULL)))
            {
                ObjectTagRegistry__CurrentEach* each = enum1.Current(::g::Uno::Collections::List__Enumerator_typeof()->MakeType(ObjectTagRegistry__CurrentEach_typeof(), NULL));
                uPtr(each)->OnObjectCreated1(tagHash, obj);
            }
        }
        {
            enum1.Dispose(::g::Uno::Collections::List__Enumerator_typeof()->MakeType(ObjectTagRegistry__CurrentEach_typeof(), NULL));
        }
    }

    catch (const uThrowable& __t)
    {
        {
            enum1.Dispose(::g::Uno::Collections::List__Enumerator_typeof()->MakeType(ObjectTagRegistry__CurrentEach_typeof(), NULL));
        }
                throw __t;
    }

    return obj;
}

// public static void TryExecuteOnObjectsWithTag(string tag, Uno.Action<object> action) [static] :70
void ObjectTagRegistry::TryExecuteOnObjectsWithTag(uString* tag, uDelegate* action)
{
    uStackFrame __("Outracks.Simulator.Runtime.ObjectTagRegistry", "TryExecuteOnObjectsWithTag(string,Uno.Action<object>)");
    uObject* ret15;
    uObject* enum3 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(ObjectTagRegistry::GetObjectsWithTag(tag)), ::g::Uno::Collections::IEnumerable_typeof()->MakeType(uObject_typeof(), NULL)));

    try
    {
        {
            while (::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum3), ::TYPES[3/*Uno.Collections.IEnumerator*/])))
            {
                uObject* obj = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum3), ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(uObject_typeof(), NULL)), &ret15), ret15);

                try
                {
                    {
                        uPtr(action)->InvokeVoid(obj);
                    }
                }

                catch (const uThrowable& __t)
                {
                    ::g::Uno::Exception* e = __t.Exception;
                    ::g::Uno::Diagnostics::Debug::Log5(uPtr(e)->ToString(), 0, uString::Const("/usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/Runtime/ObjectTagRegistry.cs"), 80);
                }
            }
        }
        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum3), ::TYPES[5/*Uno.IDisposable*/]));
        }
    }

    catch (const uThrowable& __t)
    {
        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum3), ::TYPES[5/*Uno.IDisposable*/]));
        }
                throw __t;
    }
}

// public static Uno.Collections.Dictionary<string, Uno.Collections.List<object>> get_TagToObjects() [static] :18
::g::Uno::Collections::Dictionary* ObjectTagRegistry::TagToObjects()
{
    return ObjectTagRegistry::_tagToObjects_;
}

// public static generated void add_OnObjectTagRegistered(Uno.Action<object, int, string> value) [static] :21
void ObjectTagRegistry::add_OnObjectTagRegistered(uDelegate* value)
{
    uStackFrame __("Outracks.Simulator.Runtime.ObjectTagRegistry", "add_OnObjectTagRegistered(Uno.Action<object, int, string>)");
    ObjectTagRegistry::OnObjectTagRegistered1_ = uCast<uDelegate*>(::g::Uno::Delegate::Combine(ObjectTagRegistry::OnObjectTagRegistered1_, value), ::g::Uno::Action3_typeof()->MakeType(uObject_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::String_typeof(), NULL));
}

// public static generated void remove_OnObjectTagRegistered(Uno.Action<object, int, string> value) [static] :21
void ObjectTagRegistry::remove_OnObjectTagRegistered(uDelegate* value)
{
    uStackFrame __("Outracks.Simulator.Runtime.ObjectTagRegistry", "remove_OnObjectTagRegistered(Uno.Action<object, int, string>)");
    ObjectTagRegistry::OnObjectTagRegistered1_ = uCast<uDelegate*>(::g::Uno::Delegate::Remove(ObjectTagRegistry::OnObjectTagRegistered1_, value), ::g::Uno::Action3_typeof()->MakeType(uObject_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::String_typeof(), NULL));
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/Runtime/Reflection/ReflectionCache.cs
// -------------------------------------------------------------------------------------------------------

// internal static extern class ReflectionCache :10
// {
// static ReflectionCache() :16
static void ReflectionCache__cctor__fn(uType* __type)
{
    ReflectionCache::_functionCache_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[23/*Uno.Collections.Dictionary<Uno.Type, Uno.Reflection.CppFunction[]>*/]));
    ReflectionCache::_fieldCache_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[24/*Uno.Collections.Dictionary<Uno.Type, Uno.Reflection.CppField[]>*/]));
    ReflectionCache::_typeCache_ = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[25/*Uno.Collections.List<Uno.Collections.Dictionary<Outracks.Simulator.Bytecode.TypeName, Uno.Type>>*/]));
}

static void ReflectionCache_build(uType* type)
{
    ::TYPES[23] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::Type_typeof(), ::g::Uno::Reflection::CppFunction_typeof()->Array(), NULL);
    ::TYPES[24] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::Type_typeof(), ::g::Uno::Reflection::CppField_typeof()->Array(), NULL);
    ::TYPES[25] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::TypeName_typeof(), ::g::Uno::Type_typeof(), NULL), NULL);
    ::TYPES[26] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Reflection::CppField_typeof(), NULL);
    ::TYPES[27] = ::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable_typeof()->MakeType(::g::Uno::Reflection::CppField_typeof(), NULL);
    ::TYPES[28] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Reflection::CppFunction_typeof(), NULL);
    ::TYPES[29] = ::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable_typeof()->MakeType(::g::Uno::Reflection::CppFunction_typeof(), NULL);
    ::TYPES[30] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::TypeName_typeof(), ::g::Uno::Type_typeof(), NULL), NULL);
    type->SetDependencies(
        ::g::Uno::Type_typeof());
    type->SetFields(0,
        ::TYPES[23/*Uno.Collections.Dictionary<Uno.Type, Uno.Reflection.CppFunction[]>*/], (uintptr_t)&ReflectionCache::_functionCache_, uFieldFlagsStatic,
        ::TYPES[24/*Uno.Collections.Dictionary<Uno.Type, Uno.Reflection.CppField[]>*/], (uintptr_t)&ReflectionCache::_fieldCache_, uFieldFlagsStatic,
        ::TYPES[25/*Uno.Collections.List<Uno.Collections.Dictionary<Outracks.Simulator.Bytecode.TypeName, Uno.Type>>*/], (uintptr_t)&ReflectionCache::_typeCache_, uFieldFlagsStatic);
}

uClassType* ReflectionCache_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.DependencyCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Outracks.Simulator.Runtime.ReflectionCache", options);
    type->fp_build_ = ReflectionCache_build;
    type->fp_cctor_ = ReflectionCache__cctor__fn;
    return type;
}

// public static void AddToTypeCache(Uno.Collections.Dictionary<Outracks.Simulator.Bytecode.TypeName, Uno.Type> typeDictionary) :70
void ReflectionCache__AddToTypeCache_fn(::g::Uno::Collections::Dictionary* typeDictionary)
{
    ReflectionCache::AddToTypeCache(typeDictionary);
}

// public static Uno.Reflection.CppField[] GetFields(Uno.Type type) :42
void ReflectionCache__GetFields_fn(uType* type, uArray** __retval)
{
    *__retval = ReflectionCache::GetFields(type);
}

// public static Uno.Reflection.CppFunction[] GetFunctions(Uno.Type type) :23
void ReflectionCache__GetFunctions_fn(uType* type, uArray** __retval)
{
    *__retval = ReflectionCache::GetFunctions(type);
}

// public static Uno.Type GetType(Outracks.Simulator.Bytecode.TypeName typeName) :61
void ReflectionCache__GetType_fn(::g::Outracks::Simulator::Bytecode::TypeName* typeName, uType** __retval)
{
    *__retval = ReflectionCache::GetType(typeName);
}

uSStrong< ::g::Uno::Collections::Dictionary*> ReflectionCache::_functionCache_;
uSStrong< ::g::Uno::Collections::Dictionary*> ReflectionCache::_fieldCache_;
uSStrong< ::g::Uno::Collections::List*> ReflectionCache::_typeCache_;

// public static void AddToTypeCache(Uno.Collections.Dictionary<Outracks.Simulator.Bytecode.TypeName, Uno.Type> typeDictionary) [static] :70
void ReflectionCache::AddToTypeCache(::g::Uno::Collections::Dictionary* typeDictionary)
{
    uStackFrame __("Outracks.Simulator.Runtime.ReflectionCache", "AddToTypeCache(Uno.Collections.Dictionary<Outracks.Simulator.Bytecode.TypeName, Uno.Type>)");
    ReflectionCache_typeof()->Init();
    ::g::Uno::Collections::List__Add_fn(uPtr(ReflectionCache::_typeCache_), typeDictionary);
}

// public static Uno.Reflection.CppField[] GetFields(Uno.Type type) [static] :42
uArray* ReflectionCache::GetFields(uType* type)
{
    uStackFrame __("Outracks.Simulator.Runtime.ReflectionCache", "GetFields(Uno.Type)");
    ReflectionCache_typeof()->Init();
    bool ret2;
    uArray* ret3;

    if ((::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(ReflectionCache::_fieldCache_), type, &ret2), ret2))
        return (::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(ReflectionCache::_fieldCache_), type, &ret3), ret3);

    ::g::Uno::Collections::List* fields = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[26/*Uno.Collections.List<Uno.Reflection.CppField>*/]);
    uType* t = type;

    while (::g::Uno::Type::op_Inequality(t, NULL))
    {
        uPtr(fields)->AddRange((uObject*)((::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable*)::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable::New1(::TYPES[27/*Uno.Runtime.Implementation.Internal.ArrayEnumerable<Uno.Reflection.CppField>*/], ::g::Uno::Reflection::CppReflection::GetFields(t))));
        t = ::g::Uno::Type::BaseType(uPtr(t));
    }

    uArray* array = (uArray*)fields->ToArray();
    ::g::Uno::Collections::Dictionary__Add_fn(uPtr(ReflectionCache::_fieldCache_), type, array);
    return array;
}

// public static Uno.Reflection.CppFunction[] GetFunctions(Uno.Type type) [static] :23
uArray* ReflectionCache::GetFunctions(uType* type)
{
    uStackFrame __("Outracks.Simulator.Runtime.ReflectionCache", "GetFunctions(Uno.Type)");
    ReflectionCache_typeof()->Init();
    bool ret4;
    uArray* ret5;

    if ((::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(ReflectionCache::_functionCache_), type, &ret4), ret4))
        return (::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(ReflectionCache::_functionCache_), type, &ret5), ret5);

    ::g::Uno::Collections::List* functions = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[28/*Uno.Collections.List<Uno.Reflection.CppFunction>*/]);
    uType* t = type;

    while (::g::Uno::Type::op_Inequality(t, NULL))
    {
        uPtr(functions)->AddRange((uObject*)((::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable*)::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable::New1(::TYPES[29/*Uno.Runtime.Implementation.Internal.ArrayEnumerable<Uno.Reflection.CppFunction>*/], ::g::Uno::Reflection::CppReflection::GetFunctions(t))));
        t = ::g::Uno::Type::BaseType(uPtr(t));
    }

    uArray* array = (uArray*)functions->ToArray();
    ::g::Uno::Collections::Dictionary__Add_fn(uPtr(ReflectionCache::_functionCache_), type, array);
    return array;
}

// public static Uno.Type GetType(Outracks.Simulator.Bytecode.TypeName typeName) [static] :61
uType* ReflectionCache::GetType(::g::Outracks::Simulator::Bytecode::TypeName* typeName)
{
    uStackFrame __("Outracks.Simulator.Runtime.ReflectionCache", "GetType(Outracks.Simulator.Bytecode.TypeName)");
    ReflectionCache_typeof()->Init();
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Uno::Collections::Dictionary*> > ret6;
    bool ret7;
    uType* ret8;
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Uno::Collections::Dictionary*> > enum1 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(ReflectionCache::_typeCache_), &ret6), ret6);

    try
    {
        {
            while (enum1.MoveNext(::TYPES[30/*Uno.Collections.List<Uno.Collections.Dictionary<Outracks.Simulator.Bytecode.TypeName, Uno.Type>>.Enumerator*/]))
            {
                ::g::Uno::Collections::Dictionary* dict = enum1.Current(::TYPES[30/*Uno.Collections.List<Uno.Collections.Dictionary<Outracks.Simulator.Bytecode.TypeName, Uno.Type>>.Enumerator*/]);

                if ((::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(dict), typeName, &ret7), ret7))
                {
                    uType* __uno_retval = (::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(dict), typeName, &ret8), ret8);
                    enum1.Dispose(::TYPES[30/*Uno.Collections.List<Uno.Collections.Dictionary<Outracks.Simulator.Bytecode.TypeName, Uno.Type>>.Enumerator*/]);
                    return __uno_retval;
                }
            }
        }
        {
            enum1.Dispose(::TYPES[30/*Uno.Collections.List<Uno.Collections.Dictionary<Outracks.Simulator.Bytecode.TypeName, Uno.Type>>.Enumerator*/]);
        }
    }

    catch (const uThrowable& __t)
    {
        {
            enum1.Dispose(::TYPES[30/*Uno.Collections.List<Uno.Collections.Dictionary<Outracks.Simulator.Bytecode.TypeName, Uno.Type>>.Enumerator*/]);
        }
                throw __t;
    }

    return NULL;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/Runtime/Reflection/ReflectionExtensions.cs
// ------------------------------------------------------------------------------------------------------------

// internal static extern class ReflectionExtensions :10
// {
// static generated ReflectionExtensions() :10
static void ReflectionExtensions__cctor__fn(uType* __type)
{
    ReflectionExtensions::PropGetPrefix_ = ::STRINGS[2/*"get_"*/];
    ReflectionExtensions::PropSetPrefix_ = ::STRINGS[3/*"set_"*/];
    ReflectionExtensions::EventAdderPrefix_ = ::STRINGS[0/*"add_"*/];
    ReflectionExtensions::EventRemovePrefix_ = ::STRINGS[1/*"remove_"*/];
    ReflectionExtensions::ConstructorName_ = ::g::Outracks::Simulator::Bytecode::TypeMemberName::New1(::STRINGS[9/*".ctor"*/]);
}

static void ReflectionExtensions_build(uType* type)
{
    ::STRINGS[2] = uString::Const("get_");
    ::STRINGS[3] = uString::Const("set_");
    ::STRINGS[0] = uString::Const("add_");
    ::STRINGS[1] = uString::Const("remove_");
    ::STRINGS[9] = uString::Const(".ctor");
    ::TYPES[6] = ::g::Uno::Type_typeof()->Array();
    ::TYPES[28] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Reflection::CppFunction_typeof(), NULL);
    type->SetDependencies(
        ::g::Uno::Type_typeof());
    type->SetFields(0,
        ::g::Uno::String_typeof(), (uintptr_t)&ReflectionExtensions::PropGetPrefix_, uFieldFlagsStatic,
        ::g::Uno::String_typeof(), (uintptr_t)&ReflectionExtensions::PropSetPrefix_, uFieldFlagsStatic,
        ::g::Uno::String_typeof(), (uintptr_t)&ReflectionExtensions::EventAdderPrefix_, uFieldFlagsStatic,
        ::g::Uno::String_typeof(), (uintptr_t)&ReflectionExtensions::EventRemovePrefix_, uFieldFlagsStatic,
        ::g::Outracks::Simulator::Bytecode::TypeMemberName_typeof(), (uintptr_t)&ReflectionExtensions::ConstructorName_, uFieldFlagsStatic);
}

uClassType* ReflectionExtensions_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.DependencyCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Outracks.Simulator.Runtime.ReflectionExtensions", options);
    type->fp_build_ = ReflectionExtensions_build;
    type->fp_cctor_ = ReflectionExtensions__cctor__fn;
    return type;
}

// private static bool CheckArgumentTypes(Uno.Type[] paramTypes, Uno.Type[] argumentTypes) :116
void ReflectionExtensions__CheckArgumentTypes_fn(uArray* paramTypes, uArray* argumentTypes, bool* __retval)
{
    *__retval = ReflectionExtensions::CheckArgumentTypes(paramTypes, argumentTypes);
}

// public static Uno.Reflection.CppFunction FindConstructor(Uno.Type type, Uno.Type[] paramTypes) :46
void ReflectionExtensions__FindConstructor_fn(uType* type, uArray* paramTypes, uFunction** __retval)
{
    *__retval = ReflectionExtensions::FindConstructor(type, paramTypes);
}

// public static Uno.Reflection.CppFunction FindEventAddFunction(Uno.Type type, Outracks.Simulator.Bytecode.TypeMemberName typeMemberName, object delegateObj) :63
void ReflectionExtensions__FindEventAddFunction_fn(uType* type, ::g::Outracks::Simulator::Bytecode::TypeMemberName* typeMemberName, uObject* delegateObj, uFunction** __retval)
{
    *__retval = ReflectionExtensions::FindEventAddFunction(type, typeMemberName, delegateObj);
}

// public static Uno.Reflection.CppFunction FindEventRemoveFunction(Uno.Type type, Outracks.Simulator.Bytecode.TypeMemberName typeMemberName, object delegateObj) :69
void ReflectionExtensions__FindEventRemoveFunction_fn(uType* type, ::g::Outracks::Simulator::Bytecode::TypeMemberName* typeMemberName, uObject* delegateObj, uFunction** __retval)
{
    *__retval = ReflectionExtensions::FindEventRemoveFunction(type, typeMemberName, delegateObj);
}

// public static Uno.Reflection.CppField FindField(Uno.Type type, Outracks.Simulator.Bytecode.TypeMemberName fieldName) :75
void ReflectionExtensions__FindField_fn(uType* type, ::g::Outracks::Simulator::Bytecode::TypeMemberName* fieldName, uField** __retval)
{
    *__retval = ReflectionExtensions::FindField(type, fieldName);
}

// public static Uno.Reflection.CppFunction FindFunction(Uno.Type type, Outracks.Simulator.Bytecode.TypeMemberName memberName, Uno.Type[] paramTypes) :100
void ReflectionExtensions__FindFunction_fn(uType* type, ::g::Outracks::Simulator::Bytecode::TypeMemberName* memberName, uArray* paramTypes, uFunction** __retval)
{
    *__retval = ReflectionExtensions::FindFunction(type, memberName, paramTypes);
}

// private static Uno.Reflection.CppFunction FindFunctionOverload(Uno.Reflection.CppFunction[] functions, Uno.Type[] paramTypes) :105
void ReflectionExtensions__FindFunctionOverload_fn(uArray* functions, uArray* paramTypes, uFunction** __retval)
{
    *__retval = ReflectionExtensions::FindFunctionOverload(functions, paramTypes);
}

// private static Uno.Reflection.CppFunction[] FindFunctionsByName(Uno.Type type, Outracks.Simulator.Bytecode.TypeMemberName memberName) :132
void ReflectionExtensions__FindFunctionsByName_fn(uType* type, ::g::Outracks::Simulator::Bytecode::TypeMemberName* memberName, uArray** __retval)
{
    *__retval = ReflectionExtensions::FindFunctionsByName(type, memberName);
}

// public static Uno.Reflection.CppFunction FindPropertyGetter(Uno.Type type, Outracks.Simulator.Bytecode.TypeMemberName typeMemberName) :51
void ReflectionExtensions__FindPropertyGetter_fn(uType* type, ::g::Outracks::Simulator::Bytecode::TypeMemberName* typeMemberName, uFunction** __retval)
{
    *__retval = ReflectionExtensions::FindPropertyGetter(type, typeMemberName);
}

// public static Uno.Reflection.CppFunction FindPropertySetter(Uno.Type type, Outracks.Simulator.Bytecode.TypeMemberName typeMemberName, Uno.Type argType) :57
void ReflectionExtensions__FindPropertySetter_fn(uType* type, ::g::Outracks::Simulator::Bytecode::TypeMemberName* typeMemberName, uType* argType, uFunction** __retval)
{
    *__retval = ReflectionExtensions::FindPropertySetter(type, typeMemberName, argType);
}

// public static Uno.Type FindType(Outracks.Simulator.Bytecode.TypeName typeName) :41
void ReflectionExtensions__FindType_fn(::g::Outracks::Simulator::Bytecode::TypeName* typeName, uType** __retval)
{
    *__retval = ReflectionExtensions::FindType(typeName);
}

// public static Uno.Type[] FindTypes(Outracks.Simulator.Bytecode.TypeName[] typeName) :31
void ReflectionExtensions__FindTypes_fn(uArray* typeName, uArray** __retval)
{
    *__retval = ReflectionExtensions::FindTypes(typeName);
}

// public static Uno.Type[] GetParameterTypes(Outracks.Simulator.Bytecode.Signature methodSignature) :87
void ReflectionExtensions__GetParameterTypes_fn(::g::Outracks::Simulator::Bytecode::Signature* methodSignature, uArray** __retval)
{
    *__retval = ReflectionExtensions::GetParameterTypes(methodSignature);
}

// public static Uno.Type[] GetTypes(object[] objects) :19
void ReflectionExtensions__GetTypes_fn(uArray* objects, uArray** __retval)
{
    *__retval = ReflectionExtensions::GetTypes(objects);
}

uSStrong<uString*> ReflectionExtensions::PropGetPrefix_;
uSStrong<uString*> ReflectionExtensions::PropSetPrefix_;
uSStrong<uString*> ReflectionExtensions::EventAdderPrefix_;
uSStrong<uString*> ReflectionExtensions::EventRemovePrefix_;
uSStrong< ::g::Outracks::Simulator::Bytecode::TypeMemberName*> ReflectionExtensions::ConstructorName_;

// private static bool CheckArgumentTypes(Uno.Type[] paramTypes, Uno.Type[] argumentTypes) [static] :116
bool ReflectionExtensions::CheckArgumentTypes(uArray* paramTypes, uArray* argumentTypes)
{
    uStackFrame __("Outracks.Simulator.Runtime.ReflectionExtensions", "CheckArgumentTypes(Uno.Type[],Uno.Type[])");

    if (uPtr(paramTypes)->Length() != uPtr(argumentTypes)->Length())
        return false;

    for (int i = 0; i < uPtr(paramTypes)->Length(); i++)
    {
        uType* param = uPtr(paramTypes)->Strong<uType*>(i);
        uType* arg = uPtr(argumentTypes)->Strong<uType*>(i);

        if (!::g::Uno::Type::IsSubclassOf(uPtr(arg), param))
            return false;
    }

    return true;
}

// public static Uno.Reflection.CppFunction FindConstructor(Uno.Type type, Uno.Type[] paramTypes) [static] :46
uFunction* ReflectionExtensions::FindConstructor(uType* type, uArray* paramTypes)
{
    return ReflectionExtensions::FindFunction(type, ReflectionExtensions::ConstructorName_, paramTypes);
}

// public static Uno.Reflection.CppFunction FindEventAddFunction(Uno.Type type, Outracks.Simulator.Bytecode.TypeMemberName typeMemberName, object delegateObj) [static] :63
uFunction* ReflectionExtensions::FindEventAddFunction(uType* type, ::g::Outracks::Simulator::Bytecode::TypeMemberName* typeMemberName, uObject* delegateObj)
{
    uStackFrame __("Outracks.Simulator.Runtime.ReflectionExtensions", "FindEventAddFunction(Uno.Type,Outracks.Simulator.Bytecode.TypeMemberName,object)");
    ::g::Outracks::Simulator::Bytecode::TypeMemberName* eventAddName = ::g::Outracks::Simulator::Bytecode::TypeMemberName::New1(::g::Uno::String::op_Addition2(ReflectionExtensions::EventAdderPrefix_, uPtr(typeMemberName)->Name));
    return ReflectionExtensions::FindFunction(type, eventAddName, uArray::Init<uType*>(::TYPES[6/*Uno.Type[]*/], 1, (uType*)::g::Uno::Object::GetType(uPtr(delegateObj))));
}

// public static Uno.Reflection.CppFunction FindEventRemoveFunction(Uno.Type type, Outracks.Simulator.Bytecode.TypeMemberName typeMemberName, object delegateObj) [static] :69
uFunction* ReflectionExtensions::FindEventRemoveFunction(uType* type, ::g::Outracks::Simulator::Bytecode::TypeMemberName* typeMemberName, uObject* delegateObj)
{
    uStackFrame __("Outracks.Simulator.Runtime.ReflectionExtensions", "FindEventRemoveFunction(Uno.Type,Outracks.Simulator.Bytecode.TypeMemberName,object)");
    ::g::Outracks::Simulator::Bytecode::TypeMemberName* eventRemoveName = ::g::Outracks::Simulator::Bytecode::TypeMemberName::New1(::g::Uno::String::op_Addition2(ReflectionExtensions::EventRemovePrefix_, uPtr(typeMemberName)->Name));
    return ReflectionExtensions::FindFunction(type, eventRemoveName, uArray::Init<uType*>(::TYPES[6/*Uno.Type[]*/], 1, (uType*)::g::Uno::Object::GetType(uPtr(delegateObj))));
}

// public static Uno.Reflection.CppField FindField(Uno.Type type, Outracks.Simulator.Bytecode.TypeMemberName fieldName) [static] :75
uField* ReflectionExtensions::FindField(uType* type, ::g::Outracks::Simulator::Bytecode::TypeMemberName* fieldName)
{
    uStackFrame __("Outracks.Simulator.Runtime.ReflectionExtensions", "FindField(Uno.Type,Outracks.Simulator.Bytecode.TypeMemberName)");
    uArray* fields = ::g::Outracks::Simulator::Runtime::ReflectionCache::GetFields(type);

    for (int i = 0; i < uPtr(fields)->Length(); i++)
    {
        uField* f = uPtr(fields)->Item<uField*>(i);

        if (::g::Uno::String::op_Equality(::g::Uno::Reflection::CppField::Name(f), uPtr(fieldName)->Name))
            return f;
    }

    return ::g::Uno::Reflection::CppField::Null();
}

// public static Uno.Reflection.CppFunction FindFunction(Uno.Type type, Outracks.Simulator.Bytecode.TypeMemberName memberName, Uno.Type[] paramTypes) [static] :100
uFunction* ReflectionExtensions::FindFunction(uType* type, ::g::Outracks::Simulator::Bytecode::TypeMemberName* memberName, uArray* paramTypes)
{
    uStackFrame __("Outracks.Simulator.Runtime.ReflectionExtensions", "FindFunction(Uno.Type,Outracks.Simulator.Bytecode.TypeMemberName,Uno.Type[])");
    return ReflectionExtensions::FindFunctionOverload(ReflectionExtensions::FindFunctionsByName(type, memberName), paramTypes);
}

// private static Uno.Reflection.CppFunction FindFunctionOverload(Uno.Reflection.CppFunction[] functions, Uno.Type[] paramTypes) [static] :105
uFunction* ReflectionExtensions::FindFunctionOverload(uArray* functions, uArray* paramTypes)
{
    uStackFrame __("Outracks.Simulator.Runtime.ReflectionExtensions", "FindFunctionOverload(Uno.Reflection.CppFunction[],Uno.Type[])");

    for (int i = 0; i < uPtr(functions)->Length(); i++)
        if (ReflectionExtensions::CheckArgumentTypes(::g::Uno::Reflection::CppFunction::ParameterTypes(uPtr(functions)->Item<uFunction*>(i)), paramTypes))
            return uPtr(functions)->Item<uFunction*>(i);

    return ::g::Uno::Reflection::CppFunction::Null();
}

// private static Uno.Reflection.CppFunction[] FindFunctionsByName(Uno.Type type, Outracks.Simulator.Bytecode.TypeMemberName memberName) [static] :132
uArray* ReflectionExtensions::FindFunctionsByName(uType* type, ::g::Outracks::Simulator::Bytecode::TypeMemberName* memberName)
{
    uStackFrame __("Outracks.Simulator.Runtime.ReflectionExtensions", "FindFunctionsByName(Uno.Type,Outracks.Simulator.Bytecode.TypeMemberName)");
    uString* name = uPtr(memberName)->Name;
    uArray* functions = ::g::Outracks::Simulator::Runtime::ReflectionCache::GetFunctions(type);
    ::g::Uno::Collections::List* matchingFunctions = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[28/*Uno.Collections.List<Uno.Reflection.CppFunction>*/]);

    for (int i = 0; i < uPtr(functions)->Length(); i++)
        if (::g::Uno::String::op_Equality(::g::Uno::Reflection::CppFunction::Name(uPtr(functions)->Item<uFunction*>(i)), name))
            ::g::Uno::Collections::List__Add_fn(uPtr(matchingFunctions), uCRef(uPtr(functions)->Item<uFunction*>(i)));

    return (uArray*)matchingFunctions->ToArray();
}

// public static Uno.Reflection.CppFunction FindPropertyGetter(Uno.Type type, Outracks.Simulator.Bytecode.TypeMemberName typeMemberName) [static] :51
uFunction* ReflectionExtensions::FindPropertyGetter(uType* type, ::g::Outracks::Simulator::Bytecode::TypeMemberName* typeMemberName)
{
    uStackFrame __("Outracks.Simulator.Runtime.ReflectionExtensions", "FindPropertyGetter(Uno.Type,Outracks.Simulator.Bytecode.TypeMemberName)");
    ::g::Outracks::Simulator::Bytecode::TypeMemberName* getterName = ::g::Outracks::Simulator::Bytecode::TypeMemberName::New1(::g::Uno::String::op_Addition2(ReflectionExtensions::PropGetPrefix_, uPtr(typeMemberName)->Name));
    return ReflectionExtensions::FindFunction(type, getterName, uArray::New(::TYPES[6/*Uno.Type[]*/], 0));
}

// public static Uno.Reflection.CppFunction FindPropertySetter(Uno.Type type, Outracks.Simulator.Bytecode.TypeMemberName typeMemberName, Uno.Type argType) [static] :57
uFunction* ReflectionExtensions::FindPropertySetter(uType* type, ::g::Outracks::Simulator::Bytecode::TypeMemberName* typeMemberName, uType* argType)
{
    uStackFrame __("Outracks.Simulator.Runtime.ReflectionExtensions", "FindPropertySetter(Uno.Type,Outracks.Simulator.Bytecode.TypeMemberName,Uno.Type)");
    ::g::Outracks::Simulator::Bytecode::TypeMemberName* setterName = ::g::Outracks::Simulator::Bytecode::TypeMemberName::New1(::g::Uno::String::op_Addition2(ReflectionExtensions::PropSetPrefix_, uPtr(typeMemberName)->Name));
    return ReflectionExtensions::FindFunction(type, setterName, uArray::Init<uType*>(::TYPES[6/*Uno.Type[]*/], 1, argType));
}

// public static Uno.Type FindType(Outracks.Simulator.Bytecode.TypeName typeName) [static] :41
uType* ReflectionExtensions::FindType(::g::Outracks::Simulator::Bytecode::TypeName* typeName)
{
    uStackFrame __("Outracks.Simulator.Runtime.ReflectionExtensions", "FindType(Outracks.Simulator.Bytecode.TypeName)");
    uType* ind1;
    ind1 = ::g::Outracks::Simulator::Runtime::ReflectionCache::GetType(typeName);
    return (ind1 != NULL) ? ind1 : (uType*)::g::Uno::Type::GetType2(uPtr(typeName)->FullName(), true);
}

// public static Uno.Type[] FindTypes(Outracks.Simulator.Bytecode.TypeName[] typeName) [static] :31
uArray* ReflectionExtensions::FindTypes(uArray* typeName)
{
    uStackFrame __("Outracks.Simulator.Runtime.ReflectionExtensions", "FindTypes(Outracks.Simulator.Bytecode.TypeName[])");
    uArray* types = uArray::New(::TYPES[6/*Uno.Type[]*/], uPtr(typeName)->Length());

    for (int i = 0; i < typeName->Length(); i++)
        uPtr(types)->Strong<uType*>(i) = ReflectionExtensions::FindType(uPtr(typeName)->Strong< ::g::Outracks::Simulator::Bytecode::TypeName*>(i));

    return types;
}

// public static Uno.Type[] GetParameterTypes(Outracks.Simulator.Bytecode.Signature methodSignature) [static] :87
uArray* ReflectionExtensions::GetParameterTypes(::g::Outracks::Simulator::Bytecode::Signature* methodSignature)
{
    uStackFrame __("Outracks.Simulator.Runtime.ReflectionExtensions", "GetParameterTypes(Outracks.Simulator.Bytecode.Signature)");
    ::g::Outracks::Simulator::Bytecode::Parameter* ret2;
    ::g::Outracks::Simulator::ImmutableList* parameters = uPtr(methodSignature)->Parameters;
    uArray* types = uArray::New(::TYPES[6/*Uno.Type[]*/], uPtr(parameters)->Count());

    for (int i = 0; i < parameters->Count(); i++)
        uPtr(types)->Strong<uType*>(i) = ReflectionExtensions::FindType(uPtr((::g::Outracks::Simulator::ImmutableList__get_Item_fn(uPtr(parameters), uCRef<int>(i), &ret2), ret2))->Type);

    return types;
}

// public static Uno.Type[] GetTypes(object[] objects) [static] :19
uArray* ReflectionExtensions::GetTypes(uArray* objects)
{
    uStackFrame __("Outracks.Simulator.Runtime.ReflectionExtensions", "GetTypes(object[])");

    if (objects == NULL)
        return NULL;

    uArray* types = uArray::New(::TYPES[6/*Uno.Type[]*/], uPtr(objects)->Length());

    for (int i = 0; i < objects->Length(); i++)
        uPtr(types)->Strong<uType*>(i) = ::g::Uno::Object::GetType(uPtr(uPtr(objects)->Strong<uObject*>(i)));

    return types;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/Runtime/VirtualMachine.cs
// -------------------------------------------------------------------------------------------

// public sealed class ScopeClosure :8
// {
static void ScopeClosure_build(uType* type)
{
    ::STRINGS[13] = uString::Const("Illegal parameter count");
    ::STRINGS[14] = uString::Const("Invalid number type ");
    ::TYPES[31] = ::g::Outracks::Simulator::Runtime::IReflection_typeof();
    ::TYPES[32] = ::g::Outracks::Simulator::Bytecode::Expression_typeof()->MakeMethod(0/*Match<object>*/, uObject_typeof(), NULL);
    ::TYPES[33] = ::g::Uno::Func1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::ReadVariable_typeof(), uObject_typeof(), NULL);
    ::TYPES[34] = ::g::Uno::Func1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::Literal_typeof(), uObject_typeof(), NULL);
    ::TYPES[35] = ::g::Uno::Func1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::Lambda_typeof(), uObject_typeof(), NULL);
    ::TYPES[36] = ::g::Uno::Func1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::MethodGroup_typeof(), uObject_typeof(), NULL);
    ::TYPES[37] = ::g::Uno::Func1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::IsType_typeof(), uObject_typeof(), NULL);
    ::TYPES[38] = ::g::Uno::Func1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::LogicalOr_typeof(), uObject_typeof(), NULL);
    ::TYPES[39] = ::g::Uno::Func1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::Instantiate_typeof(), uObject_typeof(), NULL);
    ::TYPES[40] = ::g::Uno::Func1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::CallLambda_typeof(), uObject_typeof(), NULL);
    ::TYPES[41] = ::g::Uno::Func1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::CallStaticMethod_typeof(), uObject_typeof(), NULL);
    ::TYPES[42] = ::g::Uno::Func1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::CallDynamicMethod_typeof(), uObject_typeof(), NULL);
    ::TYPES[43] = ::g::Uno::Func1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::ReadStaticField_typeof(), uObject_typeof(), NULL);
    ::TYPES[44] = ::g::Uno::Func1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::ReadProperty_typeof(), uObject_typeof(), NULL);
    ::TYPES[45] = ::g::Uno::Func1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::WriteProperty_typeof(), uObject_typeof(), NULL);
    ::TYPES[46] = ::g::Uno::Func1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::AddEventHandler_typeof(), uObject_typeof(), NULL);
    ::TYPES[47] = ::g::Uno::Func1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::RemoveEventHandler_typeof(), uObject_typeof(), NULL);
    ::TYPES[48] = ::g::Outracks::Optional1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::TypeName_typeof(), NULL);
    ::TYPES[49] = ::g::Uno::Func_typeof()->MakeType(uObject_typeof(), NULL);
    ::TYPES[50] = ::g::Uno::Func2_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::Lambda_typeof(), uObject_typeof()->Array(), uObject_typeof(), NULL);
    ::TYPES[51] = ::g::Uno::Func1_typeof()->MakeType(uObject_typeof(), uObject_typeof(), NULL);
    ::TYPES[52] = ::g::Uno::Func2_typeof()->MakeType(uObject_typeof(), uObject_typeof(), uObject_typeof(), NULL);
    ::TYPES[53] = ::g::Uno::Func3_typeof()->MakeType(uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), NULL);
    ::TYPES[54] = ::g::Uno::Func4_typeof()->MakeType(uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), NULL);
    ::TYPES[55] = ::g::Uno::Func5_typeof()->MakeType(uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), NULL);
    ::TYPES[56] = ::g::Uno::Func6_typeof()->MakeType(uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), NULL);
    ::TYPES[57] = ::g::Uno::Func7_typeof()->MakeType(uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), NULL);
    ::TYPES[58] = ::g::Uno::Func8_typeof()->MakeType(uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), NULL);
    ::TYPES[59] = ::g::Uno::Func9_typeof()->MakeType(uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), NULL);
    ::TYPES[60] = ::g::Uno::Func10_typeof()->MakeType(uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), NULL);
    ::TYPES[61] = ::g::Uno::Func11_typeof()->MakeType(uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), NULL);
    ::TYPES[62] = ::g::Uno::Func12_typeof()->MakeType(uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), NULL);
    ::TYPES[63] = ::g::Uno::Func13_typeof()->MakeType(uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), NULL);
    ::TYPES[64] = ::g::Uno::Func14_typeof()->MakeType(uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), NULL);
    ::TYPES[65] = ::g::Uno::Func15_typeof()->MakeType(uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), NULL);
    ::TYPES[66] = ::g::Uno::Action_typeof();
    ::TYPES[67] = ::g::Uno::Action1_typeof()->MakeType(uObject_typeof(), NULL);
    ::TYPES[68] = ::g::Uno::Action2_typeof()->MakeType(uObject_typeof(), uObject_typeof(), NULL);
    ::TYPES[69] = ::g::Uno::Action3_typeof()->MakeType(uObject_typeof(), uObject_typeof(), uObject_typeof(), NULL);
    ::TYPES[70] = ::g::Uno::Action4_typeof()->MakeType(uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), NULL);
    ::TYPES[71] = ::g::Uno::Action5_typeof()->MakeType(uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), NULL);
    ::TYPES[72] = ::g::Uno::Action6_typeof()->MakeType(uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), NULL);
    ::TYPES[73] = ::g::Uno::Action7_typeof()->MakeType(uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), NULL);
    ::TYPES[74] = ::g::Uno::Action8_typeof()->MakeType(uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), NULL);
    ::TYPES[75] = ::g::Uno::Action9_typeof()->MakeType(uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), NULL);
    ::TYPES[76] = ::g::Uno::Action10_typeof()->MakeType(uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), NULL);
    ::TYPES[77] = ::g::Uno::Action11_typeof()->MakeType(uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), NULL);
    ::TYPES[78] = ::g::Uno::Action12_typeof()->MakeType(uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), NULL);
    ::TYPES[79] = ::g::Uno::Action13_typeof()->MakeType(uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), NULL);
    ::TYPES[80] = ::g::Uno::Action14_typeof()->MakeType(uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), NULL);
    ::TYPES[81] = ::g::Uno::Action15_typeof()->MakeType(uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), NULL);
    ::TYPES[82] = ::g::Outracks::Simulator::Bytecode::Literal_typeof()->MakeMethod(0/*Match<object>*/, uObject_typeof(), NULL);
    ::TYPES[83] = ::g::Uno::Func1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::BooleanLiteral_typeof(), uObject_typeof(), NULL);
    ::TYPES[84] = ::g::Uno::Func1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::StringLiteral_typeof(), uObject_typeof(), NULL);
    ::TYPES[85] = ::g::Uno::Func1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::NumberLiteral_typeof(), uObject_typeof(), NULL);
    ::TYPES[86] = ::g::Uno::Func1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::EnumLiteral_typeof(), uObject_typeof(), NULL);
    ::TYPES[87] = ::g::Uno::Func1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::BlobLiteral_typeof(), uObject_typeof(), NULL);
    ::TYPES[12] = uObject_typeof()->Array();
    ::TYPES[88] = ::g::Uno::Func16_typeof()->MakeType(uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), NULL);
    ::TYPES[89] = ::g::Uno::Action16_typeof()->MakeType(uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), NULL);
    ::TYPES[10] = ::g::Outracks::Optional1_typeof()->MakeType(::g::Outracks::Simulator::Runtime::Environment_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Collections::IEnumerator_typeof();
    ::TYPES[90] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::BindVariable_typeof(), NULL);
    ::TYPES[5] = ::g::Uno::IDisposable_typeof();
    ::TYPES[91] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::Statement_typeof(), NULL);
    ::TYPES[92] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::Statement_typeof(), NULL);
    ::TYPES[93] = ::g::Outracks::Simulator::Bytecode::Expression_typeof();
    ::TYPES[94] = ::g::Outracks::Simulator::Bytecode::Return_typeof();
    type->SetFields(0,
        ::g::Outracks::Simulator::Runtime::Environment_typeof(), offsetof(ScopeClosure, _scope), 0,
        ::TYPES[31/*Outracks.Simulator.Runtime.IReflection*/], offsetof(ScopeClosure, _reflection), 0);
    type->Reflection.SetFunctions(2,
        new uFunction("Execute", NULL, (void*)ScopeClosure__Execute1_fn, 0, false, uObject_typeof(), 2, ::g::Outracks::Simulator::Bytecode::Lambda_typeof(), ::TYPES[12/*object[]*/]),
        new uFunction(".ctor", NULL, (void*)ScopeClosure__New1_fn, 0, true, type, 2, ::g::Outracks::Simulator::Runtime::Environment_typeof(), ::TYPES[31/*Outracks.Simulator.Runtime.IReflection*/]));
}

uType* ScopeClosure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(ScopeClosure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Outracks.Simulator.Runtime.ScopeClosure", options);
    type->fp_build_ = ScopeClosure_build;
    return type;
}

// public ScopeClosure(Outracks.Simulator.Runtime.Environment scope, Outracks.Simulator.Runtime.IReflection reflection) :13
void ScopeClosure__ctor__fn(ScopeClosure* __this, ::g::Outracks::Simulator::Runtime::Environment* scope, uObject* reflection)
{
    __this->ctor_(scope, reflection);
}

// private object Evaluate(Outracks.Simulator.Bytecode.AddEventHandler e) :118
void ScopeClosure__Evaluate_fn(ScopeClosure* __this, ::g::Outracks::Simulator::Bytecode::AddEventHandler* e, uObject** __retval)
{
    *__retval = __this->Evaluate(e);
}

// private object Evaluate(Outracks.Simulator.Bytecode.BlobLiteral e) :273
void ScopeClosure__Evaluate1_fn(ScopeClosure* __this, ::g::Outracks::Simulator::Bytecode::BlobLiteral* e, uObject** __retval)
{
    *__retval = __this->Evaluate1(e);
}

// private object Evaluate(Outracks.Simulator.Bytecode.BooleanLiteral e) :275
void ScopeClosure__Evaluate2_fn(ScopeClosure* __this, ::g::Outracks::Simulator::Bytecode::BooleanLiteral* e, uObject** __retval)
{
    *__retval = __this->Evaluate2(e);
}

// private object Evaluate(Outracks.Simulator.Bytecode.CallDynamicMethod m) :97
void ScopeClosure__Evaluate3_fn(ScopeClosure* __this, ::g::Outracks::Simulator::Bytecode::CallDynamicMethod* m, uObject** __retval)
{
    *__retval = __this->Evaluate3(m);
}

// private object Evaluate(Outracks.Simulator.Bytecode.CallLambda i) :87
void ScopeClosure__Evaluate4_fn(ScopeClosure* __this, ::g::Outracks::Simulator::Bytecode::CallLambda* i, uObject** __retval)
{
    *__retval = __this->Evaluate4(i);
}

// private object Evaluate(Outracks.Simulator.Bytecode.CallStaticMethod m) :92
void ScopeClosure__Evaluate5_fn(ScopeClosure* __this, ::g::Outracks::Simulator::Bytecode::CallStaticMethod* m, uObject** __retval)
{
    *__retval = __this->Evaluate5(m);
}

// private object Evaluate(Outracks.Simulator.Bytecode.EnumLiteral i) :295
void ScopeClosure__Evaluate6_fn(ScopeClosure* __this, ::g::Outracks::Simulator::Bytecode::EnumLiteral* i, uObject** __retval)
{
    *__retval = __this->Evaluate6(i);
}

// private object Evaluate(Outracks.Simulator.Bytecode.Expression expression) :55
void ScopeClosure__Evaluate7_fn(ScopeClosure* __this, ::g::Outracks::Simulator::Bytecode::Expression* expression, uObject** __retval)
{
    *__retval = __this->Evaluate7(expression);
}

// private object Evaluate(Outracks.Simulator.Bytecode.Instantiate i) :82
void ScopeClosure__Evaluate8_fn(ScopeClosure* __this, ::g::Outracks::Simulator::Bytecode::Instantiate* i, uObject** __retval)
{
    *__retval = __this->Evaluate8(i);
}

// private object Evaluate(Outracks.Simulator.Bytecode.IsType t) :70
void ScopeClosure__Evaluate9_fn(ScopeClosure* __this, ::g::Outracks::Simulator::Bytecode::IsType* t, uObject** __retval)
{
    *__retval = __this->Evaluate9(t);
}

// private object Evaluate(Outracks.Simulator.Bytecode.Lambda p) :217
void ScopeClosure__Evaluate10_fn(ScopeClosure* __this, ::g::Outracks::Simulator::Bytecode::Lambda* p, uObject** __retval)
{
    *__retval = __this->Evaluate10(p);
}

// private object Evaluate(Outracks.Simulator.Bytecode.Literal e) :268
void ScopeClosure__Evaluate11_fn(ScopeClosure* __this, ::g::Outracks::Simulator::Bytecode::Literal* e, uObject** __retval)
{
    *__retval = __this->Evaluate11(e);
}

// private object Evaluate(Outracks.Simulator.Bytecode.LogicalOr o) :77
void ScopeClosure__Evaluate12_fn(ScopeClosure* __this, ::g::Outracks::Simulator::Bytecode::LogicalOr* o, uObject** __retval)
{
    *__retval = __this->Evaluate12(o);
}

// private object Evaluate(Outracks.Simulator.Bytecode.MethodGroup g) :65
void ScopeClosure__Evaluate13_fn(ScopeClosure* __this, ::g::Outracks::Simulator::Bytecode::MethodGroup* g, uObject** __retval)
{
    *__retval = __this->Evaluate13(g);
}

// private object Evaluate(Outracks.Simulator.Bytecode.NumberLiteral l) :279
void ScopeClosure__Evaluate14_fn(ScopeClosure* __this, ::g::Outracks::Simulator::Bytecode::NumberLiteral* l, uObject** __retval)
{
    *__retval = __this->Evaluate14(l);
}

// private object Evaluate(Outracks.Simulator.Bytecode.ReadProperty e) :107
void ScopeClosure__Evaluate15_fn(ScopeClosure* __this, ::g::Outracks::Simulator::Bytecode::ReadProperty* e, uObject** __retval)
{
    *__retval = __this->Evaluate15(e);
}

// private object Evaluate(Outracks.Simulator.Bytecode.ReadStaticField e) :102
void ScopeClosure__Evaluate16_fn(ScopeClosure* __this, ::g::Outracks::Simulator::Bytecode::ReadStaticField* e, uObject** __retval)
{
    *__retval = __this->Evaluate16(e);
}

// private object Evaluate(Outracks.Simulator.Bytecode.ReadVariable e) :60
void ScopeClosure__Evaluate17_fn(ScopeClosure* __this, ::g::Outracks::Simulator::Bytecode::ReadVariable* e, uObject** __retval)
{
    *__retval = __this->Evaluate17(e);
}

// private object Evaluate(Outracks.Simulator.Bytecode.RemoveEventHandler e) :124
void ScopeClosure__Evaluate18_fn(ScopeClosure* __this, ::g::Outracks::Simulator::Bytecode::RemoveEventHandler* e, uObject** __retval)
{
    *__retval = __this->Evaluate18(e);
}

// private object Evaluate(Outracks.Simulator.Bytecode.StringLiteral e) :277
void ScopeClosure__Evaluate19_fn(ScopeClosure* __this, ::g::Outracks::Simulator::Bytecode::StringLiteral* e, uObject** __retval)
{
    *__retval = __this->Evaluate19(e);
}

// private object Evaluate(Outracks.Simulator.Bytecode.WriteProperty p) :112
void ScopeClosure__Evaluate20_fn(ScopeClosure* __this, ::g::Outracks::Simulator::Bytecode::WriteProperty* p, uObject** __retval)
{
    *__retval = __this->Evaluate20(p);
}

// private object[] Evaluate(Outracks.Simulator.ImmutableList<Outracks.Simulator.Bytecode.Expression> arguments) :130
void ScopeClosure__Evaluate21_fn(ScopeClosure* __this, ::g::Outracks::Simulator::ImmutableList* arguments, uArray** __retval)
{
    *__retval = __this->Evaluate21(arguments);
}

// private object Execute(object lambda, object[] arguments) :142
void ScopeClosure__Execute_fn(ScopeClosure* __this, uObject* lambda, uArray* arguments, uObject** __retval)
{
    *__retval = __this->Execute(lambda, arguments);
}

// public object Execute(Outracks.Simulator.Bytecode.Lambda lambda, object[] arguments) :23
void ScopeClosure__Execute1_fn(ScopeClosure* __this, ::g::Outracks::Simulator::Bytecode::Lambda* lambda, uArray* arguments, uObject** __retval)
{
    *__retval = __this->Execute1(lambda, arguments);
}

// private object Execute(Uno.Collections.IEnumerable<Outracks.Simulator.Bytecode.Statement> statements) :36
void ScopeClosure__Execute2_fn(ScopeClosure* __this, uObject* statements, uObject** __retval)
{
    *__retval = __this->Execute2(statements);
}

// public ScopeClosure New(Outracks.Simulator.Runtime.Environment scope, Outracks.Simulator.Runtime.IReflection reflection) :13
void ScopeClosure__New1_fn(::g::Outracks::Simulator::Runtime::Environment* scope, uObject* reflection, ScopeClosure** __retval)
{
    *__retval = ScopeClosure::New1(scope, reflection);
}

// public ScopeClosure(Outracks.Simulator.Runtime.Environment scope, Outracks.Simulator.Runtime.IReflection reflection) [instance] :13
void ScopeClosure::ctor_(::g::Outracks::Simulator::Runtime::Environment* scope, uObject* reflection)
{
    _reflection = reflection;
    _scope = scope;
}

// private object Evaluate(Outracks.Simulator.Bytecode.AddEventHandler e) [instance] :118
uObject* ScopeClosure::Evaluate(::g::Outracks::Simulator::Bytecode::AddEventHandler* e)
{
    uStackFrame __("Outracks.Simulator.Runtime.ScopeClosure", "Evaluate(Outracks.Simulator.Bytecode.AddEventHandler)");
    ::g::Outracks::Simulator::Runtime::IReflection::AddEventHandler(uInterface(uPtr(_reflection), ::TYPES[31/*Outracks.Simulator.Runtime.IReflection*/]), Evaluate7(uPtr(e)->Object), uPtr(e)->Event, Evaluate7(uPtr(e)->Handler));
    return NULL;
}

// private object Evaluate(Outracks.Simulator.Bytecode.BlobLiteral e) [instance] :273
uObject* ScopeClosure::Evaluate1(::g::Outracks::Simulator::Bytecode::BlobLiteral* e)
{
    uStackFrame __("Outracks.Simulator.Runtime.ScopeClosure", "Evaluate(Outracks.Simulator.Bytecode.BlobLiteral)");
    return uPtr(e)->Bytes;
}

// private object Evaluate(Outracks.Simulator.Bytecode.BooleanLiteral e) [instance] :275
uObject* ScopeClosure::Evaluate2(::g::Outracks::Simulator::Bytecode::BooleanLiteral* e)
{
    uStackFrame __("Outracks.Simulator.Runtime.ScopeClosure", "Evaluate(Outracks.Simulator.Bytecode.BooleanLiteral)");
    return uBox(::g::Uno::Bool_typeof(), uPtr(e)->BooleanValue);
}

// private object Evaluate(Outracks.Simulator.Bytecode.CallDynamicMethod m) [instance] :97
uObject* ScopeClosure::Evaluate3(::g::Outracks::Simulator::Bytecode::CallDynamicMethod* m)
{
    uStackFrame __("Outracks.Simulator.Runtime.ScopeClosure", "Evaluate(Outracks.Simulator.Bytecode.CallDynamicMethod)");
    return ::g::Outracks::Simulator::Runtime::IReflection::CallDynamic(uInterface(uPtr(_reflection), ::TYPES[31/*Outracks.Simulator.Runtime.IReflection*/]), Evaluate7(uPtr(m)->Object), uPtr(m)->Method, Evaluate21(uPtr(m)->Arguments));
}

// private object Evaluate(Outracks.Simulator.Bytecode.CallLambda i) [instance] :87
uObject* ScopeClosure::Evaluate4(::g::Outracks::Simulator::Bytecode::CallLambda* i)
{
    uStackFrame __("Outracks.Simulator.Runtime.ScopeClosure", "Evaluate(Outracks.Simulator.Bytecode.CallLambda)");
    return Execute(Evaluate7(uPtr(i)->Lambda), Evaluate21(uPtr(i)->Arguments));
}

// private object Evaluate(Outracks.Simulator.Bytecode.CallStaticMethod m) [instance] :92
uObject* ScopeClosure::Evaluate5(::g::Outracks::Simulator::Bytecode::CallStaticMethod* m)
{
    uStackFrame __("Outracks.Simulator.Runtime.ScopeClosure", "Evaluate(Outracks.Simulator.Bytecode.CallStaticMethod)");
    return ::g::Outracks::Simulator::Runtime::IReflection::CallStatic(uInterface(uPtr(_reflection), ::TYPES[31/*Outracks.Simulator.Runtime.IReflection*/]), uPtr(uPtr(m)->StaticMethod)->TypeName, uPtr(uPtr(m)->StaticMethod)->MemberName, Evaluate21(uPtr(m)->Arguments));
}

// private object Evaluate(Outracks.Simulator.Bytecode.EnumLiteral i) [instance] :295
uObject* ScopeClosure::Evaluate6(::g::Outracks::Simulator::Bytecode::EnumLiteral* i)
{
    uStackFrame __("Outracks.Simulator.Runtime.ScopeClosure", "Evaluate(Outracks.Simulator.Bytecode.EnumLiteral)");
    return ::g::Outracks::Simulator::Runtime::IReflection::GetEnumValue(uInterface(uPtr(_reflection), ::TYPES[31/*Outracks.Simulator.Runtime.IReflection*/]), uPtr(uPtr(i)->Value)->TypeName, uPtr(uPtr(i)->Value)->MemberName);
}

// private object Evaluate(Outracks.Simulator.Bytecode.Expression expression) [instance] :55
uObject* ScopeClosure::Evaluate7(::g::Outracks::Simulator::Bytecode::Expression* expression)
{
    uStackFrame __("Outracks.Simulator.Runtime.ScopeClosure", "Evaluate(Outracks.Simulator.Bytecode.Expression)");
    uObject* ret5;
    return (::g::Outracks::Simulator::Bytecode::Expression__Match3_fn(uPtr(expression), ::TYPES[32/*Outracks.Simulator.Bytecode.Expression.Match<object>*/], uDelegate::New(::TYPES[33/*Uno.Func<Outracks.Simulator.Bytecode.ReadVariable, object>*/], (void*)ScopeClosure__Evaluate17_fn, this), uDelegate::New(::TYPES[34/*Uno.Func<Outracks.Simulator.Bytecode.Literal, object>*/], (void*)ScopeClosure__Evaluate11_fn, this), uDelegate::New(::TYPES[35/*Uno.Func<Outracks.Simulator.Bytecode.Lambda, object>*/], (void*)ScopeClosure__Evaluate10_fn, this), uDelegate::New(::TYPES[36/*Uno.Func<Outracks.Simulator.Bytecode.MethodGroup, object>*/], (void*)ScopeClosure__Evaluate13_fn, this), uDelegate::New(::TYPES[37/*Uno.Func<Outracks.Simulator.Bytecode.IsType, object>*/], (void*)ScopeClosure__Evaluate9_fn, this), uDelegate::New(::TYPES[38/*Uno.Func<Outracks.Simulator.Bytecode.LogicalOr, object>*/], (void*)ScopeClosure__Evaluate12_fn, this), uDelegate::New(::TYPES[39/*Uno.Func<Outracks.Simulator.Bytecode.Instantiate, object>*/], (void*)ScopeClosure__Evaluate8_fn, this), uDelegate::New(::TYPES[40/*Uno.Func<Outracks.Simulator.Bytecode.CallLambda, object>*/], (void*)ScopeClosure__Evaluate4_fn, this), uDelegate::New(::TYPES[41/*Uno.Func<Outracks.Simulator.Bytecode.CallStaticMethod, object>*/], (void*)ScopeClosure__Evaluate5_fn, this), uDelegate::New(::TYPES[42/*Uno.Func<Outracks.Simulator.Bytecode.CallDynamicMethod, object>*/], (void*)ScopeClosure__Evaluate3_fn, this), uDelegate::New(::TYPES[43/*Uno.Func<Outracks.Simulator.Bytecode.ReadStaticField, object>*/], (void*)ScopeClosure__Evaluate16_fn, this), uDelegate::New(::TYPES[44/*Uno.Func<Outracks.Simulator.Bytecode.ReadProperty, object>*/], (void*)ScopeClosure__Evaluate15_fn, this), uDelegate::New(::TYPES[45/*Uno.Func<Outracks.Simulator.Bytecode.WriteProperty, object>*/], (void*)ScopeClosure__Evaluate20_fn, this), uDelegate::New(::TYPES[46/*Uno.Func<Outracks.Simulator.Bytecode.AddEventHandler, object>*/], (void*)ScopeClosure__Evaluate_fn, this), uDelegate::New(::TYPES[47/*Uno.Func<Outracks.Simulator.Bytecode.RemoveEventHandler, object>*/], (void*)ScopeClosure__Evaluate18_fn, this), &ret5), ret5);
}

// private object Evaluate(Outracks.Simulator.Bytecode.Instantiate i) [instance] :82
uObject* ScopeClosure::Evaluate8(::g::Outracks::Simulator::Bytecode::Instantiate* i)
{
    uStackFrame __("Outracks.Simulator.Runtime.ScopeClosure", "Evaluate(Outracks.Simulator.Bytecode.Instantiate)");
    return ::g::Outracks::Simulator::Runtime::IReflection::Instantiate(uInterface(uPtr(_reflection), ::TYPES[31/*Outracks.Simulator.Runtime.IReflection*/]), uPtr(i)->Type, Evaluate21(uPtr(i)->Arguments));
}

// private object Evaluate(Outracks.Simulator.Bytecode.IsType t) [instance] :70
uObject* ScopeClosure::Evaluate9(::g::Outracks::Simulator::Bytecode::IsType* t)
{
    uStackFrame __("Outracks.Simulator.Runtime.ScopeClosure", "Evaluate(Outracks.Simulator.Bytecode.IsType)");
    return uBox(::g::Uno::Bool_typeof(), uPtr(t)->IncludeSubtypes ? ::g::Outracks::Simulator::Runtime::IReflection::IsSubtype(uInterface(uPtr(_reflection), ::TYPES[31/*Outracks.Simulator.Runtime.IReflection*/]), Evaluate7(uPtr(t)->Object), uPtr(t)->Type) : ::g::Outracks::Simulator::Runtime::IReflection::IsType(uInterface(uPtr(_reflection), ::TYPES[31/*Outracks.Simulator.Runtime.IReflection*/]), Evaluate7(uPtr(t)->Object), uPtr(t)->Type));
}

// private object Evaluate(Outracks.Simulator.Bytecode.Lambda p) [instance] :217
uObject* ScopeClosure::Evaluate10(::g::Outracks::Simulator::Bytecode::Lambda* p)
{
    uStackFrame __("Outracks.Simulator.Runtime.ScopeClosure", "Evaluate(Outracks.Simulator.Bytecode.Lambda)");
    ::g::Outracks::Optional1<uStrong< ::g::Outracks::Simulator::Bytecode::TypeName*> > ind3;

    if ((ind3 = uPtr(uPtr(p)->Signature)->ReturnType().Value< ::g::Outracks::Optional1<uStrong< ::g::Outracks::Simulator::Bytecode::TypeName*> > >(), (&ind3))->HasValue(::TYPES[48/*Outracks.Optional<Outracks.Simulator.Bytecode.TypeName>*/]))

        switch (uPtr(uPtr(uPtr(p)->Signature)->Parameters)->Count())
        {
            case 0:
                return uDelegate::New(::TYPES[49/*Uno.Func<object>*/], (void*)::g::Outracks::Simulator::Runtime::LambdaClosure__Func_fn, ::g::Outracks::Simulator::Runtime::LambdaClosure::New1(p, uDelegate::New(::TYPES[50/*Uno.Func<Outracks.Simulator.Bytecode.Lambda, object[], object>*/], (void*)ScopeClosure__Execute1_fn, this)));
            case 1:
                return uDelegate::New(::TYPES[51/*Uno.Func<object, object>*/], (void*)::g::Outracks::Simulator::Runtime::LambdaClosure__Func1_fn, ::g::Outracks::Simulator::Runtime::LambdaClosure::New1(p, uDelegate::New(::TYPES[50/*Uno.Func<Outracks.Simulator.Bytecode.Lambda, object[], object>*/], (void*)ScopeClosure__Execute1_fn, this)));
            case 2:
                return uDelegate::New(::TYPES[52/*Uno.Func<object, object, object>*/], (void*)::g::Outracks::Simulator::Runtime::LambdaClosure__Func2_fn, ::g::Outracks::Simulator::Runtime::LambdaClosure::New1(p, uDelegate::New(::TYPES[50/*Uno.Func<Outracks.Simulator.Bytecode.Lambda, object[], object>*/], (void*)ScopeClosure__Execute1_fn, this)));
            case 3:
                return uDelegate::New(::TYPES[53/*Uno.Func<object, object, object, object>*/], (void*)::g::Outracks::Simulator::Runtime::LambdaClosure__Func3_fn, ::g::Outracks::Simulator::Runtime::LambdaClosure::New1(p, uDelegate::New(::TYPES[50/*Uno.Func<Outracks.Simulator.Bytecode.Lambda, object[], object>*/], (void*)ScopeClosure__Execute1_fn, this)));
            case 4:
                return uDelegate::New(::TYPES[54/*Uno.Func<object, object, object, object, object>*/], (void*)::g::Outracks::Simulator::Runtime::LambdaClosure__Func4_fn, ::g::Outracks::Simulator::Runtime::LambdaClosure::New1(p, uDelegate::New(::TYPES[50/*Uno.Func<Outracks.Simulator.Bytecode.Lambda, object[], object>*/], (void*)ScopeClosure__Execute1_fn, this)));
            case 5:
                return uDelegate::New(::TYPES[55/*Uno.Func<object, object, object, object, object, object>*/], (void*)::g::Outracks::Simulator::Runtime::LambdaClosure__Func5_fn, ::g::Outracks::Simulator::Runtime::LambdaClosure::New1(p, uDelegate::New(::TYPES[50/*Uno.Func<Outracks.Simulator.Bytecode.Lambda, object[], object>*/], (void*)ScopeClosure__Execute1_fn, this)));
            case 6:
                return uDelegate::New(::TYPES[56/*Uno.Func<object, object, object, object, object, object, object>*/], (void*)::g::Outracks::Simulator::Runtime::LambdaClosure__Func6_fn, ::g::Outracks::Simulator::Runtime::LambdaClosure::New1(p, uDelegate::New(::TYPES[50/*Uno.Func<Outracks.Simulator.Bytecode.Lambda, object[], object>*/], (void*)ScopeClosure__Execute1_fn, this)));
            case 7:
                return uDelegate::New(::TYPES[57/*Uno.Func<object, object, object, object, object, object, object, object>*/], (void*)::g::Outracks::Simulator::Runtime::LambdaClosure__Func7_fn, ::g::Outracks::Simulator::Runtime::LambdaClosure::New1(p, uDelegate::New(::TYPES[50/*Uno.Func<Outracks.Simulator.Bytecode.Lambda, object[], object>*/], (void*)ScopeClosure__Execute1_fn, this)));
            case 8:
                return uDelegate::New(::TYPES[58/*Uno.Func<object, object, object, object, object, object, object, object, object>*/], (void*)::g::Outracks::Simulator::Runtime::LambdaClosure__Func8_fn, ::g::Outracks::Simulator::Runtime::LambdaClosure::New1(p, uDelegate::New(::TYPES[50/*Uno.Func<Outracks.Simulator.Bytecode.Lambda, object[], object>*/], (void*)ScopeClosure__Execute1_fn, this)));
            case 9:
                return uDelegate::New(::TYPES[59/*Uno.Func<object, object, object, object, object, object, object, object, object, object>*/], (void*)::g::Outracks::Simulator::Runtime::LambdaClosure__Func9_fn, ::g::Outracks::Simulator::Runtime::LambdaClosure::New1(p, uDelegate::New(::TYPES[50/*Uno.Func<Outracks.Simulator.Bytecode.Lambda, object[], object>*/], (void*)ScopeClosure__Execute1_fn, this)));
            case 10:
                return uDelegate::New(::TYPES[60/*Uno.Func<object, object, object, object, object, object, object, object, object, object, object>*/], (void*)::g::Outracks::Simulator::Runtime::LambdaClosure__Func10_fn, ::g::Outracks::Simulator::Runtime::LambdaClosure::New1(p, uDelegate::New(::TYPES[50/*Uno.Func<Outracks.Simulator.Bytecode.Lambda, object[], object>*/], (void*)ScopeClosure__Execute1_fn, this)));
            case 11:
                return uDelegate::New(::TYPES[61/*Uno.Func<object, object, object, object, object, object, object, object, object, object, object, object>*/], (void*)::g::Outracks::Simulator::Runtime::LambdaClosure__Func11_fn, ::g::Outracks::Simulator::Runtime::LambdaClosure::New1(p, uDelegate::New(::TYPES[50/*Uno.Func<Outracks.Simulator.Bytecode.Lambda, object[], object>*/], (void*)ScopeClosure__Execute1_fn, this)));
            case 12:
                return uDelegate::New(::TYPES[62/*Uno.Func<object, object, object, object, object, object, object, object, object, object, object, object, object>*/], (void*)::g::Outracks::Simulator::Runtime::LambdaClosure__Func12_fn, ::g::Outracks::Simulator::Runtime::LambdaClosure::New1(p, uDelegate::New(::TYPES[50/*Uno.Func<Outracks.Simulator.Bytecode.Lambda, object[], object>*/], (void*)ScopeClosure__Execute1_fn, this)));
            case 13:
                return uDelegate::New(::TYPES[63/*Uno.Func<object, object, object, object, object, object, object, object, object, object, object, object, object, object>*/], (void*)::g::Outracks::Simulator::Runtime::LambdaClosure__Func13_fn, ::g::Outracks::Simulator::Runtime::LambdaClosure::New1(p, uDelegate::New(::TYPES[50/*Uno.Func<Outracks.Simulator.Bytecode.Lambda, object[], object>*/], (void*)ScopeClosure__Execute1_fn, this)));
            case 14:
                return uDelegate::New(::TYPES[64/*Uno.Func<object, object, object, object, object, object, object, object, object, object, object, object, object, object, object>*/], (void*)::g::Outracks::Simulator::Runtime::LambdaClosure__Func14_fn, ::g::Outracks::Simulator::Runtime::LambdaClosure::New1(p, uDelegate::New(::TYPES[50/*Uno.Func<Outracks.Simulator.Bytecode.Lambda, object[], object>*/], (void*)ScopeClosure__Execute1_fn, this)));
            case 15:
                return uDelegate::New(::TYPES[65/*Uno.Func<object, object, object, object, object, object, object, object, object, object, object, object, object, object, object, object>*/], (void*)::g::Outracks::Simulator::Runtime::LambdaClosure__Func15_fn, ::g::Outracks::Simulator::Runtime::LambdaClosure::New1(p, uDelegate::New(::TYPES[50/*Uno.Func<Outracks.Simulator.Bytecode.Lambda, object[], object>*/], (void*)ScopeClosure__Execute1_fn, this)));
        }
    else

        switch (uPtr(uPtr(uPtr(p)->Signature)->Parameters)->Count())
        {
            case 0:
                return uDelegate::New(::TYPES[66/*Uno.Action*/], (void*)::g::Outracks::Simulator::Runtime::LambdaClosure__Action_fn, ::g::Outracks::Simulator::Runtime::LambdaClosure::New1(p, uDelegate::New(::TYPES[50/*Uno.Func<Outracks.Simulator.Bytecode.Lambda, object[], object>*/], (void*)ScopeClosure__Execute1_fn, this)));
            case 1:
                return uDelegate::New(::TYPES[67/*Uno.Action<object>*/], (void*)::g::Outracks::Simulator::Runtime::LambdaClosure__Action1_fn, ::g::Outracks::Simulator::Runtime::LambdaClosure::New1(p, uDelegate::New(::TYPES[50/*Uno.Func<Outracks.Simulator.Bytecode.Lambda, object[], object>*/], (void*)ScopeClosure__Execute1_fn, this)));
            case 2:
                return uDelegate::New(::TYPES[68/*Uno.Action<object, object>*/], (void*)::g::Outracks::Simulator::Runtime::LambdaClosure__Action2_fn, ::g::Outracks::Simulator::Runtime::LambdaClosure::New1(p, uDelegate::New(::TYPES[50/*Uno.Func<Outracks.Simulator.Bytecode.Lambda, object[], object>*/], (void*)ScopeClosure__Execute1_fn, this)));
            case 3:
                return uDelegate::New(::TYPES[69/*Uno.Action<object, object, object>*/], (void*)::g::Outracks::Simulator::Runtime::LambdaClosure__Action3_fn, ::g::Outracks::Simulator::Runtime::LambdaClosure::New1(p, uDelegate::New(::TYPES[50/*Uno.Func<Outracks.Simulator.Bytecode.Lambda, object[], object>*/], (void*)ScopeClosure__Execute1_fn, this)));
            case 4:
                return uDelegate::New(::TYPES[70/*Uno.Action<object, object, object, object>*/], (void*)::g::Outracks::Simulator::Runtime::LambdaClosure__Action4_fn, ::g::Outracks::Simulator::Runtime::LambdaClosure::New1(p, uDelegate::New(::TYPES[50/*Uno.Func<Outracks.Simulator.Bytecode.Lambda, object[], object>*/], (void*)ScopeClosure__Execute1_fn, this)));
            case 5:
                return uDelegate::New(::TYPES[71/*Uno.Action<object, object, object, object, object>*/], (void*)::g::Outracks::Simulator::Runtime::LambdaClosure__Action5_fn, ::g::Outracks::Simulator::Runtime::LambdaClosure::New1(p, uDelegate::New(::TYPES[50/*Uno.Func<Outracks.Simulator.Bytecode.Lambda, object[], object>*/], (void*)ScopeClosure__Execute1_fn, this)));
            case 6:
                return uDelegate::New(::TYPES[72/*Uno.Action<object, object, object, object, object, object>*/], (void*)::g::Outracks::Simulator::Runtime::LambdaClosure__Action6_fn, ::g::Outracks::Simulator::Runtime::LambdaClosure::New1(p, uDelegate::New(::TYPES[50/*Uno.Func<Outracks.Simulator.Bytecode.Lambda, object[], object>*/], (void*)ScopeClosure__Execute1_fn, this)));
            case 7:
                return uDelegate::New(::TYPES[73/*Uno.Action<object, object, object, object, object, object, object>*/], (void*)::g::Outracks::Simulator::Runtime::LambdaClosure__Action7_fn, ::g::Outracks::Simulator::Runtime::LambdaClosure::New1(p, uDelegate::New(::TYPES[50/*Uno.Func<Outracks.Simulator.Bytecode.Lambda, object[], object>*/], (void*)ScopeClosure__Execute1_fn, this)));
            case 8:
                return uDelegate::New(::TYPES[74/*Uno.Action<object, object, object, object, object, object, object, object>*/], (void*)::g::Outracks::Simulator::Runtime::LambdaClosure__Action8_fn, ::g::Outracks::Simulator::Runtime::LambdaClosure::New1(p, uDelegate::New(::TYPES[50/*Uno.Func<Outracks.Simulator.Bytecode.Lambda, object[], object>*/], (void*)ScopeClosure__Execute1_fn, this)));
            case 9:
                return uDelegate::New(::TYPES[75/*Uno.Action<object, object, object, object, object, object, object, object, object>*/], (void*)::g::Outracks::Simulator::Runtime::LambdaClosure__Action9_fn, ::g::Outracks::Simulator::Runtime::LambdaClosure::New1(p, uDelegate::New(::TYPES[50/*Uno.Func<Outracks.Simulator.Bytecode.Lambda, object[], object>*/], (void*)ScopeClosure__Execute1_fn, this)));
            case 10:
                return uDelegate::New(::TYPES[76/*Uno.Action<object, object, object, object, object, object, object, object, object, object>*/], (void*)::g::Outracks::Simulator::Runtime::LambdaClosure__Action10_fn, ::g::Outracks::Simulator::Runtime::LambdaClosure::New1(p, uDelegate::New(::TYPES[50/*Uno.Func<Outracks.Simulator.Bytecode.Lambda, object[], object>*/], (void*)ScopeClosure__Execute1_fn, this)));
            case 11:
                return uDelegate::New(::TYPES[77/*Uno.Action<object, object, object, object, object, object, object, object, object, object, object>*/], (void*)::g::Outracks::Simulator::Runtime::LambdaClosure__Action11_fn, ::g::Outracks::Simulator::Runtime::LambdaClosure::New1(p, uDelegate::New(::TYPES[50/*Uno.Func<Outracks.Simulator.Bytecode.Lambda, object[], object>*/], (void*)ScopeClosure__Execute1_fn, this)));
            case 12:
                return uDelegate::New(::TYPES[78/*Uno.Action<object, object, object, object, object, object, object, object, object, object, object, object>*/], (void*)::g::Outracks::Simulator::Runtime::LambdaClosure__Action12_fn, ::g::Outracks::Simulator::Runtime::LambdaClosure::New1(p, uDelegate::New(::TYPES[50/*Uno.Func<Outracks.Simulator.Bytecode.Lambda, object[], object>*/], (void*)ScopeClosure__Execute1_fn, this)));
            case 13:
                return uDelegate::New(::TYPES[79/*Uno.Action<object, object, object, object, object, object, object, object, object, object, object, object, object>*/], (void*)::g::Outracks::Simulator::Runtime::LambdaClosure__Action13_fn, ::g::Outracks::Simulator::Runtime::LambdaClosure::New1(p, uDelegate::New(::TYPES[50/*Uno.Func<Outracks.Simulator.Bytecode.Lambda, object[], object>*/], (void*)ScopeClosure__Execute1_fn, this)));
            case 14:
                return uDelegate::New(::TYPES[80/*Uno.Action<object, object, object, object, object, object, object, object, object, object, object, object, object, object>*/], (void*)::g::Outracks::Simulator::Runtime::LambdaClosure__Action14_fn, ::g::Outracks::Simulator::Runtime::LambdaClosure::New1(p, uDelegate::New(::TYPES[50/*Uno.Func<Outracks.Simulator.Bytecode.Lambda, object[], object>*/], (void*)ScopeClosure__Execute1_fn, this)));
            case 15:
                return uDelegate::New(::TYPES[81/*Uno.Action<object, object, object, object, object, object, object, object, object, object, object, object, object, object, object>*/], (void*)::g::Outracks::Simulator::Runtime::LambdaClosure__Action15_fn, ::g::Outracks::Simulator::Runtime::LambdaClosure::New1(p, uDelegate::New(::TYPES[50/*Uno.Func<Outracks.Simulator.Bytecode.Lambda, object[], object>*/], (void*)ScopeClosure__Execute1_fn, this)));
        }

    U_THROW(::g::Uno::Exception::New2(::STRINGS[13/*"Illegal par...*/]));
}

// private object Evaluate(Outracks.Simulator.Bytecode.Literal e) [instance] :268
uObject* ScopeClosure::Evaluate11(::g::Outracks::Simulator::Bytecode::Literal* e)
{
    uStackFrame __("Outracks.Simulator.Runtime.ScopeClosure", "Evaluate(Outracks.Simulator.Bytecode.Literal)");
    uObject* ret6;
    return (::g::Outracks::Simulator::Bytecode::Literal__Match5_fn(uPtr(e), ::TYPES[82/*Outracks.Simulator.Bytecode.Literal.Match<object>*/], uDelegate::New(::TYPES[83/*Uno.Func<Outracks.Simulator.Bytecode.BooleanLiteral, object>*/], (void*)ScopeClosure__Evaluate2_fn, this), uDelegate::New(::TYPES[84/*Uno.Func<Outracks.Simulator.Bytecode.StringLiteral, object>*/], (void*)ScopeClosure__Evaluate19_fn, this), uDelegate::New(::TYPES[85/*Uno.Func<Outracks.Simulator.Bytecode.NumberLiteral, object>*/], (void*)ScopeClosure__Evaluate14_fn, this), uDelegate::New(::TYPES[86/*Uno.Func<Outracks.Simulator.Bytecode.EnumLiteral, object>*/], (void*)ScopeClosure__Evaluate6_fn, this), uDelegate::New(::TYPES[87/*Uno.Func<Outracks.Simulator.Bytecode.BlobLiteral, object>*/], (void*)ScopeClosure__Evaluate1_fn, this), &ret6), ret6);
}

// private object Evaluate(Outracks.Simulator.Bytecode.LogicalOr o) [instance] :77
uObject* ScopeClosure::Evaluate12(::g::Outracks::Simulator::Bytecode::LogicalOr* o)
{
    uStackFrame __("Outracks.Simulator.Runtime.ScopeClosure", "Evaluate(Outracks.Simulator.Bytecode.LogicalOr)");
    return uBox(::g::Uno::Bool_typeof(), uUnbox<bool>(::g::Uno::Bool_typeof(), Evaluate7(uPtr(o)->Left)) || uUnbox<bool>(::g::Uno::Bool_typeof(), Evaluate7(uPtr(o)->Right)));
}

// private object Evaluate(Outracks.Simulator.Bytecode.MethodGroup g) [instance] :65
uObject* ScopeClosure::Evaluate13(::g::Outracks::Simulator::Bytecode::MethodGroup* g)
{
    uStackFrame __("Outracks.Simulator.Runtime.ScopeClosure", "Evaluate(Outracks.Simulator.Bytecode.MethodGroup)");
    return ::g::Outracks::Simulator::Runtime::IReflection::CreateDelegate(uInterface(uPtr(_reflection), ::TYPES[31/*Outracks.Simulator.Runtime.IReflection*/]), uPtr(g)->DelegateType, Evaluate7(uPtr(g)->Object), uPtr(g)->MethodName, uPtr(g)->MethodSignature().Value< ::g::Outracks::Optional1<uStrong< ::g::Outracks::Simulator::Bytecode::Signature*> > >());
}

// private object Evaluate(Outracks.Simulator.Bytecode.NumberLiteral l) [instance] :279
uObject* ScopeClosure::Evaluate14(::g::Outracks::Simulator::Bytecode::NumberLiteral* l)
{
    uStackFrame __("Outracks.Simulator.Runtime.ScopeClosure", "Evaluate(Outracks.Simulator.Bytecode.NumberLiteral)");

    switch (uPtr(l)->NumberType)
    {
        case 0:
            return uBox(::g::Uno::Double_typeof(), uPtr(l)->DoubleValue);
        case 1:
            return uBox(::g::Uno::Float_typeof(), (float)uPtr(l)->DoubleValue);
        case 2:
            return uBox<int>(::g::Uno::Int_typeof(), (int)uPtr(l)->DoubleValue);
        case 3:
            return uBox<uint32_t>(::g::Uno::UInt_typeof(), (uint32_t)uPtr(l)->DoubleValue);
        case 4:
            return uBox<int16_t>(::g::Uno::Short_typeof(), (int16_t)uPtr(l)->DoubleValue);
        case 5:
            return uBox<uint16_t>(::g::Uno::UShort_typeof(), (uint16_t)uPtr(l)->DoubleValue);
        case 6:
            return uBox<int8_t>(::g::Uno::SByte_typeof(), (int8_t)uPtr(l)->DoubleValue);
        case 7:
            return uBox<uint8_t>(::g::Uno::Byte_typeof(), (uint8_t)uPtr(l)->DoubleValue);
    }

    U_THROW(::g::Uno::ArgumentException::New4(::g::Uno::String::op_Addition1(::STRINGS[14/*"Invalid num...*/], uBox<int>(::g::Outracks::Simulator::Bytecode::NumberType_typeof(), uPtr(l)->NumberType))));
}

// private object Evaluate(Outracks.Simulator.Bytecode.ReadProperty e) [instance] :107
uObject* ScopeClosure::Evaluate15(::g::Outracks::Simulator::Bytecode::ReadProperty* e)
{
    uStackFrame __("Outracks.Simulator.Runtime.ScopeClosure", "Evaluate(Outracks.Simulator.Bytecode.ReadProperty)");
    return ::g::Outracks::Simulator::Runtime::IReflection::GetPropertyValue(uInterface(uPtr(_reflection), ::TYPES[31/*Outracks.Simulator.Runtime.IReflection*/]), Evaluate7(uPtr(e)->Object), uPtr(e)->Property);
}

// private object Evaluate(Outracks.Simulator.Bytecode.ReadStaticField e) [instance] :102
uObject* ScopeClosure::Evaluate16(::g::Outracks::Simulator::Bytecode::ReadStaticField* e)
{
    uStackFrame __("Outracks.Simulator.Runtime.ScopeClosure", "Evaluate(Outracks.Simulator.Bytecode.ReadStaticField)");
    return ::g::Outracks::Simulator::Runtime::IReflection::GetStaticPropertyOrFieldValue(uInterface(uPtr(_reflection), ::TYPES[31/*Outracks.Simulator.Runtime.IReflection*/]), uPtr(uPtr(e)->Field)->TypeName, uPtr(uPtr(e)->Field)->MemberName);
}

// private object Evaluate(Outracks.Simulator.Bytecode.ReadVariable e) [instance] :60
uObject* ScopeClosure::Evaluate17(::g::Outracks::Simulator::Bytecode::ReadVariable* e)
{
    uStackFrame __("Outracks.Simulator.Runtime.ScopeClosure", "Evaluate(Outracks.Simulator.Bytecode.ReadVariable)");
    return uPtr(_scope)->GetValue(uPtr(e)->Variable);
}

// private object Evaluate(Outracks.Simulator.Bytecode.RemoveEventHandler e) [instance] :124
uObject* ScopeClosure::Evaluate18(::g::Outracks::Simulator::Bytecode::RemoveEventHandler* e)
{
    uStackFrame __("Outracks.Simulator.Runtime.ScopeClosure", "Evaluate(Outracks.Simulator.Bytecode.RemoveEventHandler)");
    ::g::Outracks::Simulator::Runtime::IReflection::RemoveEventHandler(uInterface(uPtr(_reflection), ::TYPES[31/*Outracks.Simulator.Runtime.IReflection*/]), Evaluate7(uPtr(e)->Object), uPtr(e)->Event, Evaluate7(uPtr(e)->Handler));
    return NULL;
}

// private object Evaluate(Outracks.Simulator.Bytecode.StringLiteral e) [instance] :277
uObject* ScopeClosure::Evaluate19(::g::Outracks::Simulator::Bytecode::StringLiteral* e)
{
    uStackFrame __("Outracks.Simulator.Runtime.ScopeClosure", "Evaluate(Outracks.Simulator.Bytecode.StringLiteral)");
    return uPtr(e)->StringValue;
}

// private object Evaluate(Outracks.Simulator.Bytecode.WriteProperty p) [instance] :112
uObject* ScopeClosure::Evaluate20(::g::Outracks::Simulator::Bytecode::WriteProperty* p)
{
    uStackFrame __("Outracks.Simulator.Runtime.ScopeClosure", "Evaluate(Outracks.Simulator.Bytecode.WriteProperty)");
    ::g::Outracks::Simulator::Runtime::IReflection::SetPropertyValue(uInterface(uPtr(_reflection), ::TYPES[31/*Outracks.Simulator.Runtime.IReflection*/]), Evaluate7(uPtr(p)->Object), uPtr(p)->Property, Evaluate7(uPtr(p)->Value));
    return NULL;
}

// private object[] Evaluate(Outracks.Simulator.ImmutableList<Outracks.Simulator.Bytecode.Expression> arguments) [instance] :130
uArray* ScopeClosure::Evaluate21(::g::Outracks::Simulator::ImmutableList* arguments)
{
    uStackFrame __("Outracks.Simulator.Runtime.ScopeClosure", "Evaluate(Outracks.Simulator.ImmutableList<Outracks.Simulator.Bytecode.Expression>)");
    ::g::Outracks::Simulator::Bytecode::Expression* ret7;
    uArray* objects = uArray::New(::TYPES[12/*object[]*/], uPtr(arguments)->Count());

    for (int i = 0; i < arguments->Count(); i++)
        uPtr(objects)->Strong<uObject*>(i) = Evaluate7((::g::Outracks::Simulator::ImmutableList__get_Item_fn(uPtr(arguments), uCRef<int>(i), &ret7), ret7));

    return objects;
}

// private object Execute(object lambda, object[] arguments) [instance] :142
uObject* ScopeClosure::Execute(uObject* lambda, uArray* arguments)
{
    uStackFrame __("Outracks.Simulator.Runtime.ScopeClosure", "Execute(object,object[])");
    uDelegate* f0 = uAs<uDelegate*>(lambda, ::TYPES[49/*Uno.Func<object>*/]);

    if (::g::Uno::Delegate::op_Inequality(f0, NULL))
        return uPtr(f0)->Invoke();

    uDelegate* f1 = uAs<uDelegate*>(lambda, ::TYPES[51/*Uno.Func<object, object>*/]);

    if (::g::Uno::Delegate::op_Inequality(f1, NULL))
        return uPtr(f1)->Invoke(1, (uObject*)uPtr(arguments)->Strong<uObject*>(0));

    uDelegate* f2 = uAs<uDelegate*>(lambda, ::TYPES[52/*Uno.Func<object, object, object>*/]);

    if (::g::Uno::Delegate::op_Inequality(f2, NULL))
        return uPtr(f2)->Invoke(2, (uObject*)uPtr(arguments)->Strong<uObject*>(0), (uObject*)uPtr(arguments)->Strong<uObject*>(1));

    uDelegate* f3 = uAs<uDelegate*>(lambda, ::TYPES[53/*Uno.Func<object, object, object, object>*/]);

    if (::g::Uno::Delegate::op_Inequality(f3, NULL))
        return uPtr(f3)->Invoke(3, (uObject*)uPtr(arguments)->Strong<uObject*>(0), (uObject*)uPtr(arguments)->Strong<uObject*>(1), (uObject*)uPtr(arguments)->Strong<uObject*>(2));

    uDelegate* f4 = uAs<uDelegate*>(lambda, ::TYPES[54/*Uno.Func<object, object, object, object, object>*/]);

    if (::g::Uno::Delegate::op_Inequality(f4, NULL))
        return uPtr(f4)->Invoke(4, (uObject*)uPtr(arguments)->Strong<uObject*>(0), (uObject*)uPtr(arguments)->Strong<uObject*>(1), (uObject*)uPtr(arguments)->Strong<uObject*>(2), (uObject*)uPtr(arguments)->Strong<uObject*>(3));

    uDelegate* f5 = uAs<uDelegate*>(lambda, ::TYPES[55/*Uno.Func<object, object, object, object, object, object>*/]);

    if (::g::Uno::Delegate::op_Inequality(f5, NULL))
        return uPtr(f5)->Invoke(5, (uObject*)uPtr(arguments)->Strong<uObject*>(0), (uObject*)uPtr(arguments)->Strong<uObject*>(1), (uObject*)uPtr(arguments)->Strong<uObject*>(2), (uObject*)uPtr(arguments)->Strong<uObject*>(3), (uObject*)uPtr(arguments)->Strong<uObject*>(4));

    uDelegate* f6 = uAs<uDelegate*>(lambda, ::TYPES[56/*Uno.Func<object, object, object, object, object, object, object>*/]);

    if (::g::Uno::Delegate::op_Inequality(f6, NULL))
        return uPtr(f6)->Invoke(6, (uObject*)uPtr(arguments)->Strong<uObject*>(0), (uObject*)uPtr(arguments)->Strong<uObject*>(1), (uObject*)uPtr(arguments)->Strong<uObject*>(2), (uObject*)uPtr(arguments)->Strong<uObject*>(3), (uObject*)uPtr(arguments)->Strong<uObject*>(4), (uObject*)uPtr(arguments)->Strong<uObject*>(5));

    uDelegate* f7 = uAs<uDelegate*>(lambda, ::TYPES[57/*Uno.Func<object, object, object, object, object, object, object, object>*/]);

    if (::g::Uno::Delegate::op_Inequality(f7, NULL))
        return uPtr(f7)->Invoke(7, (uObject*)uPtr(arguments)->Strong<uObject*>(0), (uObject*)uPtr(arguments)->Strong<uObject*>(1), (uObject*)uPtr(arguments)->Strong<uObject*>(2), (uObject*)uPtr(arguments)->Strong<uObject*>(3), (uObject*)uPtr(arguments)->Strong<uObject*>(4), (uObject*)uPtr(arguments)->Strong<uObject*>(5), (uObject*)uPtr(arguments)->Strong<uObject*>(6));

    uDelegate* f8 = uAs<uDelegate*>(lambda, ::TYPES[58/*Uno.Func<object, object, object, object, object, object, object, object, object>*/]);

    if (::g::Uno::Delegate::op_Inequality(f8, NULL))
        return uPtr(f8)->Invoke(8, (uObject*)uPtr(arguments)->Strong<uObject*>(0), (uObject*)uPtr(arguments)->Strong<uObject*>(1), (uObject*)uPtr(arguments)->Strong<uObject*>(2), (uObject*)uPtr(arguments)->Strong<uObject*>(3), (uObject*)uPtr(arguments)->Strong<uObject*>(4), (uObject*)uPtr(arguments)->Strong<uObject*>(5), (uObject*)uPtr(arguments)->Strong<uObject*>(6), (uObject*)uPtr(arguments)->Strong<uObject*>(7));

    uDelegate* f9 = uAs<uDelegate*>(lambda, ::TYPES[59/*Uno.Func<object, object, object, object, object, object, object, object, object, object>*/]);

    if (::g::Uno::Delegate::op_Inequality(f9, NULL))
        return uPtr(f9)->Invoke(9, (uObject*)uPtr(arguments)->Strong<uObject*>(0), (uObject*)uPtr(arguments)->Strong<uObject*>(1), (uObject*)uPtr(arguments)->Strong<uObject*>(2), (uObject*)uPtr(arguments)->Strong<uObject*>(3), (uObject*)uPtr(arguments)->Strong<uObject*>(4), (uObject*)uPtr(arguments)->Strong<uObject*>(5), (uObject*)uPtr(arguments)->Strong<uObject*>(6), (uObject*)uPtr(arguments)->Strong<uObject*>(7), (uObject*)uPtr(arguments)->Strong<uObject*>(8));

    uDelegate* f10 = uAs<uDelegate*>(lambda, ::TYPES[60/*Uno.Func<object, object, object, object, object, object, object, object, object, object, object>*/]);

    if (::g::Uno::Delegate::op_Inequality(f10, NULL))
        return uPtr(f10)->Invoke(10, (uObject*)uPtr(arguments)->Strong<uObject*>(0), (uObject*)uPtr(arguments)->Strong<uObject*>(1), (uObject*)uPtr(arguments)->Strong<uObject*>(2), (uObject*)uPtr(arguments)->Strong<uObject*>(3), (uObject*)uPtr(arguments)->Strong<uObject*>(4), (uObject*)uPtr(arguments)->Strong<uObject*>(5), (uObject*)uPtr(arguments)->Strong<uObject*>(6), (uObject*)uPtr(arguments)->Strong<uObject*>(7), (uObject*)uPtr(arguments)->Strong<uObject*>(8), (uObject*)uPtr(arguments)->Strong<uObject*>(9));

    uDelegate* f11 = uAs<uDelegate*>(lambda, ::TYPES[61/*Uno.Func<object, object, object, object, object, object, object, object, object, object, object, object>*/]);

    if (::g::Uno::Delegate::op_Inequality(f11, NULL))
        return uPtr(f11)->Invoke(11, (uObject*)uPtr(arguments)->Strong<uObject*>(0), (uObject*)uPtr(arguments)->Strong<uObject*>(1), (uObject*)uPtr(arguments)->Strong<uObject*>(2), (uObject*)uPtr(arguments)->Strong<uObject*>(3), (uObject*)uPtr(arguments)->Strong<uObject*>(4), (uObject*)uPtr(arguments)->Strong<uObject*>(5), (uObject*)uPtr(arguments)->Strong<uObject*>(6), (uObject*)uPtr(arguments)->Strong<uObject*>(7), (uObject*)uPtr(arguments)->Strong<uObject*>(8), (uObject*)uPtr(arguments)->Strong<uObject*>(9), (uObject*)uPtr(arguments)->Strong<uObject*>(10));

    uDelegate* f12 = uAs<uDelegate*>(lambda, ::TYPES[62/*Uno.Func<object, object, object, object, object, object, object, object, object, object, object, object, object>*/]);

    if (::g::Uno::Delegate::op_Inequality(f12, NULL))
        return uPtr(f12)->Invoke(12, (uObject*)uPtr(arguments)->Strong<uObject*>(0), (uObject*)uPtr(arguments)->Strong<uObject*>(1), (uObject*)uPtr(arguments)->Strong<uObject*>(2), (uObject*)uPtr(arguments)->Strong<uObject*>(3), (uObject*)uPtr(arguments)->Strong<uObject*>(4), (uObject*)uPtr(arguments)->Strong<uObject*>(5), (uObject*)uPtr(arguments)->Strong<uObject*>(6), (uObject*)uPtr(arguments)->Strong<uObject*>(7), (uObject*)uPtr(arguments)->Strong<uObject*>(8), (uObject*)uPtr(arguments)->Strong<uObject*>(9), (uObject*)uPtr(arguments)->Strong<uObject*>(10), (uObject*)uPtr(arguments)->Strong<uObject*>(11));

    uDelegate* f13 = uAs<uDelegate*>(lambda, ::TYPES[63/*Uno.Func<object, object, object, object, object, object, object, object, object, object, object, object, object, object>*/]);

    if (::g::Uno::Delegate::op_Inequality(f13, NULL))
        return uPtr(f13)->Invoke(13, (uObject*)uPtr(arguments)->Strong<uObject*>(0), (uObject*)uPtr(arguments)->Strong<uObject*>(1), (uObject*)uPtr(arguments)->Strong<uObject*>(2), (uObject*)uPtr(arguments)->Strong<uObject*>(3), (uObject*)uPtr(arguments)->Strong<uObject*>(4), (uObject*)uPtr(arguments)->Strong<uObject*>(5), (uObject*)uPtr(arguments)->Strong<uObject*>(6), (uObject*)uPtr(arguments)->Strong<uObject*>(7), (uObject*)uPtr(arguments)->Strong<uObject*>(8), (uObject*)uPtr(arguments)->Strong<uObject*>(9), (uObject*)uPtr(arguments)->Strong<uObject*>(10), (uObject*)uPtr(arguments)->Strong<uObject*>(11), (uObject*)uPtr(arguments)->Strong<uObject*>(12));

    uDelegate* f14 = uAs<uDelegate*>(lambda, ::TYPES[64/*Uno.Func<object, object, object, object, object, object, object, object, object, object, object, object, object, object, object>*/]);

    if (::g::Uno::Delegate::op_Inequality(f14, NULL))
        return uPtr(f14)->Invoke(14, (uObject*)uPtr(arguments)->Strong<uObject*>(0), (uObject*)uPtr(arguments)->Strong<uObject*>(1), (uObject*)uPtr(arguments)->Strong<uObject*>(2), (uObject*)uPtr(arguments)->Strong<uObject*>(3), (uObject*)uPtr(arguments)->Strong<uObject*>(4), (uObject*)uPtr(arguments)->Strong<uObject*>(5), (uObject*)uPtr(arguments)->Strong<uObject*>(6), (uObject*)uPtr(arguments)->Strong<uObject*>(7), (uObject*)uPtr(arguments)->Strong<uObject*>(8), (uObject*)uPtr(arguments)->Strong<uObject*>(9), (uObject*)uPtr(arguments)->Strong<uObject*>(10), (uObject*)uPtr(arguments)->Strong<uObject*>(11), (uObject*)uPtr(arguments)->Strong<uObject*>(12), (uObject*)uPtr(arguments)->Strong<uObject*>(13));

    uDelegate* f15 = uAs<uDelegate*>(lambda, ::TYPES[65/*Uno.Func<object, object, object, object, object, object, object, object, object, object, object, object, object, object, object, object>*/]);

    if (::g::Uno::Delegate::op_Inequality(f15, NULL))
        return uPtr(f15)->Invoke(15, (uObject*)uPtr(arguments)->Strong<uObject*>(0), (uObject*)uPtr(arguments)->Strong<uObject*>(1), (uObject*)uPtr(arguments)->Strong<uObject*>(2), (uObject*)uPtr(arguments)->Strong<uObject*>(3), (uObject*)uPtr(arguments)->Strong<uObject*>(4), (uObject*)uPtr(arguments)->Strong<uObject*>(5), (uObject*)uPtr(arguments)->Strong<uObject*>(6), (uObject*)uPtr(arguments)->Strong<uObject*>(7), (uObject*)uPtr(arguments)->Strong<uObject*>(8), (uObject*)uPtr(arguments)->Strong<uObject*>(9), (uObject*)uPtr(arguments)->Strong<uObject*>(10), (uObject*)uPtr(arguments)->Strong<uObject*>(11), (uObject*)uPtr(arguments)->Strong<uObject*>(12), (uObject*)uPtr(arguments)->Strong<uObject*>(13), (uObject*)uPtr(arguments)->Strong<uObject*>(14));

    uDelegate* f16 = uAs<uDelegate*>(lambda, ::TYPES[88/*Uno.Func<object, object, object, object, object, object, object, object, object, object, object, object, object, object, object, object, object>*/]);

    if (::g::Uno::Delegate::op_Inequality(f16, NULL))
        return uPtr(f16)->Invoke(16, (uObject*)uPtr(arguments)->Strong<uObject*>(0), (uObject*)uPtr(arguments)->Strong<uObject*>(1), (uObject*)uPtr(arguments)->Strong<uObject*>(2), (uObject*)uPtr(arguments)->Strong<uObject*>(3), (uObject*)uPtr(arguments)->Strong<uObject*>(4), (uObject*)uPtr(arguments)->Strong<uObject*>(5), (uObject*)uPtr(arguments)->Strong<uObject*>(6), (uObject*)uPtr(arguments)->Strong<uObject*>(7), (uObject*)uPtr(arguments)->Strong<uObject*>(8), (uObject*)uPtr(arguments)->Strong<uObject*>(9), (uObject*)uPtr(arguments)->Strong<uObject*>(10), (uObject*)uPtr(arguments)->Strong<uObject*>(11), (uObject*)uPtr(arguments)->Strong<uObject*>(12), (uObject*)uPtr(arguments)->Strong<uObject*>(13), (uObject*)uPtr(arguments)->Strong<uObject*>(14), (uObject*)uPtr(arguments)->Strong<uObject*>(15));

    uDelegate* a0 = uAs<uDelegate*>(lambda, ::TYPES[66/*Uno.Action*/]);

    if (::g::Uno::Delegate::op_Inequality(a0, NULL))
        uPtr(a0)->InvokeVoid();

    uDelegate* a1 = uAs<uDelegate*>(lambda, ::TYPES[67/*Uno.Action<object>*/]);

    if (::g::Uno::Delegate::op_Inequality(a1, NULL))
        uPtr(a1)->InvokeVoid(uPtr(arguments)->Strong<uObject*>(0));

    uDelegate* a2 = uAs<uDelegate*>(lambda, ::TYPES[68/*Uno.Action<object, object>*/]);

    if (::g::Uno::Delegate::op_Inequality(a2, NULL))
        uPtr(a2)->Invoke(2, (uObject*)uPtr(arguments)->Strong<uObject*>(0), (uObject*)uPtr(arguments)->Strong<uObject*>(1));

    uDelegate* a3 = uAs<uDelegate*>(lambda, ::TYPES[69/*Uno.Action<object, object, object>*/]);

    if (::g::Uno::Delegate::op_Inequality(a3, NULL))
        uPtr(a3)->Invoke(3, (uObject*)uPtr(arguments)->Strong<uObject*>(0), (uObject*)uPtr(arguments)->Strong<uObject*>(1), (uObject*)uPtr(arguments)->Strong<uObject*>(2));

    uDelegate* a4 = uAs<uDelegate*>(lambda, ::TYPES[70/*Uno.Action<object, object, object, object>*/]);

    if (::g::Uno::Delegate::op_Inequality(a4, NULL))
        uPtr(a4)->Invoke(4, (uObject*)uPtr(arguments)->Strong<uObject*>(0), (uObject*)uPtr(arguments)->Strong<uObject*>(1), (uObject*)uPtr(arguments)->Strong<uObject*>(2), (uObject*)uPtr(arguments)->Strong<uObject*>(3));

    uDelegate* a5 = uAs<uDelegate*>(lambda, ::TYPES[71/*Uno.Action<object, object, object, object, object>*/]);

    if (::g::Uno::Delegate::op_Inequality(a5, NULL))
        uPtr(a5)->Invoke(5, (uObject*)uPtr(arguments)->Strong<uObject*>(0), (uObject*)uPtr(arguments)->Strong<uObject*>(1), (uObject*)uPtr(arguments)->Strong<uObject*>(2), (uObject*)uPtr(arguments)->Strong<uObject*>(3), (uObject*)uPtr(arguments)->Strong<uObject*>(4));

    uDelegate* a6 = uAs<uDelegate*>(lambda, ::TYPES[72/*Uno.Action<object, object, object, object, object, object>*/]);

    if (::g::Uno::Delegate::op_Inequality(a6, NULL))
        uPtr(a6)->Invoke(6, (uObject*)uPtr(arguments)->Strong<uObject*>(0), (uObject*)uPtr(arguments)->Strong<uObject*>(1), (uObject*)uPtr(arguments)->Strong<uObject*>(2), (uObject*)uPtr(arguments)->Strong<uObject*>(3), (uObject*)uPtr(arguments)->Strong<uObject*>(4), (uObject*)uPtr(arguments)->Strong<uObject*>(5));

    uDelegate* a7 = uAs<uDelegate*>(lambda, ::TYPES[73/*Uno.Action<object, object, object, object, object, object, object>*/]);

    if (::g::Uno::Delegate::op_Inequality(a7, NULL))
        uPtr(a7)->Invoke(7, (uObject*)uPtr(arguments)->Strong<uObject*>(0), (uObject*)uPtr(arguments)->Strong<uObject*>(1), (uObject*)uPtr(arguments)->Strong<uObject*>(2), (uObject*)uPtr(arguments)->Strong<uObject*>(3), (uObject*)uPtr(arguments)->Strong<uObject*>(4), (uObject*)uPtr(arguments)->Strong<uObject*>(5), (uObject*)uPtr(arguments)->Strong<uObject*>(6));

    uDelegate* a8 = uAs<uDelegate*>(lambda, ::TYPES[74/*Uno.Action<object, object, object, object, object, object, object, object>*/]);

    if (::g::Uno::Delegate::op_Inequality(a8, NULL))
        uPtr(a8)->Invoke(8, (uObject*)uPtr(arguments)->Strong<uObject*>(0), (uObject*)uPtr(arguments)->Strong<uObject*>(1), (uObject*)uPtr(arguments)->Strong<uObject*>(2), (uObject*)uPtr(arguments)->Strong<uObject*>(3), (uObject*)uPtr(arguments)->Strong<uObject*>(4), (uObject*)uPtr(arguments)->Strong<uObject*>(5), (uObject*)uPtr(arguments)->Strong<uObject*>(6), (uObject*)uPtr(arguments)->Strong<uObject*>(7));

    uDelegate* a9 = uAs<uDelegate*>(lambda, ::TYPES[75/*Uno.Action<object, object, object, object, object, object, object, object, object>*/]);

    if (::g::Uno::Delegate::op_Inequality(a9, NULL))
        uPtr(a9)->Invoke(9, (uObject*)uPtr(arguments)->Strong<uObject*>(0), (uObject*)uPtr(arguments)->Strong<uObject*>(1), (uObject*)uPtr(arguments)->Strong<uObject*>(2), (uObject*)uPtr(arguments)->Strong<uObject*>(3), (uObject*)uPtr(arguments)->Strong<uObject*>(4), (uObject*)uPtr(arguments)->Strong<uObject*>(5), (uObject*)uPtr(arguments)->Strong<uObject*>(6), (uObject*)uPtr(arguments)->Strong<uObject*>(7), (uObject*)uPtr(arguments)->Strong<uObject*>(8));

    uDelegate* a10 = uAs<uDelegate*>(lambda, ::TYPES[76/*Uno.Action<object, object, object, object, object, object, object, object, object, object>*/]);

    if (::g::Uno::Delegate::op_Inequality(a10, NULL))
        uPtr(a10)->Invoke(10, (uObject*)uPtr(arguments)->Strong<uObject*>(0), (uObject*)uPtr(arguments)->Strong<uObject*>(1), (uObject*)uPtr(arguments)->Strong<uObject*>(2), (uObject*)uPtr(arguments)->Strong<uObject*>(3), (uObject*)uPtr(arguments)->Strong<uObject*>(4), (uObject*)uPtr(arguments)->Strong<uObject*>(5), (uObject*)uPtr(arguments)->Strong<uObject*>(6), (uObject*)uPtr(arguments)->Strong<uObject*>(7), (uObject*)uPtr(arguments)->Strong<uObject*>(8), (uObject*)uPtr(arguments)->Strong<uObject*>(9));

    uDelegate* a11 = uAs<uDelegate*>(lambda, ::TYPES[77/*Uno.Action<object, object, object, object, object, object, object, object, object, object, object>*/]);

    if (::g::Uno::Delegate::op_Inequality(a11, NULL))
        uPtr(a11)->Invoke(11, (uObject*)uPtr(arguments)->Strong<uObject*>(0), (uObject*)uPtr(arguments)->Strong<uObject*>(1), (uObject*)uPtr(arguments)->Strong<uObject*>(2), (uObject*)uPtr(arguments)->Strong<uObject*>(3), (uObject*)uPtr(arguments)->Strong<uObject*>(4), (uObject*)uPtr(arguments)->Strong<uObject*>(5), (uObject*)uPtr(arguments)->Strong<uObject*>(6), (uObject*)uPtr(arguments)->Strong<uObject*>(7), (uObject*)uPtr(arguments)->Strong<uObject*>(8), (uObject*)uPtr(arguments)->Strong<uObject*>(9), (uObject*)uPtr(arguments)->Strong<uObject*>(10));

    uDelegate* a12 = uAs<uDelegate*>(lambda, ::TYPES[78/*Uno.Action<object, object, object, object, object, object, object, object, object, object, object, object>*/]);

    if (::g::Uno::Delegate::op_Inequality(a12, NULL))
        uPtr(a12)->Invoke(12, (uObject*)uPtr(arguments)->Strong<uObject*>(0), (uObject*)uPtr(arguments)->Strong<uObject*>(1), (uObject*)uPtr(arguments)->Strong<uObject*>(2), (uObject*)uPtr(arguments)->Strong<uObject*>(3), (uObject*)uPtr(arguments)->Strong<uObject*>(4), (uObject*)uPtr(arguments)->Strong<uObject*>(5), (uObject*)uPtr(arguments)->Strong<uObject*>(6), (uObject*)uPtr(arguments)->Strong<uObject*>(7), (uObject*)uPtr(arguments)->Strong<uObject*>(8), (uObject*)uPtr(arguments)->Strong<uObject*>(9), (uObject*)uPtr(arguments)->Strong<uObject*>(10), (uObject*)uPtr(arguments)->Strong<uObject*>(11));

    uDelegate* a13 = uAs<uDelegate*>(lambda, ::TYPES[79/*Uno.Action<object, object, object, object, object, object, object, object, object, object, object, object, object>*/]);

    if (::g::Uno::Delegate::op_Inequality(a13, NULL))
        uPtr(a13)->Invoke(13, (uObject*)uPtr(arguments)->Strong<uObject*>(0), (uObject*)uPtr(arguments)->Strong<uObject*>(1), (uObject*)uPtr(arguments)->Strong<uObject*>(2), (uObject*)uPtr(arguments)->Strong<uObject*>(3), (uObject*)uPtr(arguments)->Strong<uObject*>(4), (uObject*)uPtr(arguments)->Strong<uObject*>(5), (uObject*)uPtr(arguments)->Strong<uObject*>(6), (uObject*)uPtr(arguments)->Strong<uObject*>(7), (uObject*)uPtr(arguments)->Strong<uObject*>(8), (uObject*)uPtr(arguments)->Strong<uObject*>(9), (uObject*)uPtr(arguments)->Strong<uObject*>(10), (uObject*)uPtr(arguments)->Strong<uObject*>(11), (uObject*)uPtr(arguments)->Strong<uObject*>(12));

    uDelegate* a14 = uAs<uDelegate*>(lambda, ::TYPES[80/*Uno.Action<object, object, object, object, object, object, object, object, object, object, object, object, object, object>*/]);

    if (::g::Uno::Delegate::op_Inequality(a14, NULL))
        uPtr(a14)->Invoke(14, (uObject*)uPtr(arguments)->Strong<uObject*>(0), (uObject*)uPtr(arguments)->Strong<uObject*>(1), (uObject*)uPtr(arguments)->Strong<uObject*>(2), (uObject*)uPtr(arguments)->Strong<uObject*>(3), (uObject*)uPtr(arguments)->Strong<uObject*>(4), (uObject*)uPtr(arguments)->Strong<uObject*>(5), (uObject*)uPtr(arguments)->Strong<uObject*>(6), (uObject*)uPtr(arguments)->Strong<uObject*>(7), (uObject*)uPtr(arguments)->Strong<uObject*>(8), (uObject*)uPtr(arguments)->Strong<uObject*>(9), (uObject*)uPtr(arguments)->Strong<uObject*>(10), (uObject*)uPtr(arguments)->Strong<uObject*>(11), (uObject*)uPtr(arguments)->Strong<uObject*>(12), (uObject*)uPtr(arguments)->Strong<uObject*>(13));

    uDelegate* a15 = uAs<uDelegate*>(lambda, ::TYPES[81/*Uno.Action<object, object, object, object, object, object, object, object, object, object, object, object, object, object, object>*/]);

    if (::g::Uno::Delegate::op_Inequality(a15, NULL))
        uPtr(a15)->Invoke(15, (uObject*)uPtr(arguments)->Strong<uObject*>(0), (uObject*)uPtr(arguments)->Strong<uObject*>(1), (uObject*)uPtr(arguments)->Strong<uObject*>(2), (uObject*)uPtr(arguments)->Strong<uObject*>(3), (uObject*)uPtr(arguments)->Strong<uObject*>(4), (uObject*)uPtr(arguments)->Strong<uObject*>(5), (uObject*)uPtr(arguments)->Strong<uObject*>(6), (uObject*)uPtr(arguments)->Strong<uObject*>(7), (uObject*)uPtr(arguments)->Strong<uObject*>(8), (uObject*)uPtr(arguments)->Strong<uObject*>(9), (uObject*)uPtr(arguments)->Strong<uObject*>(10), (uObject*)uPtr(arguments)->Strong<uObject*>(11), (uObject*)uPtr(arguments)->Strong<uObject*>(12), (uObject*)uPtr(arguments)->Strong<uObject*>(13), (uObject*)uPtr(arguments)->Strong<uObject*>(14));

    uDelegate* a16 = uAs<uDelegate*>(lambda, ::TYPES[89/*Uno.Action<object, object, object, object, object, object, object, object, object, object, object, object, object, object, object, object>*/]);

    if (::g::Uno::Delegate::op_Inequality(a16, NULL))
        uPtr(a16)->Invoke(16, (uObject*)uPtr(arguments)->Strong<uObject*>(0), (uObject*)uPtr(arguments)->Strong<uObject*>(1), (uObject*)uPtr(arguments)->Strong<uObject*>(2), (uObject*)uPtr(arguments)->Strong<uObject*>(3), (uObject*)uPtr(arguments)->Strong<uObject*>(4), (uObject*)uPtr(arguments)->Strong<uObject*>(5), (uObject*)uPtr(arguments)->Strong<uObject*>(6), (uObject*)uPtr(arguments)->Strong<uObject*>(7), (uObject*)uPtr(arguments)->Strong<uObject*>(8), (uObject*)uPtr(arguments)->Strong<uObject*>(9), (uObject*)uPtr(arguments)->Strong<uObject*>(10), (uObject*)uPtr(arguments)->Strong<uObject*>(11), (uObject*)uPtr(arguments)->Strong<uObject*>(12), (uObject*)uPtr(arguments)->Strong<uObject*>(13), (uObject*)uPtr(arguments)->Strong<uObject*>(14), (uObject*)uPtr(arguments)->Strong<uObject*>(15));

    return NULL;
}

// public object Execute(Outracks.Simulator.Bytecode.Lambda lambda, object[] arguments) [instance] :23
uObject* ScopeClosure::Execute1(::g::Outracks::Simulator::Bytecode::Lambda* lambda, uArray* arguments)
{
    uStackFrame __("Outracks.Simulator.Runtime.ScopeClosure", "Execute(Outracks.Simulator.Bytecode.Lambda,object[])");
    ::g::Outracks::Optional1<uStrong< ::g::Outracks::Simulator::Runtime::Environment*> > ret8;
    ::g::Outracks::Simulator::Bytecode::BindVariable* ret9;
    ::g::Outracks::Simulator::Runtime::Environment* bodyEnv = ::g::Outracks::Simulator::Runtime::Environment::New1((::g::Outracks::Optional1__op_Implicit_fn(::TYPES[10/*Outracks.Optional<Outracks.Simulator.Runtime.Environment>*/], _scope, &ret8), ret8));
    ScopeClosure* bodyClosure = ScopeClosure::New1(bodyEnv, _reflection);
    bodyEnv->Bind1(uPtr(uPtr(lambda)->Signature)->Parameters, arguments);
    uObject* enum1 = (uObject*)uPtr(uPtr(lambda)->LocalVariables)->GetEnumerator();

    try
    {
        {
            while (::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::TYPES[3/*Uno.Collections.IEnumerator*/])))
            {
                ::g::Outracks::Simulator::Bytecode::BindVariable* b = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[90/*Uno.Collections.IEnumerator<Outracks.Simulator.Bytecode.BindVariable>*/]), &ret9), ret9);
                uPtr(bodyEnv)->Bind(uPtr(b)->Variable, uPtr(bodyClosure)->Evaluate7(uPtr(b)->Expression));
            }
        }
        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum1), ::TYPES[5/*Uno.IDisposable*/]));
        }
    }

    catch (const uThrowable& __t)
    {
        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum1), ::TYPES[5/*Uno.IDisposable*/]));
        }
                throw __t;
    }

    return bodyClosure->Execute2((uObject*)lambda->Statements);
}

// private object Execute(Uno.Collections.IEnumerable<Outracks.Simulator.Bytecode.Statement> statements) [instance] :36
uObject* ScopeClosure::Execute2(uObject* statements)
{
    uStackFrame __("Outracks.Simulator.Runtime.ScopeClosure", "Execute(Uno.Collections.IEnumerable<Outracks.Simulator.Bytecode.Statement>)");
    ::g::Outracks::Simulator::Bytecode::Statement* ret10;
    uObject* enum2 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(statements), ::TYPES[91/*Uno.Collections.IEnumerable<Outracks.Simulator.Bytecode.Statement>*/]));

    try
    {
        {
            while (::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum2), ::TYPES[3/*Uno.Collections.IEnumerator*/])))
            {
                ::g::Outracks::Simulator::Bytecode::Statement* statement = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum2), ::TYPES[92/*Uno.Collections.IEnumerator<Outracks.Simulator.Bytecode.Statement>*/]), &ret10), ret10);
                ::g::Outracks::Simulator::Bytecode::Expression* e = uAs< ::g::Outracks::Simulator::Bytecode::Expression*>(statement, ::TYPES[93/*Outracks.Simulator.Bytecode.Expression*/]);

                if (e != NULL)
                    Evaluate7(e);

                ::g::Outracks::Simulator::Bytecode::Return* r = uAs< ::g::Outracks::Simulator::Bytecode::Return*>(statement, ::TYPES[94/*Outracks.Simulator.Bytecode.Return*/]);

                if (r != NULL)
                {
                    uObject* __uno_retval = Evaluate7(uPtr(r)->Value);
                    ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum2), ::TYPES[5/*Uno.IDisposable*/]));
                    return __uno_retval;
                }
            }
        }
        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum2), ::TYPES[5/*Uno.IDisposable*/]));
        }
    }

    catch (const uThrowable& __t)
    {
        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum2), ::TYPES[5/*Uno.IDisposable*/]));
        }
                throw __t;
    }

    return NULL;
}

// public ScopeClosure New(Outracks.Simulator.Runtime.Environment scope, Outracks.Simulator.Runtime.IReflection reflection) [static] :13
ScopeClosure* ScopeClosure::New1(::g::Outracks::Simulator::Runtime::Environment* scope, uObject* reflection)
{
    ScopeClosure* obj4 = (ScopeClosure*)uNew(ScopeClosure_typeof());
    obj4->ctor_(scope, reflection);
    return obj4;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/Runtime/Reflection/NativeReflection.cs
// --------------------------------------------------------------------------------------------------------

// public sealed extern class SimpleTypeMap :19
// {
static void SimpleTypeMap_build(uType* type)
{
    ::STRINGS[15] = uString::Const("object");
    ::STRINGS[16] = uString::Const("string");
    ::STRINGS[17] = uString::Const("texture2D");
    ::STRINGS[18] = uString::Const("textureCube");
    ::STRINGS[19] = uString::Const("bool");
    ::STRINGS[20] = uString::Const("char");
    ::STRINGS[21] = uString::Const("byte");
    ::STRINGS[22] = uString::Const("byte2");
    ::STRINGS[23] = uString::Const("byte4");
    ::STRINGS[24] = uString::Const("sbyte");
    ::STRINGS[25] = uString::Const("sbyte2");
    ::STRINGS[26] = uString::Const("sbyte4");
    ::STRINGS[27] = uString::Const("short");
    ::STRINGS[28] = uString::Const("short2");
    ::STRINGS[29] = uString::Const("short4");
    ::STRINGS[30] = uString::Const("ushort");
    ::STRINGS[31] = uString::Const("ushort2");
    ::STRINGS[32] = uString::Const("ushort4");
    ::STRINGS[33] = uString::Const("int");
    ::STRINGS[34] = uString::Const("int2");
    ::STRINGS[35] = uString::Const("int3");
    ::STRINGS[36] = uString::Const("int4");
    ::STRINGS[37] = uString::Const("uint");
    ::STRINGS[38] = uString::Const("long");
    ::STRINGS[39] = uString::Const("ulong");
    ::STRINGS[40] = uString::Const("float");
    ::STRINGS[41] = uString::Const("float2");
    ::STRINGS[42] = uString::Const("float3");
    ::STRINGS[43] = uString::Const("float4");
    ::STRINGS[44] = uString::Const("float2x2");
    ::STRINGS[45] = uString::Const("float3x3");
    ::STRINGS[46] = uString::Const("float4x4");
    ::STRINGS[47] = uString::Const("double");
    ::STRINGS[48] = uString::Const("'");
    ::STRINGS[49] = uString::Const("' was not found");
    ::STRINGS[50] = uString::Const("' is not a closed type");
    ::TYPES[95] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::Type_typeof(), NULL);
    ::TYPES[96] = ::g::Uno::Type_typeof();
    ::TYPES[16] = ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(9/*ToArray<Uno.Type>*/, ::TYPES[96/*Uno.Type*/], NULL);
    ::TYPES[97] = ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(7/*Select<Outracks.Simulator.Bytecode.TypeName, Uno.Type>*/, ::g::Outracks::Simulator::Bytecode::TypeName_typeof(), ::TYPES[96/*Uno.Type*/], NULL);
    ::TYPES[98] = ::g::Uno::Func1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::TypeName_typeof(), ::TYPES[96/*Uno.Type*/], NULL);
    type->SetDependencies(
        ::g::Uno::Type_typeof());
    type->SetInterfaces(
        ::g::Outracks::Simulator::Runtime::ITypeMap_typeof(), offsetof(SimpleTypeMap_type, interface0));
    type->SetFields(0,
        ::TYPES[95/*Uno.Collections.Dictionary<string, Uno.Type>*/], offsetof(SimpleTypeMap, _builtins), 0);
    type->Reflection.SetFunctions(3,
        new uFunction(".ctor", NULL, (void*)SimpleTypeMap__New1_fn, 0, true, type, 0),
        new uFunction("ResolveType", NULL, (void*)SimpleTypeMap__ResolveType_fn, 0, false, ::TYPES[96/*Uno.Type*/], 1, ::g::Outracks::Simulator::Bytecode::Parameter_typeof()),
        new uFunction("ResolveType", NULL, (void*)SimpleTypeMap__ResolveType1_fn, 0, false, ::TYPES[96/*Uno.Type*/], 1, ::g::Outracks::Simulator::Bytecode::TypeName_typeof()));
}

SimpleTypeMap_type* SimpleTypeMap_typeof()
{
    static uSStrong<SimpleTypeMap_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(SimpleTypeMap);
    options.TypeSize = sizeof(SimpleTypeMap_type);
    type = (SimpleTypeMap_type*)uClassType::New("Outracks.Simulator.Runtime.SimpleTypeMap", options);
    type->fp_build_ = SimpleTypeMap_build;
    type->fp_ctor_ = (void*)SimpleTypeMap__New1_fn;
    type->interface0.fp_ResolveType1 = (void(*)(uObject*, ::g::Outracks::Simulator::Bytecode::TypeName*, uType**))SimpleTypeMap__ResolveType1_fn;
    type->interface0.fp_ResolveType = (void(*)(uObject*, ::g::Outracks::Simulator::Bytecode::Parameter*, uType**))SimpleTypeMap__ResolveType_fn;
    return type;
}

// public generated SimpleTypeMap() :19
void SimpleTypeMap__ctor__fn(SimpleTypeMap* __this)
{
    __this->ctor_();
}

// public generated SimpleTypeMap New() :19
void SimpleTypeMap__New1_fn(SimpleTypeMap** __retval)
{
    *__retval = SimpleTypeMap::New1();
}

// public Uno.Type ResolveType(Outracks.Simulator.Bytecode.Parameter parameter) :59
void SimpleTypeMap__ResolveType_fn(SimpleTypeMap* __this, ::g::Outracks::Simulator::Bytecode::Parameter* parameter, uType** __retval)
{
    *__retval = __this->ResolveType(parameter);
}

// public Uno.Type ResolveType(Outracks.Simulator.Bytecode.TypeName typeName) :64
void SimpleTypeMap__ResolveType1_fn(SimpleTypeMap* __this, ::g::Outracks::Simulator::Bytecode::TypeName* typeName, uType** __retval)
{
    *__retval = __this->ResolveType1(typeName);
}

// public generated SimpleTypeMap() [instance] :19
void SimpleTypeMap::ctor_()
{
    uStackFrame __("Outracks.Simulator.Runtime.SimpleTypeMap", ".ctor()");
    ::g::Uno::Collections::Dictionary* collection1;
    _builtins = (collection1 = (::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[95/*Uno.Collections.Dictionary<string, Uno.Type>*/]), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection1), ::STRINGS[15/*"object"*/], uObject_typeof()), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection1), ::STRINGS[16/*"string"*/], ::g::Uno::String_typeof()), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection1), ::STRINGS[17/*"texture2D"*/], ::g::Uno::Graphics::Texture2D_typeof()), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection1), ::STRINGS[18/*"textureCube"*/], ::g::Uno::Graphics::TextureCube_typeof()), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection1), ::STRINGS[19/*"bool"*/], ::g::Uno::Bool_typeof()), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection1), ::STRINGS[20/*"char"*/], ::g::Uno::Char_typeof()), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection1), ::STRINGS[21/*"byte"*/], ::g::Uno::Byte_typeof()), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection1), ::STRINGS[22/*"byte2"*/], ::g::Uno::Byte2_typeof()), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection1), ::STRINGS[23/*"byte4"*/], ::g::Uno::Byte4_typeof()), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection1), ::STRINGS[24/*"sbyte"*/], ::g::Uno::SByte_typeof()), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection1), ::STRINGS[25/*"sbyte2"*/], ::g::Uno::SByte2_typeof()), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection1), ::STRINGS[26/*"sbyte4"*/], ::g::Uno::SByte4_typeof()), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection1), ::STRINGS[27/*"short"*/], ::g::Uno::Short_typeof()), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection1), ::STRINGS[28/*"short2"*/], ::g::Uno::Short2_typeof()), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection1), ::STRINGS[29/*"short4"*/], ::g::Uno::Short4_typeof()), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection1), ::STRINGS[30/*"ushort"*/], ::g::Uno::UShort_typeof()), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection1), ::STRINGS[31/*"ushort2"*/], ::g::Uno::UShort2_typeof()), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection1), ::STRINGS[32/*"ushort4"*/], ::g::Uno::UShort4_typeof()), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection1), ::STRINGS[33/*"int"*/], ::g::Uno::Int_typeof()), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection1), ::STRINGS[34/*"int2"*/], ::g::Uno::Int2_typeof()), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection1), ::STRINGS[35/*"int3"*/], ::g::Uno::Int3_typeof()), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection1), ::STRINGS[36/*"int4"*/], ::g::Uno::Int4_typeof()), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection1), ::STRINGS[37/*"uint"*/], ::g::Uno::UInt_typeof()), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection1), ::STRINGS[38/*"long"*/], ::g::Uno::Long_typeof()), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection1), ::STRINGS[39/*"ulong"*/], ::g::Uno::ULong_typeof()), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection1), ::STRINGS[40/*"float"*/], ::g::Uno::Float_typeof()), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection1), ::STRINGS[41/*"float2"*/], ::g::Uno::Float2_typeof()), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection1), ::STRINGS[42/*"float3"*/], ::g::Uno::Float3_typeof()), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection1), ::STRINGS[43/*"float4"*/], ::g::Uno::Float4_typeof()), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection1), ::STRINGS[44/*"float2x2"*/], ::g::Uno::Float2x2_typeof()), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection1), ::STRINGS[45/*"float3x3"*/], ::g::Uno::Float3x3_typeof()), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection1), ::STRINGS[46/*"float4x4"*/], ::g::Uno::Float4x4_typeof()), ::g::Uno::Collections::Dictionary__Add_fn(uPtr(collection1), ::STRINGS[47/*"double"*/], ::g::Uno::Double_typeof()), collection1);
}

// public Uno.Type ResolveType(Outracks.Simulator.Bytecode.Parameter parameter) [instance] :59
uType* SimpleTypeMap::ResolveType(::g::Outracks::Simulator::Bytecode::Parameter* parameter)
{
    uStackFrame __("Outracks.Simulator.Runtime.SimpleTypeMap", "ResolveType(Outracks.Simulator.Bytecode.Parameter)");
    return ResolveType1(uPtr(parameter)->Type);
}

// public Uno.Type ResolveType(Outracks.Simulator.Bytecode.TypeName typeName) [instance] :64
uType* SimpleTypeMap::ResolveType1(::g::Outracks::Simulator::Bytecode::TypeName* typeName)
{
    uStackFrame __("Outracks.Simulator.Runtime.SimpleTypeMap", "ResolveType(Outracks.Simulator.Bytecode.TypeName)");
    bool ret3;
    uType* t = ::g::Uno::Type::GetType1(uPtr(uPtr(typeName)->WithGenericSuffix())->FullName());

    if (::g::Uno::Type::op_Equality(t, NULL) && !(::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(_builtins), typeName->FullName(), (void**)(&t), &ret3), ret3))
        U_THROW(::g::Uno::InvalidOperationException::New5(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[48/*"'"*/], typeName), ::STRINGS[49/*"' was not f...*/])));

    if (typeName->IsParameterizedGenericType())
        t = ::g::Uno::Type::MakeGenericType(uPtr(t), (uArray*)::g::Uno::Collections::EnumerableExtensions::ToArray(::TYPES[16/*Uno.Collections.EnumerableExtensions.ToArray<Uno.Type>*/], (uObject*)::g::Uno::Collections::EnumerableExtensions::Select(::TYPES[97/*Uno.Collections.EnumerableExtensions.Select<Outracks.Simulator.Bytecode.TypeName, Uno.Type>*/], (uObject*)uPtr(typeName)->GenericArgumentsRecursively(), uDelegate::New(::TYPES[98/*Uno.Func<Outracks.Simulator.Bytecode.TypeName, Uno.Type>*/], (void*)SimpleTypeMap__ResolveType1_fn, this))));

    if (::g::Uno::Type::ContainsGenericParameters(uPtr(t)))
        U_THROW(::g::Uno::InvalidOperationException::New5(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[48/*"'"*/], typeName), ::STRINGS[50/*"' is not a ...*/])));

    return t;
}

// public generated SimpleTypeMap New() [static] :19
SimpleTypeMap* SimpleTypeMap::New1()
{
    SimpleTypeMap* obj2 = (SimpleTypeMap*)uNew(SimpleTypeMap_typeof());
    obj2->ctor_();
    return obj2;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/Runtime/Reflection/NativeReflection.cs
// --------------------------------------------------------------------------------------------------------

// internal static extern class TryInvokeExtension :263
// {
static void TryInvokeExtension_build(uType* type)
{
    ::TYPES[99] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Reflection::IFunction_typeof(), NULL);
    ::TYPES[19] = ::g::Uno::Reflection::IFunction_typeof();
    type->SetDependencies(
        ::g::Uno::Type_typeof());
}

uClassType* TryInvokeExtension_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.DependencyCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Outracks.Simulator.Runtime.TryInvokeExtension", options);
    type->fp_build_ = TryInvokeExtension_build;
    return type;
}

// public static Uno.Reflection.IFunction FindUnambiguousMethod(Uno.Type type, Outracks.Simulator.Bytecode.TypeMemberName methodName, object[] arguments) :265
void TryInvokeExtension__FindUnambiguousMethod_fn(uType* type, ::g::Outracks::Simulator::Bytecode::TypeMemberName* methodName, uArray* arguments, uObject** __retval)
{
    *__retval = TryInvokeExtension::FindUnambiguousMethod(type, methodName, arguments);
}

// public static Outracks.Simulator.Runtime.IEvent GetEvent(Uno.Type type, Outracks.Simulator.Bytecode.TypeMemberName name, Uno.Type propertyType) :366
void TryInvokeExtension__GetEvent_fn(uType* type, ::g::Outracks::Simulator::Bytecode::TypeMemberName* name, uType* propertyType, uObject** __retval)
{
    *__retval = TryInvokeExtension::GetEvent(type, name, propertyType);
}

// public static Uno.Reflection.IField GetField(Uno.Type type, Outracks.Simulator.Bytecode.TypeMemberName name) :358
void TryInvokeExtension__GetField_fn(uType* type, ::g::Outracks::Simulator::Bytecode::TypeMemberName* name, uObject** __retval)
{
    *__retval = TryInvokeExtension::GetField(type, name);
}

// public static Uno.Reflection.IFunction GetMethod(Uno.Type type, Outracks.Simulator.Bytecode.TypeMemberName name, Uno.Type[] parameterTypes) :320
void TryInvokeExtension__GetMethod_fn(uType* type, ::g::Outracks::Simulator::Bytecode::TypeMemberName* name, uArray* parameterTypes, uObject** __retval)
{
    *__retval = TryInvokeExtension::GetMethod(type, name, parameterTypes);
}

// public static Uno.Reflection.CppFunction[] GetMethods(Uno.Type type) :348
void TryInvokeExtension__GetMethods_fn(uType* type, uArray** __retval)
{
    *__retval = TryInvokeExtension::GetMethods(type);
}

// public static Outracks.Simulator.Runtime.IProperty GetProperty(Uno.Type type, Outracks.Simulator.Bytecode.TypeMemberName name, Uno.Type propertyType) :353
void TryInvokeExtension__GetProperty_fn(uType* type, ::g::Outracks::Simulator::Bytecode::TypeMemberName* name, uType* propertyType, uObject** __retval)
{
    *__retval = TryInvokeExtension::GetProperty(type, name, propertyType);
}

// public static bool IsInstanceOfType(Uno.Type type, object obj) :371
void TryInvokeExtension__IsInstanceOfType_fn(uType* type, uObject* obj, bool* __retval)
{
    *__retval = TryInvokeExtension::IsInstanceOfType(type, obj);
}

// public static bool ParametersMatch(Uno.Reflection.IFunction m, object[] arguments) :293
void TryInvokeExtension__ParametersMatch_fn(uObject* m, uArray* arguments, bool* __retval)
{
    *__retval = TryInvokeExtension::ParametersMatch(m, arguments);
}

// public static object TryInvoke(Uno.Reflection.IFunction mi, object obj, object[] value) :376
void TryInvokeExtension__TryInvoke_fn(uObject* mi, uObject* obj, uArray* value, uObject** __retval)
{
    *__retval = TryInvokeExtension::TryInvoke(mi, obj, value);
}

// public static Uno.Reflection.IFunction FindUnambiguousMethod(Uno.Type type, Outracks.Simulator.Bytecode.TypeMemberName methodName, object[] arguments) [static] :265
uObject* TryInvokeExtension::FindUnambiguousMethod(uType* type, ::g::Outracks::Simulator::Bytecode::TypeMemberName* methodName, uArray* arguments)
{
    uStackFrame __("Outracks.Simulator.Runtime.TryInvokeExtension", "FindUnambiguousMethod(Uno.Type,Outracks.Simulator.Bytecode.TypeMemberName,object[])");
    uArray* array1;
    int index2;
    int length3;
    uObject* ret7;
    ::g::Uno::Collections::List* methods = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[99/*Uno.Collections.List<Uno.Reflection.IFunction>*/]);

    for (uType* t = type; ::g::Uno::Type::op_Inequality(t, NULL); t = ::g::Uno::Type::BaseType(uPtr(t)))
    {
        for (array1 = TryInvokeExtension::GetMethods(t), index2 = 0, length3 = uPtr(array1)->Length(); index2 < length3; ++index2)
        {
            uFunction* m = uPtr(array1)->Item<uFunction*>(index2);

            if (::g::Uno::String::op_Equality(::g::Uno::Reflection::CppFunction::Name(m), uPtr(methodName)->Name) && TryInvokeExtension::ParametersMatch(uBox(::g::Uno::Reflection::CppFunction_typeof(), m), arguments))
                ::g::Uno::Collections::List__Add_fn(uPtr(methods), uBox(::g::Uno::Reflection::CppFunction_typeof(), m));

            if (uPtr(methods)->Count() >= 2)
                break;
        }

        if (uPtr(methods)->Count() > 0)
            break;
    }

    if (methods->Count() == 0)
        U_THROW(::g::Outracks::UnoHost::MemberNotFound::New4(::g::Uno::Type::FullName(uPtr(type)), uPtr(methodName)->Name));

    if (methods->Count() > 1)
        U_THROW(::g::Outracks::UnoHost::UnambiguousMethodNotFound::New4(::g::Uno::Type::FullName(uPtr(type)), uPtr(methodName)->Name));

    return (::g::Uno::Collections::List__get_Item_fn(methods, uCRef<int>(0), &ret7), ret7);
}

// public static Outracks.Simulator.Runtime.IEvent GetEvent(Uno.Type type, Outracks.Simulator.Bytecode.TypeMemberName name, Uno.Type propertyType) [static] :366
uObject* TryInvokeExtension::GetEvent(uType* type, ::g::Outracks::Simulator::Bytecode::TypeMemberName* name, uType* propertyType)
{
    uStackFrame __("Outracks.Simulator.Runtime.TryInvokeExtension", "GetEvent(Uno.Type,Outracks.Simulator.Bytecode.TypeMemberName,Uno.Type)");
    return (uObject*)::g::Outracks::Simulator::Runtime::CppEvent::New1(type, propertyType, uPtr(name)->Name);
}

// public static Uno.Reflection.IField GetField(Uno.Type type, Outracks.Simulator.Bytecode.TypeMemberName name) [static] :358
uObject* TryInvokeExtension::GetField(uType* type, ::g::Outracks::Simulator::Bytecode::TypeMemberName* name)
{
    uStackFrame __("Outracks.Simulator.Runtime.TryInvokeExtension", "GetField(Uno.Type,Outracks.Simulator.Bytecode.TypeMemberName)");

    if (::g::Uno::Type::op_Equality(type, NULL))
        return NULL;

    uField* f = ::g::Uno::Reflection::CppReflection::FindField(type, uPtr(name)->Name);
    return ::g::Uno::Reflection::CppField::IsNull(f) ? (uObject*)TryInvokeExtension::GetField(::g::Uno::Type::BaseType(uPtr(type)), name) : uBox(::g::Uno::Reflection::CppField_typeof(), f);
}

// public static Uno.Reflection.IFunction GetMethod(Uno.Type type, Outracks.Simulator.Bytecode.TypeMemberName name, Uno.Type[] parameterTypes) [static] :320
uObject* TryInvokeExtension::GetMethod(uType* type, ::g::Outracks::Simulator::Bytecode::TypeMemberName* name, uArray* parameterTypes)
{
    uStackFrame __("Outracks.Simulator.Runtime.TryInvokeExtension", "GetMethod(Uno.Type,Outracks.Simulator.Bytecode.TypeMemberName,Uno.Type[])");
    uArray* array4;
    int index5;
    int length6;

    for (uType* t = type; ::g::Uno::Type::op_Inequality(t, NULL); t = ::g::Uno::Type::BaseType(uPtr(t)))

        for (array4 = TryInvokeExtension::GetMethods(t), index5 = 0, length6 = uPtr(array4)->Length(); index5 < length6; ++index5)
        {
            uFunction* f = uPtr(array4)->Item<uFunction*>(index5);

            if (::g::Uno::String::op_Inequality(::g::Uno::Reflection::CppFunction::Name(f), uPtr(name)->Name) || (uPtr(::g::Uno::Reflection::CppFunction::ParameterTypes(f))->Length() != uPtr(parameterTypes)->Length()))
                continue;

            bool found = true;

            for (int i = 0; i < uPtr(parameterTypes)->Length(); i++)
                if (::g::Uno::Type::op_Inequality(uPtr(parameterTypes)->Strong<uType*>(i), NULL) && !::g::Uno::Type::IsSubclassOf(uPtr(uPtr(parameterTypes)->Strong<uType*>(i)), uPtr(::g::Uno::Reflection::CppFunction::ParameterTypes(f))->Strong<uType*>(i)))
                {
                    found = false;
                    break;
                }

            if (found)
                return uBox(::g::Uno::Reflection::CppFunction_typeof(), f);
        }

    return NULL;
}

// public static Uno.Reflection.CppFunction[] GetMethods(Uno.Type type) [static] :348
uArray* TryInvokeExtension::GetMethods(uType* type)
{
    return ::g::Uno::Reflection::CppReflection::GetFunctions(type);
}

// public static Outracks.Simulator.Runtime.IProperty GetProperty(Uno.Type type, Outracks.Simulator.Bytecode.TypeMemberName name, Uno.Type propertyType) [static] :353
uObject* TryInvokeExtension::GetProperty(uType* type, ::g::Outracks::Simulator::Bytecode::TypeMemberName* name, uType* propertyType)
{
    uStackFrame __("Outracks.Simulator.Runtime.TryInvokeExtension", "GetProperty(Uno.Type,Outracks.Simulator.Bytecode.TypeMemberName,Uno.Type)");
    return (uObject*)::g::Outracks::Simulator::Runtime::CppProperty::New1(type, propertyType, uPtr(name)->Name);
}

// public static bool IsInstanceOfType(Uno.Type type, object obj) [static] :371
bool TryInvokeExtension::IsInstanceOfType(uType* type, uObject* obj)
{
    uStackFrame __("Outracks.Simulator.Runtime.TryInvokeExtension", "IsInstanceOfType(Uno.Type,object)");
    return ::g::Uno::Type::IsSubclassOf(uPtr(::g::Uno::Object::GetType(uPtr(obj))), type);
}

// public static bool ParametersMatch(Uno.Reflection.IFunction m, object[] arguments) [static] :293
bool TryInvokeExtension::ParametersMatch(uObject* m, uArray* arguments)
{
    uStackFrame __("Outracks.Simulator.Runtime.TryInvokeExtension", "ParametersMatch(Uno.Reflection.IFunction,object[])");
    uArray* prms = ::g::Uno::Reflection::IFunction::ParameterTypes(uInterface(uPtr(m), ::TYPES[19/*Uno.Reflection.IFunction*/]));

    if (uPtr(prms)->Length() != uPtr(arguments)->Length())
        return false;

    for (int i = 0; i < uPtr(prms)->Length(); i++)
    {
        uType* param = uPtr(prms)->Strong<uType*>(i);
        uObject* arg = uPtr(arguments)->Strong<uObject*>(i);

        if (arg == NULL)
        {
            if (::g::Uno::Type::IsValueType(uPtr(param)))
                return false;
        }
        else
        {
            if (!TryInvokeExtension::IsInstanceOfType(param, arg))
                return false;
        }
    }

    return true;
}

// public static object TryInvoke(Uno.Reflection.IFunction mi, object obj, object[] value) [static] :376
uObject* TryInvokeExtension::TryInvoke(uObject* mi, uObject* obj, uArray* value)
{
    uStackFrame __("Outracks.Simulator.Runtime.TryInvokeExtension", "TryInvoke(Uno.Reflection.IFunction,object,object[])");
    return ::g::Uno::Reflection::IFunction::Invoke(uInterface(uPtr(mi), ::TYPES[19/*Uno.Reflection.IFunction*/]), obj, value);
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/Runtime/Reflection/UnoHostReflection.cs
// ---------------------------------------------------------------------------------------------------------

// public sealed class UnoHostReflection :12
// {
static void UnoHostReflection_build(uType* type)
{
    ::TYPES[15] = ::g::Outracks::Optional1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::Signature_typeof(), NULL);
    ::TYPES[100] = ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(9/*ToArray<string>*/, ::g::Uno::String_typeof(), NULL);
    ::TYPES[101] = ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(7/*Select<Outracks.Simulator.Bytecode.Parameter, string>*/, ::g::Outracks::Simulator::Bytecode::Parameter_typeof(), ::g::Uno::String_typeof(), NULL);
    ::TYPES[102] = ::g::Uno::Func1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::Parameter_typeof(), ::g::Uno::String_typeof(), NULL);
    type->SetInterfaces(
        ::g::Outracks::Simulator::Runtime::IReflection_typeof(), offsetof(UnoHostReflection_type, interface0));
    type->Reflection.SetFunctions(13,
        new uFunction("AddEventHandler", NULL, (void*)UnoHostReflection__AddEventHandler_fn, 0, false, uVoid_typeof(), 3, uObject_typeof(), ::g::Outracks::Simulator::Bytecode::TypeMemberName_typeof(), uObject_typeof()),
        new uFunction("CallDynamic", NULL, (void*)UnoHostReflection__CallDynamic_fn, 0, false, uObject_typeof(), 3, uObject_typeof(), ::g::Outracks::Simulator::Bytecode::TypeMemberName_typeof(), uObject_typeof()->Array()),
        new uFunction("CallStatic", NULL, (void*)UnoHostReflection__CallStatic_fn, 0, false, uObject_typeof(), 3, ::g::Outracks::Simulator::Bytecode::TypeName_typeof(), ::g::Outracks::Simulator::Bytecode::TypeMemberName_typeof(), uObject_typeof()->Array()),
        new uFunction("CreateDelegate", NULL, (void*)UnoHostReflection__CreateDelegate_fn, 0, false, uObject_typeof(), 4, ::g::Outracks::Simulator::Bytecode::TypeName_typeof(), uObject_typeof(), ::g::Outracks::Simulator::Bytecode::TypeMemberName_typeof(), ::TYPES[15/*Outracks.Optional<Outracks.Simulator.Bytecode.Signature>*/]),
        new uFunction("GetEnumValue", NULL, (void*)UnoHostReflection__GetEnumValue_fn, 0, false, uObject_typeof(), 2, ::g::Outracks::Simulator::Bytecode::TypeName_typeof(), ::g::Outracks::Simulator::Bytecode::TypeMemberName_typeof()),
        new uFunction("GetPropertyValue", NULL, (void*)UnoHostReflection__GetPropertyValue_fn, 0, false, uObject_typeof(), 2, uObject_typeof(), ::g::Outracks::Simulator::Bytecode::TypeMemberName_typeof()),
        new uFunction("GetStaticPropertyOrFieldValue", NULL, (void*)UnoHostReflection__GetStaticPropertyOrFieldValue_fn, 0, false, uObject_typeof(), 2, ::g::Outracks::Simulator::Bytecode::TypeName_typeof(), ::g::Outracks::Simulator::Bytecode::TypeMemberName_typeof()),
        new uFunction("Instantiate", NULL, (void*)UnoHostReflection__Instantiate_fn, 0, false, uObject_typeof(), 2, ::g::Outracks::Simulator::Bytecode::TypeName_typeof(), uObject_typeof()->Array()),
        new uFunction("IsSubtype", NULL, (void*)UnoHostReflection__IsSubtype_fn, 0, false, ::g::Uno::Bool_typeof(), 2, uObject_typeof(), ::g::Outracks::Simulator::Bytecode::TypeName_typeof()),
        new uFunction("IsType", NULL, (void*)UnoHostReflection__IsType_fn, 0, false, ::g::Uno::Bool_typeof(), 2, uObject_typeof(), ::g::Outracks::Simulator::Bytecode::TypeName_typeof()),
        new uFunction(".ctor", NULL, (void*)UnoHostReflection__New1_fn, 0, true, type, 0),
        new uFunction("RemoveEventHandler", NULL, (void*)UnoHostReflection__RemoveEventHandler_fn, 0, false, uVoid_typeof(), 3, uObject_typeof(), ::g::Outracks::Simulator::Bytecode::TypeMemberName_typeof(), uObject_typeof()),
        new uFunction("SetPropertyValue", NULL, (void*)UnoHostReflection__SetPropertyValue_fn, 0, false, uVoid_typeof(), 3, uObject_typeof(), ::g::Outracks::Simulator::Bytecode::TypeMemberName_typeof(), uObject_typeof()));
}

UnoHostReflection_type* UnoHostReflection_typeof()
{
    static uSStrong<UnoHostReflection_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(UnoHostReflection);
    options.TypeSize = sizeof(UnoHostReflection_type);
    type = (UnoHostReflection_type*)uClassType::New("Outracks.Simulator.Runtime.UnoHostReflection", options);
    type->fp_build_ = UnoHostReflection_build;
    type->fp_ctor_ = (void*)UnoHostReflection__New1_fn;
    type->interface0.fp_CallDynamic = (void(*)(uObject*, uObject*, ::g::Outracks::Simulator::Bytecode::TypeMemberName*, uArray*, uObject**))UnoHostReflection__CallDynamic_fn;
    type->interface0.fp_CallStatic = (void(*)(uObject*, ::g::Outracks::Simulator::Bytecode::TypeName*, ::g::Outracks::Simulator::Bytecode::TypeMemberName*, uArray*, uObject**))UnoHostReflection__CallStatic_fn;
    type->interface0.fp_SetPropertyValue = (void(*)(uObject*, uObject*, ::g::Outracks::Simulator::Bytecode::TypeMemberName*, uObject*))UnoHostReflection__SetPropertyValue_fn;
    type->interface0.fp_GetPropertyValue = (void(*)(uObject*, uObject*, ::g::Outracks::Simulator::Bytecode::TypeMemberName*, uObject**))UnoHostReflection__GetPropertyValue_fn;
    type->interface0.fp_GetStaticPropertyOrFieldValue = (void(*)(uObject*, ::g::Outracks::Simulator::Bytecode::TypeName*, ::g::Outracks::Simulator::Bytecode::TypeMemberName*, uObject**))UnoHostReflection__GetStaticPropertyOrFieldValue_fn;
    type->interface0.fp_CreateDelegate = (void(*)(uObject*, ::g::Outracks::Simulator::Bytecode::TypeName*, uObject*, ::g::Outracks::Simulator::Bytecode::TypeMemberName*, ::g::Outracks::Optional1<uStrong< ::g::Outracks::Simulator::Bytecode::Signature*> >*, uObject**))UnoHostReflection__CreateDelegate_fn;
    type->interface0.fp_AddEventHandler = (void(*)(uObject*, uObject*, ::g::Outracks::Simulator::Bytecode::TypeMemberName*, uObject*))UnoHostReflection__AddEventHandler_fn;
    type->interface0.fp_RemoveEventHandler = (void(*)(uObject*, uObject*, ::g::Outracks::Simulator::Bytecode::TypeMemberName*, uObject*))UnoHostReflection__RemoveEventHandler_fn;
    type->interface0.fp_Instantiate = (void(*)(uObject*, ::g::Outracks::Simulator::Bytecode::TypeName*, uArray*, uObject**))UnoHostReflection__Instantiate_fn;
    type->interface0.fp_IsSubtype = (void(*)(uObject*, uObject*, ::g::Outracks::Simulator::Bytecode::TypeName*, bool*))UnoHostReflection__IsSubtype_fn;
    type->interface0.fp_IsType = (void(*)(uObject*, uObject*, ::g::Outracks::Simulator::Bytecode::TypeName*, bool*))UnoHostReflection__IsType_fn;
    type->interface0.fp_GetEnumValue = (void(*)(uObject*, ::g::Outracks::Simulator::Bytecode::TypeName*, ::g::Outracks::Simulator::Bytecode::TypeMemberName*, uObject**))UnoHostReflection__GetEnumValue_fn;
    return type;
}

// public generated UnoHostReflection() :12
void UnoHostReflection__ctor__fn(UnoHostReflection* __this)
{
    __this->ctor_();
}

// public void AddEventHandler(object instance, Outracks.Simulator.Bytecode.TypeMemberName member, object handlerDelegate) :38
void UnoHostReflection__AddEventHandler_fn(UnoHostReflection* __this, uObject* instance, ::g::Outracks::Simulator::Bytecode::TypeMemberName* member, uObject* handlerDelegate)
{
    __this->AddEventHandler(instance, member, handlerDelegate);
}

// public object CallDynamic(object obj, Outracks.Simulator.Bytecode.TypeMemberName methodName, object[] arguments) :48
void UnoHostReflection__CallDynamic_fn(UnoHostReflection* __this, uObject* obj, ::g::Outracks::Simulator::Bytecode::TypeMemberName* methodName, uArray* arguments, uObject** __retval)
{
    *__retval = __this->CallDynamic(obj, methodName, arguments);
}

// public object CallStatic(Outracks.Simulator.Bytecode.TypeName typeName, Outracks.Simulator.Bytecode.TypeMemberName methodName, object[] arguments) :59
void UnoHostReflection__CallStatic_fn(UnoHostReflection* __this, ::g::Outracks::Simulator::Bytecode::TypeName* typeName, ::g::Outracks::Simulator::Bytecode::TypeMemberName* methodName, uArray* arguments, uObject** __retval)
{
    *__retval = __this->CallStatic(typeName, methodName, arguments);
}

// public object CreateDelegate(Outracks.Simulator.Bytecode.TypeName delegateTypeName, object instance, Outracks.Simulator.Bytecode.TypeMemberName methodName, Outracks.Optional<Outracks.Simulator.Bytecode.Signature> methodSignature) :24
void UnoHostReflection__CreateDelegate_fn(UnoHostReflection* __this, ::g::Outracks::Simulator::Bytecode::TypeName* delegateTypeName, uObject* instance, ::g::Outracks::Simulator::Bytecode::TypeMemberName* methodName, ::g::Outracks::Optional1<uStrong< ::g::Outracks::Simulator::Bytecode::Signature*> >* methodSignature, uObject** __retval)
{
    *__retval = __this->CreateDelegate(delegateTypeName, instance, methodName, *methodSignature);
}

// public object GetEnumValue(Outracks.Simulator.Bytecode.TypeName enumType, Outracks.Simulator.Bytecode.TypeMemberName valueName) :79
void UnoHostReflection__GetEnumValue_fn(UnoHostReflection* __this, ::g::Outracks::Simulator::Bytecode::TypeName* enumType, ::g::Outracks::Simulator::Bytecode::TypeMemberName* valueName, uObject** __retval)
{
    *__retval = __this->GetEnumValue(enumType, valueName);
}

// public object GetPropertyValue(object obj, Outracks.Simulator.Bytecode.TypeMemberName propertyName) :14
void UnoHostReflection__GetPropertyValue_fn(UnoHostReflection* __this, uObject* obj, ::g::Outracks::Simulator::Bytecode::TypeMemberName* propertyName, uObject** __retval)
{
    *__retval = __this->GetPropertyValue(obj, propertyName);
}

// public object GetStaticPropertyOrFieldValue(Outracks.Simulator.Bytecode.TypeName typeName, Outracks.Simulator.Bytecode.TypeMemberName memberName) :64
void UnoHostReflection__GetStaticPropertyOrFieldValue_fn(UnoHostReflection* __this, ::g::Outracks::Simulator::Bytecode::TypeName* typeName, ::g::Outracks::Simulator::Bytecode::TypeMemberName* memberName, uObject** __retval)
{
    *__retval = __this->GetStaticPropertyOrFieldValue(typeName, memberName);
}

// public object Instantiate(Outracks.Simulator.Bytecode.TypeName typeName, object[] args) :54
void UnoHostReflection__Instantiate_fn(UnoHostReflection* __this, ::g::Outracks::Simulator::Bytecode::TypeName* typeName, uArray* args, uObject** __retval)
{
    *__retval = __this->Instantiate(typeName, args);
}

// public bool IsSubtype(object obj, Outracks.Simulator.Bytecode.TypeName typeName) :69
void UnoHostReflection__IsSubtype_fn(UnoHostReflection* __this, uObject* obj, ::g::Outracks::Simulator::Bytecode::TypeName* typeName, bool* __retval)
{
    *__retval = __this->IsSubtype(obj, typeName);
}

// public bool IsType(object obj, Outracks.Simulator.Bytecode.TypeName typeName) :74
void UnoHostReflection__IsType_fn(UnoHostReflection* __this, uObject* obj, ::g::Outracks::Simulator::Bytecode::TypeName* typeName, bool* __retval)
{
    *__retval = __this->IsType(obj, typeName);
}

// public generated UnoHostReflection New() :12
void UnoHostReflection__New1_fn(UnoHostReflection** __retval)
{
    *__retval = UnoHostReflection::New1();
}

// private static string ParameterToTypeName(Outracks.Simulator.Bytecode.Parameter parameter) :33
void UnoHostReflection__ParameterToTypeName_fn(::g::Outracks::Simulator::Bytecode::Parameter* parameter, uString** __retval)
{
    *__retval = UnoHostReflection::ParameterToTypeName(parameter);
}

// public void RemoveEventHandler(object instance, Outracks.Simulator.Bytecode.TypeMemberName member, object handlerDelegate) :43
void UnoHostReflection__RemoveEventHandler_fn(UnoHostReflection* __this, uObject* instance, ::g::Outracks::Simulator::Bytecode::TypeMemberName* member, uObject* handlerDelegate)
{
    __this->RemoveEventHandler(instance, member, handlerDelegate);
}

// public void SetPropertyValue(object obj, Outracks.Simulator.Bytecode.TypeMemberName propertyName, object value) :19
void UnoHostReflection__SetPropertyValue_fn(UnoHostReflection* __this, uObject* obj, ::g::Outracks::Simulator::Bytecode::TypeMemberName* propertyName, uObject* value)
{
    __this->SetPropertyValue(obj, propertyName, value);
}

// public generated UnoHostReflection() [instance] :12
void UnoHostReflection::ctor_()
{
}

// public void AddEventHandler(object instance, Outracks.Simulator.Bytecode.TypeMemberName member, object handlerDelegate) [instance] :38
void UnoHostReflection::AddEventHandler(uObject* instance, ::g::Outracks::Simulator::Bytecode::TypeMemberName* member, uObject* handlerDelegate)
{
    uStackFrame __("Outracks.Simulator.Runtime.UnoHostReflection", "AddEventHandler(object,Outracks.Simulator.Bytecode.TypeMemberName,object)");
    ::g::Outracks::UnoHost::Reflection::AddEventHandler(instance, uPtr(member)->Name, handlerDelegate);
}

// public object CallDynamic(object obj, Outracks.Simulator.Bytecode.TypeMemberName methodName, object[] arguments) [instance] :48
uObject* UnoHostReflection::CallDynamic(uObject* obj, ::g::Outracks::Simulator::Bytecode::TypeMemberName* methodName, uArray* arguments)
{
    uStackFrame __("Outracks.Simulator.Runtime.UnoHostReflection", "CallDynamic(object,Outracks.Simulator.Bytecode.TypeMemberName,object[])");
    return ::g::Outracks::UnoHost::Reflection::CallDynamic(obj, uPtr(methodName)->Name, arguments);
}

// public object CallStatic(Outracks.Simulator.Bytecode.TypeName typeName, Outracks.Simulator.Bytecode.TypeMemberName methodName, object[] arguments) [instance] :59
uObject* UnoHostReflection::CallStatic(::g::Outracks::Simulator::Bytecode::TypeName* typeName, ::g::Outracks::Simulator::Bytecode::TypeMemberName* methodName, uArray* arguments)
{
    uStackFrame __("Outracks.Simulator.Runtime.UnoHostReflection", "CallStatic(Outracks.Simulator.Bytecode.TypeName,Outracks.Simulator.Bytecode.TypeMemberName,object[])");
    return ::g::Outracks::UnoHost::Reflection::CallStatic(uPtr(typeName)->FullName(), uPtr(methodName)->Name, arguments);
}

// public object CreateDelegate(Outracks.Simulator.Bytecode.TypeName delegateTypeName, object instance, Outracks.Simulator.Bytecode.TypeMemberName methodName, Outracks.Optional<Outracks.Simulator.Bytecode.Signature> methodSignature) [instance] :24
uObject* UnoHostReflection::CreateDelegate(::g::Outracks::Simulator::Bytecode::TypeName* delegateTypeName, uObject* instance, ::g::Outracks::Simulator::Bytecode::TypeMemberName* methodName, ::g::Outracks::Optional1<uStrong< ::g::Outracks::Simulator::Bytecode::Signature*> > methodSignature)
{
    uStackFrame __("Outracks.Simulator.Runtime.UnoHostReflection", "CreateDelegate(Outracks.Simulator.Bytecode.TypeName,object,Outracks.Simulator.Bytecode.TypeMemberName,Outracks.Optional<Outracks.Simulator.Bytecode.Signature>)");
    uArray* argumentTypes = methodSignature.HasValue(::TYPES[15/*Outracks.Optional<Outracks.Simulator.Bytecode.Signature>*/]) ? (uArray*)::g::Uno::Collections::EnumerableExtensions::ToArray(::TYPES[100/*Uno.Collections.EnumerableExtensions.ToArray<string>*/], (uObject*)::g::Uno::Collections::EnumerableExtensions::Select(::TYPES[101/*Uno.Collections.EnumerableExtensions.Select<Outracks.Simulator.Bytecode.Parameter, string>*/], (uObject*)uPtr(methodSignature.Value(::TYPES[15/*Outracks.Optional<Outracks.Simulator.Bytecode.Signature>*/]))->Parameters, uDelegate::New(::TYPES[102/*Uno.Func<Outracks.Simulator.Bytecode.Parameter, string>*/], (void*)UnoHostReflection__ParameterToTypeName_fn))) : NULL;
    return ::g::Outracks::UnoHost::Reflection::CreateDelegate(instance, uPtr(methodName)->Name, argumentTypes, uPtr(delegateTypeName)->FullName());
}

// public object GetEnumValue(Outracks.Simulator.Bytecode.TypeName enumType, Outracks.Simulator.Bytecode.TypeMemberName valueName) [instance] :79
uObject* UnoHostReflection::GetEnumValue(::g::Outracks::Simulator::Bytecode::TypeName* enumType, ::g::Outracks::Simulator::Bytecode::TypeMemberName* valueName)
{
    uStackFrame __("Outracks.Simulator.Runtime.UnoHostReflection", "GetEnumValue(Outracks.Simulator.Bytecode.TypeName,Outracks.Simulator.Bytecode.TypeMemberName)");
    return ::g::Outracks::UnoHost::Reflection::GetEnumValue(uPtr(enumType)->FullName(), uPtr(valueName)->Name);
}

// public object GetPropertyValue(object obj, Outracks.Simulator.Bytecode.TypeMemberName propertyName) [instance] :14
uObject* UnoHostReflection::GetPropertyValue(uObject* obj, ::g::Outracks::Simulator::Bytecode::TypeMemberName* propertyName)
{
    uStackFrame __("Outracks.Simulator.Runtime.UnoHostReflection", "GetPropertyValue(object,Outracks.Simulator.Bytecode.TypeMemberName)");
    return ::g::Outracks::UnoHost::Reflection::GetPropertyValue(obj, uPtr(propertyName)->Name);
}

// public object GetStaticPropertyOrFieldValue(Outracks.Simulator.Bytecode.TypeName typeName, Outracks.Simulator.Bytecode.TypeMemberName memberName) [instance] :64
uObject* UnoHostReflection::GetStaticPropertyOrFieldValue(::g::Outracks::Simulator::Bytecode::TypeName* typeName, ::g::Outracks::Simulator::Bytecode::TypeMemberName* memberName)
{
    uStackFrame __("Outracks.Simulator.Runtime.UnoHostReflection", "GetStaticPropertyOrFieldValue(Outracks.Simulator.Bytecode.TypeName,Outracks.Simulator.Bytecode.TypeMemberName)");
    return ::g::Outracks::UnoHost::Reflection::GetStaticPropertyOrFieldValue(uPtr(typeName)->FullName(), uPtr(memberName)->Name);
}

// public object Instantiate(Outracks.Simulator.Bytecode.TypeName typeName, object[] args) [instance] :54
uObject* UnoHostReflection::Instantiate(::g::Outracks::Simulator::Bytecode::TypeName* typeName, uArray* args)
{
    uStackFrame __("Outracks.Simulator.Runtime.UnoHostReflection", "Instantiate(Outracks.Simulator.Bytecode.TypeName,object[])");
    return ::g::Outracks::UnoHost::Reflection::Instantiate(uPtr(typeName)->FullName(), args);
}

// public bool IsSubtype(object obj, Outracks.Simulator.Bytecode.TypeName typeName) [instance] :69
bool UnoHostReflection::IsSubtype(uObject* obj, ::g::Outracks::Simulator::Bytecode::TypeName* typeName)
{
    uStackFrame __("Outracks.Simulator.Runtime.UnoHostReflection", "IsSubtype(object,Outracks.Simulator.Bytecode.TypeName)");
    return ::g::Outracks::UnoHost::Reflection::IsSubtype(obj, uPtr(typeName)->FullName());
}

// public bool IsType(object obj, Outracks.Simulator.Bytecode.TypeName typeName) [instance] :74
bool UnoHostReflection::IsType(uObject* obj, ::g::Outracks::Simulator::Bytecode::TypeName* typeName)
{
    uStackFrame __("Outracks.Simulator.Runtime.UnoHostReflection", "IsType(object,Outracks.Simulator.Bytecode.TypeName)");
    return ::g::Outracks::UnoHost::Reflection::IsType(obj, uPtr(typeName)->FullName());
}

// public void RemoveEventHandler(object instance, Outracks.Simulator.Bytecode.TypeMemberName member, object handlerDelegate) [instance] :43
void UnoHostReflection::RemoveEventHandler(uObject* instance, ::g::Outracks::Simulator::Bytecode::TypeMemberName* member, uObject* handlerDelegate)
{
    uStackFrame __("Outracks.Simulator.Runtime.UnoHostReflection", "RemoveEventHandler(object,Outracks.Simulator.Bytecode.TypeMemberName,object)");
    ::g::Outracks::UnoHost::Reflection::RemoveEventHandler(instance, uPtr(member)->Name, handlerDelegate);
}

// public void SetPropertyValue(object obj, Outracks.Simulator.Bytecode.TypeMemberName propertyName, object value) [instance] :19
void UnoHostReflection::SetPropertyValue(uObject* obj, ::g::Outracks::Simulator::Bytecode::TypeMemberName* propertyName, uObject* value)
{
    uStackFrame __("Outracks.Simulator.Runtime.UnoHostReflection", "SetPropertyValue(object,Outracks.Simulator.Bytecode.TypeMemberName,object)");
    ::g::Outracks::UnoHost::Reflection::SetPropertyValue(obj, uPtr(propertyName)->Name, value);
}

// public generated UnoHostReflection New() [static] :12
UnoHostReflection* UnoHostReflection::New1()
{
    UnoHostReflection* obj1 = (UnoHostReflection*)uNew(UnoHostReflection_typeof());
    obj1->ctor_();
    return obj1;
}

// private static string ParameterToTypeName(Outracks.Simulator.Bytecode.Parameter parameter) [static] :33
uString* UnoHostReflection::ParameterToTypeName(::g::Outracks::Simulator::Bytecode::Parameter* parameter)
{
    uStackFrame __("Outracks.Simulator.Runtime.UnoHostReflection", "ParameterToTypeName(Outracks.Simulator.Bytecode.Parameter)");
    return uPtr(uPtr(parameter)->Type)->FullName();
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/Runtime/UxFileSource.cs
// -----------------------------------------------------------------------------------------

// public sealed class UxFileSource :8
// {
static void UxFileSource_build(uType* type)
{
    type->SetFields(2,
        ::g::Uno::Byte_typeof()->Array(), offsetof(UxFileSource, _bytes), 0);
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)UxFileSource__New1_fn, 0, true, type, 2, ::g::Uno::String_typeof(), ::g::Uno::Byte_typeof()->Array()),
        new uFunction("Update", NULL, (void*)UxFileSource__Update_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Byte_typeof()->Array()));
}

::g::Uno::UX::FileSource_type* UxFileSource_typeof()
{
    static uSStrong< ::g::Uno::UX::FileSource_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::FileSource_typeof();
    options.FieldCount = 3;
    options.ObjectSize = sizeof(UxFileSource);
    options.TypeSize = sizeof(::g::Uno::UX::FileSource_type);
    type = (::g::Uno::UX::FileSource_type*)uClassType::New("Outracks.Simulator.Runtime.UxFileSource", options);
    type->fp_build_ = UxFileSource_build;
    type->fp_OpenRead = (void(*)(::g::Uno::UX::FileSource*, ::g::Uno::IO::Stream**))UxFileSource__OpenRead_fn;
    type->fp_ReadAllBytes = (void(*)(::g::Uno::UX::FileSource*, uArray**))UxFileSource__ReadAllBytes_fn;
    return type;
}

// public UxFileSource(string path, byte[] bytes) :12
void UxFileSource__ctor_1_fn(UxFileSource* __this, uString* path, uArray* bytes)
{
    __this->ctor_1(path, bytes);
}

// public UxFileSource New(string path, byte[] bytes) :12
void UxFileSource__New1_fn(uString* path, uArray* bytes, UxFileSource** __retval)
{
    *__retval = UxFileSource::New1(path, bytes);
}

// public override sealed Uno.IO.Stream OpenRead() :24
void UxFileSource__OpenRead_fn(UxFileSource* __this, ::g::Uno::IO::Stream** __retval)
{
    uStackFrame __("Outracks.Simulator.Runtime.UxFileSource", "OpenRead()");
    return *__retval = ::g::Outracks::Simulator::Runtime::ArrayStream::New1(__this->_bytes), void();
}

// public override sealed byte[] ReadAllBytes() :30
void UxFileSource__ReadAllBytes_fn(UxFileSource* __this, uArray** __retval)
{
    return *__retval = __this->_bytes, void();
}

// public void Update(byte[] newBytes) :18
void UxFileSource__Update_fn(UxFileSource* __this, uArray* newBytes)
{
    __this->Update(newBytes);
}

// public UxFileSource(string path, byte[] bytes) [instance] :12
void UxFileSource::ctor_1(uString* path, uArray* bytes)
{
    uStackFrame __("Outracks.Simulator.Runtime.UxFileSource", ".ctor(string,byte[])");
    ctor_(path);
    _bytes = bytes;
}

// public void Update(byte[] newBytes) [instance] :18
void UxFileSource::Update(uArray* newBytes)
{
    uStackFrame __("Outracks.Simulator.Runtime.UxFileSource", "Update(byte[])");
    _bytes = newBytes;
    OnDataChanged();
}

// public UxFileSource New(string path, byte[] bytes) [static] :12
UxFileSource* UxFileSource::New1(uString* path, uArray* bytes)
{
    UxFileSource* obj1 = (UxFileSource*)uNew(UxFileSource_typeof());
    obj1->ctor_1(path, bytes);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/Runtime/UxProperty.cs
// ---------------------------------------------------------------------------------------

// public sealed class UxProperty<T> :7
// {
static void UxProperty_build(uType* type)
{
    ::STRINGS[51] = uString::Const("");
    ::TYPES[96] = ::g::Uno::Type_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(type->T(0), NULL));
    type->SetDependencies(
        ::g::Uno::Type_typeof());
    type->SetFields(1,
        ::g::Uno::Action3_typeof()->MakeType(uObject_typeof(), uObject_typeof(), uObject_typeof(), NULL), offsetof(UxProperty, _setter), 0,
        ::g::Uno::Func1_typeof()->MakeType(uObject_typeof(), uObject_typeof(), NULL), offsetof(UxProperty, _getter), 0,
        ::g::Uno::UX::PropertyObject_typeof(), offsetof(UxProperty, _obj), 0,
        ::g::Uno::Bool_typeof(), offsetof(UxProperty, _supportsOriginSetter), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", type, (void*)UxProperty__New1_fn, 0, true, type, 5, ::g::Uno::Action3_typeof()->MakeType(uObject_typeof(), uObject_typeof(), uObject_typeof(), NULL), ::g::Uno::Func1_typeof()->MakeType(uObject_typeof(), uObject_typeof(), NULL), ::g::Uno::UX::PropertyObject_typeof(), ::g::Uno::String_typeof(), ::g::Uno::Bool_typeof()));
}

::g::Uno::UX::Property1_type* UxProperty_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 5;
    options.GenericCount = 1;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(UxProperty);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("Outracks.Simulator.Runtime.UxProperty`1", options);
    type->fp_build_ = UxProperty_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))UxProperty__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))UxProperty__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))UxProperty__Set1_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))UxProperty__get_SupportsOriginSetter_fn;
    return type;
}

// public UxProperty(Uno.Action<object, object, object> setter, Uno.Func<object, object> getter, Uno.UX.PropertyObject obj, string name, bool supportsOriginSetter) :14
void UxProperty__ctor_3_fn(UxProperty* __this, uDelegate* setter, uDelegate* getter, ::g::Uno::UX::PropertyObject* obj, uString* name, bool* supportsOriginSetter)
{
    __this->ctor_3(setter, getter, obj, name, *supportsOriginSetter);
}

// public override sealed extern T Get(Uno.UX.PropertyObject obj) :45
void UxProperty__Get1_fn(UxProperty* __this, ::g::Uno::UX::PropertyObject* obj, uTRef __retval)
{
    uStackFrame __("Outracks.Simulator.Runtime.UxProperty`1", "Get(Uno.UX.PropertyObject)");
    uObject* res = uPtr(__this->_getter)->Invoke(1, obj);
    return __retval.Store(__this->__type->T(0), (res == NULL) ? ::g::Uno::Type::op_Equality(__this->__type->T(0), ::g::Uno::String_typeof()) ? (void*)uUnboxAny(__this->__type->T(0), ::STRINGS[51/*""*/]) : (void*)uT(__this->__type->T(0), U_ALLOCA(__this->__type->T(0)->ValueSize)) : (void*)uUnboxAny(__this->__type->T(0), res)), void();
}

// public UxProperty New(Uno.Action<object, object, object> setter, Uno.Func<object, object> getter, Uno.UX.PropertyObject obj, string name, bool supportsOriginSetter) :14
void UxProperty__New1_fn(uType* __type, uDelegate* setter, uDelegate* getter, ::g::Uno::UX::PropertyObject* obj, uString* name, bool* supportsOriginSetter, UxProperty** __retval)
{
    *__retval = UxProperty::New1(__type, setter, getter, obj, name, *supportsOriginSetter);
}

// public override sealed Uno.UX.PropertyObject get_Object() :30
void UxProperty__get_Object_fn(UxProperty* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed extern void Set(Uno.UX.PropertyObject obj, T value, Uno.UX.IPropertyListener origin) :39
void UxProperty__Set1_fn(UxProperty* __this, ::g::Uno::UX::PropertyObject* obj, void* value, uObject* origin)
{
    uStackFrame __("Outracks.Simulator.Runtime.UxProperty`1", "Set(Uno.UX.PropertyObject,T,Uno.UX.IPropertyListener)");
    uPtr(__this->_setter)->Invoke(3, obj, uBoxPtr(__this->__type->T(0), value), origin);
}

// public override sealed bool get_SupportsOriginSetter() :35
void UxProperty__get_SupportsOriginSetter_fn(UxProperty* __this, bool* __retval)
{
    return *__retval = __this->_supportsOriginSetter, void();
}

// public UxProperty(Uno.Action<object, object, object> setter, Uno.Func<object, object> getter, Uno.UX.PropertyObject obj, string name, bool supportsOriginSetter) [instance] :14
void UxProperty::ctor_3(uDelegate* setter, uDelegate* getter, ::g::Uno::UX::PropertyObject* obj, uString* name, bool supportsOriginSetter)
{
    uStackFrame __("Outracks.Simulator.Runtime.UxProperty`1", ".ctor(Uno.Action<object, object, object>,Uno.Func<object, object>,Uno.UX.PropertyObject,string,bool)");
    ctor_2(::g::Uno::UX::Selector__New1(name));
    _setter = setter;
    _getter = getter;
    _obj = obj;
    _supportsOriginSetter = supportsOriginSetter;
}

// public UxProperty New(Uno.Action<object, object, object> setter, Uno.Func<object, object> getter, Uno.UX.PropertyObject obj, string name, bool supportsOriginSetter) [static] :14
UxProperty* UxProperty::New1(uType* __type, uDelegate* setter, uDelegate* getter, ::g::Uno::UX::PropertyObject* obj, uString* name, bool supportsOriginSetter)
{
    UxProperty* obj1 = (UxProperty*)uNew(__type);
    obj1->ctor_3(setter, getter, obj, name, supportsOriginSetter);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/Runtime/UxTemplate.cs
// ---------------------------------------------------------------------------------------

// public sealed class UxTemplate :7
// {
static void UxTemplate_build(uType* type)
{
    type->SetFields(2,
        ::g::Uno::Func_typeof()->MakeType(uObject_typeof(), NULL), offsetof(UxTemplate, _create), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)UxTemplate__New2_fn, 0, true, type, 3, ::g::Uno::Func_typeof()->MakeType(uObject_typeof(), NULL), ::g::Uno::String_typeof(), ::g::Uno::Bool_typeof()));
}

::g::Uno::UX::Template_type* UxTemplate_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 3;
    options.ObjectSize = sizeof(UxTemplate);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("Outracks.Simulator.Runtime.UxTemplate", options);
    type->fp_build_ = UxTemplate_build;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))UxTemplate__New1_fn;
    return type;
}

// public UxTemplate(Uno.Func<object> create, string matchCase, bool isDefault) :11
void UxTemplate__ctor_1_fn(UxTemplate* __this, uDelegate* create, uString* matchCase, bool* isDefault)
{
    __this->ctor_1(create, matchCase, *isDefault);
}

// public override sealed object New() :20
void UxTemplate__New1_fn(UxTemplate* __this, uObject** __retval)
{
    uStackFrame __("Outracks.Simulator.Runtime.UxTemplate", "New()");
    return *__retval = uPtr(__this->_create)->Invoke(), void();
}

// public UxTemplate New(Uno.Func<object> create, string matchCase, bool isDefault) :11
void UxTemplate__New2_fn(uDelegate* create, uString* matchCase, bool* isDefault, UxTemplate** __retval)
{
    *__retval = UxTemplate::New2(create, matchCase, *isDefault);
}

// public UxTemplate(Uno.Func<object> create, string matchCase, bool isDefault) [instance] :11
void UxTemplate::ctor_1(uDelegate* create, uString* matchCase, bool isDefault)
{
    ctor_(matchCase, isDefault);
    _create = create;
}

// public UxTemplate New(Uno.Func<object> create, string matchCase, bool isDefault) [static] :11
UxTemplate* UxTemplate::New2(uDelegate* create, uString* matchCase, bool isDefault)
{
    UxTemplate* obj1 = (UxTemplate*)uNew(UxTemplate_typeof());
    obj1->ctor_1(create, matchCase, isDefault);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/Runtime/Scope.cs
// ----------------------------------------------------------------------------------

// public sealed class VariableNotBound :44
// {
static void VariableNotBound_build(uType* type)
{
    ::STRINGS[52] = uString::Const("Element '");
    ::STRINGS[53] = uString::Const("' was referenced before it was initialized");
    type->SetFields(4,
        ::g::Outracks::Simulator::Bytecode::Variable_typeof(), offsetof(VariableNotBound, Variable), 0);
    type->Reflection.SetFields(1,
        new uField("Variable", 4));
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)VariableNotBound__New4_fn, 0, true, type, 1, ::g::Outracks::Simulator::Bytecode::Variable_typeof()));
}

::g::Uno::Exception_type* VariableNotBound_typeof()
{
    static uSStrong< ::g::Uno::Exception_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Exception_typeof();
    options.FieldCount = 5;
    options.ObjectSize = sizeof(VariableNotBound);
    options.TypeSize = sizeof(::g::Uno::Exception_type);
    type = (::g::Uno::Exception_type*)uClassType::New("Outracks.Simulator.Runtime.VariableNotBound", options);
    type->fp_build_ = VariableNotBound_build;
    return type;
}

// public VariableNotBound(Outracks.Simulator.Bytecode.Variable variable) :48
void VariableNotBound__ctor_3_fn(VariableNotBound* __this, ::g::Outracks::Simulator::Bytecode::Variable* variable)
{
    __this->ctor_3(variable);
}

// public VariableNotBound New(Outracks.Simulator.Bytecode.Variable variable) :48
void VariableNotBound__New4_fn(::g::Outracks::Simulator::Bytecode::Variable* variable, VariableNotBound** __retval)
{
    *__retval = VariableNotBound::New4(variable);
}

// public VariableNotBound(Outracks.Simulator.Bytecode.Variable variable) [instance] :48
void VariableNotBound::ctor_3(::g::Outracks::Simulator::Bytecode::Variable* variable)
{
    ctor_1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[52/*"Element '"*/], uPtr(variable)->Name), ::STRINGS[53/*"' was refer...*/]));
    Variable = variable;
}

// public VariableNotBound New(Outracks.Simulator.Bytecode.Variable variable) [static] :48
VariableNotBound* VariableNotBound::New4(::g::Outracks::Simulator::Bytecode::Variable* variable)
{
    VariableNotBound* obj1 = (VariableNotBound*)uNew(VariableNotBound_typeof());
    obj1->ctor_3(variable);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Common.Uno/0.0.0/Runtime/WeakDictionary.cs
// -------------------------------------------------------------------------------------------

// public sealed class WeakDictionary<TKey, TValue> :48
// {
static void WeakDictionary_build(uType* type)
{
    ::TYPES[103] = ::g::Uno::Collections::Dictionary_typeof();
    ::TYPES[104] = ::g::Uno::WeakReference_typeof()->MakeType(uObject_typeof(), NULL);
    type->SetPrecalc(
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Outracks::Simulator::Runtime::HashableWeakReference_typeof(), type->T(1), NULL));
    type->SetFields(0,
        ::TYPES[103/*Uno.Collections.Dictionary`2*/]->MakeType(::g::Outracks::Simulator::Runtime::HashableWeakReference_typeof(), type->T(1), NULL), offsetof(WeakDictionary, _dictionary), 0);
    type->Reflection.SetFunctions(7,
        new uFunction("AsEnumerable", NULL, (void*)WeakDictionary__AsEnumerable_fn, 0, false, ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::Collections::KeyValuePair_typeof()->MakeType(::g::Outracks::Simulator::Runtime::HashableWeakReference_typeof(), type->T(1), NULL), NULL), 0),
        new uFunction("Clear", NULL, (void*)WeakDictionary__Clear_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("get_Item", NULL, (void*)WeakDictionary__get_Item_fn, 0, false, type->T(1), 1, type->T(0)),
        new uFunction("set_Item", NULL, (void*)WeakDictionary__set_Item_fn, 0, false, uVoid_typeof(), 2, type->T(0), type->T(1)),
        new uFunction(".ctor", type, (void*)WeakDictionary__New1_fn, 0, true, type, 0),
        new uFunction("Remove", NULL, (void*)WeakDictionary__Remove_fn, 0, false, ::g::Uno::Bool_typeof(), 1, ::g::Outracks::Simulator::Runtime::HashableWeakReference_typeof()),
        new uFunction("TryGetValue", NULL, (void*)WeakDictionary__TryGetValue_fn, 0, false, ::g::Uno::Bool_typeof(), 2, type->T(0), type->T(1)->ByRef()));
}

uType* WeakDictionary_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.GenericCount = 2;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(WeakDictionary);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Outracks.Simulator.Runtime.WeakDictionary`2", options);
    type->fp_build_ = WeakDictionary_build;
    type->fp_ctor_ = (void*)WeakDictionary__New1_fn;
    return type;
}

// public generated WeakDictionary() :48
void WeakDictionary__ctor__fn(WeakDictionary* __this)
{
    __this->ctor_();
}

// public Uno.Collections.IEnumerable<Uno.Collections.KeyValuePair<Outracks.Simulator.Runtime.HashableWeakReference, TValue>> AsEnumerable() :53
void WeakDictionary__AsEnumerable_fn(WeakDictionary* __this, uObject** __retval)
{
    *__retval = __this->AsEnumerable();
}

// public void Clear() :58
void WeakDictionary__Clear_fn(WeakDictionary* __this)
{
    __this->Clear();
}

// private static Outracks.Simulator.Runtime.HashableWeakReference GetKey(TKey obj) :79
void WeakDictionary__GetKey_fn(uType* __type, void* obj, ::g::Outracks::Simulator::Runtime::HashableWeakReference** __retval)
{
    return *__retval = ::g::Outracks::Simulator::Runtime::HashableWeakReference::New1((::g::Uno::WeakReference*)::g::Uno::WeakReference::New1(::TYPES[104/*Uno.WeakReference<object>*/], uBoxPtr(__type->T(0), obj))), void();
}

// public TValue get_Item(TKey key) :75
void WeakDictionary__get_Item_fn(WeakDictionary* __this, void* key, uTRef __retval)
{
    uStackFrame __("Outracks.Simulator.Runtime.WeakDictionary`2", "get_Item(TKey)");
    uT ret5(__this->__type->T(1), U_ALLOCA(__this->__type->T(1)->ValueSize));
    ::g::Outracks::Simulator::Runtime::HashableWeakReference* ret6;
    return __retval.Store((::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(__this->_dictionary), (WeakDictionary__GetKey_fn(__this->__type, key, &ret6), ret6), &ret5), ret5)), void();
}

// public void set_Item(TKey key, TValue value) :76
void WeakDictionary__set_Item_fn(WeakDictionary* __this, void* key, void* value)
{
    uStackFrame __("Outracks.Simulator.Runtime.WeakDictionary`2", "set_Item(TKey,TValue)");
    ::g::Outracks::Simulator::Runtime::HashableWeakReference* ret7;
    ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(__this->_dictionary), (WeakDictionary__GetKey_fn(__this->__type, key, &ret7), ret7), value);
}

// public generated WeakDictionary New() :48
void WeakDictionary__New1_fn(uType* __type, WeakDictionary** __retval)
{
    *__retval = WeakDictionary::New1(__type);
}

// public bool Remove(Outracks.Simulator.Runtime.HashableWeakReference key) :68
void WeakDictionary__Remove_fn(WeakDictionary* __this, ::g::Outracks::Simulator::Runtime::HashableWeakReference* key, bool* __retval)
{
    *__retval = __this->Remove(key);
}

// public bool TryGetValue(TKey key, TValue& value) :63
void WeakDictionary__TryGetValue_fn(WeakDictionary* __this, void* key, uTRef value, bool* __retval)
{
    uStackFrame __("Outracks.Simulator.Runtime.WeakDictionary`2", "TryGetValue(TKey,TValue&)");
    bool ret3;
    ::g::Outracks::Simulator::Runtime::HashableWeakReference* ret4;
    return *__retval = (::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(__this->_dictionary), (WeakDictionary__GetKey_fn(__this->__type, key, &ret4), ret4), value, &ret3), ret3), void();
}

// public generated WeakDictionary() [instance] :48
void WeakDictionary::ctor_()
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.Dictionary<Outracks.Simulator.Runtime.HashableWeakReference, TValue>*/),
    };
    _dictionary = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(__types[0]));
}

// public Uno.Collections.IEnumerable<Uno.Collections.KeyValuePair<Outracks.Simulator.Runtime.HashableWeakReference, TValue>> AsEnumerable() [instance] :53
uObject* WeakDictionary::AsEnumerable()
{
    uStackFrame __("Outracks.Simulator.Runtime.WeakDictionary`2", "AsEnumerable()");
    return (uObject*)_dictionary;
}

// public void Clear() [instance] :58
void WeakDictionary::Clear()
{
    uStackFrame __("Outracks.Simulator.Runtime.WeakDictionary`2", "Clear()");
    uPtr(_dictionary)->Clear();
}

// public bool Remove(Outracks.Simulator.Runtime.HashableWeakReference key) [instance] :68
bool WeakDictionary::Remove(::g::Outracks::Simulator::Runtime::HashableWeakReference* key)
{
    uStackFrame __("Outracks.Simulator.Runtime.WeakDictionary`2", "Remove(Outracks.Simulator.Runtime.HashableWeakReference)");
    bool ret2;
    return (::g::Uno::Collections::Dictionary__Remove_fn(uPtr(_dictionary), key, &ret2), ret2);
}

// public generated WeakDictionary New() [static] :48
WeakDictionary* WeakDictionary::New1(uType* __type)
{
    WeakDictionary* obj1 = (WeakDictionary*)uNew(__type);
    obj1->ctor_();
    return obj1;
}
// }

}}}} // ::g::Outracks::Simulator::Runtime
