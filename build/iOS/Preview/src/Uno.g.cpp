// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <cmath>
#include <uBase/String.h>
#include <uBase/Traits.h>
#include <uBase/Unicode.h>
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
#include <Uno.AggregateException.h>
#include <Uno.Application.h>
#include <Uno.ArgumentException.h>
#include <Uno.ArgumentNullException.h>
#include <Uno.ArgumentOutOfRangeException.h>
#include <Uno.Array.h>
#include <Uno.Attribute.h>
#include <Uno.Bool.h>
#include <Uno.Buffer.h>
#include <Uno.Byte.h>
#include <Uno.Byte2.h>
#include <Uno.Byte4.h>
#include <Uno.Char.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Collections.List-1.Enumerator.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Collections.ReadOnlyCollection-1.h>
#include <Uno.Color.h>
#include <Uno.Comparison-1.h>
#include <Uno.DateTime.h>
#include <Uno.DateTimeKind.h>
#include <Uno.Delegate.h>
#include <Uno.Double.h>
#include <Uno.Enum.h>
#include <Uno.EventArgs.h>
#include <Uno.EventHandler.h>
#include <Uno.EventHandler-1.h>
#include <Uno.Exception.h>
#include <Uno.FakeTime.h>
#include <Uno.FlagsAttribute.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float2x2.h>
#include <Uno.Float3.h>
#include <Uno.Float3x3.h>
#include <Uno.Float4.h>
#include <Uno.Float4x4.h>
#include <Uno.FormatException.h>
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
#include <Uno.GC.h>
#include <Uno.Generic.h>
#include <Uno.IDisposable.h>
#include <Uno.IndexOutOfRangeException.h>
#include <Uno.Int.h>
#include <Uno.Int2.h>
#include <Uno.Int3.h>
#include <Uno.Int4.h>
#include <Uno.IntPtr.h>
#include <Uno.InvalidCastException.h>
#include <Uno.InvalidOperationException.h>
#include <Uno.ITuple.h>
#include <Uno.Long.h>
#include <Uno.Math.h>
#include <Uno.Matrix.h>
#include <Uno.NotImplementedException.h>
#include <Uno.NotSupportedException.h>
#include <Uno.NullReferenceException.h>
#include <Uno.Object.h>
#include <Uno.ObjectDisposedException.h>
#include <Uno.ObsoleteAttribute.h>
#include <Uno.OverflowException.h>
#include <Uno.Platform.Window.h>
#include <Uno.Predicate-1.h>
#include <Uno.Quaternion.h>
#include <Uno.Rect.h>
#include <Uno.Recti.h>
#include <Uno.Runtime.Implementation.BufferImpl.h>
#include <Uno.Runtime.Implementation.Internal.ArrayList-1.h>
#include <Uno.Runtime.Implementation.Internal.FormatStringToken.h>
#include <Uno.Runtime.Implementation.Internal.FormatStringTokenizer.h>
#include <Uno.SByte.h>
#include <Uno.SByte2.h>
#include <Uno.SByte4.h>
#include <Uno.Short.h>
#include <Uno.Short2.h>
#include <Uno.Short4.h>
#include <Uno.String.h>
#include <Uno.Text.StringBuilder.h>
#include <Uno.Time.DateTimeZone.h>
#include <Uno.Time.Duration.h>
#include <Uno.Time.Instant.h>
#include <Uno.Time.ZonedDateTime.h>
#include <Uno.Tuple.h>
#include <Uno.Tuple-2.h>
#include <Uno.Type.h>
#include <Uno.UInt.h>
#include <Uno.ULong.h>
#include <Uno.UShort.h>
#include <Uno.UShort2.h>
#include <Uno.UShort4.h>
#include <Uno.Vector.h>
#include <Uno.WeakReference-1.h>
#include <Uno.WeakReferenceAttribute.h>
#include <Uno/Support.h>
static uString* STRINGS[46];
static uType* TYPES[19];

namespace g{
namespace Uno{

// /usr/local/share/uno/Packages/UnoCore/1.4.3/Source/Uno/Action.uno
// -----------------------------------------------------------------

// public delegate void Action() :6
uDelegateType* Action_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.Action", 0, 0);
    type->SetSignature(uVoid_typeof());
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/1.4.3/Source/Uno/Action.uno
// -----------------------------------------------------------------

// public delegate void Action<T>(T arg) :9
uDelegateType* Action1_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.Action`1", 1, 1);
    type->SetSignature(uVoid_typeof(),
        type->T(0));
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/1.4.3/Source/Uno/Action.uno
// -----------------------------------------------------------------

// public delegate void Action<T1, T2>(T1 arg1, T2 arg2) :12
uDelegateType* Action2_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.Action`2", 2, 2);
    type->SetSignature(uVoid_typeof(),
        type->T(0),
        type->T(1));
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/1.4.3/Source/Uno/Action.uno
// -----------------------------------------------------------------

// public delegate void Action<T1, T2, T3>(T1 arg1, T2 arg2, T3 arg3) :15
uDelegateType* Action3_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.Action`3", 3, 3);
    type->SetSignature(uVoid_typeof(),
        type->T(0),
        type->T(1),
        type->T(2));
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/1.4.3/Source/Uno/Action.uno
// -----------------------------------------------------------------

// public delegate void Action<T1, T2, T3, T4>(T1 arg1, T2 arg2, T3 arg3, T4 arg4) :18
uDelegateType* Action4_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.Action`4", 4, 4);
    type->SetSignature(uVoid_typeof(),
        type->T(0),
        type->T(1),
        type->T(2),
        type->T(3));
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/1.4.3/Source/Uno/Action.uno
// -----------------------------------------------------------------

// public delegate void Action<T1, T2, T3, T4, T5>(T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5) :21
uDelegateType* Action5_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.Action`5", 5, 5);
    type->SetSignature(uVoid_typeof(),
        type->T(0),
        type->T(1),
        type->T(2),
        type->T(3),
        type->T(4));
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/1.4.3/Source/Uno/Action.uno
// -----------------------------------------------------------------

// public delegate void Action<T1, T2, T3, T4, T5, T6>(T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6) :24
uDelegateType* Action6_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.Action`6", 6, 6);
    type->SetSignature(uVoid_typeof(),
        type->T(0),
        type->T(1),
        type->T(2),
        type->T(3),
        type->T(4),
        type->T(5));
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/1.4.3/Source/Uno/Action.uno
// -----------------------------------------------------------------

// public delegate void Action<T1, T2, T3, T4, T5, T6, T7>(T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7) :27
uDelegateType* Action7_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.Action`7", 7, 7);
    type->SetSignature(uVoid_typeof(),
        type->T(0),
        type->T(1),
        type->T(2),
        type->T(3),
        type->T(4),
        type->T(5),
        type->T(6));
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/1.4.3/Source/Uno/Action.uno
// -----------------------------------------------------------------

// public delegate void Action<T1, T2, T3, T4, T5, T6, T7, T8>(T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7, T8 arg8) :30
uDelegateType* Action8_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.Action`8", 8, 8);
    type->SetSignature(uVoid_typeof(),
        type->T(0),
        type->T(1),
        type->T(2),
        type->T(3),
        type->T(4),
        type->T(5),
        type->T(6),
        type->T(7));
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/1.4.3/Source/Uno/Action.uno
// -----------------------------------------------------------------

// public delegate void Action<T1, T2, T3, T4, T5, T6, T7, T8, T9>(T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7, T8 arg8, T9 arg9) :33
uDelegateType* Action9_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.Action`9", 9, 9);
    type->SetSignature(uVoid_typeof(),
        type->T(0),
        type->T(1),
        type->T(2),
        type->T(3),
        type->T(4),
        type->T(5),
        type->T(6),
        type->T(7),
        type->T(8));
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/1.4.3/Source/Uno/Action.uno
// -----------------------------------------------------------------

// public delegate void Action<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10>(T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7, T8 arg8, T9 arg9, T10 arg10) :36
uDelegateType* Action10_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.Action`10", 10, 10);
    type->SetSignature(uVoid_typeof(),
        type->T(0),
        type->T(1),
        type->T(2),
        type->T(3),
        type->T(4),
        type->T(5),
        type->T(6),
        type->T(7),
        type->T(8),
        type->T(9));
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/1.4.3/Source/Uno/Action.uno
// -----------------------------------------------------------------

// public delegate void Action<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11>(T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7, T8 arg8, T9 arg9, T10 arg10, T11 arg11) :39
uDelegateType* Action11_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.Action`11", 11, 11);
    type->SetSignature(uVoid_typeof(),
        type->T(0),
        type->T(1),
        type->T(2),
        type->T(3),
        type->T(4),
        type->T(5),
        type->T(6),
        type->T(7),
        type->T(8),
        type->T(9),
        type->T(10));
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/1.4.3/Source/Uno/Action.uno
// -----------------------------------------------------------------

// public delegate void Action<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12>(T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7, T8 arg8, T9 arg9, T10 arg10, T11 arg11, T12 arg12) :42
uDelegateType* Action12_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.Action`12", 12, 12);
    type->SetSignature(uVoid_typeof(),
        type->T(0),
        type->T(1),
        type->T(2),
        type->T(3),
        type->T(4),
        type->T(5),
        type->T(6),
        type->T(7),
        type->T(8),
        type->T(9),
        type->T(10),
        type->T(11));
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/1.4.3/Source/Uno/Action.uno
// -----------------------------------------------------------------

// public delegate void Action<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13>(T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7, T8 arg8, T9 arg9, T10 arg10, T11 arg11, T12 arg12, T13 arg13) :45
uDelegateType* Action13_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.Action`13", 13, 13);
    type->SetSignature(uVoid_typeof(),
        type->T(0),
        type->T(1),
        type->T(2),
        type->T(3),
        type->T(4),
        type->T(5),
        type->T(6),
        type->T(7),
        type->T(8),
        type->T(9),
        type->T(10),
        type->T(11),
        type->T(12));
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/1.4.3/Source/Uno/Action.uno
// -----------------------------------------------------------------

// public delegate void Action<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14>(T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7, T8 arg8, T9 arg9, T10 arg10, T11 arg11, T12 arg12, T13 arg13, T14 arg14) :48
uDelegateType* Action14_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.Action`14", 14, 14);
    type->SetSignature(uVoid_typeof(),
        type->T(0),
        type->T(1),
        type->T(2),
        type->T(3),
        type->T(4),
        type->T(5),
        type->T(6),
        type->T(7),
        type->T(8),
        type->T(9),
        type->T(10),
        type->T(11),
        type->T(12),
        type->T(13));
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/1.4.3/Source/Uno/Action.uno
// -----------------------------------------------------------------

// public delegate void Action<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15>(T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7, T8 arg8, T9 arg9, T10 arg10, T11 arg11, T12 arg12, T13 arg13, T14 arg14, T15 arg15) :51
uDelegateType* Action15_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.Action`15", 15, 15);
    type->SetSignature(uVoid_typeof(),
        type->T(0),
        type->T(1),
        type->T(2),
        type->T(3),
        type->T(4),
        type->T(5),
        type->T(6),
        type->T(7),
        type->T(8),
        type->T(9),
        type->T(10),
        type->T(11),
        type->T(12),
        type->T(13),
        type->T(14));
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/1.4.3/Source/Uno/Action.uno
// -----------------------------------------------------------------

// public delegate void Action<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16>(T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7, T8 arg8, T9 arg9, T10 arg10, T11 arg11, T12 arg12, T13 arg13, T14 arg14, T15 arg15, T16 arg16) :54
uDelegateType* Action16_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.Action`16", 16, 16);
    type->SetSignature(uVoid_typeof(),
        type->T(0),
        type->T(1),
        type->T(2),
        type->T(3),
        type->T(4),
        type->T(5),
        type->T(6),
        type->T(7),
        type->T(8),
        type->T(9),
        type->T(10),
        type->T(11),
        type->T(12),
        type->T(13),
        type->T(14),
        type->T(15));
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/1.4.3/Source/Uno/Exceptions/AggregateException.uno
// ----------------------------------------------------------------------------------------

// public sealed class AggregateException :8
// {
static void AggregateException_build(uType* type)
{
    ::STRINGS[0] = uString::Const("One or more errors occurred.");
    ::STRINGS[1] = uString::Const("---> (Inner Exception #{0}) ");
    ::STRINGS[2] = uString::Const("<---\n"
        "");
    ::STRINGS[3] = uString::Const("\n"
        "");
    ::TYPES[0] = uObject_typeof()->Array();
    ::TYPES[1] = ::g::Uno::Runtime::Implementation::Internal::ArrayList_typeof()->MakeType(::g::Uno::Exception_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::ReadOnlyCollection_typeof()->MakeType(::g::Uno::Exception_typeof(), NULL);
    type->SetFields(4,
        ::g::Uno::Exception_typeof()->Array(), offsetof(AggregateException, _innerExceptions), 0);
    type->Reflection.SetFunctions(5,
        new uFunction("get_InnerExceptions", NULL, (void*)AggregateException__get_InnerExceptions_fn, 0, false, ::TYPES[2/*Uno.Collections.ReadOnlyCollection<Uno.Exception>*/], 0),
        new uFunction(".ctor", NULL, (void*)AggregateException__New4_fn, 0, true, type, 0),
        new uFunction(".ctor", NULL, (void*)AggregateException__New5_fn, 0, true, type, 1, ::g::Uno::String_typeof()),
        new uFunction(".ctor", NULL, (void*)AggregateException__New6_fn, 0, true, type, 2, ::g::Uno::String_typeof(), ::g::Uno::Exception_typeof()->Array()),
        new uFunction(".ctor", NULL, (void*)AggregateException__New7_fn, 0, true, type, 1, ::g::Uno::Exception_typeof()->Array()));
}

::g::Uno::Exception_type* AggregateException_typeof()
{
    static uSStrong< ::g::Uno::Exception_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Exception_typeof();
    options.FieldCount = 5;
    options.ObjectSize = sizeof(AggregateException);
    options.TypeSize = sizeof(::g::Uno::Exception_type);
    type = (::g::Uno::Exception_type*)uClassType::New("Uno.AggregateException", options);
    type->fp_build_ = AggregateException_build;
    type->fp_ctor_ = (void*)AggregateException__New4_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))AggregateException__ToString_fn;
    return type;
}

// public AggregateException() :20
void AggregateException__ctor_3_fn(AggregateException* __this)
{
    __this->ctor_3();
}

// public AggregateException(string message) :30
void AggregateException__ctor_4_fn(AggregateException* __this, uString* message)
{
    __this->ctor_4(message);
}

// public AggregateException(string message, Uno.Exception[] innerExceptions) :35
void AggregateException__ctor_5_fn(AggregateException* __this, uString* message, uArray* innerExceptions)
{
    __this->ctor_5(message, innerExceptions);
}

// public AggregateException(Uno.Exception[] innerExceptions) :25
void AggregateException__ctor_6_fn(AggregateException* __this, uArray* innerExceptions)
{
    __this->ctor_6(innerExceptions);
}

// public Uno.Collections.ReadOnlyCollection<Uno.Exception> get_InnerExceptions() :13
void AggregateException__get_InnerExceptions_fn(AggregateException* __this, ::g::Uno::Collections::ReadOnlyCollection** __retval)
{
    *__retval = __this->InnerExceptions();
}

// public AggregateException New() :20
void AggregateException__New4_fn(AggregateException** __retval)
{
    *__retval = AggregateException::New4();
}

// public AggregateException New(string message) :30
void AggregateException__New5_fn(uString* message, AggregateException** __retval)
{
    *__retval = AggregateException::New5(message);
}

// public AggregateException New(string message, Uno.Exception[] innerExceptions) :35
void AggregateException__New6_fn(uString* message, uArray* innerExceptions, AggregateException** __retval)
{
    *__retval = AggregateException::New6(message, innerExceptions);
}

// public AggregateException New(Uno.Exception[] innerExceptions) :25
void AggregateException__New7_fn(uArray* innerExceptions, AggregateException** __retval)
{
    *__retval = AggregateException::New7(innerExceptions);
}

// public override sealed string ToString() :41
void AggregateException__ToString_fn(AggregateException* __this, uString** __retval)
{
    uStackFrame __("Uno.AggregateException", "ToString()");
    uString* ret5;
    ::g::Uno::Text::StringBuilder* sb = ::g::Uno::Text::StringBuilder::New1();

    for (int i = 0; i < uPtr(__this->_innerExceptions)->Length(); ++i)
    {
        uPtr(sb)->Append2(::g::Uno::String::Format(::STRINGS[1/*"---> (Inner...*/], uArray::Init<uObject*>(::TYPES[0/*object[]*/], 1, uBox<int>(::TYPES[8/*int*/], i))));
        sb->Append2(uPtr(uPtr(__this->_innerExceptions)->Strong< ::g::Uno::Exception*>(i))->ToString());
        sb->Append2(::STRINGS[2/*"<---\n"*/]);

        if (i != (uPtr(__this->_innerExceptions)->Length() - 1))
            uPtr(sb)->Append2(::STRINGS[3/*"\n"*/]);
    }

    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2((::g::Uno::Exception__ToString_fn(__this, &ret5), ret5), ::STRINGS[3/*"\n"*/]), sb->ToString()), void();
}

// public AggregateException() [instance] :20
void AggregateException::ctor_3()
{
    ctor_4(::STRINGS[0/*"One or more...*/]);
}

// public AggregateException(string message) [instance] :30
void AggregateException::ctor_4(uString* message)
{
    ctor_1(message);
}

// public AggregateException(string message, Uno.Exception[] innerExceptions) [instance] :35
void AggregateException::ctor_5(uString* message, uArray* innerExceptions)
{
    ctor_1(message);
    _innerExceptions = innerExceptions;
}

// public AggregateException(Uno.Exception[] innerExceptions) [instance] :25
void AggregateException::ctor_6(uArray* innerExceptions)
{
    ctor_5(::STRINGS[0/*"One or more...*/], innerExceptions);
}

// public Uno.Collections.ReadOnlyCollection<Uno.Exception> get_InnerExceptions() [instance] :13
::g::Uno::Collections::ReadOnlyCollection* AggregateException::InnerExceptions()
{
    uStackFrame __("Uno.AggregateException", "get_InnerExceptions()");
    ::g::Uno::Runtime::Implementation::Internal::ArrayList* wrapper = (::g::Uno::Runtime::Implementation::Internal::ArrayList*)::g::Uno::Runtime::Implementation::Internal::ArrayList::New1(::TYPES[1/*Uno.Runtime.Implementation.Internal.ArrayList<Uno.Exception>*/], _innerExceptions);
    return (::g::Uno::Collections::ReadOnlyCollection*)::g::Uno::Collections::ReadOnlyCollection::New1(::TYPES[2/*Uno.Collections.ReadOnlyCollection<Uno.Exception>*/], (uObject*)wrapper);
}

// public AggregateException New() [static] :20
AggregateException* AggregateException::New4()
{
    AggregateException* obj1 = (AggregateException*)uNew(AggregateException_typeof());
    obj1->ctor_3();
    return obj1;
}

// public AggregateException New(string message) [static] :30
AggregateException* AggregateException::New5(uString* message)
{
    AggregateException* obj3 = (AggregateException*)uNew(AggregateException_typeof());
    obj3->ctor_4(message);
    return obj3;
}

// public AggregateException New(string message, Uno.Exception[] innerExceptions) [static] :35
AggregateException* AggregateException::New6(uString* message, uArray* innerExceptions)
{
    AggregateException* obj4 = (AggregateException*)uNew(AggregateException_typeof());
    obj4->ctor_5(message, innerExceptions);
    return obj4;
}

// public AggregateException New(Uno.Exception[] innerExceptions) [static] :25
AggregateException* AggregateException::New7(uArray* innerExceptions)
{
    AggregateException* obj2 = (AggregateException*)uNew(AggregateException_typeof());
    obj2->ctor_6(innerExceptions);
    return obj2;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.4.3/Source/Uno/Application.uno
// ----------------------------------------------------------------------

// public abstract extern class Application :11
// {
static void Application_build(uType* type)
{
    type->SetDependencies(
        ::g::Uno::Platform::CoreApp_typeof());
    type->SetFields(0,
        ::g::Uno::Platform::Window_typeof(), offsetof(Application, _Window), 0);
    type->Reflection.SetFunctions(5,
        new uFunction("get_Current", NULL, (void*)Application__get_Current1_fn, 0, true, type, 0),
        new uFunction("Draw", NULL, (void*)Application__Draw_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("get_NeedsRedraw", NULL, (void*)Application__get_NeedsRedraw_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("Update", NULL, (void*)Application__Update_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("get_Window", NULL, (void*)Application__get_Window_fn, 0, false, ::g::Uno::Platform::Window_typeof(), 0));
}

uType* Application_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Platform::CoreApp_typeof();
    options.FieldCount = 1;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(Application);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Application", options);
    type->fp_build_ = Application_build;
    return type;
}

// protected Application() :32
void Application__ctor_1_fn(Application* __this)
{
    __this->ctor_1();
}

// public static new Uno.Application get_Current() :16
void Application__get_Current1_fn(Application** __retval)
{
    *__retval = Application::Current1();
}

// public void Draw() :43
void Application__Draw_fn(Application* __this)
{
    __this->Draw();
}

// public bool get_NeedsRedraw() :29
void Application__get_NeedsRedraw_fn(Application* __this, bool* __retval)
{
    *__retval = __this->NeedsRedraw();
}

// public void Update() :38
void Application__Update_fn(Application* __this)
{
    __this->Update();
}

// public generated Uno.Platform.Window get_Window() :22
void Application__get_Window_fn(Application* __this, ::g::Uno::Platform::Window** __retval)
{
    *__retval = __this->Window();
}

// private generated void set_Window(Uno.Platform.Window value) :23
void Application__set_Window_fn(Application* __this, ::g::Uno::Platform::Window* value)
{
    __this->Window(value);
}

// protected Application() [instance] :32
void Application::ctor_1()
{
    uStackFrame __("Uno.Application", ".ctor()");
    ctor_();
    Window(::g::Uno::Platform::Window::New2());
}

// public void Draw() [instance] :43
void Application::Draw()
{
}

// public bool get_NeedsRedraw() [instance] :29
bool Application::NeedsRedraw()
{
    return true;
}

// public void Update() [instance] :38
void Application::Update()
{
}

// public generated Uno.Platform.Window get_Window() [instance] :22
::g::Uno::Platform::Window* Application::Window()
{
    return _Window;
}

// private generated void set_Window(Uno.Platform.Window value) [instance] :23
void Application::Window(::g::Uno::Platform::Window* value)
{
    _Window = value;
}

// public static new Uno.Application get_Current() [static] :16
Application* Application::Current1()
{
    return uAs<Application*>(::g::Uno::Platform::CoreApp::Current(), Application_typeof());
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.4.3/Source/Uno/Exceptions/ArgumentException.uno
// ---------------------------------------------------------------------------------------

// public class ArgumentException :6
// {
static void ArgumentException_build(uType* type)
{
    ::STRINGS[4] = uString::Const(": ");
    type->SetFields(4);
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)ArgumentException__New4_fn, 0, true, type, 1, ::g::Uno::String_typeof()),
        new uFunction(".ctor", NULL, (void*)ArgumentException__New5_fn, 0, true, type, 2, ::g::Uno::String_typeof(), ::g::Uno::String_typeof()));
}

::g::Uno::Exception_type* ArgumentException_typeof()
{
    static uSStrong< ::g::Uno::Exception_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Exception_typeof();
    options.FieldCount = 4;
    options.ObjectSize = sizeof(ArgumentException);
    options.TypeSize = sizeof(::g::Uno::Exception_type);
    type = (::g::Uno::Exception_type*)uClassType::New("Uno.ArgumentException", options);
    type->fp_build_ = ArgumentException_build;
    return type;
}

// public ArgumentException(string message) :8
void ArgumentException__ctor_3_fn(ArgumentException* __this, uString* message)
{
    __this->ctor_3(message);
}

// public ArgumentException(string message, string paramName) :13
void ArgumentException__ctor_4_fn(ArgumentException* __this, uString* message, uString* paramName)
{
    __this->ctor_4(message, paramName);
}

// public ArgumentException New(string message) :8
void ArgumentException__New4_fn(uString* message, ArgumentException** __retval)
{
    *__retval = ArgumentException::New4(message);
}

// public ArgumentException New(string message, string paramName) :13
void ArgumentException__New5_fn(uString* message, uString* paramName, ArgumentException** __retval)
{
    *__retval = ArgumentException::New5(message, paramName);
}

// public ArgumentException(string message) [instance] :8
void ArgumentException::ctor_3(uString* message)
{
    ctor_1(message);
}

// public ArgumentException(string message, string paramName) [instance] :13
void ArgumentException::ctor_4(uString* message, uString* paramName)
{
    ctor_1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(paramName, ::STRINGS[4/*": "*/]), message));
}

// public ArgumentException New(string message) [static] :8
ArgumentException* ArgumentException::New4(uString* message)
{
    ArgumentException* obj1 = (ArgumentException*)uNew(ArgumentException_typeof());
    obj1->ctor_3(message);
    return obj1;
}

// public ArgumentException New(string message, string paramName) [static] :13
ArgumentException* ArgumentException::New5(uString* message, uString* paramName)
{
    ArgumentException* obj2 = (ArgumentException*)uNew(ArgumentException_typeof());
    obj2->ctor_4(message, paramName);
    return obj2;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.4.3/Source/Uno/Exceptions/ArgumentNullException.uno
// -------------------------------------------------------------------------------------------

// public sealed class ArgumentNullException :6
// {
static void ArgumentNullException_build(uType* type)
{
    ::STRINGS[5] = uString::Const("value was null");
    type->SetFields(4);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)ArgumentNullException__New6_fn, 0, true, type, 1, ::g::Uno::String_typeof()));
}

::g::Uno::Exception_type* ArgumentNullException_typeof()
{
    static uSStrong< ::g::Uno::Exception_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::ArgumentException_typeof();
    options.FieldCount = 4;
    options.ObjectSize = sizeof(ArgumentNullException);
    options.TypeSize = sizeof(::g::Uno::Exception_type);
    type = (::g::Uno::Exception_type*)uClassType::New("Uno.ArgumentNullException", options);
    type->fp_build_ = ArgumentNullException_build;
    return type;
}

// public ArgumentNullException(string paramName) :8
void ArgumentNullException__ctor_5_fn(ArgumentNullException* __this, uString* paramName)
{
    __this->ctor_5(paramName);
}

// public ArgumentNullException New(string paramName) :8
void ArgumentNullException__New6_fn(uString* paramName, ArgumentNullException** __retval)
{
    *__retval = ArgumentNullException::New6(paramName);
}

// public ArgumentNullException(string paramName) [instance] :8
void ArgumentNullException::ctor_5(uString* paramName)
{
    ctor_4(::STRINGS[5/*"value was n...*/], paramName);
}

// public ArgumentNullException New(string paramName) [static] :8
ArgumentNullException* ArgumentNullException::New6(uString* paramName)
{
    ArgumentNullException* obj1 = (ArgumentNullException*)uNew(ArgumentNullException_typeof());
    obj1->ctor_5(paramName);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.4.3/Source/Uno/Exceptions/ArgumentOutOfRangeException.uno
// -------------------------------------------------------------------------------------------------

// public sealed class ArgumentOutOfRangeException :6
// {
static void ArgumentOutOfRangeException_build(uType* type)
{
    ::STRINGS[6] = uString::Const("value out of range");
    type->SetFields(4);
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)ArgumentOutOfRangeException__New6_fn, 0, true, type, 1, ::g::Uno::String_typeof()),
        new uFunction(".ctor", NULL, (void*)ArgumentOutOfRangeException__New7_fn, 0, true, type, 2, ::g::Uno::String_typeof(), ::g::Uno::String_typeof()));
}

::g::Uno::Exception_type* ArgumentOutOfRangeException_typeof()
{
    static uSStrong< ::g::Uno::Exception_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::ArgumentException_typeof();
    options.FieldCount = 4;
    options.ObjectSize = sizeof(ArgumentOutOfRangeException);
    options.TypeSize = sizeof(::g::Uno::Exception_type);
    type = (::g::Uno::Exception_type*)uClassType::New("Uno.ArgumentOutOfRangeException", options);
    type->fp_build_ = ArgumentOutOfRangeException_build;
    return type;
}

// public ArgumentOutOfRangeException(string paramName) :13
void ArgumentOutOfRangeException__ctor_5_fn(ArgumentOutOfRangeException* __this, uString* paramName)
{
    __this->ctor_5(paramName);
}

// public ArgumentOutOfRangeException(string message, string paramName) :8
void ArgumentOutOfRangeException__ctor_6_fn(ArgumentOutOfRangeException* __this, uString* message, uString* paramName)
{
    __this->ctor_6(message, paramName);
}

// public ArgumentOutOfRangeException New(string paramName) :13
void ArgumentOutOfRangeException__New6_fn(uString* paramName, ArgumentOutOfRangeException** __retval)
{
    *__retval = ArgumentOutOfRangeException::New6(paramName);
}

// public ArgumentOutOfRangeException New(string message, string paramName) :8
void ArgumentOutOfRangeException__New7_fn(uString* message, uString* paramName, ArgumentOutOfRangeException** __retval)
{
    *__retval = ArgumentOutOfRangeException::New7(message, paramName);
}

// public ArgumentOutOfRangeException(string paramName) [instance] :13
void ArgumentOutOfRangeException::ctor_5(uString* paramName)
{
    ctor_4(::STRINGS[6/*"value out o...*/], paramName);
}

// public ArgumentOutOfRangeException(string message, string paramName) [instance] :8
void ArgumentOutOfRangeException::ctor_6(uString* message, uString* paramName)
{
    ctor_4(message, paramName);
}

// public ArgumentOutOfRangeException New(string paramName) [static] :13
ArgumentOutOfRangeException* ArgumentOutOfRangeException::New6(uString* paramName)
{
    ArgumentOutOfRangeException* obj2 = (ArgumentOutOfRangeException*)uNew(ArgumentOutOfRangeException_typeof());
    obj2->ctor_5(paramName);
    return obj2;
}

// public ArgumentOutOfRangeException New(string message, string paramName) [static] :8
ArgumentOutOfRangeException* ArgumentOutOfRangeException::New7(uString* message, uString* paramName)
{
    ArgumentOutOfRangeException* obj1 = (ArgumentOutOfRangeException*)uNew(ArgumentOutOfRangeException_typeof());
    obj1->ctor_6(message, paramName);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.4.3/Source/Uno/Array.uno
// ----------------------------------------------------------------

// public sealed class Array :9
// {
static void Array_build(uType* type)
{
    ::STRINGS[7] = uString::Const("sourceArray");
    ::STRINGS[8] = uString::Const("destinationArray");
    ::STRINGS[9] = uString::Const("Non-negative number required.");
    ::STRINGS[10] = uString::Const("sourceIndex");
    ::STRINGS[11] = uString::Const("destinationIndex");
    ::STRINGS[12] = uString::Const("length");
    ::STRINGS[13] = uString::Const("Destination array was not long enough. Check destinationIndex and length, and the array's lower bounds.");
    ::STRINGS[14] = uString::Const(", ");
    ::STRINGS[15] = uString::Const("Source array was not long enough. Check sourceIndex and length, and the array's lower bounds.");
    ::STRINGS[16] = uString::Const("elements");
    ::STRINGS[17] = uString::Const("index");
    ::STRINGS[18] = uString::Const("Index and length do not specify a valid range in elements.");
    ::STRINGS[19] = uString::Const("Comparer is null.");
    type->MethodTypes[1]->SetPrecalc(
        type->MakeMethod(0/*Copy<T>*/, type->MethodTypes[1]->U(0), NULL));
    type->MethodTypes[2]->SetPrecalc(
        type->MakeMethod(6/*Swap<T>*/, type->MethodTypes[2]->U(0), NULL));
    type->MethodTypes[3]->SetPrecalc(
        type->MakeMethod(6/*Swap<T>*/, type->MethodTypes[3]->U(0), NULL));
    type->MethodTypes[4]->SetPrecalc(
        type->MakeMethod(2/*QuickSort<T>*/, type->MethodTypes[4]->U(0), NULL),
        type->MakeMethod(3/*ShellSort<T>*/, type->MethodTypes[4]->U(0), NULL));
    type->MethodTypes[5]->SetPrecalc(
        type->MakeMethod(4/*Sort<T>*/, type->MethodTypes[5]->U(0), NULL));
    type->Reflection.SetFunctions(5,
        new uFunction("Copy`1", type->MethodTypes[0], (void*)Array__Copy_fn, 0, true, uVoid_typeof(), 5, type->MethodTypes[0]->U(0)->Array(), ::g::Uno::Int_typeof(), type->MethodTypes[0]->U(0)->Array(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("Copy`1", type->MethodTypes[1], (void*)Array__Copy1_fn, 0, true, uVoid_typeof(), 3, type->MethodTypes[1]->U(0)->Array(), type->MethodTypes[1]->U(0)->Array(), ::g::Uno::Int_typeof()),
        new uFunction(".ctor", NULL, (void*)Array__New1_fn, 0, true, type, 0),
        new uFunction("Sort`1", type->MethodTypes[4], (void*)Array__Sort_fn, 0, true, uVoid_typeof(), 4, type->MethodTypes[4]->U(0)->Array(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Comparison_typeof()->MakeType(type->MethodTypes[4]->U(0), NULL)),
        new uFunction("Sort`1", type->MethodTypes[5], (void*)Array__Sort1_fn, 0, true, uVoid_typeof(), 2, type->MethodTypes[5]->U(0)->Array(), ::g::Uno::Comparison_typeof()->MakeType(type->MethodTypes[5]->U(0), NULL)));
}

uType* Array_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.MethodTypeCount = 7;
    options.ObjectSize = sizeof(Array);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Array", options);
    type->MethodTypes[0] = type->NewMethodType(1, 0,0);
    type->MethodTypes[1] = type->NewMethodType(1, 1,0);
    type->MethodTypes[2] = type->NewMethodType(1, 1,0);
    type->MethodTypes[3] = type->NewMethodType(1, 1,0);
    type->MethodTypes[4] = type->NewMethodType(1, 2,0);
    type->MethodTypes[5] = type->NewMethodType(1, 1,0);
    type->MethodTypes[6] = type->NewMethodType(1, 0,0);
    type->fp_build_ = Array_build;
    type->fp_ctor_ = (void*)Array__New1_fn;
    return type;
}

// public generated Array() :9
void Array__ctor__fn(uArray* __this)
{
    Array::ctor_(__this);
}

// public static void Copy<T>(T[] sourceArray, int sourceIndex, T[] destinationArray, int destinationIndex, int length) :18
void Array__Copy_fn(uType* __type, uArray* sourceArray, int* sourceIndex, uArray* destinationArray, int* destinationIndex, int* length)
{
    Array::Copy(__type, sourceArray, *sourceIndex, destinationArray, *destinationIndex, *length);
}

// public static void Copy<T>(T[] sourceArray, T[] destinationArray, int length) :12
void Array__Copy1_fn(uType* __type, uArray* sourceArray, uArray* destinationArray, int* length)
{
    Array::Copy1(__type, sourceArray, destinationArray, *length);
}

// public generated Array New() :9
void Array__New1_fn(uArray** __retval)
{
    *__retval = Array::New1();
}

// private static void QuickSort<T>(T[] data, Uno.Comparison<T> comparison, int left, int right) :110
void Array__QuickSort_fn(uType* __type, uArray* data, uDelegate* comparison, int* left, int* right)
{
    Array::QuickSort(__type, data, comparison, *left, *right);
}

// private static void ShellSort<T>(T[] data, Uno.Comparison<T> comparison, int left, int right) :80
void Array__ShellSort_fn(uType* __type, uArray* data, uDelegate* comparison, int* left, int* right)
{
    Array::ShellSort(__type, data, comparison, *left, *right);
}

// public static void Sort<T>(T[] elements, int index, int length, Uno.Comparison<T> comparison) :54
void Array__Sort_fn(uType* __type, uArray* elements, int* index, int* length, uDelegate* comparison)
{
    Array::Sort(__type, elements, *index, *length, comparison);
}

// public static void Sort<T>(T[] elements, Uno.Comparison<T> comparison) :47
void Array__Sort1_fn(uType* __type, uArray* elements, uDelegate* comparison)
{
    Array::Sort1(__type, elements, comparison);
}

// private static void Swap<T>(T[] data, int a, int b) :136
void Array__Swap_fn(uType* __type, uArray* data, int* a, int* b)
{
    Array::Swap(__type, data, *a, *b);
}

// public generated Array() [instance] :9
void Array::ctor_(uArray* __this)
{
}

// public static void Copy<T>(T[] sourceArray, int sourceIndex, T[] destinationArray, int destinationIndex, int length) [static] :18
void Array::Copy(uType* __type, uArray* sourceArray, int sourceIndex, uArray* destinationArray, int destinationIndex, int length)
{
    uStackFrame __("Uno.Array", "Copy`1(T[],int,T[],int,int)");

    if (sourceArray == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[7/*"sourceArray"*/]));

    if (destinationArray == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[8/*"destination...*/]));

    if (sourceIndex < 0)
        U_THROW(::g::Uno::ArgumentOutOfRangeException::New7(::STRINGS[9/*"Non-negativ...*/], ::STRINGS[10/*"sourceIndex"*/]));

    if (destinationIndex < 0)
        U_THROW(::g::Uno::ArgumentOutOfRangeException::New7(::STRINGS[9/*"Non-negativ...*/], ::STRINGS[11/*"destination...*/]));

    if (length < 0)
        U_THROW(::g::Uno::ArgumentOutOfRangeException::New7(::STRINGS[9/*"Non-negativ...*/], ::STRINGS[12/*"length"*/]));

    if (uPtr(sourceArray)->Length() < (sourceIndex + length))
        U_THROW(::g::Uno::ArgumentException::New4(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[13/*"Destination...*/], uBox<int>(::TYPES[8/*int*/], uPtr(sourceArray)->Length())), ::STRINGS[14/*", "*/]), uBox<int>(::TYPES[8/*int*/], destinationIndex)), ::STRINGS[14/*", "*/]), uBox<int>(::TYPES[8/*int*/], length))));

    if (uPtr(destinationArray)->Length() < (destinationIndex + length))
        U_THROW(::g::Uno::ArgumentException::New4(::STRINGS[15/*"Source arra...*/]));

    for (int i = 0; i < length; i++)
        uPtr(destinationArray)->TItem(destinationIndex + i) = uPtr(sourceArray)->TItem(sourceIndex + i);
}

// public static void Copy<T>(T[] sourceArray, T[] destinationArray, int length) [static] :12
void Array::Copy1(uType* __type, uArray* sourceArray, uArray* destinationArray, int length)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Array.Copy<T>*/),
    };
    uStackFrame __("Uno.Array", "Copy`1(T[],T[],int)");
    Array::Copy(__types[0], sourceArray, 0, destinationArray, 0, length);
}

// public generated Array New() [static] :9
uArray* Array::New1()
{
    uArray* obj1 = (uArray*)uNew(Array_typeof());
    Array::ctor_(obj1);
    return obj1;
}

// private static void QuickSort<T>(T[] data, Uno.Comparison<T> comparison, int left, int right) [static] :110
void Array::QuickSort(uType* __type, uArray* data, uDelegate* comparison, int left, int right)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Array.Swap<T>*/),
    };
    uStackFrame __("Uno.Array", "QuickSort`1(T[],Uno.Comparison<T>,int,int)");
    uT pivotValue(__type->U(0), U_ALLOCA(__type->U(0)->ValueSize));
    int ret2;

    if (left < right)
    {
        int rightIndex = right - 1;
        int pivotIndex = left;
        pivotValue = uPtr(data)->TItem(pivotIndex);
        Array::Swap(__types[0], data, pivotIndex, rightIndex);

        for (int i = left; i < rightIndex; i++)
            if ((uPtr(comparison)->Invoke(&ret2, 2, (void*)uPtr(data)->TItem(i), (void*)pivotValue), ret2) < 0)
            {
                Array::Swap(__types[0], data, i, pivotIndex);
                pivotIndex++;
            }

        Array::Swap(__types[0], data, pivotIndex, rightIndex);
        Array::QuickSort(__type->Base->MakeMethod(2/*QuickSort<T>*/, __type->U(0), NULL), data, comparison, left, pivotIndex);
        Array::QuickSort(__type->Base->MakeMethod(2/*QuickSort<T>*/, __type->U(0), NULL), data, comparison, pivotIndex + 1, right);
    }
}

// private static void ShellSort<T>(T[] data, Uno.Comparison<T> comparison, int left, int right) [static] :80
void Array::ShellSort(uType* __type, uArray* data, uDelegate* comparison, int left, int right)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Array.Swap<T>*/),
    };
    uStackFrame __("Uno.Array", "ShellSort`1(T[],Uno.Comparison<T>,int,int)");
    uT temp(__type->U(0), U_ALLOCA(__type->U(0)->ValueSize));
    int ret3;
    float s = 2.8f;
    int size = right - left;
    int increment = size / 2;

    while (increment > 0)
    {
        for (int i = left + increment; i < size; i++)
        {
            int j = i;
            temp = uPtr(data)->TItem(i);

            while ((j >= increment) && ((uPtr(comparison)->Invoke(&ret3, 2, (void*)temp, (void*)data->TItem(j - increment)), ret3) < 0))
            {
                Array::Swap(__types[0], data, j, j - increment);
                j = j - increment;
            }

            data->TItem(j) = temp;
        }

        if (((float)increment < 2.8f) && (increment > 1))
            increment = 1;
        else
            increment = (int)((float)increment / 2.8f);
    }
}

// public static void Sort<T>(T[] elements, int index, int length, Uno.Comparison<T> comparison) [static] :54
void Array::Sort(uType* __type, uArray* elements, int index, int length, uDelegate* comparison)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Array.QuickSort<T>*/),
        __type->Precalced(1/*Uno.Array.ShellSort<T>*/),
    };
    uStackFrame __("Uno.Array", "Sort`1(T[],int,int,Uno.Comparison<T>)");

    if (length == 0)
        return;

    if (elements == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[16/*"elements"*/]));

    if (index < 0)
        U_THROW(::g::Uno::ArgumentOutOfRangeException::New7(::STRINGS[9/*"Non-negativ...*/], ::STRINGS[17/*"index"*/]));

    if (length < 0)
        U_THROW(::g::Uno::ArgumentOutOfRangeException::New7(::STRINGS[9/*"Non-negativ...*/], ::STRINGS[12/*"length"*/]));

    if (uPtr(elements)->Length() < (index + length))
        U_THROW(::g::Uno::ArgumentException::New4(::STRINGS[18/*"Index and l...*/]));

    if (::g::Uno::Delegate::op_Equality(comparison, NULL))
        U_THROW(::g::Uno::InvalidOperationException::New5(::STRINGS[19/*"Comparer is...*/]));

    if (length > 280)
        Array::QuickSort(__types[0], elements, comparison, index, index + length);
    else if (length > 0)
        Array::ShellSort(__types[1], elements, comparison, index, index + length);
}

// public static void Sort<T>(T[] elements, Uno.Comparison<T> comparison) [static] :47
void Array::Sort1(uType* __type, uArray* elements, uDelegate* comparison)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Array.Sort<T>*/),
    };
    uStackFrame __("Uno.Array", "Sort`1(T[],Uno.Comparison<T>)");

    if (elements != NULL)
        Array::Sort(__types[0], elements, 0, uPtr(elements)->Length(), comparison);
}

// private static void Swap<T>(T[] data, int a, int b) [static] :136
void Array::Swap(uType* __type, uArray* data, int a, int b)
{
    uStackFrame __("Uno.Array", "Swap`1(T[],int,int)");
    uT temp(__type->U(0), U_ALLOCA(__type->U(0)->ValueSize));
    temp = uPtr(data)->TItem(a);
    data->TItem(a) = data->TItem(b);
    data->TItem(b) = temp;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.4.3/Source/Uno/Attribute.uno
// --------------------------------------------------------------------

// public abstract class Attribute :6
// {
static void Attribute_build(uType* type)
{
}

uType* Attribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(Attribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Attribute", options);
    type->fp_build_ = Attribute_build;
    return type;
}

// protected generated Attribute() :6
void Attribute__ctor__fn(Attribute* __this)
{
    __this->ctor_();
}

// protected generated Attribute() [instance] :6
void Attribute::ctor_()
{
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.4.3/Source/Uno/Bool.uno
// ---------------------------------------------------------------

// public intrinsic struct Bool :12
// {
static void Bool_build(uType* type)
{
    ::TYPES[3] = uObject_typeof();
}

uStructType* Bool_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.Alignment = alignof(bool);
    options.ValueSize = sizeof(bool);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Bool", options);
    type->fp_build_ = Bool_build;
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))Bool__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int*))Bool__GetHashCode_fn;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))Bool__ToString_fn;
    return type;
}

// public override sealed bool Equals(object o) :15
void Bool__Equals_fn(bool* __this, uType* __type, uObject* o, bool* __retval)
{
    bool ret1;
    return *__retval = (::g::Uno::Object__Equals_fn(uBox(__type, *__this, U_ALLOCA(__type->ObjectSize)), o, &ret1), ret1), void();
}

// public override sealed int GetHashCode() :21
void Bool__GetHashCode_fn(bool* __this, uType* __type, int* __retval)
{
    return *__retval = *__this ? 1 : 0, void();
}

// public override sealed string ToString() :32
void Bool__ToString_fn(bool* __this, uType* __type, uString** __retval)
{
    return *__retval = uString::Const(*__this ? "True" : "False"), void();
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.4.3/Source/Uno/Buffer.uno
// -----------------------------------------------------------------

// public sealed class Buffer :8
// {
static void Buffer_build(uType* type)
{
    ::STRINGS[20] = uString::Const("Buffer is read only");
    ::TYPES[4] = ::g::Uno::Byte_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Int_typeof(), offsetof(Buffer, _offset), 0,
        ::g::Uno::Int_typeof(), offsetof(Buffer, _sizeInBytes), 0,
        ::g::Uno::Bool_typeof(), offsetof(Buffer, _isReadOnly), 0,
        ::TYPES[4/*byte[]*/], offsetof(Buffer, _data), 0);
    type->Reflection.SetFunctions(17,
        new uFunction("GetByte", NULL, (void*)Buffer__GetByte_fn, 0, false, ::g::Uno::Byte_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("GetFloat", NULL, (void*)Buffer__GetFloat_fn, 0, false, ::g::Uno::Float_typeof(), 2, ::g::Uno::Int_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("GetFloat2", NULL, (void*)Buffer__GetFloat2_fn, 0, false, ::g::Uno::Float2_typeof(), 2, ::g::Uno::Int_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("GetUInt", NULL, (void*)Buffer__GetUInt_fn, 0, false, ::g::Uno::UInt_typeof(), 2, ::g::Uno::Int_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("get_Item", NULL, (void*)Buffer__get_Item_fn, 0, false, ::g::Uno::Byte_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("set_Item", NULL, (void*)Buffer__set_Item_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Int_typeof(), ::g::Uno::Byte_typeof()),
        new uFunction(".ctor", NULL, (void*)Buffer__New1_fn, 0, true, type, 1, ::TYPES[4/*byte[]*/]),
        new uFunction(".ctor", NULL, (void*)Buffer__New4_fn, 0, true, type, 1, ::g::Uno::Int_typeof()),
        new uFunction("Set", NULL, (void*)Buffer__Set_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Int_typeof(), ::g::Uno::Byte_typeof()),
        new uFunction("Set", NULL, (void*)Buffer__Set2_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Int_typeof(), ::g::Uno::Byte4_typeof()),
        new uFunction("Set", NULL, (void*)Buffer__Set4_fn, 0, false, uVoid_typeof(), 3, ::g::Uno::Int_typeof(), ::g::Uno::Float_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("Set", NULL, (void*)Buffer__Set5_fn, 0, false, uVoid_typeof(), 3, ::g::Uno::Int_typeof(), ::g::Uno::Float2_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("Set", NULL, (void*)Buffer__Set6_fn, 0, false, uVoid_typeof(), 3, ::g::Uno::Int_typeof(), ::g::Uno::Float3_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("Set", NULL, (void*)Buffer__Set8_fn, 0, false, uVoid_typeof(), 3, ::g::Uno::Int_typeof(), ::g::Uno::Float4_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("Set", NULL, (void*)Buffer__Set18_fn, 0, false, uVoid_typeof(), 3, ::g::Uno::Int_typeof(), ::g::Uno::Short_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("Set", NULL, (void*)Buffer__Set23_fn, 0, false, uVoid_typeof(), 3, ::g::Uno::Int_typeof(), ::g::Uno::UShort_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("get_SizeInBytes", NULL, (void*)Buffer__get_SizeInBytes_fn, 0, false, ::g::Uno::Int_typeof(), 0));
}

uType* Buffer_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(Buffer);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Buffer", options);
    type->fp_build_ = Buffer_build;
    return type;
}

// public Buffer(byte[] data) :39
void Buffer__ctor__fn(Buffer* __this, uArray* data)
{
    __this->ctor_(data);
}

// internal Buffer(byte[] data, int offset, int sizeInBytes, bool isReadOnly) :26
void Buffer__ctor_2_fn(Buffer* __this, uArray* data, int* offset, int* sizeInBytes, bool* isReadOnly)
{
    __this->ctor_2(data, *offset, *sizeInBytes, *isReadOnly);
}

// public Buffer(int sizeInBytes) :44
void Buffer__ctor_3_fn(Buffer* __this, int* sizeInBytes)
{
    __this->ctor_3(*sizeInBytes);
}

// public byte GetByte(int offset) :128
void Buffer__GetByte_fn(Buffer* __this, int* offset, uint8_t* __retval)
{
    *__retval = __this->GetByte(*offset);
}

// public float GetFloat(int offset, [bool littleEndian]) :322
void Buffer__GetFloat_fn(Buffer* __this, int* offset, bool* littleEndian, float* __retval)
{
    *__retval = __this->GetFloat(*offset, *littleEndian);
}

// public float2 GetFloat2(int offset, [bool littleEndian]) :333
void Buffer__GetFloat2_fn(Buffer* __this, int* offset, bool* littleEndian, ::g::Uno::Float2* __retval)
{
    *__retval = __this->GetFloat2(*offset, *littleEndian);
}

// internal byte[] get_GetHandle() :61
void Buffer__get_GetHandle_fn(Buffer* __this, uArray** __retval)
{
    *__retval = __this->GetHandle();
}

// public uint GetUInt(int offset, [bool littleEndian]) :289
void Buffer__GetUInt_fn(Buffer* __this, int* offset, bool* littleEndian, uint32_t* __retval)
{
    *__retval = __this->GetUInt(*offset, *littleEndian);
}

// public byte get_Item(int offset) :87
void Buffer__get_Item_fn(Buffer* __this, int* offset, uint8_t* __retval)
{
    *__retval = __this->Item(*offset);
}

// public void set_Item(int offset, byte value) :88
void Buffer__set_Item_fn(Buffer* __this, int* offset, uint8_t* value)
{
    __this->Item(*offset, *value);
}

// public Buffer New(byte[] data) :39
void Buffer__New1_fn(uArray* data, Buffer** __retval)
{
    *__retval = Buffer::New1(data);
}

// internal Buffer New(byte[] data, int offset, int sizeInBytes, bool isReadOnly) :26
void Buffer__New3_fn(uArray* data, int* offset, int* sizeInBytes, bool* isReadOnly, Buffer** __retval)
{
    *__retval = Buffer::New3(data, *offset, *sizeInBytes, *isReadOnly);
}

// public Buffer New(int sizeInBytes) :44
void Buffer__New4_fn(int* sizeInBytes, Buffer** __retval)
{
    *__retval = Buffer::New4(*sizeInBytes);
}

// public void Set(int offset, byte value) :134
void Buffer__Set_fn(Buffer* __this, int* offset, uint8_t* value)
{
    __this->Set(*offset, *value);
}

// public void Set(int offset, byte4 value) :157
void Buffer__Set2_fn(Buffer* __this, int* offset, ::g::Uno::Byte4* value)
{
    __this->Set2(*offset, *value);
}

// public void Set(int offset, float value, [bool littleEndian]) :328
void Buffer__Set4_fn(Buffer* __this, int* offset, float* value, bool* littleEndian)
{
    __this->Set4(*offset, *value, *littleEndian);
}

// public void Set(int offset, float2 value, [bool littleEndian]) :339
void Buffer__Set5_fn(Buffer* __this, int* offset, ::g::Uno::Float2* value, bool* littleEndian)
{
    __this->Set5(*offset, *value, *littleEndian);
}

// public void Set(int offset, float3 value, [bool littleEndian]) :351
void Buffer__Set6_fn(Buffer* __this, int* offset, ::g::Uno::Float3* value, bool* littleEndian)
{
    __this->Set6(*offset, *value, *littleEndian);
}

// public void Set(int offset, float4 value, [bool littleEndian]) :364
void Buffer__Set8_fn(Buffer* __this, int* offset, ::g::Uno::Float4* value, bool* littleEndian)
{
    __this->Set8(*offset, *value, *littleEndian);
}

// public void Set(int offset, short value, [bool littleEndian]) :171
void Buffer__Set18_fn(Buffer* __this, int* offset, int16_t* value, bool* littleEndian)
{
    __this->Set18(*offset, *value, *littleEndian);
}

// public void Set(int offset, ushort value, [bool littleEndian]) :208
void Buffer__Set23_fn(Buffer* __this, int* offset, uint16_t* value, bool* littleEndian)
{
    __this->Set23(*offset, *value, *littleEndian);
}

// internal byte[] get_SetHandle() :66
void Buffer__get_SetHandle_fn(Buffer* __this, uArray** __retval)
{
    *__retval = __this->SetHandle();
}

// public int get_SizeInBytes() :56
void Buffer__get_SizeInBytes_fn(Buffer* __this, int* __retval)
{
    *__retval = __this->SizeInBytes();
}

// public Buffer(byte[] data) [instance] :39
void Buffer::ctor_(uArray* data)
{
    uStackFrame __("Uno.Buffer", ".ctor(byte[])");
    ctor_2(data, 0, uPtr(data)->Length(), true);
}

// internal Buffer(byte[] data, int offset, int sizeInBytes, bool isReadOnly) [instance] :26
void Buffer::ctor_2(uArray* data, int offset, int sizeInBytes, bool isReadOnly)
{
    _data = data;
    _offset = offset;
    _sizeInBytes = sizeInBytes;
    _isReadOnly = isReadOnly;
}

// public Buffer(int sizeInBytes) [instance] :44
void Buffer::ctor_3(int sizeInBytes)
{
    ctor_2(uArray::New(::TYPES[4/*byte[]*/], sizeInBytes), 0, sizeInBytes, false);
}

// public byte GetByte(int offset) [instance] :128
uint8_t Buffer::GetByte(int offset)
{
    uStackFrame __("Uno.Buffer", "GetByte(int)");
    return uPtr(GetHandle())->Item<uint8_t>(_offset + offset);
}

// public float GetFloat(int offset, [bool littleEndian]) [instance] :322
float Buffer::GetFloat(int offset, bool littleEndian)
{
    return ::g::Uno::Runtime::Implementation::BufferImpl::GetFloat(GetHandle(), _offset + offset, littleEndian);
}

// public float2 GetFloat2(int offset, [bool littleEndian]) [instance] :333
::g::Uno::Float2 Buffer::GetFloat2(int offset, bool littleEndian)
{
    return ::g::Uno::Float2__New2(GetFloat(offset, littleEndian), GetFloat(offset + 4, littleEndian));
}

// internal byte[] get_GetHandle() [instance] :61
uArray* Buffer::GetHandle()
{
    return _data;
}

// public uint GetUInt(int offset, [bool littleEndian]) [instance] :289
uint32_t Buffer::GetUInt(int offset, bool littleEndian)
{
    return ::g::Uno::Runtime::Implementation::BufferImpl::GetUInt(GetHandle(), _offset + offset, littleEndian);
}

// public byte get_Item(int offset) [instance] :87
uint8_t Buffer::Item(int offset)
{
    uStackFrame __("Uno.Buffer", "get_Item(int)");
    return GetByte(offset);
}

// public void set_Item(int offset, byte value) [instance] :88
void Buffer::Item(int offset, uint8_t value)
{
    uStackFrame __("Uno.Buffer", "set_Item(int,byte)");
    Set(offset, value);
}

// public void Set(int offset, byte value) [instance] :134
void Buffer::Set(int offset, uint8_t value)
{
    uStackFrame __("Uno.Buffer", "Set(int,byte)");
    uPtr(SetHandle())->Item<uint8_t>(_offset + offset) = value;
}

// public void Set(int offset, byte4 value) [instance] :157
void Buffer::Set2(int offset, ::g::Uno::Byte4 value)
{
    uStackFrame __("Uno.Buffer", "Set(int,byte4)");
    Set(offset, value.X);
    Set(offset + 1, value.Y);
    Set(offset + 2, value.Z);
    Set(offset + 3, value.W);
}

// public void Set(int offset, float value, [bool littleEndian]) [instance] :328
void Buffer::Set4(int offset, float value, bool littleEndian)
{
    uStackFrame __("Uno.Buffer", "Set(int,float,[bool])");
    ::g::Uno::Runtime::Implementation::BufferImpl::SetFloat(SetHandle(), _offset + offset, value, littleEndian);
}

// public void Set(int offset, float2 value, [bool littleEndian]) [instance] :339
void Buffer::Set5(int offset, ::g::Uno::Float2 value, bool littleEndian)
{
    uStackFrame __("Uno.Buffer", "Set(int,float2,[bool])");
    Set4(offset, value.X, littleEndian);
    Set4(offset + 4, value.Y, littleEndian);
}

// public void Set(int offset, float3 value, [bool littleEndian]) [instance] :351
void Buffer::Set6(int offset, ::g::Uno::Float3 value, bool littleEndian)
{
    uStackFrame __("Uno.Buffer", "Set(int,float3,[bool])");
    Set4(offset, value.X, littleEndian);
    Set4(offset + 4, value.Y, littleEndian);
    Set4(offset + 8, value.Z, littleEndian);
}

// public void Set(int offset, float4 value, [bool littleEndian]) [instance] :364
void Buffer::Set8(int offset, ::g::Uno::Float4 value, bool littleEndian)
{
    uStackFrame __("Uno.Buffer", "Set(int,float4,[bool])");
    Set4(offset, value.X, littleEndian);
    Set4(offset + 4, value.Y, littleEndian);
    Set4(offset + 8, value.Z, littleEndian);
    Set4(offset + 12, value.W, littleEndian);
}

// public void Set(int offset, short value, [bool littleEndian]) [instance] :171
void Buffer::Set18(int offset, int16_t value, bool littleEndian)
{
    uStackFrame __("Uno.Buffer", "Set(int,short,[bool])");
    ::g::Uno::Runtime::Implementation::BufferImpl::SetShort(SetHandle(), _offset + offset, value, littleEndian);
}

// public void Set(int offset, ushort value, [bool littleEndian]) [instance] :208
void Buffer::Set23(int offset, uint16_t value, bool littleEndian)
{
    uStackFrame __("Uno.Buffer", "Set(int,ushort,[bool])");
    ::g::Uno::Runtime::Implementation::BufferImpl::SetUShort(SetHandle(), _offset + offset, value, littleEndian);
}

// internal byte[] get_SetHandle() [instance] :66
uArray* Buffer::SetHandle()
{
    uStackFrame __("Uno.Buffer", "get_SetHandle()");

    if (_isReadOnly)
        U_THROW(::g::Uno::InvalidOperationException::New5(::STRINGS[20/*"Buffer is r...*/]));

    return _data;
}

// public int get_SizeInBytes() [instance] :56
int Buffer::SizeInBytes()
{
    return _sizeInBytes;
}

// public Buffer New(byte[] data) [static] :39
Buffer* Buffer::New1(uArray* data)
{
    Buffer* obj3 = (Buffer*)uNew(Buffer_typeof());
    obj3->ctor_(data);
    return obj3;
}

// internal Buffer New(byte[] data, int offset, int sizeInBytes, bool isReadOnly) [static] :26
Buffer* Buffer::New3(uArray* data, int offset, int sizeInBytes, bool isReadOnly)
{
    Buffer* obj1 = (Buffer*)uNew(Buffer_typeof());
    obj1->ctor_2(data, offset, sizeInBytes, isReadOnly);
    return obj1;
}

// public Buffer New(int sizeInBytes) [static] :44
Buffer* Buffer::New4(int sizeInBytes)
{
    Buffer* obj4 = (Buffer*)uNew(Buffer_typeof());
    obj4->ctor_3(sizeInBytes);
    return obj4;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.4.3/Source/Uno/Byte.uno
// ---------------------------------------------------------------

// public intrinsic struct Byte :13
// {
static void Byte_build(uType* type)
{
    ::TYPES[3] = uObject_typeof();
}

uStructType* Byte_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.Alignment = alignof(uint8_t);
    options.ValueSize = sizeof(uint8_t);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Byte", options);
    type->fp_build_ = Byte_build;
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))Byte__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int*))Byte__GetHashCode_fn;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))Byte__ToString_fn;
    return type;
}

// public override sealed bool Equals(object o) :19
void Byte__Equals_fn(uint8_t* __this, uType* __type, uObject* o, bool* __retval)
{
    bool ret1;
    return *__retval = (::g::Uno::Object__Equals_fn(uBox<uint8_t>(__type, *__this, U_ALLOCA(__type->ObjectSize)), o, &ret1), ret1), void();
}

// public override sealed int GetHashCode() :25
void Byte__GetHashCode_fn(uint8_t* __this, uType* __type, int* __retval)
{
    return *__retval = (int)*__this, void();
}

// public override sealed string ToString() :36
void Byte__ToString_fn(uint8_t* __this, uType* __type, uString** __retval)
{
    uBase::String ansi((int)*__this);
    return *__retval = uString::Ansi(ansi.Ptr(), ansi.Length()), void();
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.4.3/Source/Uno/Byte2.uno
// ----------------------------------------------------------------

// public intrinsic struct Byte2 :6
// {
static void Byte2_build(uType* type)
{
    ::STRINGS[14] = uString::Const(", ");
    ::TYPES[3] = uObject_typeof();
    ::TYPES[5] = ::g::Uno::Byte_typeof();
    type->SetFields(0,
        ::TYPES[5/*byte*/], offsetof(Byte2, X), 0,
        ::TYPES[5/*byte*/], offsetof(Byte2, Y), 0);
    type->Reflection.SetFields(2,
        new uField("X", 0),
        new uField("Y", 1));
}

uStructType* Byte2_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.Alignment = alignof(Byte2);
    options.ValueSize = sizeof(Byte2);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Byte2", options);
    type->fp_build_ = Byte2_build;
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))Byte2__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int*))Byte2__GetHashCode_fn;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))Byte2__ToString_fn;
    return type;
}

// public override sealed bool Equals(object o) :49
void Byte2__Equals_fn(Byte2* __this, uType* __type, uObject* o, bool* __retval)
{
    bool ret3;
    return *__retval = (::g::Uno::Object__Equals_fn(uBox(__type, *__this, U_ALLOCA(__type->ObjectSize)), o, &ret3), ret3), void();
}

// public override sealed int GetHashCode() :50
void Byte2__GetHashCode_fn(Byte2* __this, uType* __type, int* __retval)
{
    int ret4;
    return *__retval = (::g::Uno::Object__GetHashCode_fn(uBox(__type, *__this, U_ALLOCA(__type->ObjectSize)), &ret4), ret4), void();
}

// public override sealed string ToString() :51
void Byte2__ToString_fn(Byte2* __this, uType* __type, uString** __retval)
{
    uStackFrame __("byte2", "ToString()");
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::Byte::ToString(__this->X, ::TYPES[5/*byte*/]), ::STRINGS[14/*", "*/]), ::g::Uno::Byte::ToString(__this->Y, ::TYPES[5/*byte*/])), void();
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.4.3/Source/Uno/Byte4.uno
// ----------------------------------------------------------------

// public intrinsic struct Byte4 :6
// {
static void Byte4_build(uType* type)
{
    ::STRINGS[14] = uString::Const(", ");
    ::TYPES[3] = uObject_typeof();
    ::TYPES[5] = ::g::Uno::Byte_typeof();
    type->SetFields(0,
        ::TYPES[5/*byte*/], offsetof(Byte4, X), 0,
        ::TYPES[5/*byte*/], offsetof(Byte4, Y), 0,
        ::TYPES[5/*byte*/], offsetof(Byte4, Z), 0,
        ::TYPES[5/*byte*/], offsetof(Byte4, W), 0);
    type->Reflection.SetFields(4,
        new uField("W", 3),
        new uField("X", 0),
        new uField("Y", 1),
        new uField("Z", 2));
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Byte4__New2_fn, 0, true, type, 4, ::TYPES[5/*byte*/], ::TYPES[5/*byte*/], ::TYPES[5/*byte*/], ::TYPES[5/*byte*/]));
}

uStructType* Byte4_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.Alignment = alignof(Byte4);
    options.ValueSize = sizeof(Byte4);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Byte4", options);
    type->fp_build_ = Byte4_build;
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))Byte4__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int*))Byte4__GetHashCode_fn;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))Byte4__ToString_fn;
    return type;
}

// public Byte4(byte x, byte y, byte z, byte w) :41
void Byte4__ctor_1_fn(Byte4* __this, uint8_t* x, uint8_t* y, uint8_t* z, uint8_t* w)
{
    __this->ctor_1(*x, *y, *z, *w);
}

// public override sealed bool Equals(object o) :67
void Byte4__Equals_fn(Byte4* __this, uType* __type, uObject* o, bool* __retval)
{
    bool ret7;
    return *__retval = (::g::Uno::Object__Equals_fn(uBox(__type, *__this, U_ALLOCA(__type->ObjectSize)), o, &ret7), ret7), void();
}

// public override sealed int GetHashCode() :68
void Byte4__GetHashCode_fn(Byte4* __this, uType* __type, int* __retval)
{
    int ret8;
    return *__retval = (::g::Uno::Object__GetHashCode_fn(uBox(__type, *__this, U_ALLOCA(__type->ObjectSize)), &ret8), ret8), void();
}

// public Byte4 New(byte x, byte y, byte z, byte w) :41
void Byte4__New2_fn(uint8_t* x, uint8_t* y, uint8_t* z, uint8_t* w, Byte4* __retval)
{
    *__retval = Byte4__New2(*x, *y, *z, *w);
}

// public override sealed string ToString() :69
void Byte4__ToString_fn(Byte4* __this, uType* __type, uString** __retval)
{
    uStackFrame __("byte4", "ToString()");
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::Byte::ToString(__this->X, ::TYPES[5/*byte*/]), ::STRINGS[14/*", "*/]), ::g::Uno::Byte::ToString(__this->Y, ::TYPES[5/*byte*/])), ::STRINGS[14/*", "*/]), ::g::Uno::Byte::ToString(__this->Z, ::TYPES[5/*byte*/])), ::STRINGS[14/*", "*/]), ::g::Uno::Byte::ToString(__this->W, ::TYPES[5/*byte*/])), void();
}

// public Byte4(byte x, byte y, byte z, byte w) [instance] :41
void Byte4::ctor_1(uint8_t x, uint8_t y, uint8_t z, uint8_t w)
{
    X = x;
    Y = y;
    Z = z;
    W = w;
}

// public Byte4 New(byte x, byte y, byte z, byte w) [static] :41
Byte4 Byte4__New2(uint8_t x, uint8_t y, uint8_t z, uint8_t w)
{
    Byte4 obj1;
    obj1.ctor_1(x, y, z, w);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.4.3/Source/Uno/Char.uno
// ---------------------------------------------------------------

// public intrinsic struct Char :13
// {
static void Char_build(uType* type)
{
    ::TYPES[3] = uObject_typeof();
    type->Reflection.SetFunctions(5,
        new uFunction("IsDigit", NULL, (void*)Char__IsDigit_fn, 0, true, ::g::Uno::Bool_typeof(), 1, type),
        new uFunction("IsUpper", NULL, (void*)Char__IsUpper_fn, 0, true, ::g::Uno::Bool_typeof(), 1, type),
        new uFunction("IsWhiteSpace", NULL, (void*)Char__IsWhiteSpace_fn, 0, true, ::g::Uno::Bool_typeof(), 1, type),
        new uFunction("ToLower", NULL, (void*)Char__ToLower_fn, 0, true, type, 1, type),
        new uFunction("ToUpper", NULL, (void*)Char__ToUpper_fn, 0, true, type, 1, type));
}

uStructType* Char_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.Alignment = alignof(uChar);
    options.ValueSize = sizeof(uChar);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Char", options);
    type->fp_build_ = Char_build;
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))Char__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int*))Char__GetHashCode_fn;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))Char__ToString_fn;
    return type;
}

// public override sealed bool Equals(object o) :19
void Char__Equals_fn(uChar* __this, uType* __type, uObject* o, bool* __retval)
{
    bool ret1;
    return *__retval = (::g::Uno::Object__Equals_fn(uBox<uChar>(__type, *__this, U_ALLOCA(__type->ObjectSize)), o, &ret1), ret1), void();
}

// public override sealed int GetHashCode() :25
void Char__GetHashCode_fn(uChar* __this, uType* __type, int* __retval)
{
    return *__retval = (int)*__this, void();
}

// public static bool IsDigit(char c) :111
void Char__IsDigit_fn(uChar* c, bool* __retval)
{
    *__retval = Char::IsDigit(*c);
}

// public static bool IsUpper(char c) :123
void Char__IsUpper_fn(uChar* c, bool* __retval)
{
    *__retval = Char::IsUpper(*c);
}

// public static bool IsWhiteSpace(char c) :95
void Char__IsWhiteSpace_fn(uChar* c, bool* __retval)
{
    *__retval = Char::IsWhiteSpace(*c);
}

// public static char ToLower(char c) :81
void Char__ToLower_fn(uChar* c, uChar* __retval)
{
    *__retval = Char::ToLower(*c);
}

// public override sealed string ToString() :36
void Char__ToString_fn(uChar* __this, uType* __type, uString** __retval)
{
    uString* result = uString::New(1);
    result->_ptr[0] = *__this;
    return *__retval = result, void();
}

// public static char ToUpper(char c) :67
void Char__ToUpper_fn(uChar* c, uChar* __retval)
{
    *__retval = Char::ToUpper(*c);
}

// public static bool IsDigit(char c) [static] :111
bool Char::IsDigit(uChar c)
{
    return (c >= '0') && (c <= '9');
}

// public static bool IsUpper(char c) [static] :123
bool Char::IsUpper(uChar c)
{
    return ((c >= 'A') && (c <= 'Z')) || ((c >= 1024) && (c <= 1071));
}

// public static bool IsWhiteSpace(char c) [static] :95
bool Char::IsWhiteSpace(uChar c)
{
    switch (c)
    {
        case ' ':
        case 5760:
        case 8192:
        case 8193:
        case 8194:
        case 8195:
        case 8196:
        case 8197:
        case 8198:
        case 8199:
        case 8200:
        case 8201:
        case 8202:
        case 8239:
        case 8287:
        case 12288:
        case 8232:
        case 8233:
        case 9:
        case 10:
        case 11:
        case 12:
        case 13:
        case 133:
        case 160:
            return true;
        default:
            return false;
    }
}

// public static char ToLower(char c) [static] :81
uChar Char::ToLower(uChar c)
{
    return uBase::Unicode::ToLower(c);
}

// public static char ToUpper(char c) [static] :67
uChar Char::ToUpper(uChar c)
{
    return uBase::Unicode::ToUpper(c);
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.4.3/Source/Uno/Color.uno
// ----------------------------------------------------------------

// public static class Color :9
// {
// static generated Color() :9
static void Color__cctor__fn(uType* __type)
{
    Color::ToYCbCrMat_ = ::g::Uno::Float3x3__New1(0.299f, -0.168736f, 0.5f, 0.587f, -0.331264f, -0.418688f, 0.114f, 0.5f, -0.081312f);
    Color::ToYCbCrMatInv_ = ::g::Uno::Float3x3__New1(1.0f, 1.0f, 1.0f, 0.0f, -0.344136f, 1.772f, 1.402f, -0.714136f, 0.0f);
}

static void Color_build(uType* type)
{
    ::STRINGS[21] = uString::Const("hex");
    ::STRINGS[22] = uString::Const("ch");
    type->SetFields(0,
        ::g::Uno::Float3x3_typeof(), (uintptr_t)&Color::ToYCbCrMat_, uFieldFlagsStatic,
        ::g::Uno::Float3x3_typeof(), (uintptr_t)&Color::ToYCbCrMatInv_, uFieldFlagsStatic);
    type->Reflection.SetFields(2,
        new uField("ToYCbCrMat", 0),
        new uField("ToYCbCrMatInv", 1));
    type->Reflection.SetFunctions(2,
        new uFunction("FromHex", NULL, (void*)Color__FromHex_fn, 0, true, ::g::Uno::Float4_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("FromRgba", NULL, (void*)Color__FromRgba_fn, 0, true, ::g::Uno::Float4_typeof(), 1, ::g::Uno::UInt_typeof()));
}

uClassType* Color_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Color", options);
    type->fp_build_ = Color_build;
    type->fp_cctor_ = Color__cctor__fn;
    return type;
}

// public static float4 FromHex(string hex) :230
void Color__FromHex_fn(uString* hex, ::g::Uno::Float4* __retval)
{
    *__retval = Color::FromHex(hex);
}

// private static float4 FromInt4(int4 rgba) :63
void Color__FromInt4_fn(::g::Uno::Int4* rgba, ::g::Uno::Float4* __retval)
{
    *__retval = Color::FromInt4(*rgba);
}

// public static float4 FromRgba(uint rgba) :74
void Color__FromRgba_fn(uint32_t* rgba, ::g::Uno::Float4* __retval)
{
    *__retval = Color::FromRgba(*rgba);
}

// private static int ParseHexByte(char ch1, char ch2) :178
void Color__ParseHexByte_fn(uChar* ch1, uChar* ch2, int* __retval)
{
    *__retval = Color::ParseHexByte(*ch1, *ch2);
}

// private static int ParseHexNibble(char ch) :172
void Color__ParseHexNibble_fn(uChar* ch, int* __retval)
{
    *__retval = Color::ParseHexNibble(*ch);
}

// private static int4 ParseHexString(string hex) :185
void Color__ParseHexString_fn(uString* hex, ::g::Uno::Int4* __retval)
{
    *__retval = Color::ParseHexString(hex);
}

// private static int ParseHexValue(char ch) :160
void Color__ParseHexValue_fn(uChar* ch, int* __retval)
{
    *__retval = Color::ParseHexValue(*ch);
}

::g::Uno::Float3x3 Color::ToYCbCrMat_;
::g::Uno::Float3x3 Color::ToYCbCrMatInv_;

// public static float4 FromHex(string hex) [static] :230
::g::Uno::Float4 Color::FromHex(uString* hex)
{
    uStackFrame __("Uno.Color", "FromHex(string)");

    if ((uPtr(hex)->Length() > 0) && (uPtr(hex)->Item(0) == '#'))
        hex = ::g::Uno::String::Substring(uPtr(hex), 1);

    return Color::FromInt4(Color::ParseHexString(hex));
}

// private static float4 FromInt4(int4 rgba) [static] :63
::g::Uno::Float4 Color::FromInt4(::g::Uno::Int4 rgba)
{
    return ::g::Uno::Float4__op_Division1(::g::Uno::Float4__op_Implicit1(rgba), 255.0f);
}

// public static float4 FromRgba(uint rgba) [static] :74
::g::Uno::Float4 Color::FromRgba(uint32_t rgba)
{
    return ::g::Uno::Float4__New2((float)((rgba >> 24) & 255U) / 255.0f, (float)((rgba >> 16) & 255U) / 255.0f, (float)((rgba >> 8) & 255U) / 255.0f, (float)((rgba >> 0) & 255U) / 255.0f);
}

// private static int ParseHexByte(char ch1, char ch2) [static] :178
int Color::ParseHexByte(uChar ch1, uChar ch2)
{
    uStackFrame __("Uno.Color", "ParseHexByte(char,char)");
    int v1 = Color::ParseHexValue(ch1);
    int v2 = Color::ParseHexValue(ch2);
    return (v1 << 4) | v2;
}

// private static int ParseHexNibble(char ch) [static] :172
int Color::ParseHexNibble(uChar ch)
{
    uStackFrame __("Uno.Color", "ParseHexNibble(char)");
    int v = Color::ParseHexValue(ch);
    return (v << 4) | v;
}

// private static int4 ParseHexString(string hex) [static] :185
::g::Uno::Int4 Color::ParseHexString(uString* hex)
{
    uStackFrame __("Uno.Color", "ParseHexString(string)");

    if (uPtr(hex)->Length() == 3)
        return ::g::Uno::Int4__New2(Color::ParseHexNibble(uPtr(hex)->Item(0)), Color::ParseHexNibble(uPtr(hex)->Item(1)), Color::ParseHexNibble(uPtr(hex)->Item(2)), 255);
    else if (uPtr(hex)->Length() == 4)
        return ::g::Uno::Int4__New2(Color::ParseHexNibble(uPtr(hex)->Item(0)), Color::ParseHexNibble(uPtr(hex)->Item(1)), Color::ParseHexNibble(uPtr(hex)->Item(2)), Color::ParseHexNibble(uPtr(hex)->Item(3)));
    else if (uPtr(hex)->Length() == 6)
        return ::g::Uno::Int4__New2(Color::ParseHexByte(uPtr(hex)->Item(0), uPtr(hex)->Item(1)), Color::ParseHexByte(uPtr(hex)->Item(2), uPtr(hex)->Item(3)), Color::ParseHexByte(uPtr(hex)->Item(4), uPtr(hex)->Item(5)), 255);
    else if (uPtr(hex)->Length() == 8)
        return ::g::Uno::Int4__New2(Color::ParseHexByte(uPtr(hex)->Item(0), uPtr(hex)->Item(1)), Color::ParseHexByte(uPtr(hex)->Item(2), uPtr(hex)->Item(3)), Color::ParseHexByte(uPtr(hex)->Item(4), uPtr(hex)->Item(5)), Color::ParseHexByte(uPtr(hex)->Item(6), uPtr(hex)->Item(7)));
    else
        U_THROW(::g::Uno::ArgumentException::New4(::STRINGS[21/*"hex"*/]));
}

// private static int ParseHexValue(char ch) [static] :160
int Color::ParseHexValue(uChar ch)
{
    uStackFrame __("Uno.Color", "ParseHexValue(char)");

    if ((ch >= '0') && (ch <= '9'))
        return (int)ch - 48;
    else if ((ch >= 'a') && (ch <= 'f'))
        return 10 + ((int)ch - 97);
    else if ((ch >= 'A') && (ch <= 'F'))
        return 10 + ((int)ch - 65);

    U_THROW(::g::Uno::ArgumentException::New4(::STRINGS[22/*"ch"*/]));
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.4.3/Source/Uno/Comparison.uno
// ---------------------------------------------------------------------

// public delegate int Comparison<T>(T a, T b) :6
uDelegateType* Comparison_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.Comparison`1", 2, 1);
    type->SetSignature(::g::Uno::Int_typeof(),
        type->T(0),
        type->T(0));
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/1.4.3/Source/Uno/DateTime.uno
// -------------------------------------------------------------------

// public struct DateTime :13
// {
// static generated DateTime() :13
static void DateTime__cctor__fn(uType* __type)
{
    ::g::Uno::Time::Instant_typeof()->Init();
    DateTime::UnixEpoch_ = ::g::Uno::Time::Instant__FromUtc(1970, 1, 1, 0, 0);
    DateTime::DotNetTimeBase_ = ::g::Uno::Time::Instant__FromUtc(1, 1, 1, 0, 0);
    DateTime::DotNetTimeOffset_ = ::g::Uno::Time::Instant__op_Subtraction1(DateTime::UnixEpoch_, DateTime::DotNetTimeBase_);
}

static void DateTime_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::DateTimeKind_typeof(), offsetof(DateTime, _kind), 0,
        ::g::Uno::Time::ZonedDateTime_typeof(), offsetof(DateTime, _time), 0,
        ::g::Uno::Time::Instant_typeof(), (uintptr_t)&DateTime::UnixEpoch_, uFieldFlagsStatic,
        ::g::Uno::Time::Instant_typeof(), (uintptr_t)&DateTime::DotNetTimeBase_, uFieldFlagsStatic,
        ::g::Uno::Time::Duration_typeof(), (uintptr_t)&DateTime::DotNetTimeOffset_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(5,
        new uFunction("get_Kind", NULL, (void*)DateTime__get_Kind_fn, 0, false, ::g::Uno::DateTimeKind_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)DateTime__New1_fn, 0, true, type, 2, ::g::Uno::Long_typeof(), ::g::Uno::DateTimeKind_typeof()),
        new uFunction("get_Ticks", NULL, (void*)DateTime__get_Ticks_fn, 0, false, ::g::Uno::Long_typeof(), 0),
        new uFunction("ToUniversalTime", NULL, (void*)DateTime__ToUniversalTime_fn, 0, false, type, 0),
        new uFunction("get_UtcNow", NULL, (void*)DateTime__get_UtcNow_fn, 0, true, type, 0));
}

uStructType* DateTime_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.Alignment = alignof(DateTime);
    options.ValueSize = sizeof(DateTime);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.DateTime", options);
    type->fp_build_ = DateTime_build;
    type->fp_cctor_ = DateTime__cctor__fn;
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))DateTime__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int*))DateTime__GetHashCode_fn;
    return type;
}

// public DateTime(long ticks, Uno.DateTimeKind kind) :22
void DateTime__ctor__fn(DateTime* __this, int64_t* ticks, int* kind)
{
    __this->ctor_(*ticks, *kind);
}

// internal DateTime(Uno.Time.ZonedDateTime time) :28
void DateTime__ctor_1_fn(DateTime* __this, ::g::Uno::Time::ZonedDateTime* time)
{
    __this->ctor_1(time);
}

// public override sealed bool Equals(object obj) :73
void DateTime__Equals_fn(DateTime* __this, uType* __type, uObject* obj, bool* __retval)
{
    uStackFrame __("Uno.DateTime", "Equals(object)");
    return *__retval = uIs(obj, __type) && DateTime__op_Equality(*__this, uUnbox<DateTime>(__type, obj)), void();
}

// public override sealed int GetHashCode() :78
void DateTime__GetHashCode_fn(DateTime* __this, uType* __type, int* __retval)
{
    uStackFrame __("Uno.DateTime", "GetHashCode()");
    int64_t t = __this->Ticks();
    return *__retval = (int)(t >> 32) ^ (int)t, void();
}

// private Uno.Time.ZonedDateTime InternalTimeOrDefault() :39
void DateTime__InternalTimeOrDefault_fn(DateTime* __this, ::g::Uno::Time::ZonedDateTime** __retval)
{
    *__retval = __this->InternalTimeOrDefault();
}

// public Uno.DateTimeKind get_Kind() :62
void DateTime__get_Kind_fn(DateTime* __this, int* __retval)
{
    *__retval = __this->Kind();
}

// public DateTime New(long ticks, Uno.DateTimeKind kind) :22
void DateTime__New1_fn(int64_t* ticks, int* kind, DateTime* __retval)
{
    *__retval = DateTime__New1(*ticks, *kind);
}

// internal DateTime New(Uno.Time.ZonedDateTime time) :28
void DateTime__New2_fn(::g::Uno::Time::ZonedDateTime* time, DateTime* __retval)
{
    *__retval = DateTime__New2(time);
}

// public static operator ==(Uno.DateTime x, Uno.DateTime y) :84
void DateTime__op_Equality_fn(DateTime* x, DateTime* y, bool* __retval)
{
    *__retval = DateTime__op_Equality(*x, *y);
}

// public static operator !=(Uno.DateTime x, Uno.DateTime y) :89
void DateTime__op_Inequality_fn(DateTime* x, DateTime* y, bool* __retval)
{
    *__retval = DateTime__op_Inequality(*x, *y);
}

// public long get_Ticks() :64
void DateTime__get_Ticks_fn(DateTime* __this, int64_t* __retval)
{
    *__retval = __this->Ticks();
}

// public Uno.DateTime ToUniversalTime() :94
void DateTime__ToUniversalTime_fn(DateTime* __this, DateTime* __retval)
{
    *__retval = __this->ToUniversalTime();
}

// public static Uno.DateTime get_UtcNow() :56
void DateTime__get_UtcNow_fn(DateTime* __retval)
{
    *__retval = DateTime__UtcNow();
}

::g::Uno::Time::Instant DateTime::UnixEpoch_;
::g::Uno::Time::Instant DateTime::DotNetTimeBase_;
::g::Uno::Time::Duration DateTime::DotNetTimeOffset_;

// public DateTime(long ticks, Uno.DateTimeKind kind) [instance] :22
void DateTime::ctor_(int64_t ticks, int kind)
{
    uStackFrame __("Uno.DateTime", ".ctor(long,Uno.DateTimeKind)");
    _kind = kind;
    _time = ::g::Uno::Time::ZonedDateTime::New1(::g::Uno::Time::Instant__op_Subtraction(::g::Uno::Time::Instant__New1(ticks), DateTime::DotNetTimeOffset_), ::g::Uno::Time::DateTimeZone::Utc());
}

// internal DateTime(Uno.Time.ZonedDateTime time) [instance] :28
void DateTime::ctor_1(::g::Uno::Time::ZonedDateTime* time)
{
    uStackFrame __("Uno.DateTime", ".ctor(Uno.Time.ZonedDateTime)");
    _kind = 1;
    _time = uPtr(time)->WithZone(::g::Uno::Time::DateTimeZone::Utc());
}

// private Uno.Time.ZonedDateTime InternalTimeOrDefault() [instance] :39
::g::Uno::Time::ZonedDateTime* DateTime::InternalTimeOrDefault()
{
    uStackFrame __("Uno.DateTime", "InternalTimeOrDefault()");
    ::g::Uno::Time::ZonedDateTime* ind1;
    ind1 = _time;
    return (ind1 != NULL) ? ind1 : (::g::Uno::Time::ZonedDateTime*)::g::Uno::Time::ZonedDateTime::New1(DateTime::DotNetTimeBase_, ::g::Uno::Time::DateTimeZone::Utc());
}

// public Uno.DateTimeKind get_Kind() [instance] :62
int DateTime::Kind()
{
    return _kind;
}

// public long get_Ticks() [instance] :64
int64_t DateTime::Ticks()
{
    uStackFrame __("Uno.DateTime", "get_Ticks()");
    return ::g::Uno::Time::Instant__op_Addition(uPtr(InternalTimeOrDefault())->Instant(), DateTime::DotNetTimeOffset_).Ticks();
}

// public Uno.DateTime ToUniversalTime() [instance] :94
DateTime DateTime::ToUniversalTime()
{
    uStackFrame __("Uno.DateTime", "ToUniversalTime()");
    return DateTime__New1(Ticks(), Kind());
}

// public DateTime New(long ticks, Uno.DateTimeKind kind) [static] :22
DateTime DateTime__New1(int64_t ticks, int kind)
{
    DateTime obj2;
    obj2.ctor_(ticks, kind);
    return obj2;
}

// internal DateTime New(Uno.Time.ZonedDateTime time) [static] :28
DateTime DateTime__New2(::g::Uno::Time::ZonedDateTime* time)
{
    DateTime obj3;
    obj3.ctor_1(time);
    return obj3;
}

// public static operator ==(Uno.DateTime x, Uno.DateTime y) [static] :84
bool DateTime__op_Equality(DateTime x, DateTime y)
{
    uStackFrame __("Uno.DateTime", "==(Uno.DateTime,Uno.DateTime)");
    return x.Ticks() == y.Ticks();
}

// public static operator !=(Uno.DateTime x, Uno.DateTime y) [static] :89
bool DateTime__op_Inequality(DateTime x, DateTime y)
{
    uStackFrame __("Uno.DateTime", "!=(Uno.DateTime,Uno.DateTime)");
    return !DateTime__op_Equality(x, y);
}

// public static Uno.DateTime get_UtcNow() [static] :56
DateTime DateTime__UtcNow()
{
    uStackFrame __("Uno.DateTime", "get_UtcNow()");
    return DateTime__New2(uPtr(::g::Uno::Time::ZonedDateTime::Now())->WithZone(::g::Uno::Time::DateTimeZone::Utc()));
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.4.3/Source/Uno/DateTime.uno
// -------------------------------------------------------------------

// public enum DateTimeKind :7
uEnumType* DateTimeKind_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.DateTimeKind", ::g::Uno::Int_typeof(), 1);
    type->SetLiterals(
        "Utc", 1LL);
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/1.4.3/Source/Uno/Delegate.uno
// -------------------------------------------------------------------

// public class Delegate :8
// {
static void Delegate_build(uType* type)
{
    type->Reflection.SetFunctions(2,
        new uFunction("Combine", NULL, (void*)Delegate__Combine_fn, 0, true, type, 2, type, type),
        new uFunction("Remove", NULL, (void*)Delegate__Remove_fn, 0, true, type, 2, type, type));
}

uType* Delegate_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(Delegate);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Delegate", options);
    type->fp_build_ = Delegate_build;
    type->fp_ctor_ = (void*)Delegate__New1_fn;
    type->fp_Equals = (void(*)(uObject*, uObject*, bool*))Delegate__Equals_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int*))Delegate__GetHashCode_fn;
    return type;
}

// private Delegate() :10
void Delegate__ctor__fn(uDelegate* __this)
{
    Delegate::ctor_(__this);
}

// public static Uno.Delegate Combine(Uno.Delegate source, Uno.Delegate value) :14
void Delegate__Combine_fn(uDelegate* source, uDelegate* value, uDelegate** __retval)
{
    *__retval = Delegate::Combine(source, value);
}

// public override sealed bool Equals(object other) :174
void Delegate__Equals_fn(uDelegate* __this, uObject* other, bool* __retval)
{
    return *__retval = uIs(other, Delegate_typeof()) && Delegate::EqualsImpl(__this, uAs<uDelegate*>(other, Delegate_typeof())), void();
}

// private static bool EqualsImpl(Uno.Delegate left, Uno.Delegate right) :144
void Delegate__EqualsImpl_fn(uDelegate* left, uDelegate* right, bool* __retval)
{
    *__retval = Delegate::EqualsImpl(left, right);
}

// public override sealed int GetHashCode() :179
void Delegate__GetHashCode_fn(uDelegate* __this, int* __retval)
{
    return *__retval = 0, void();
}

// private Delegate New() :10
void Delegate__New1_fn(uDelegate** __retval)
{
    *__retval = Delegate::New1();
}

// public static operator ==(Uno.Delegate left, Uno.Delegate right) :164
void Delegate__op_Equality_fn(uDelegate* left, uDelegate* right, bool* __retval)
{
    *__retval = Delegate::op_Equality(left, right);
}

// public static operator !=(Uno.Delegate left, Uno.Delegate right) :169
void Delegate__op_Inequality_fn(uDelegate* left, uDelegate* right, bool* __retval)
{
    *__retval = Delegate::op_Inequality(left, right);
}

// public static Uno.Delegate Remove(Uno.Delegate source, Uno.Delegate value) :60
void Delegate__Remove_fn(uDelegate* source, uDelegate* value, uDelegate** __retval)
{
    *__retval = Delegate::Remove(source, value);
}

// private Delegate() [instance] :10
void Delegate::ctor_(uDelegate* __this)
{
}

// public static Uno.Delegate Combine(Uno.Delegate source, Uno.Delegate value) [static] :14
uDelegate* Delegate::Combine(uDelegate* source, uDelegate* value)
{
    if (!value)
        return source;
    if (!source)
        return value;
    if (source->__type != value->__type)
        U_THROW_ICE();
    
    uDelegate copy;
    uDelegate *prev = &copy;
    
    for (uDelegate* d = value; d != NULL; d = d->_prev)
        prev = prev->_prev = d->Copy();
    
    prev->_prev = source;
    return copy._prev;
}

// private static bool EqualsImpl(Uno.Delegate left, Uno.Delegate right) [static] :144
bool Delegate::EqualsImpl(uDelegate* left, uDelegate* right)
{
    return left == right || (
            left != NULL && right != NULL &&
            left->__type == right->__type &&
            left->_func == right->_func &&
            left->_this == right->_this &&
            ::g::Uno::Object::Equals1(left->_prev, right->_prev)
        );
}

// private Delegate New() [static] :10
uDelegate* Delegate::New1()
{
    uDelegate* obj1 = (uDelegate*)uNew(Delegate_typeof());
    Delegate::ctor_(obj1);
    return obj1;
}

// public static operator ==(Uno.Delegate left, Uno.Delegate right) [static] :164
bool Delegate::op_Equality(uDelegate* left, uDelegate* right)
{
    return Delegate::EqualsImpl(left, right);
}

// public static operator !=(Uno.Delegate left, Uno.Delegate right) [static] :169
bool Delegate::op_Inequality(uDelegate* left, uDelegate* right)
{
    return !Delegate::EqualsImpl(left, right);
}

// public static Uno.Delegate Remove(Uno.Delegate source, Uno.Delegate value) [static] :60
uDelegate* Delegate::Remove(uDelegate* source, uDelegate* value)
{
    if (source == NULL || value == NULL)
        return source;
    if (value->__type != source->__type)
        U_THROW_ICE();
    
    for (uDelegate *first = source; first != NULL; first = first->_prev)
    {
        bool match = true;
        uDelegate *last = first;
    
        for (uDelegate *d = value; d != NULL; d = d->_prev, last = last->_prev)
        {
            if (last == NULL ||
                d->_func != last->_func ||
                d->_this != last->_this)
            {
                match = false;
                break;
            }
        }
    
        if (match)
        {
            uDelegate temp;
            uDelegate *prev = &temp;
    
            for (uDelegate *e = source; e != first; e = e->_prev)
                prev = prev->_prev = e->Copy();
    
            prev->_prev = last;
            return temp._prev;
        }
    }
    
    return source;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.4.3/Source/Uno/Double.uno
// -----------------------------------------------------------------

// public intrinsic struct Double :15
// {
static void Double_build(uType* type)
{
    ::TYPES[3] = uObject_typeof();
    type->Reflection.SetFunctions(2,
        new uFunction("Parse", NULL, (void*)Double__Parse_fn, 0, true, type, 1, ::g::Uno::String_typeof()),
        new uFunction("TryParse", NULL, (void*)Double__TryParse_fn, 0, true, ::g::Uno::Bool_typeof(), 2, ::g::Uno::String_typeof(), type->ByRef()));
}

uStructType* Double_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.Alignment = alignof(double);
    options.ValueSize = sizeof(double);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Double", options);
    type->fp_build_ = Double_build;
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))Double__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int*))Double__GetHashCode_fn;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))Double__ToString_fn;
    return type;
}

// public override sealed bool Equals(object o) :24
void Double__Equals_fn(double* __this, uType* __type, uObject* o, bool* __retval)
{
    bool ret1;
    return *__retval = (::g::Uno::Object__Equals_fn(uBox(__type, *__this, U_ALLOCA(__type->ObjectSize)), o, &ret1), ret1), void();
}

// public override sealed int GetHashCode() :30
void Double__GetHashCode_fn(double* __this, uType* __type, int* __retval)
{
    return *__retval = (int)uBase::Default::Hash(*__this), void();
}

// public static double Parse(string str) :55
void Double__Parse_fn(uString* str, double* __retval)
{
    *__retval = Double::Parse(str);
}

// public override sealed string ToString() :41
void Double__ToString_fn(double* __this, uType* __type, uString** __retval)
{
    uBase::String ansi = uBase::Default::ToString(*__this);
    return *__retval = uString::Ansi(ansi.Ptr(), ansi.Length()), void();
}

// public static bool TryParse(string str, double& res) :90
void Double__TryParse_fn(uString* str, double* res, bool* __retval)
{
    *__retval = Double::TryParse(str, res);
}

// public static double Parse(string str) [static] :55
double Double::Parse(uString* str)
{
    try
    {
        if (str == NULL)
        {
            throw uBase::ArgumentException("String");
        }
    
        uBase::String s = uBase::Unicode::Utf16To8(str->_ptr, str->_length);
        return s.ToDouble();
    }
    catch (const uBase::FormatException& e)
    {
        throw uThrowable(::g::Uno::FormatException::New4(uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
    }
    catch (const uBase::ArgumentException& e)
    {
        throw uThrowable(::g::Uno::ArgumentNullException::New6(uStringFromXliString("String")), e.GetFunction(), e.GetLine());
    }
    catch (const uBase::OverflowException& e)
    {
        throw uThrowable(::g::Uno::OverflowException::New4(uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
    }
}

// public static bool TryParse(string str, double& res) [static] :90
bool Double::TryParse(uString* str, double* res)
{
    *res = 0;
    if (str == NULL)
    {
        return false;
    }
    
    uBase::String s = uBase::Unicode::Utf16To8(str->_ptr, str->_length);
    return s.TryToDouble(res);
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.4.3/Source/Uno/Enum.uno
// ---------------------------------------------------------------

// public static class Enum :6
// {
static void Enum_build(uType* type)
{
    ::STRINGS[23] = uString::Const("Unable to parse enum '");
    ::STRINGS[24] = uString::Const("'");
    type->Reflection.SetFunctions(2,
        new uFunction("Parse", NULL, (void*)Enum__Parse_fn, 0, true, uObject_typeof(), 2, ::g::Uno::Type_typeof(), ::g::Uno::String_typeof()),
        new uFunction("Parse", NULL, (void*)Enum__Parse1_fn, 0, true, uObject_typeof(), 3, ::g::Uno::Type_typeof(), ::g::Uno::String_typeof(), ::g::Uno::Bool_typeof()));
}

uClassType* Enum_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Enum", options);
    type->fp_build_ = Enum_build;
    return type;
}

// public static object Parse(Uno.Type type, string str) :21
void Enum__Parse_fn(uType* type, uString* str, uObject** __retval)
{
    *__retval = Enum::Parse(type, str);
}

// public static object Parse(Uno.Type type, string str, bool ignoreCase) :8
void Enum__Parse1_fn(uType* type, uString* str, bool* ignoreCase, uObject** __retval)
{
    *__retval = Enum::Parse1(type, str, *ignoreCase);
}

// public static object Parse(Uno.Type type, string str) [static] :21
uObject* Enum::Parse(uType* type, uString* str)
{
    uStackFrame __("Uno.Enum", "Parse(Uno.Type,string)");
    return Enum::Parse1(type, str, false);
}

// public static object Parse(Uno.Type type, string str, bool ignoreCase) [static] :8
uObject* Enum::Parse1(uType* type, uString* str, bool ignoreCase)
{
    uStackFrame __("Uno.Enum", "Parse(Uno.Type,string,bool)");
    uPtr(type);
    int64_t result;
    if (uEnum::TryParse(type, str, ignoreCase, &result))
        return uBoxPtr(type, &result);
    U_THROW(::g::Uno::ArgumentException::New4(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[23/*"Unable to p...*/], str), ::STRINGS[24/*"'"*/])));
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.4.3/Source/Uno/EventArgs.uno
// --------------------------------------------------------------------

// public class EventArgs :6
// {
// static generated EventArgs() :6
static void EventArgs__cctor__fn(uType* __type)
{
    EventArgs::Empty_ = EventArgs::New1();
}

static void EventArgs_build(uType* type)
{
    type->SetFields(0,
        type, (uintptr_t)&EventArgs::Empty_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("Empty", 0));
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)EventArgs__New1_fn, 0, true, type, 0));
}

uType* EventArgs_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(EventArgs);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.EventArgs", options);
    type->fp_build_ = EventArgs_build;
    type->fp_ctor_ = (void*)EventArgs__New1_fn;
    type->fp_cctor_ = EventArgs__cctor__fn;
    return type;
}

// public generated EventArgs() :6
void EventArgs__ctor__fn(EventArgs* __this)
{
    __this->ctor_();
}

// public generated EventArgs New() :6
void EventArgs__New1_fn(EventArgs** __retval)
{
    *__retval = EventArgs::New1();
}

uSStrong<EventArgs*> EventArgs::Empty_;

// public generated EventArgs() [instance] :6
void EventArgs::ctor_()
{
}

// public generated EventArgs New() [static] :6
EventArgs* EventArgs::New1()
{
    EventArgs* obj1 = (EventArgs*)uNew(EventArgs_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.4.3/Source/Uno/EventHandler.uno
// -----------------------------------------------------------------------

// public delegate void EventHandler(object sender, Uno.EventArgs args) :6
uDelegateType* EventHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.EventHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Uno::EventArgs_typeof());
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/1.4.3/Source/Uno/EventHandler.uno
// -----------------------------------------------------------------------

// public delegate void EventHandler<TEventArgs>(object sender, TEventArgs args) :9
uDelegateType* EventHandler1_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.EventHandler`1", 2, 1);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        type->T(0));
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/1.4.3/Source/Uno/Exceptions/Exception.uno
// -------------------------------------------------------------------------------

// public class Exception :6
// {
static void Exception_build(uType* type)
{
    ::STRINGS[25] = uString::Const("");
    ::STRINGS[4] = uString::Const(": ");
    ::STRINGS[26] = uString::Const(" ---> ");
    ::STRINGS[27] = uString::Const("\n"
        "    --- End of inner exception stack trace ---");
    ::STRINGS[3] = uString::Const("\n"
        "");
    ::STRINGS[28] = uString::Const("Uno.Exception.StackTrace is not supported in this build configuration");
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(Exception, _message), 0,
        type, offsetof(Exception, _inner), 0,
        ::g::Uno::String_typeof(), offsetof(Exception, _trace), 0,
        ::g::Uno::IntPtr_typeof()->Array(), offsetof(Exception, NativeStackTrace), 0);
    type->Reflection.SetFields(1,
        new uField("NativeStackTrace", 3));
    type->Reflection.SetFunctions(6,
        new uFunction("get_InnerException", NULL, (void*)Exception__get_InnerException_fn, 0, false, type, 0),
        new uFunction("get_Message", NULL, NULL, offsetof(Exception_type, fp_get_Message), false, ::g::Uno::String_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)Exception__New1_fn, 0, true, type, 0),
        new uFunction(".ctor", NULL, (void*)Exception__New2_fn, 0, true, type, 1, ::g::Uno::String_typeof()),
        new uFunction(".ctor", NULL, (void*)Exception__New3_fn, 0, true, type, 2, ::g::Uno::String_typeof(), type),
        new uFunction("get_StackTrace", NULL, (void*)Exception__get_StackTrace_fn, 0, false, ::g::Uno::String_typeof(), 0));
}

Exception_type* Exception_typeof()
{
    static uSStrong<Exception_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(Exception);
    options.TypeSize = sizeof(Exception_type);
    type = (Exception_type*)uClassType::New("Uno.Exception", options);
    type->fp_build_ = Exception_build;
    type->fp_ctor_ = (void*)Exception__New1_fn;
    type->fp_get_Message = Exception__get_Message_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))Exception__ToString_fn;
    return type;
}

// public Exception() :28
void Exception__ctor__fn(Exception* __this)
{
    __this->ctor_();
}

// public Exception(string message) :33
void Exception__ctor_1_fn(Exception* __this, uString* message)
{
    __this->ctor_1(message);
}

// public Exception(string message, Uno.Exception inner) :38
void Exception__ctor_2_fn(Exception* __this, uString* message, Exception* inner)
{
    __this->ctor_2(message, inner);
}

// public Uno.Exception get_InnerException() :17
void Exception__get_InnerException_fn(Exception* __this, Exception** __retval)
{
    *__retval = __this->InnerException();
}

// public virtual string get_Message() :11
void Exception__get_Message_fn(Exception* __this, uString** __retval)
{
    return *__retval = __this->_message, void();
}

// public Exception New() :28
void Exception__New1_fn(Exception** __retval)
{
    *__retval = Exception::New1();
}

// public Exception New(string message) :33
void Exception__New2_fn(uString* message, Exception** __retval)
{
    *__retval = Exception::New2(message);
}

// public Exception New(string message, Uno.Exception inner) :38
void Exception__New3_fn(uString* message, Exception* inner, Exception** __retval)
{
    *__retval = Exception::New3(message, inner);
}

// public string get_StackTrace() :25
void Exception__get_StackTrace_fn(Exception* __this, uString** __retval)
{
    *__retval = __this->StackTrace();
}

// public override string ToString() :50
void Exception__ToString_fn(Exception* __this, uString** __retval)
{
    uStackFrame __("Uno.Exception", "ToString()");
    uString* temp = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition(::g::Uno::Object::GetType(__this), ::STRINGS[4/*": "*/]), __this->Message());

    if (__this->_inner != NULL)
        temp = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(temp, ::STRINGS[26/*" ---> "*/]), uPtr(__this->_inner)->ToString()), ::STRINGS[27/*"\n    --- E...*/]);

    if (::g::Uno::String::IsNullOrEmpty(__this->_trace))
        return *__retval = temp, void();

    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(temp, ::STRINGS[3/*"\n"*/]), __this->_trace), void();
}

// public Exception() [instance] :28
void Exception::ctor_()
{
    ctor_1(::STRINGS[25/*""*/]);
}

// public Exception(string message) [instance] :33
void Exception::ctor_1(uString* message)
{
    ctor_2(message, NULL);
}

// public Exception(string message, Uno.Exception inner) [instance] :38
void Exception::ctor_2(uString* message, Exception* inner)
{
    _message = message;
    _inner = inner;
    _trace = uGetStackTrace();
    NativeStackTrace = uGetNativeStackTrace(0);
}

// public Uno.Exception get_InnerException() [instance] :17
Exception* Exception::InnerException()
{
    return _inner;
}

// public string get_StackTrace() [instance] :25
uString* Exception::StackTrace()
{
    uString* ind1;
    ind1 = _trace;
    return (ind1 != NULL) ? ind1 : ::STRINGS[28/*"Uno.Excepti...*/];
}

// public Exception New() [static] :28
Exception* Exception::New1()
{
    Exception* obj2 = (Exception*)uNew(Exception_typeof());
    obj2->ctor_();
    return obj2;
}

// public Exception New(string message) [static] :33
Exception* Exception::New2(uString* message)
{
    Exception* obj3 = (Exception*)uNew(Exception_typeof());
    obj3->ctor_1(message);
    return obj3;
}

// public Exception New(string message, Uno.Exception inner) [static] :38
Exception* Exception::New3(uString* message, Exception* inner)
{
    Exception* obj4 = (Exception*)uNew(Exception_typeof());
    obj4->ctor_2(message, inner);
    return obj4;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.4.3/Source/Uno/FakeTime.uno
// -------------------------------------------------------------------

// public sealed class FakeTime :4
// {
static void FakeTime_build(uType* type)
{
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)FakeTime__New1_fn, 0, true, type, 0));
}

uType* FakeTime_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(FakeTime);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.FakeTime", options);
    type->fp_build_ = FakeTime_build;
    type->fp_ctor_ = (void*)FakeTime__New1_fn;
    return type;
}

// public generated FakeTime() :4
void FakeTime__ctor__fn(FakeTime* __this)
{
    __this->ctor_();
}

// public generated FakeTime New() :4
void FakeTime__New1_fn(FakeTime** __retval)
{
    *__retval = FakeTime::New1();
}

// public generated FakeTime() [instance] :4
void FakeTime::ctor_()
{
}

// public generated FakeTime New() [static] :4
FakeTime* FakeTime::New1()
{
    FakeTime* obj1 = (FakeTime*)uNew(FakeTime_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.4.3/Source/Uno/FlagsAttribute.uno
// -------------------------------------------------------------------------

// public sealed class FlagsAttribute :7
// {
static void FlagsAttribute_build(uType* type)
{
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)FlagsAttribute__New1_fn, 0, true, type, 0));
}

uType* FlagsAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Attribute_typeof();
    options.ObjectSize = sizeof(FlagsAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.FlagsAttribute", options);
    type->fp_build_ = FlagsAttribute_build;
    type->fp_ctor_ = (void*)FlagsAttribute__New1_fn;
    return type;
}

// public generated FlagsAttribute() :7
void FlagsAttribute__ctor_1_fn(FlagsAttribute* __this)
{
    __this->ctor_1();
}

// public generated FlagsAttribute New() :7
void FlagsAttribute__New1_fn(FlagsAttribute** __retval)
{
    *__retval = FlagsAttribute::New1();
}

// public generated FlagsAttribute() [instance] :7
void FlagsAttribute::ctor_1()
{
    ctor_();
}

// public generated FlagsAttribute New() [static] :7
FlagsAttribute* FlagsAttribute::New1()
{
    FlagsAttribute* obj1 = (FlagsAttribute*)uNew(FlagsAttribute_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.4.3/Source/Uno/Float.uno
// ----------------------------------------------------------------

// public intrinsic struct Float :15
// {
static void Float_build(uType* type)
{
    ::TYPES[3] = uObject_typeof();
    type->Reflection.SetFunctions(6,
        new uFunction("IsInfinity", NULL, (void*)Float__IsInfinity_fn, 0, true, ::g::Uno::Bool_typeof(), 1, type),
        new uFunction("IsNaN", NULL, (void*)Float__IsNaN_fn, 0, true, ::g::Uno::Bool_typeof(), 1, type),
        new uFunction("IsNegativeInfinity", NULL, (void*)Float__IsNegativeInfinity_fn, 0, true, ::g::Uno::Bool_typeof(), 1, type),
        new uFunction("IsPositiveInfinity", NULL, (void*)Float__IsPositiveInfinity_fn, 0, true, ::g::Uno::Bool_typeof(), 1, type),
        new uFunction("Parse", NULL, (void*)Float__Parse_fn, 0, true, type, 1, ::g::Uno::String_typeof()),
        new uFunction("TryParse", NULL, (void*)Float__TryParse_fn, 0, true, ::g::Uno::Bool_typeof(), 2, ::g::Uno::String_typeof(), type->ByRef()));
}

uStructType* Float_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.Alignment = alignof(float);
    options.ValueSize = sizeof(float);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Float", options);
    type->fp_build_ = Float_build;
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))Float__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int*))Float__GetHashCode_fn;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))Float__ToString_fn;
    return type;
}

// public override sealed bool Equals(object o) :27
void Float__Equals_fn(float* __this, uType* __type, uObject* o, bool* __retval)
{
    bool ret1;
    return *__retval = (::g::Uno::Object__Equals_fn(uBox(__type, *__this, U_ALLOCA(__type->ObjectSize)), o, &ret1), ret1), void();
}

// public override sealed int GetHashCode() :33
void Float__GetHashCode_fn(float* __this, uType* __type, int* __retval)
{
    return *__retval = (int)uBase::Default::Hash(*__this), void();
}

// public static bool IsInfinity(float f) :159
void Float__IsInfinity_fn(float* f, bool* __retval)
{
    *__retval = Float::IsInfinity(*f);
}

// public static bool IsNaN(float f) :144
void Float__IsNaN_fn(float* f, bool* __retval)
{
    *__retval = Float::IsNaN(*f);
}

// public static bool IsNegativeInfinity(float f) :149
void Float__IsNegativeInfinity_fn(float* f, bool* __retval)
{
    *__retval = Float::IsNegativeInfinity(*f);
}

// public static bool IsPositiveInfinity(float f) :154
void Float__IsPositiveInfinity_fn(float* f, bool* __retval)
{
    *__retval = Float::IsPositiveInfinity(*f);
}

// public static float Parse(string str) :58
void Float__Parse_fn(uString* str, float* __retval)
{
    *__retval = Float::Parse(str);
}

// public override sealed string ToString() :44
void Float__ToString_fn(float* __this, uType* __type, uString** __retval)
{
    uBase::String ansi = uBase::Default::ToString(*__this);
    return *__retval = uString::Ansi(ansi.Ptr(), ansi.Length()), void();
}

// public static bool TryParse(string str, float& res) :95
void Float__TryParse_fn(uString* str, float* res, bool* __retval)
{
    *__retval = Float::TryParse(str, res);
}

// public static bool IsInfinity(float f) [static] :159
bool Float::IsInfinity(float f)
{
    return Float::IsNegativeInfinity(f) || Float::IsPositiveInfinity(f);
}

// public static bool IsNaN(float f) [static] :144
bool Float::IsNaN(float f)
{
    return f != f;
}

// public static bool IsNegativeInfinity(float f) [static] :149
bool Float::IsNegativeInfinity(float f)
{
    return f == -FLT_INF;
}

// public static bool IsPositiveInfinity(float f) [static] :154
bool Float::IsPositiveInfinity(float f)
{
    return f == FLT_INF;
}

// public static float Parse(string str) [static] :58
float Float::Parse(uString* str)
{
    try
    {
        if (str == NULL)
        {
            throw uBase::ArgumentException("String");
        }
    
        uBase::String s = uBase::Unicode::Utf16To8(str->_ptr, str->_length);
        return s.ToFloat();
    }
    catch (const uBase::FormatException& e)
    {
        throw uThrowable(::g::Uno::FormatException::New4(uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
    }
    catch (const uBase::ArgumentException& e)
    {
        throw uThrowable(::g::Uno::ArgumentNullException::New6(uStringFromXliString("String")), e.GetFunction(), e.GetLine());
    }
    catch (const uBase::OverflowException& e)
    {
        throw uThrowable(::g::Uno::OverflowException::New4(uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
    }
}

// public static bool TryParse(string str, float& res) [static] :95
bool Float::TryParse(uString* str, float* res)
{
    *res = 0;
    if (str == NULL)
    {
        return false;
    }
    
    uBase::String s = uBase::Unicode::Utf16To8(str->_ptr, str->_length);
    return s.TryToFloat(res);
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.4.3/Source/Uno/Float2.uno
// -----------------------------------------------------------------

// public intrinsic struct Float2 :7
// {
static void Float2_build(uType* type)
{
    ::STRINGS[14] = uString::Const(", ");
    ::TYPES[3] = uObject_typeof();
    ::TYPES[6] = ::g::Uno::Float_typeof();
    type->SetFields(0,
        ::TYPES[6/*float*/], offsetof(Float2, X), 0,
        ::TYPES[6/*float*/], offsetof(Float2, Y), 0);
    type->Reflection.SetFields(2,
        new uField("X", 0),
        new uField("Y", 1));
    type->Reflection.SetFunctions(4,
        new uFunction("get_Item", NULL, (void*)Float2__get_Item_fn, 0, false, ::TYPES[6/*float*/], 1, ::g::Uno::Int_typeof()),
        new uFunction("set_Item", NULL, (void*)Float2__set_Item_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Int_typeof(), ::TYPES[6/*float*/]),
        new uFunction(".ctor", NULL, (void*)Float2__New1_fn, 0, true, type, 1, ::TYPES[6/*float*/]),
        new uFunction(".ctor", NULL, (void*)Float2__New2_fn, 0, true, type, 2, ::TYPES[6/*float*/], ::TYPES[6/*float*/]));
}

uStructType* Float2_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.Alignment = alignof(Float2);
    options.ValueSize = sizeof(Float2);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Float2", options);
    type->fp_build_ = Float2_build;
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))Float2__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int*))Float2__GetHashCode_fn;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))Float2__ToString_fn;
    return type;
}

// public Float2(float xy) :28
void Float2__ctor__fn(Float2* __this, float* xy)
{
    __this->ctor_(*xy);
}

// public Float2(float x, float y) :29
void Float2__ctor_1_fn(Float2* __this, float* x, float* y)
{
    __this->ctor_1(*x, *y);
}

// public override sealed bool Equals(object o) :59
void Float2__Equals_fn(Float2* __this, uType* __type, uObject* o, bool* __retval)
{
    bool ret3;
    return *__retval = (::g::Uno::Object__Equals_fn(uBox(__type, *__this, U_ALLOCA(__type->ObjectSize)), o, &ret3), ret3), void();
}

// public override sealed int GetHashCode() :60
void Float2__GetHashCode_fn(Float2* __this, uType* __type, int* __retval)
{
    int ret4;
    return *__retval = (::g::Uno::Object__GetHashCode_fn(uBox(__type, *__this, U_ALLOCA(__type->ObjectSize)), &ret4), ret4), void();
}

// public float get_Item(int index) :14
void Float2__get_Item_fn(Float2* __this, int* index, float* __retval)
{
    *__retval = __this->Item(*index);
}

// public void set_Item(int index, float value) :20
void Float2__set_Item_fn(Float2* __this, int* index, float* value)
{
    __this->Item(*index, *value);
}

// public Float2 New(float xy) :28
void Float2__New1_fn(float* xy, Float2* __retval)
{
    *__retval = Float2__New1(*xy);
}

// public Float2 New(float x, float y) :29
void Float2__New2_fn(float* x, float* y, Float2* __retval)
{
    *__retval = Float2__New2(*x, *y);
}

// public static operator +(float a, float2 b) :43
void Float2__op_Addition_fn(float* a, Float2* b, Float2* __retval)
{
    *__retval = Float2__op_Addition(*a, *b);
}

// public static operator +(float2 a, float b) :38
void Float2__op_Addition1_fn(Float2* a, float* b, Float2* __retval)
{
    *__retval = Float2__op_Addition1(*a, *b);
}

// public static operator +(float2 a, float2 b) :33
void Float2__op_Addition2_fn(Float2* a, Float2* b, Float2* __retval)
{
    *__retval = Float2__op_Addition2(*a, *b);
}

// public static operator /(float2 a, float b) :41
void Float2__op_Division1_fn(Float2* a, float* b, Float2* __retval)
{
    *__retval = Float2__op_Division1(*a, *b);
}

// public static operator /(float2 a, float2 b) :36
void Float2__op_Division2_fn(Float2* a, Float2* b, Float2* __retval)
{
    *__retval = Float2__op_Division2(*a, *b);
}

// public static operator ==(float2 a, float2 b) :48
void Float2__op_Equality_fn(Float2* a, Float2* b, bool* __retval)
{
    *__retval = Float2__op_Equality(*a, *b);
}

// public static implicit operator float2(int2 a) :57
void Float2__op_Implicit1_fn(::g::Uno::Int2* a, Float2* __retval)
{
    *__retval = Float2__op_Implicit1(*a);
}

// public static operator !=(float2 a, float2 b) :49
void Float2__op_Inequality_fn(Float2* a, Float2* b, bool* __retval)
{
    *__retval = Float2__op_Inequality(*a, *b);
}

// public static operator *(float a, float2 b) :45
void Float2__op_Multiply_fn(float* a, Float2* b, Float2* __retval)
{
    *__retval = Float2__op_Multiply(*a, *b);
}

// public static operator *(float2 a, float b) :40
void Float2__op_Multiply1_fn(Float2* a, float* b, Float2* __retval)
{
    *__retval = Float2__op_Multiply1(*a, *b);
}

// public static operator *(float2 a, float2 b) :35
void Float2__op_Multiply2_fn(Float2* a, Float2* b, Float2* __retval)
{
    *__retval = Float2__op_Multiply2(*a, *b);
}

// public static operator -(float2 a, float b) :39
void Float2__op_Subtraction1_fn(Float2* a, float* b, Float2* __retval)
{
    *__retval = Float2__op_Subtraction1(*a, *b);
}

// public static operator -(float2 a, float2 b) :34
void Float2__op_Subtraction2_fn(Float2* a, Float2* b, Float2* __retval)
{
    *__retval = Float2__op_Subtraction2(*a, *b);
}

// public static operator -(float2 a) :31
void Float2__op_UnaryNegation_fn(Float2* a, Float2* __retval)
{
    *__retval = Float2__op_UnaryNegation(*a);
}

// public override sealed string ToString() :61
void Float2__ToString_fn(Float2* __this, uType* __type, uString** __retval)
{
    uStackFrame __("float2", "ToString()");
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::Float::ToString(__this->X, ::TYPES[6/*float*/]), ::STRINGS[14/*", "*/]), ::g::Uno::Float::ToString(__this->Y, ::TYPES[6/*float*/])), void();
}

// public Float2(float xy) [instance] :28
void Float2::ctor_(float xy)
{
    X = (Y = xy);
}

// public Float2(float x, float y) [instance] :29
void Float2::ctor_1(float x, float y)
{
    X = x;
    Y = y;
}

// public float get_Item(int index) [instance] :14
float Float2::Item(int index)
{
    uStackFrame __("float2", "get_Item(int)");

    if (index == 0)
        return X;
    else if (index == 1)
        return Y;
    else
        U_THROW(::g::Uno::IndexOutOfRangeException::New4());
}

// public void set_Item(int index, float value) [instance] :20
void Float2::Item(int index, float value)
{
    uStackFrame __("float2", "set_Item(int,float)");

    if (index == 0)
        X = value;
    else if (index == 1)
        Y = value;
    else
        U_THROW(::g::Uno::IndexOutOfRangeException::New4());
}

// public Float2 New(float xy) [static] :28
Float2 Float2__New1(float xy)
{
    Float2 obj1;
    obj1.ctor_(xy);
    return obj1;
}

// public Float2 New(float x, float y) [static] :29
Float2 Float2__New2(float x, float y)
{
    Float2 obj2;
    obj2.ctor_1(x, y);
    return obj2;
}

// public static operator +(float a, float2 b) [static] :43
Float2 Float2__op_Addition(float a, Float2 b)
{
    return Float2__New2(a + b.X, a + b.Y);
}

// public static operator +(float2 a, float b) [static] :38
Float2 Float2__op_Addition1(Float2 a, float b)
{
    return Float2__New2(a.X + b, a.Y + b);
}

// public static operator +(float2 a, float2 b) [static] :33
Float2 Float2__op_Addition2(Float2 a, Float2 b)
{
    return Float2__New2(a.X + b.X, a.Y + b.Y);
}

// public static operator /(float2 a, float b) [static] :41
Float2 Float2__op_Division1(Float2 a, float b)
{
    return Float2__New2(a.X / b, a.Y / b);
}

// public static operator /(float2 a, float2 b) [static] :36
Float2 Float2__op_Division2(Float2 a, Float2 b)
{
    return Float2__New2(a.X / b.X, a.Y / b.Y);
}

// public static operator ==(float2 a, float2 b) [static] :48
bool Float2__op_Equality(Float2 a, Float2 b)
{
    return (a.X == b.X) && (a.Y == b.Y);
}

// public static implicit operator float2(int2 a) [static] :57
Float2 Float2__op_Implicit1(::g::Uno::Int2 a)
{
    return Float2__New2((float)a.X, (float)a.Y);
}

// public static operator !=(float2 a, float2 b) [static] :49
bool Float2__op_Inequality(Float2 a, Float2 b)
{
    return (a.X != b.X) || (a.Y != b.Y);
}

// public static operator *(float a, float2 b) [static] :45
Float2 Float2__op_Multiply(float a, Float2 b)
{
    return Float2__New2(a * b.X, a * b.Y);
}

// public static operator *(float2 a, float b) [static] :40
Float2 Float2__op_Multiply1(Float2 a, float b)
{
    return Float2__New2(a.X * b, a.Y * b);
}

// public static operator *(float2 a, float2 b) [static] :35
Float2 Float2__op_Multiply2(Float2 a, Float2 b)
{
    return Float2__New2(a.X * b.X, a.Y * b.Y);
}

// public static operator -(float2 a, float b) [static] :39
Float2 Float2__op_Subtraction1(Float2 a, float b)
{
    return Float2__New2(a.X - b, a.Y - b);
}

// public static operator -(float2 a, float2 b) [static] :34
Float2 Float2__op_Subtraction2(Float2 a, Float2 b)
{
    return Float2__New2(a.X - b.X, a.Y - b.Y);
}

// public static operator -(float2 a) [static] :31
Float2 Float2__op_UnaryNegation(Float2 a)
{
    return Float2__New2(-a.X, -a.Y);
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.4.3/Source/Uno/Float2x2.uno
// -------------------------------------------------------------------

// public intrinsic struct Float2x2 :7
// {
static void Float2x2_build(uType* type)
{
    ::STRINGS[29] = uString::Const(",");
    ::TYPES[3] = uObject_typeof();
    ::TYPES[6] = ::g::Uno::Float_typeof();
    type->SetFields(0,
        ::TYPES[6/*float*/], offsetof(Float2x2, M11), 0,
        ::TYPES[6/*float*/], offsetof(Float2x2, M12), 0,
        ::TYPES[6/*float*/], offsetof(Float2x2, M21), 0,
        ::TYPES[6/*float*/], offsetof(Float2x2, M22), 0);
    type->Reflection.SetFields(4,
        new uField("M11", 0),
        new uField("M12", 1),
        new uField("M21", 2),
        new uField("M22", 3));
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Float2x2__New1_fn, 0, true, type, 4, ::TYPES[6/*float*/], ::TYPES[6/*float*/], ::TYPES[6/*float*/], ::TYPES[6/*float*/]));
}

uStructType* Float2x2_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.Alignment = alignof(Float2x2);
    options.ValueSize = sizeof(Float2x2);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Float2x2", options);
    type->fp_build_ = Float2x2_build;
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))Float2x2__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int*))Float2x2__GetHashCode_fn;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))Float2x2__ToString_fn;
    return type;
}

// public Float2x2(float m11, float m12, float m21, float m22) :35
void Float2x2__ctor__fn(Float2x2* __this, float* m11, float* m12, float* m21, float* m22)
{
    __this->ctor_(*m11, *m12, *m21, *m22);
}

// public override sealed bool Equals(object o) :99
void Float2x2__Equals_fn(Float2x2* __this, uType* __type, uObject* o, bool* __retval)
{
    bool ret3;
    return *__retval = (::g::Uno::Object__Equals_fn(uBox(__type, *__this, U_ALLOCA(__type->ObjectSize)), o, &ret3), ret3), void();
}

// public override sealed int GetHashCode() :100
void Float2x2__GetHashCode_fn(Float2x2* __this, uType* __type, int* __retval)
{
    int ret4;
    return *__retval = (::g::Uno::Object__GetHashCode_fn(uBox(__type, *__this, U_ALLOCA(__type->ObjectSize)), &ret4), ret4), void();
}

// public Float2x2 New(float m11, float m12, float m21, float m22) :35
void Float2x2__New1_fn(float* m11, float* m12, float* m21, float* m22, Float2x2* __retval)
{
    *__retval = Float2x2__New1(*m11, *m12, *m21, *m22);
}

// public override sealed string ToString() :101
void Float2x2__ToString_fn(Float2x2* __this, uType* __type, uString** __retval)
{
    uStackFrame __("float2x2", "ToString()");
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::Float::ToString(__this->M11, ::TYPES[6/*float*/]), ::STRINGS[29/*","*/]), ::g::Uno::Float::ToString(__this->M12, ::TYPES[6/*float*/])), ::STRINGS[29/*","*/]), ::g::Uno::Float::ToString(__this->M21, ::TYPES[6/*float*/])), ::STRINGS[29/*","*/]), ::g::Uno::Float::ToString(__this->M22, ::TYPES[6/*float*/])), void();
}

// public Float2x2(float m11, float m12, float m21, float m22) [instance] :35
void Float2x2::ctor_(float m11, float m12, float m21, float m22)
{
    M11 = m11;
    M12 = m12;
    M21 = m21;
    M22 = m22;
}

// public Float2x2 New(float m11, float m12, float m21, float m22) [static] :35
Float2x2 Float2x2__New1(float m11, float m12, float m21, float m22)
{
    Float2x2 obj1;
    obj1.ctor_(m11, m12, m21, m22);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.4.3/Source/Uno/Float3.uno
// -----------------------------------------------------------------

// public intrinsic struct Float3 :7
// {
static void Float3_build(uType* type)
{
    ::STRINGS[14] = uString::Const(", ");
    ::TYPES[3] = uObject_typeof();
    ::TYPES[6] = ::g::Uno::Float_typeof();
    type->SetFields(0,
        ::TYPES[6/*float*/], offsetof(Float3, X), 0,
        ::TYPES[6/*float*/], offsetof(Float3, Y), 0,
        ::TYPES[6/*float*/], offsetof(Float3, Z), 0);
    type->Reflection.SetFields(3,
        new uField("X", 0),
        new uField("Y", 1),
        new uField("Z", 2));
    type->Reflection.SetFunctions(3,
        new uFunction(".ctor", NULL, (void*)Float3__New1_fn, 0, true, type, 1, ::TYPES[6/*float*/]),
        new uFunction(".ctor", NULL, (void*)Float3__New2_fn, 0, true, type, 3, ::TYPES[6/*float*/], ::TYPES[6/*float*/], ::TYPES[6/*float*/]),
        new uFunction(".ctor", NULL, (void*)Float3__New4_fn, 0, true, type, 2, ::g::Uno::Float2_typeof(), ::TYPES[6/*float*/]));
}

uStructType* Float3_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.Alignment = alignof(Float3);
    options.ValueSize = sizeof(Float3);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Float3", options);
    type->fp_build_ = Float3_build;
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))Float3__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int*))Float3__GetHashCode_fn;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))Float3__ToString_fn;
    return type;
}

// public Float3(float xyz) :30
void Float3__ctor__fn(Float3* __this, float* xyz)
{
    __this->ctor_(*xyz);
}

// public Float3(float x, float y, float z) :31
void Float3__ctor_1_fn(Float3* __this, float* x, float* y, float* z)
{
    __this->ctor_1(*x, *y, *z);
}

// public Float3(float2 xy, float z) :32
void Float3__ctor_3_fn(Float3* __this, ::g::Uno::Float2* xy, float* z)
{
    __this->ctor_3(*xy, *z);
}

// public override sealed bool Equals(object o) :57
void Float3__Equals_fn(Float3* __this, uType* __type, uObject* o, bool* __retval)
{
    bool ret5;
    return *__retval = (::g::Uno::Object__Equals_fn(uBox(__type, *__this, U_ALLOCA(__type->ObjectSize)), o, &ret5), ret5), void();
}

// public override sealed int GetHashCode() :58
void Float3__GetHashCode_fn(Float3* __this, uType* __type, int* __retval)
{
    int ret6;
    return *__retval = (::g::Uno::Object__GetHashCode_fn(uBox(__type, *__this, U_ALLOCA(__type->ObjectSize)), &ret6), ret6), void();
}

// public Float3 New(float xyz) :30
void Float3__New1_fn(float* xyz, Float3* __retval)
{
    *__retval = Float3__New1(*xyz);
}

// public Float3 New(float x, float y, float z) :31
void Float3__New2_fn(float* x, float* y, float* z, Float3* __retval)
{
    *__retval = Float3__New2(*x, *y, *z);
}

// public Float3 New(float2 xy, float z) :32
void Float3__New4_fn(::g::Uno::Float2* xy, float* z, Float3* __retval)
{
    *__retval = Float3__New4(*xy, *z);
}

// public static operator +(float3 a, float3 b) :35
void Float3__op_Addition2_fn(Float3* a, Float3* b, Float3* __retval)
{
    *__retval = Float3__op_Addition2(*a, *b);
}

// public static operator /(float3 a, float b) :43
void Float3__op_Division1_fn(Float3* a, float* b, Float3* __retval)
{
    *__retval = Float3__op_Division1(*a, *b);
}

// public static operator /(float3 a, float3 b) :38
void Float3__op_Division2_fn(Float3* a, Float3* b, Float3* __retval)
{
    *__retval = Float3__op_Division2(*a, *b);
}

// public static operator ==(float3 a, float3 b) :50
void Float3__op_Equality_fn(Float3* a, Float3* b, bool* __retval)
{
    *__retval = Float3__op_Equality(*a, *b);
}

// public static operator !=(float3 a, float3 b) :51
void Float3__op_Inequality_fn(Float3* a, Float3* b, bool* __retval)
{
    *__retval = Float3__op_Inequality(*a, *b);
}

// public static operator *(float a, float3 b) :47
void Float3__op_Multiply_fn(float* a, Float3* b, Float3* __retval)
{
    *__retval = Float3__op_Multiply(*a, *b);
}

// public static operator *(float3 a, float b) :42
void Float3__op_Multiply1_fn(Float3* a, float* b, Float3* __retval)
{
    *__retval = Float3__op_Multiply1(*a, *b);
}

// public static operator *(float3 a, float3 b) :37
void Float3__op_Multiply2_fn(Float3* a, Float3* b, Float3* __retval)
{
    *__retval = Float3__op_Multiply2(*a, *b);
}

// public static operator -(float3 a, float3 b) :36
void Float3__op_Subtraction2_fn(Float3* a, Float3* b, Float3* __retval)
{
    *__retval = Float3__op_Subtraction2(*a, *b);
}

// public static operator -(float3 a) :53
void Float3__op_UnaryNegation_fn(Float3* a, Float3* __retval)
{
    *__retval = Float3__op_UnaryNegation(*a);
}

// public override sealed string ToString() :59
void Float3__ToString_fn(Float3* __this, uType* __type, uString** __retval)
{
    uStackFrame __("float3", "ToString()");
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::Float::ToString(__this->X, ::TYPES[6/*float*/]), ::STRINGS[14/*", "*/]), ::g::Uno::Float::ToString(__this->Y, ::TYPES[6/*float*/])), ::STRINGS[14/*", "*/]), ::g::Uno::Float::ToString(__this->Z, ::TYPES[6/*float*/])), void();
}

// public Float3(float xyz) [instance] :30
void Float3::ctor_(float xyz)
{
    X = (Y = (Z = xyz));
}

// public Float3(float x, float y, float z) [instance] :31
void Float3::ctor_1(float x, float y, float z)
{
    X = x;
    Y = y;
    Z = z;
}

// public Float3(float2 xy, float z) [instance] :32
void Float3::ctor_3(::g::Uno::Float2 xy, float z)
{
    X = xy.X;
    Y = xy.Y;
    Z = z;
}

// public Float3 New(float xyz) [static] :30
Float3 Float3__New1(float xyz)
{
    Float3 obj1;
    obj1.ctor_(xyz);
    return obj1;
}

// public Float3 New(float x, float y, float z) [static] :31
Float3 Float3__New2(float x, float y, float z)
{
    Float3 obj2;
    obj2.ctor_1(x, y, z);
    return obj2;
}

// public Float3 New(float2 xy, float z) [static] :32
Float3 Float3__New4(::g::Uno::Float2 xy, float z)
{
    Float3 obj3;
    obj3.ctor_3(xy, z);
    return obj3;
}

// public static operator +(float3 a, float3 b) [static] :35
Float3 Float3__op_Addition2(Float3 a, Float3 b)
{
    return Float3__New2(a.X + b.X, a.Y + b.Y, a.Z + b.Z);
}

// public static operator /(float3 a, float b) [static] :43
Float3 Float3__op_Division1(Float3 a, float b)
{
    return Float3__New2(a.X / b, a.Y / b, a.Z / b);
}

// public static operator /(float3 a, float3 b) [static] :38
Float3 Float3__op_Division2(Float3 a, Float3 b)
{
    return Float3__New2(a.X / b.X, a.Y / b.Y, a.Z / b.Z);
}

// public static operator ==(float3 a, float3 b) [static] :50
bool Float3__op_Equality(Float3 a, Float3 b)
{
    return ((a.X == b.X) && (a.Y == b.Y)) && (a.Z == b.Z);
}

// public static operator !=(float3 a, float3 b) [static] :51
bool Float3__op_Inequality(Float3 a, Float3 b)
{
    return ((a.X != b.X) || (a.Y != b.Y)) || (a.Z != b.Z);
}

// public static operator *(float a, float3 b) [static] :47
Float3 Float3__op_Multiply(float a, Float3 b)
{
    return Float3__New2(a * b.X, a * b.Y, a * b.Z);
}

// public static operator *(float3 a, float b) [static] :42
Float3 Float3__op_Multiply1(Float3 a, float b)
{
    return Float3__New2(a.X * b, a.Y * b, a.Z * b);
}

// public static operator *(float3 a, float3 b) [static] :37
Float3 Float3__op_Multiply2(Float3 a, Float3 b)
{
    return Float3__New2(a.X * b.X, a.Y * b.Y, a.Z * b.Z);
}

// public static operator -(float3 a, float3 b) [static] :36
Float3 Float3__op_Subtraction2(Float3 a, Float3 b)
{
    return Float3__New2(a.X - b.X, a.Y - b.Y, a.Z - b.Z);
}

// public static operator -(float3 a) [static] :53
Float3 Float3__op_UnaryNegation(Float3 a)
{
    return Float3__op_Multiply1(a, -1.0f);
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.4.3/Source/Uno/Float3x3.uno
// -------------------------------------------------------------------

// public intrinsic struct Float3x3 :7
// {
static void Float3x3_build(uType* type)
{
    ::STRINGS[29] = uString::Const(",");
    ::TYPES[3] = uObject_typeof();
    ::TYPES[6] = ::g::Uno::Float_typeof();
    type->SetFields(0,
        ::TYPES[6/*float*/], offsetof(Float3x3, M11), 0,
        ::TYPES[6/*float*/], offsetof(Float3x3, M12), 0,
        ::TYPES[6/*float*/], offsetof(Float3x3, M13), 0,
        ::TYPES[6/*float*/], offsetof(Float3x3, M21), 0,
        ::TYPES[6/*float*/], offsetof(Float3x3, M22), 0,
        ::TYPES[6/*float*/], offsetof(Float3x3, M23), 0,
        ::TYPES[6/*float*/], offsetof(Float3x3, M31), 0,
        ::TYPES[6/*float*/], offsetof(Float3x3, M32), 0,
        ::TYPES[6/*float*/], offsetof(Float3x3, M33), 0);
    type->Reflection.SetFields(9,
        new uField("M11", 0),
        new uField("M12", 1),
        new uField("M13", 2),
        new uField("M21", 3),
        new uField("M22", 4),
        new uField("M23", 5),
        new uField("M31", 6),
        new uField("M32", 7),
        new uField("M33", 8));
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Float3x3__New1_fn, 0, true, type, 9, ::TYPES[6/*float*/], ::TYPES[6/*float*/], ::TYPES[6/*float*/], ::TYPES[6/*float*/], ::TYPES[6/*float*/], ::TYPES[6/*float*/], ::TYPES[6/*float*/], ::TYPES[6/*float*/], ::TYPES[6/*float*/]));
}

uStructType* Float3x3_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.Alignment = alignof(Float3x3);
    options.ValueSize = sizeof(Float3x3);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Float3x3", options);
    type->fp_build_ = Float3x3_build;
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))Float3x3__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int*))Float3x3__GetHashCode_fn;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))Float3x3__ToString_fn;
    return type;
}

// public Float3x3(float m11, float m12, float m13, float m21, float m22, float m23, float m31, float m32, float m33) :38
void Float3x3__ctor__fn(Float3x3* __this, float* m11, float* m12, float* m13, float* m21, float* m22, float* m23, float* m31, float* m32, float* m33)
{
    __this->ctor_(*m11, *m12, *m13, *m21, *m22, *m23, *m31, *m32, *m33);
}

// public override sealed bool Equals(object o) :125
void Float3x3__Equals_fn(Float3x3* __this, uType* __type, uObject* o, bool* __retval)
{
    bool ret3;
    return *__retval = (::g::Uno::Object__Equals_fn(uBox(__type, *__this, U_ALLOCA(__type->ObjectSize)), o, &ret3), ret3), void();
}

// public override sealed int GetHashCode() :126
void Float3x3__GetHashCode_fn(Float3x3* __this, uType* __type, int* __retval)
{
    int ret4;
    return *__retval = (::g::Uno::Object__GetHashCode_fn(uBox(__type, *__this, U_ALLOCA(__type->ObjectSize)), &ret4), ret4), void();
}

// public Float3x3 New(float m11, float m12, float m13, float m21, float m22, float m23, float m31, float m32, float m33) :38
void Float3x3__New1_fn(float* m11, float* m12, float* m13, float* m21, float* m22, float* m23, float* m31, float* m32, float* m33, Float3x3* __retval)
{
    *__retval = Float3x3__New1(*m11, *m12, *m13, *m21, *m22, *m23, *m31, *m32, *m33);
}

// public override sealed string ToString() :128
void Float3x3__ToString_fn(Float3x3* __this, uType* __type, uString** __retval)
{
    uStackFrame __("float3x3", "ToString()");
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::Float::ToString(__this->M11, ::TYPES[6/*float*/]), ::STRINGS[29/*","*/]), ::g::Uno::Float::ToString(__this->M12, ::TYPES[6/*float*/])), ::g::Uno::Float::ToString(__this->M13, ::TYPES[6/*float*/])), ::STRINGS[29/*","*/]), ::g::Uno::Float::ToString(__this->M21, ::TYPES[6/*float*/])), ::STRINGS[29/*","*/]), ::g::Uno::Float::ToString(__this->M22, ::TYPES[6/*float*/])), ::g::Uno::Float::ToString(__this->M23, ::TYPES[6/*float*/])), ::STRINGS[29/*","*/]), ::g::Uno::Float::ToString(__this->M31, ::TYPES[6/*float*/])), ::STRINGS[29/*","*/]), ::g::Uno::Float::ToString(__this->M32, ::TYPES[6/*float*/])), ::g::Uno::Float::ToString(__this->M33, ::TYPES[6/*float*/])), void();
}

// public Float3x3(float m11, float m12, float m13, float m21, float m22, float m23, float m31, float m32, float m33) [instance] :38
void Float3x3::ctor_(float m11, float m12, float m13, float m21, float m22, float m23, float m31, float m32, float m33)
{
    M11 = m11;
    M12 = m12;
    M13 = m13;
    M21 = m21;
    M22 = m22;
    M23 = m23;
    M31 = m31;
    M32 = m32;
    M33 = m33;
}

// public Float3x3 New(float m11, float m12, float m13, float m21, float m22, float m23, float m31, float m32, float m33) [static] :38
Float3x3 Float3x3__New1(float m11, float m12, float m13, float m21, float m22, float m23, float m31, float m32, float m33)
{
    Float3x3 obj1;
    obj1.ctor_(m11, m12, m13, m21, m22, m23, m31, m32, m33);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.4.3/Source/Uno/Float4.uno
// -----------------------------------------------------------------

// public intrinsic struct Float4 :7
// {
static void Float4_build(uType* type)
{
    ::STRINGS[14] = uString::Const(", ");
    ::TYPES[3] = uObject_typeof();
    ::TYPES[6] = ::g::Uno::Float_typeof();
    type->SetFields(0,
        ::TYPES[6/*float*/], offsetof(Float4, X), 0,
        ::TYPES[6/*float*/], offsetof(Float4, Y), 0,
        ::TYPES[6/*float*/], offsetof(Float4, Z), 0,
        ::TYPES[6/*float*/], offsetof(Float4, W), 0);
    type->Reflection.SetFields(4,
        new uField("W", 3),
        new uField("X", 0),
        new uField("Y", 1),
        new uField("Z", 2));
    type->Reflection.SetFunctions(9,
        new uFunction("get_Identity", NULL, (void*)Float4__get_Identity_fn, 0, true, type, 0),
        new uFunction("get_Item", NULL, (void*)Float4__get_Item_fn, 0, false, ::TYPES[6/*float*/], 1, ::g::Uno::Int_typeof()),
        new uFunction("set_Item", NULL, (void*)Float4__set_Item_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Int_typeof(), ::TYPES[6/*float*/]),
        new uFunction(".ctor", NULL, (void*)Float4__New1_fn, 0, true, type, 1, ::TYPES[6/*float*/]),
        new uFunction(".ctor", NULL, (void*)Float4__New2_fn, 0, true, type, 4, ::TYPES[6/*float*/], ::TYPES[6/*float*/], ::TYPES[6/*float*/], ::TYPES[6/*float*/]),
        new uFunction(".ctor", NULL, (void*)Float4__New5_fn, 0, true, type, 2, ::TYPES[6/*float*/], ::g::Uno::Float3_typeof()),
        new uFunction(".ctor", NULL, (void*)Float4__New6_fn, 0, true, type, 3, ::g::Uno::Float2_typeof(), ::TYPES[6/*float*/], ::TYPES[6/*float*/]),
        new uFunction(".ctor", NULL, (void*)Float4__New7_fn, 0, true, type, 2, ::g::Uno::Float2_typeof(), ::g::Uno::Float2_typeof()),
        new uFunction(".ctor", NULL, (void*)Float4__New8_fn, 0, true, type, 2, ::g::Uno::Float3_typeof(), ::TYPES[6/*float*/]));
}

uStructType* Float4_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.Alignment = alignof(Float4);
    options.ValueSize = sizeof(Float4);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Float4", options);
    type->fp_build_ = Float4_build;
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))Float4__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int*))Float4__GetHashCode_fn;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))Float4__ToString_fn;
    return type;
}

// public Float4(float xyzw) :37
void Float4__ctor__fn(Float4* __this, float* xyzw)
{
    __this->ctor_(*xyzw);
}

// public Float4(float x, float y, float z, float w) :38
void Float4__ctor_1_fn(Float4* __this, float* x, float* y, float* z, float* w)
{
    __this->ctor_1(*x, *y, *z, *w);
}

// public Float4(float x, float3 yzw) :44
void Float4__ctor_4_fn(Float4* __this, float* x, ::g::Uno::Float3* yzw)
{
    __this->ctor_4(*x, *yzw);
}

// public Float4(float2 xy, float z, float w) :39
void Float4__ctor_5_fn(Float4* __this, ::g::Uno::Float2* xy, float* z, float* w)
{
    __this->ctor_5(*xy, *z, *w);
}

// public Float4(float2 xy, float2 zw) :42
void Float4__ctor_6_fn(Float4* __this, ::g::Uno::Float2* xy, ::g::Uno::Float2* zw)
{
    __this->ctor_6(*xy, *zw);
}

// public Float4(float3 xyz, float w) :43
void Float4__ctor_7_fn(Float4* __this, ::g::Uno::Float3* xyz, float* w)
{
    __this->ctor_7(*xyz, *w);
}

// public override sealed bool Equals(object o) :71
void Float4__Equals_fn(Float4* __this, uType* __type, uObject* o, bool* __retval)
{
    bool ret9;
    return *__retval = (::g::Uno::Object__Equals_fn(uBox(__type, *__this, U_ALLOCA(__type->ObjectSize)), o, &ret9), ret9), void();
}

// public override sealed int GetHashCode() :72
void Float4__GetHashCode_fn(Float4* __this, uType* __type, int* __retval)
{
    int ret10;
    return *__retval = (::g::Uno::Object__GetHashCode_fn(uBox(__type, *__this, U_ALLOCA(__type->ObjectSize)), &ret10), ret10), void();
}

// public static float4 get_Identity() :11
void Float4__get_Identity_fn(Float4* __retval)
{
    *__retval = Float4__Identity();
}

// public float get_Item(int index) :19
void Float4__get_Item_fn(Float4* __this, int* index, float* __retval)
{
    *__retval = __this->Item(*index);
}

// public void set_Item(int index, float value) :27
void Float4__set_Item_fn(Float4* __this, int* index, float* value)
{
    __this->Item(*index, *value);
}

// public Float4 New(float xyzw) :37
void Float4__New1_fn(float* xyzw, Float4* __retval)
{
    *__retval = Float4__New1(*xyzw);
}

// public Float4 New(float x, float y, float z, float w) :38
void Float4__New2_fn(float* x, float* y, float* z, float* w, Float4* __retval)
{
    *__retval = Float4__New2(*x, *y, *z, *w);
}

// public Float4 New(float x, float3 yzw) :44
void Float4__New5_fn(float* x, ::g::Uno::Float3* yzw, Float4* __retval)
{
    *__retval = Float4__New5(*x, *yzw);
}

// public Float4 New(float2 xy, float z, float w) :39
void Float4__New6_fn(::g::Uno::Float2* xy, float* z, float* w, Float4* __retval)
{
    *__retval = Float4__New6(*xy, *z, *w);
}

// public Float4 New(float2 xy, float2 zw) :42
void Float4__New7_fn(::g::Uno::Float2* xy, ::g::Uno::Float2* zw, Float4* __retval)
{
    *__retval = Float4__New7(*xy, *zw);
}

// public Float4 New(float3 xyz, float w) :43
void Float4__New8_fn(::g::Uno::Float3* xyz, float* w, Float4* __retval)
{
    *__retval = Float4__New8(*xyz, *w);
}

// public static operator +(float a, float4 b) :57
void Float4__op_Addition_fn(float* a, Float4* b, Float4* __retval)
{
    *__retval = Float4__op_Addition(*a, *b);
}

// public static operator +(float4 a, float4 b) :47
void Float4__op_Addition2_fn(Float4* a, Float4* b, Float4* __retval)
{
    *__retval = Float4__op_Addition2(*a, *b);
}

// public static operator /(float4 a, float b) :55
void Float4__op_Division1_fn(Float4* a, float* b, Float4* __retval)
{
    *__retval = Float4__op_Division1(*a, *b);
}

// public static operator /(float4 a, float4 b) :50
void Float4__op_Division2_fn(Float4* a, Float4* b, Float4* __retval)
{
    *__retval = Float4__op_Division2(*a, *b);
}

// public static operator ==(float4 a, float4 b) :62
void Float4__op_Equality_fn(Float4* a, Float4* b, bool* __retval)
{
    *__retval = Float4__op_Equality(*a, *b);
}

// public static implicit operator float4(int4 a) :69
void Float4__op_Implicit1_fn(::g::Uno::Int4* a, Float4* __retval)
{
    *__retval = Float4__op_Implicit1(*a);
}

// public static operator !=(float4 a, float4 b) :63
void Float4__op_Inequality_fn(Float4* a, Float4* b, bool* __retval)
{
    *__retval = Float4__op_Inequality(*a, *b);
}

// public static operator *(float a, float4 b) :59
void Float4__op_Multiply_fn(float* a, Float4* b, Float4* __retval)
{
    *__retval = Float4__op_Multiply(*a, *b);
}

// public static operator *(float4 a, float b) :54
void Float4__op_Multiply1_fn(Float4* a, float* b, Float4* __retval)
{
    *__retval = Float4__op_Multiply1(*a, *b);
}

// public static operator *(float4 a, float4 b) :49
void Float4__op_Multiply2_fn(Float4* a, Float4* b, Float4* __retval)
{
    *__retval = Float4__op_Multiply2(*a, *b);
}

// public static operator -(float4 a, float4 b) :48
void Float4__op_Subtraction2_fn(Float4* a, Float4* b, Float4* __retval)
{
    *__retval = Float4__op_Subtraction2(*a, *b);
}

// public override sealed string ToString() :73
void Float4__ToString_fn(Float4* __this, uType* __type, uString** __retval)
{
    uStackFrame __("float4", "ToString()");
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::Float::ToString(__this->X, ::TYPES[6/*float*/]), ::STRINGS[14/*", "*/]), ::g::Uno::Float::ToString(__this->Y, ::TYPES[6/*float*/])), ::STRINGS[14/*", "*/]), ::g::Uno::Float::ToString(__this->Z, ::TYPES[6/*float*/])), ::STRINGS[14/*", "*/]), ::g::Uno::Float::ToString(__this->W, ::TYPES[6/*float*/])), void();
}

// public Float4(float xyzw) [instance] :37
void Float4::ctor_(float xyzw)
{
    X = (Y = (Z = (W = xyzw)));
}

// public Float4(float x, float y, float z, float w) [instance] :38
void Float4::ctor_1(float x, float y, float z, float w)
{
    X = x;
    Y = y;
    Z = z;
    W = w;
}

// public Float4(float x, float3 yzw) [instance] :44
void Float4::ctor_4(float x, ::g::Uno::Float3 yzw)
{
    X = x;
    Y = yzw.X;
    Z = yzw.Y;
    W = yzw.Z;
}

// public Float4(float2 xy, float z, float w) [instance] :39
void Float4::ctor_5(::g::Uno::Float2 xy, float z, float w)
{
    X = xy.X;
    Y = xy.Y;
    Z = z;
    W = w;
}

// public Float4(float2 xy, float2 zw) [instance] :42
void Float4::ctor_6(::g::Uno::Float2 xy, ::g::Uno::Float2 zw)
{
    X = xy.X;
    Y = xy.Y;
    Z = zw.X;
    W = zw.Y;
}

// public Float4(float3 xyz, float w) [instance] :43
void Float4::ctor_7(::g::Uno::Float3 xyz, float w)
{
    X = xyz.X;
    Y = xyz.Y;
    Z = xyz.Z;
    W = w;
}

// public float get_Item(int index) [instance] :19
float Float4::Item(int index)
{
    uStackFrame __("float4", "get_Item(int)");

    if (index == 0)
        return X;
    else if (index == 1)
        return Y;
    else if (index == 2)
        return Z;
    else if (index == 3)
        return W;
    else
        U_THROW(::g::Uno::IndexOutOfRangeException::New4());
}

// public void set_Item(int index, float value) [instance] :27
void Float4::Item(int index, float value)
{
    uStackFrame __("float4", "set_Item(int,float)");

    if (index == 0)
        X = value;
    else if (index == 1)
        Y = value;
    else if (index == 2)
        Z = value;
    else if (index == 3)
        W = value;
    else
        U_THROW(::g::Uno::IndexOutOfRangeException::New4());
}

// public Float4 New(float xyzw) [static] :37
Float4 Float4__New1(float xyzw)
{
    Float4 obj1;
    obj1.ctor_(xyzw);
    return obj1;
}

// public Float4 New(float x, float y, float z, float w) [static] :38
Float4 Float4__New2(float x, float y, float z, float w)
{
    Float4 obj2;
    obj2.ctor_1(x, y, z, w);
    return obj2;
}

// public Float4 New(float x, float3 yzw) [static] :44
Float4 Float4__New5(float x, ::g::Uno::Float3 yzw)
{
    Float4 obj8;
    obj8.ctor_4(x, yzw);
    return obj8;
}

// public Float4 New(float2 xy, float z, float w) [static] :39
Float4 Float4__New6(::g::Uno::Float2 xy, float z, float w)
{
    Float4 obj3;
    obj3.ctor_5(xy, z, w);
    return obj3;
}

// public Float4 New(float2 xy, float2 zw) [static] :42
Float4 Float4__New7(::g::Uno::Float2 xy, ::g::Uno::Float2 zw)
{
    Float4 obj6;
    obj6.ctor_6(xy, zw);
    return obj6;
}

// public Float4 New(float3 xyz, float w) [static] :43
Float4 Float4__New8(::g::Uno::Float3 xyz, float w)
{
    Float4 obj7;
    obj7.ctor_7(xyz, w);
    return obj7;
}

// public static operator +(float a, float4 b) [static] :57
Float4 Float4__op_Addition(float a, Float4 b)
{
    return Float4__New2(a + b.X, a + b.Y, a + b.Z, a + b.W);
}

// public static operator +(float4 a, float4 b) [static] :47
Float4 Float4__op_Addition2(Float4 a, Float4 b)
{
    return Float4__New2(a.X + b.X, a.Y + b.Y, a.Z + b.Z, a.W + b.W);
}

// public static operator /(float4 a, float b) [static] :55
Float4 Float4__op_Division1(Float4 a, float b)
{
    return Float4__New2(a.X / b, a.Y / b, a.Z / b, a.W / b);
}

// public static operator /(float4 a, float4 b) [static] :50
Float4 Float4__op_Division2(Float4 a, Float4 b)
{
    return Float4__New2(a.X / b.X, a.Y / b.Y, a.Z / b.Z, a.W / b.W);
}

// public static operator ==(float4 a, float4 b) [static] :62
bool Float4__op_Equality(Float4 a, Float4 b)
{
    return (((a.X == b.X) && (a.Y == b.Y)) && (a.Z == b.Z)) && (a.W == b.W);
}

// public static implicit operator float4(int4 a) [static] :69
Float4 Float4__op_Implicit1(::g::Uno::Int4 a)
{
    return Float4__New2((float)a.X, (float)a.Y, (float)a.Z, (float)a.W);
}

// public static operator !=(float4 a, float4 b) [static] :63
bool Float4__op_Inequality(Float4 a, Float4 b)
{
    return (((a.X != b.X) || (a.Y != b.Y)) || (a.Z != b.Z)) || (a.W != b.W);
}

// public static operator *(float a, float4 b) [static] :59
Float4 Float4__op_Multiply(float a, Float4 b)
{
    return Float4__New2(a * b.X, a * b.Y, a * b.Z, a * b.W);
}

// public static operator *(float4 a, float b) [static] :54
Float4 Float4__op_Multiply1(Float4 a, float b)
{
    return Float4__New2(a.X * b, a.Y * b, a.Z * b, a.W * b);
}

// public static operator *(float4 a, float4 b) [static] :49
Float4 Float4__op_Multiply2(Float4 a, Float4 b)
{
    return Float4__New2(a.X * b.X, a.Y * b.Y, a.Z * b.Z, a.W * b.W);
}

// public static operator -(float4 a, float4 b) [static] :48
Float4 Float4__op_Subtraction2(Float4 a, Float4 b)
{
    return Float4__New2(a.X - b.X, a.Y - b.Y, a.Z - b.Z, a.W - b.W);
}

// public static float4 get_Identity() [static] :11
Float4 Float4__Identity()
{
    return Float4__New2(0.0f, 0.0f, 0.0f, 1.0f);
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.4.3/Source/Uno/Float4x4.uno
// -------------------------------------------------------------------

// public intrinsic struct Float4x4 :8
// {
static void Float4x4_build(uType* type)
{
    ::STRINGS[29] = uString::Const(",");
    ::TYPES[3] = uObject_typeof();
    ::TYPES[7] = ::g::Uno::Generic_typeof()->MakeMethod(0/*Equals<float4x4>*/, type, NULL);
    ::TYPES[6] = ::g::Uno::Float_typeof();
    type->SetFields(0,
        ::TYPES[6/*float*/], offsetof(Float4x4, M11), 0,
        ::TYPES[6/*float*/], offsetof(Float4x4, M12), 0,
        ::TYPES[6/*float*/], offsetof(Float4x4, M13), 0,
        ::TYPES[6/*float*/], offsetof(Float4x4, M14), 0,
        ::TYPES[6/*float*/], offsetof(Float4x4, M21), 0,
        ::TYPES[6/*float*/], offsetof(Float4x4, M22), 0,
        ::TYPES[6/*float*/], offsetof(Float4x4, M23), 0,
        ::TYPES[6/*float*/], offsetof(Float4x4, M24), 0,
        ::TYPES[6/*float*/], offsetof(Float4x4, M31), 0,
        ::TYPES[6/*float*/], offsetof(Float4x4, M32), 0,
        ::TYPES[6/*float*/], offsetof(Float4x4, M33), 0,
        ::TYPES[6/*float*/], offsetof(Float4x4, M34), 0,
        ::TYPES[6/*float*/], offsetof(Float4x4, M41), 0,
        ::TYPES[6/*float*/], offsetof(Float4x4, M42), 0,
        ::TYPES[6/*float*/], offsetof(Float4x4, M43), 0,
        ::TYPES[6/*float*/], offsetof(Float4x4, M44), 0);
    type->Reflection.SetFields(16,
        new uField("M11", 0),
        new uField("M12", 1),
        new uField("M13", 2),
        new uField("M14", 3),
        new uField("M21", 4),
        new uField("M22", 5),
        new uField("M23", 6),
        new uField("M24", 7),
        new uField("M31", 8),
        new uField("M32", 9),
        new uField("M33", 10),
        new uField("M34", 11),
        new uField("M41", 12),
        new uField("M42", 13),
        new uField("M43", 14),
        new uField("M44", 15));
    type->Reflection.SetFunctions(4,
        new uFunction("get_Identity", NULL, (void*)Float4x4__get_Identity_fn, 0, true, type, 0),
        new uFunction("get_Item", NULL, (void*)Float4x4__get_Item_fn, 0, false, ::g::Uno::Float4_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("set_Item", NULL, (void*)Float4x4__set_Item_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Int_typeof(), ::g::Uno::Float4_typeof()),
        new uFunction(".ctor", NULL, (void*)Float4x4__New1_fn, 0, true, type, 16, ::TYPES[6/*float*/], ::TYPES[6/*float*/], ::TYPES[6/*float*/], ::TYPES[6/*float*/], ::TYPES[6/*float*/], ::TYPES[6/*float*/], ::TYPES[6/*float*/], ::TYPES[6/*float*/], ::TYPES[6/*float*/], ::TYPES[6/*float*/], ::TYPES[6/*float*/], ::TYPES[6/*float*/], ::TYPES[6/*float*/], ::TYPES[6/*float*/], ::TYPES[6/*float*/], ::TYPES[6/*float*/]));
}

uStructType* Float4x4_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 16;
    options.Alignment = alignof(Float4x4);
    options.ValueSize = sizeof(Float4x4);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Float4x4", options);
    type->fp_build_ = Float4x4_build;
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))Float4x4__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int*))Float4x4__GetHashCode_fn;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))Float4x4__ToString_fn;
    return type;
}

// public Float4x4(float m11, float m12, float m13, float m14, float m21, float m22, float m23, float m24, float m31, float m32, float m33, float m34, float m41, float m42, float m43, float m44) :42
void Float4x4__ctor__fn(Float4x4* __this, float* m11, float* m12, float* m13, float* m14, float* m21, float* m22, float* m23, float* m24, float* m31, float* m32, float* m33, float* m34, float* m41, float* m42, float* m43, float* m44)
{
    __this->ctor_(*m11, *m12, *m13, *m14, *m21, *m22, *m23, *m24, *m31, *m32, *m33, *m34, *m41, *m42, *m43, *m44);
}

// public override sealed bool Equals(object o) :168
void Float4x4__Equals_fn(Float4x4* __this, uType* __type, uObject* o, bool* __retval)
{
    bool ret4;
    return *__retval = (::g::Uno::Object__Equals_fn(uBox(__type, *__this, U_ALLOCA(__type->ObjectSize)), o, &ret4), ret4), void();
}

// public override sealed int GetHashCode() :169
void Float4x4__GetHashCode_fn(Float4x4* __this, uType* __type, int* __retval)
{
    int ret5;
    return *__retval = (::g::Uno::Object__GetHashCode_fn(uBox(__type, *__this, U_ALLOCA(__type->ObjectSize)), &ret5), ret5), void();
}

// public static float4x4 get_Identity() :12
void Float4x4__get_Identity_fn(Float4x4* __retval)
{
    *__retval = Float4x4__Identity();
}

// public float4 get_Item(int index) :24
void Float4x4__get_Item_fn(Float4x4* __this, int* index, ::g::Uno::Float4* __retval)
{
    *__retval = __this->Item(*index);
}

// public void set_Item(int index, float4 value) :32
void Float4x4__set_Item_fn(Float4x4* __this, int* index, ::g::Uno::Float4* value)
{
    __this->Item(*index, *value);
}

// public Float4x4 New(float m11, float m12, float m13, float m14, float m21, float m22, float m23, float m24, float m31, float m32, float m33, float m34, float m41, float m42, float m43, float m44) :42
void Float4x4__New1_fn(float* m11, float* m12, float* m13, float* m14, float* m21, float* m22, float* m23, float* m24, float* m31, float* m32, float* m33, float* m34, float* m41, float* m42, float* m43, float* m44, Float4x4* __retval)
{
    *__retval = Float4x4__New1(*m11, *m12, *m13, *m14, *m21, *m22, *m23, *m24, *m31, *m32, *m33, *m34, *m41, *m42, *m43, *m44);
}

// public static operator +(float4x4 left, float4x4 right) :92
void Float4x4__op_Addition_fn(Float4x4* left, Float4x4* right, Float4x4* __retval)
{
    *__retval = Float4x4__op_Addition(*left, *right);
}

// public static operator ==(float4x4 a, float4x4 b) :158
void Float4x4__op_Equality_fn(Float4x4* a, Float4x4* b, bool* __retval)
{
    *__retval = Float4x4__op_Equality(*a, *b);
}

// public static operator *(float4x4 left, float right) :114
void Float4x4__op_Multiply_fn(Float4x4* left, float* right, Float4x4* __retval)
{
    *__retval = Float4x4__op_Multiply(*left, *right);
}

// public static operator -(float4x4 left, float4x4 right) :70
void Float4x4__op_Subtraction_fn(Float4x4* left, Float4x4* right, Float4x4* __retval)
{
    *__retval = Float4x4__op_Subtraction(*left, *right);
}

// public override sealed string ToString() :171
void Float4x4__ToString_fn(Float4x4* __this, uType* __type, uString** __retval)
{
    uStackFrame __("float4x4", "ToString()");
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::Float::ToString(__this->M11, ::TYPES[6/*float*/]), ::STRINGS[29/*","*/]), ::g::Uno::Float::ToString(__this->M12, ::TYPES[6/*float*/])), ::STRINGS[29/*","*/]), ::g::Uno::Float::ToString(__this->M13, ::TYPES[6/*float*/])), ::STRINGS[29/*","*/]), ::g::Uno::Float::ToString(__this->M14, ::TYPES[6/*float*/])), ::STRINGS[29/*","*/]), ::g::Uno::Float::ToString(__this->M21, ::TYPES[6/*float*/])), ::STRINGS[29/*","*/]), ::g::Uno::Float::ToString(__this->M22, ::TYPES[6/*float*/])), ::STRINGS[29/*","*/]), ::g::Uno::Float::ToString(__this->M23, ::TYPES[6/*float*/])), ::STRINGS[29/*","*/]), ::g::Uno::Float::ToString(__this->M24, ::TYPES[6/*float*/])), ::STRINGS[29/*","*/]), ::g::Uno::Float::ToString(__this->M31, ::TYPES[6/*float*/])), ::STRINGS[29/*","*/]), ::g::Uno::Float::ToString(__this->M32, ::TYPES[6/*float*/])), ::STRINGS[29/*","*/]), ::g::Uno::Float::ToString(__this->M33, ::TYPES[6/*float*/])), ::STRINGS[29/*","*/]), ::g::Uno::Float::ToString(__this->M34, ::TYPES[6/*float*/])), ::STRINGS[29/*","*/]), ::g::Uno::Float::ToString(__this->M41, ::TYPES[6/*float*/])), ::STRINGS[29/*","*/]), ::g::Uno::Float::ToString(__this->M42, ::TYPES[6/*float*/])), ::STRINGS[29/*","*/]), ::g::Uno::Float::ToString(__this->M43, ::TYPES[6/*float*/])), ::STRINGS[29/*","*/]), ::g::Uno::Float::ToString(__this->M44, ::TYPES[6/*float*/])), void();
}

// public Float4x4(float m11, float m12, float m13, float m14, float m21, float m22, float m23, float m24, float m31, float m32, float m33, float m34, float m41, float m42, float m43, float m44) [instance] :42
void Float4x4::ctor_(float m11, float m12, float m13, float m14, float m21, float m22, float m23, float m24, float m31, float m32, float m33, float m34, float m41, float m42, float m43, float m44)
{
    M11 = m11;
    M12 = m12;
    M13 = m13;
    M14 = m14;
    M21 = m21;
    M22 = m22;
    M23 = m23;
    M24 = m24;
    M31 = m31;
    M32 = m32;
    M33 = m33;
    M34 = m34;
    M41 = m41;
    M42 = m42;
    M43 = m43;
    M44 = m44;
}

// public float4 get_Item(int index) [instance] :24
::g::Uno::Float4 Float4x4::Item(int index)
{
    uStackFrame __("float4x4", "get_Item(int)");

    if (index == 0)
        return ::g::Uno::Float4__New2(M11, M12, M13, M14);
    else if (index == 1)
        return ::g::Uno::Float4__New2(M21, M22, M23, M24);
    else if (index == 2)
        return ::g::Uno::Float4__New2(M31, M32, M33, M34);
    else if (index == 3)
        return ::g::Uno::Float4__New2(M41, M42, M43, M44);
    else
        U_THROW(::g::Uno::IndexOutOfRangeException::New4());
}

// public void set_Item(int index, float4 value) [instance] :32
void Float4x4::Item(int index, ::g::Uno::Float4 value)
{
    uStackFrame __("float4x4", "set_Item(int,float4)");

    if (index == 0)
    {
        M11 = value.X;
        M12 = value.Y;
        M13 = value.Z;
        M14 = value.W;
    }
    else if (index == 1)
    {
        M21 = value.X;
        M22 = value.Y;
        M23 = value.Z;
        M24 = value.W;
    }
    else if (index == 2)
    {
        M31 = value.X;
        M32 = value.Y;
        M33 = value.Z;
        M34 = value.W;
    }
    else if (index == 3)
    {
        M41 = value.X;
        M42 = value.Y;
        M43 = value.Z;
        M44 = value.W;
    }
    else
        U_THROW(::g::Uno::IndexOutOfRangeException::New4());
}

// public Float4x4 New(float m11, float m12, float m13, float m14, float m21, float m22, float m23, float m24, float m31, float m32, float m33, float m34, float m41, float m42, float m43, float m44) [static] :42
Float4x4 Float4x4__New1(float m11, float m12, float m13, float m14, float m21, float m22, float m23, float m24, float m31, float m32, float m33, float m34, float m41, float m42, float m43, float m44)
{
    Float4x4 obj1;
    obj1.ctor_(m11, m12, m13, m14, m21, m22, m23, m24, m31, m32, m33, m34, m41, m42, m43, m44);
    return obj1;
}

// public static operator +(float4x4 left, float4x4 right) [static] :92
Float4x4 Float4x4__op_Addition(Float4x4 left, Float4x4 right)
{
    Float4x4 result;
    result.M11 = (left.M11 + right.M11);
    result.M12 = (left.M12 + right.M12);
    result.M13 = (left.M13 + right.M13);
    result.M14 = (left.M14 + right.M14);
    result.M21 = (left.M21 + right.M21);
    result.M22 = (left.M22 + right.M22);
    result.M23 = (left.M23 + right.M23);
    result.M24 = (left.M24 + right.M24);
    result.M31 = (left.M31 + right.M31);
    result.M32 = (left.M32 + right.M32);
    result.M33 = (left.M33 + right.M33);
    result.M34 = (left.M34 + right.M34);
    result.M41 = (left.M41 + right.M41);
    result.M42 = (left.M42 + right.M42);
    result.M43 = (left.M43 + right.M43);
    result.M44 = (left.M44 + right.M44);
    return result;
}

// public static operator ==(float4x4 a, float4x4 b) [static] :158
bool Float4x4__op_Equality(Float4x4 a, Float4x4 b)
{
    bool ret6;
    return (::g::Uno::Generic__Equals_fn(::TYPES[7/*Uno.Generic.Equals<float4x4>*/], uCRef(a), uCRef(b), &ret6), ret6);
}

// public static operator *(float4x4 left, float right) [static] :114
Float4x4 Float4x4__op_Multiply(Float4x4 left, float right)
{
    Float4x4 result;
    result.M11 = (left.M11 * right);
    result.M12 = (left.M12 * right);
    result.M13 = (left.M13 * right);
    result.M14 = (left.M14 * right);
    result.M21 = (left.M21 * right);
    result.M22 = (left.M22 * right);
    result.M23 = (left.M23 * right);
    result.M24 = (left.M24 * right);
    result.M31 = (left.M31 * right);
    result.M32 = (left.M32 * right);
    result.M33 = (left.M33 * right);
    result.M34 = (left.M34 * right);
    result.M41 = (left.M41 * right);
    result.M42 = (left.M42 * right);
    result.M43 = (left.M43 * right);
    result.M44 = (left.M44 * right);
    return result;
}

// public static operator -(float4x4 left, float4x4 right) [static] :70
Float4x4 Float4x4__op_Subtraction(Float4x4 left, Float4x4 right)
{
    Float4x4 result;
    result.M11 = (left.M11 - right.M11);
    result.M12 = (left.M12 - right.M12);
    result.M13 = (left.M13 - right.M13);
    result.M14 = (left.M14 - right.M14);
    result.M21 = (left.M21 - right.M21);
    result.M22 = (left.M22 - right.M22);
    result.M23 = (left.M23 - right.M23);
    result.M24 = (left.M24 - right.M24);
    result.M31 = (left.M31 - right.M31);
    result.M32 = (left.M32 - right.M32);
    result.M33 = (left.M33 - right.M33);
    result.M34 = (left.M34 - right.M34);
    result.M41 = (left.M41 - right.M41);
    result.M42 = (left.M42 - right.M42);
    result.M43 = (left.M43 - right.M43);
    result.M44 = (left.M44 - right.M44);
    return result;
}

// public static float4x4 get_Identity() [static] :12
Float4x4 Float4x4__Identity()
{
    return Float4x4__New1(1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f);
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.4.3/Source/Uno/Exceptions/FormatException.uno
// -------------------------------------------------------------------------------------

// public sealed class FormatException :6
// {
static void FormatException_build(uType* type)
{
    type->SetFields(4);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)FormatException__New4_fn, 0, true, type, 1, ::g::Uno::String_typeof()));
}

::g::Uno::Exception_type* FormatException_typeof()
{
    static uSStrong< ::g::Uno::Exception_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Exception_typeof();
    options.FieldCount = 4;
    options.ObjectSize = sizeof(FormatException);
    options.TypeSize = sizeof(::g::Uno::Exception_type);
    type = (::g::Uno::Exception_type*)uClassType::New("Uno.FormatException", options);
    type->fp_build_ = FormatException_build;
    return type;
}

// public FormatException(string message) :8
void FormatException__ctor_3_fn(FormatException* __this, uString* message)
{
    __this->ctor_3(message);
}

// public FormatException New(string message) :8
void FormatException__New4_fn(uString* message, FormatException** __retval)
{
    *__retval = FormatException::New4(message);
}

// public FormatException(string message) [instance] :8
void FormatException::ctor_3(uString* message)
{
    ctor_1(message);
}

// public FormatException New(string message) [static] :8
FormatException* FormatException::New4(uString* message)
{
    FormatException* obj1 = (FormatException*)uNew(FormatException_typeof());
    obj1->ctor_3(message);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.4.3/Source/Uno/Func.uno
// ---------------------------------------------------------------

// public delegate TResult Func<TResult>() :6
uDelegateType* Func_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.Func`1", 0, 1);
    type->SetSignature(type->T(0));
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/1.4.3/Source/Uno/Func.uno
// ---------------------------------------------------------------

// public delegate TResult Func<T, TResult>(T arg) :9
uDelegateType* Func1_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.Func`2", 1, 2);
    type->SetSignature(type->T(1),
        type->T(0));
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/1.4.3/Source/Uno/Func.uno
// ---------------------------------------------------------------

// public delegate TResult Func<T1, T2, TResult>(T1 arg1, T2 arg2) :12
uDelegateType* Func2_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.Func`3", 2, 3);
    type->SetSignature(type->T(2),
        type->T(0),
        type->T(1));
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/1.4.3/Source/Uno/Func.uno
// ---------------------------------------------------------------

// public delegate TResult Func<T1, T2, T3, TResult>(T1 arg1, T2 arg2, T3 arg3) :15
uDelegateType* Func3_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.Func`4", 3, 4);
    type->SetSignature(type->T(3),
        type->T(0),
        type->T(1),
        type->T(2));
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/1.4.3/Source/Uno/Func.uno
// ---------------------------------------------------------------

// public delegate TResult Func<T1, T2, T3, T4, TResult>(T1 arg1, T2 arg2, T3 arg3, T4 arg4) :18
uDelegateType* Func4_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.Func`5", 4, 5);
    type->SetSignature(type->T(4),
        type->T(0),
        type->T(1),
        type->T(2),
        type->T(3));
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/1.4.3/Source/Uno/Func.uno
// ---------------------------------------------------------------

// public delegate TResult Func<T1, T2, T3, T4, T5, TResult>(T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5) :21
uDelegateType* Func5_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.Func`6", 5, 6);
    type->SetSignature(type->T(5),
        type->T(0),
        type->T(1),
        type->T(2),
        type->T(3),
        type->T(4));
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/1.4.3/Source/Uno/Func.uno
// ---------------------------------------------------------------

// public delegate TResult Func<T1, T2, T3, T4, T5, T6, TResult>(T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6) :24
uDelegateType* Func6_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.Func`7", 6, 7);
    type->SetSignature(type->T(6),
        type->T(0),
        type->T(1),
        type->T(2),
        type->T(3),
        type->T(4),
        type->T(5));
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/1.4.3/Source/Uno/Func.uno
// ---------------------------------------------------------------

// public delegate TResult Func<T1, T2, T3, T4, T5, T6, T7, TResult>(T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7) :27
uDelegateType* Func7_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.Func`8", 7, 8);
    type->SetSignature(type->T(7),
        type->T(0),
        type->T(1),
        type->T(2),
        type->T(3),
        type->T(4),
        type->T(5),
        type->T(6));
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/1.4.3/Source/Uno/Func.uno
// ---------------------------------------------------------------

// public delegate TResult Func<T1, T2, T3, T4, T5, T6, T7, T8, TResult>(T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7, T8 arg8) :30
uDelegateType* Func8_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.Func`9", 8, 9);
    type->SetSignature(type->T(8),
        type->T(0),
        type->T(1),
        type->T(2),
        type->T(3),
        type->T(4),
        type->T(5),
        type->T(6),
        type->T(7));
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/1.4.3/Source/Uno/Func.uno
// ---------------------------------------------------------------

// public delegate TResult Func<T1, T2, T3, T4, T5, T6, T7, T8, T9, TResult>(T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7, T8 arg8, T9 arg9) :33
uDelegateType* Func9_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.Func`10", 9, 10);
    type->SetSignature(type->T(9),
        type->T(0),
        type->T(1),
        type->T(2),
        type->T(3),
        type->T(4),
        type->T(5),
        type->T(6),
        type->T(7),
        type->T(8));
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/1.4.3/Source/Uno/Func.uno
// ---------------------------------------------------------------

// public delegate TResult Func<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, TResult>(T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7, T8 arg8, T9 arg9, T10 arg10) :36
uDelegateType* Func10_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.Func`11", 10, 11);
    type->SetSignature(type->T(10),
        type->T(0),
        type->T(1),
        type->T(2),
        type->T(3),
        type->T(4),
        type->T(5),
        type->T(6),
        type->T(7),
        type->T(8),
        type->T(9));
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/1.4.3/Source/Uno/Func.uno
// ---------------------------------------------------------------

// public delegate TResult Func<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, TResult>(T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7, T8 arg8, T9 arg9, T10 arg10, T11 arg11) :39
uDelegateType* Func11_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.Func`12", 11, 12);
    type->SetSignature(type->T(11),
        type->T(0),
        type->T(1),
        type->T(2),
        type->T(3),
        type->T(4),
        type->T(5),
        type->T(6),
        type->T(7),
        type->T(8),
        type->T(9),
        type->T(10));
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/1.4.3/Source/Uno/Func.uno
// ---------------------------------------------------------------

// public delegate TResult Func<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, TResult>(T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7, T8 arg8, T9 arg9, T10 arg10, T11 arg11, T12 arg12) :42
uDelegateType* Func12_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.Func`13", 12, 13);
    type->SetSignature(type->T(12),
        type->T(0),
        type->T(1),
        type->T(2),
        type->T(3),
        type->T(4),
        type->T(5),
        type->T(6),
        type->T(7),
        type->T(8),
        type->T(9),
        type->T(10),
        type->T(11));
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/1.4.3/Source/Uno/Func.uno
// ---------------------------------------------------------------

// public delegate TResult Func<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, TResult>(T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7, T8 arg8, T9 arg9, T10 arg10, T11 arg11, T12 arg12, T13 arg13) :45
uDelegateType* Func13_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.Func`14", 13, 14);
    type->SetSignature(type->T(13),
        type->T(0),
        type->T(1),
        type->T(2),
        type->T(3),
        type->T(4),
        type->T(5),
        type->T(6),
        type->T(7),
        type->T(8),
        type->T(9),
        type->T(10),
        type->T(11),
        type->T(12));
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/1.4.3/Source/Uno/Func.uno
// ---------------------------------------------------------------

// public delegate TResult Func<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, TResult>(T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7, T8 arg8, T9 arg9, T10 arg10, T11 arg11, T12 arg12, T13 arg13, T14 arg14) :48
uDelegateType* Func14_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.Func`15", 14, 15);
    type->SetSignature(type->T(14),
        type->T(0),
        type->T(1),
        type->T(2),
        type->T(3),
        type->T(4),
        type->T(5),
        type->T(6),
        type->T(7),
        type->T(8),
        type->T(9),
        type->T(10),
        type->T(11),
        type->T(12),
        type->T(13));
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/1.4.3/Source/Uno/Func.uno
// ---------------------------------------------------------------

// public delegate TResult Func<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, TResult>(T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7, T8 arg8, T9 arg9, T10 arg10, T11 arg11, T12 arg12, T13 arg13, T14 arg14, T15 arg15) :51
uDelegateType* Func15_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.Func`16", 15, 16);
    type->SetSignature(type->T(15),
        type->T(0),
        type->T(1),
        type->T(2),
        type->T(3),
        type->T(4),
        type->T(5),
        type->T(6),
        type->T(7),
        type->T(8),
        type->T(9),
        type->T(10),
        type->T(11),
        type->T(12),
        type->T(13),
        type->T(14));
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/1.4.3/Source/Uno/Func.uno
// ---------------------------------------------------------------

// public delegate TResult Func<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15, T16, TResult>(T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7, T8 arg8, T9 arg9, T10 arg10, T11 arg11, T12 arg12, T13 arg13, T14 arg14, T15 arg15, T16 arg16) :54
uDelegateType* Func16_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.Func`17", 16, 17);
    type->SetSignature(type->T(16),
        type->T(0),
        type->T(1),
        type->T(2),
        type->T(3),
        type->T(4),
        type->T(5),
        type->T(6),
        type->T(7),
        type->T(8),
        type->T(9),
        type->T(10),
        type->T(11),
        type->T(12),
        type->T(13),
        type->T(14),
        type->T(15));
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/1.4.3/Source/Uno/GC.uno
// -------------------------------------------------------------

// public static class GC :6
// {
static void GC_build(uType* type)
{
    type->Reflection.SetFunctions(1,
        new uFunction("SuppressFinalize", NULL, (void*)GC__SuppressFinalize_fn, 0, true, uVoid_typeof(), 1, uObject_typeof()));
}

uClassType* GC_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.GC", options);
    type->fp_build_ = GC_build;
    return type;
}

// public static void SuppressFinalize(object obj) :8
void GC__SuppressFinalize_fn(uObject* obj)
{
    GC::SuppressFinalize(obj);
}

// public static void SuppressFinalize(object obj) [static] :8
void GC::SuppressFinalize(uObject* obj)
{
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.4.3/Source/Uno/Generic.uno
// ------------------------------------------------------------------

// public static class Generic :7
// {
static void Generic_build(uType* type)
{
    type->Reflection.SetFunctions(1,
        new uFunction("Equals`1", type->MethodTypes[0], (void*)Generic__Equals_fn, 0, true, ::g::Uno::Bool_typeof(), 2, type->MethodTypes[0]->U(0), type->MethodTypes[0]->U(0)));
}

uClassType* Generic_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.MethodTypeCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Generic", options);
    type->MethodTypes[0] = type->NewMethodType(1, 0,0);
    type->fp_build_ = Generic_build;
    return type;
}

// public static bool Equals<T>(T left, T right) :9
void Generic__Equals_fn(uType* __type, void* left, void* right, bool* __retval)
{
    uType* type = __type->U(0);
    return *__retval = U_IS_OBJECT(type)
            ? (uObject*)left == (uObject*)right || (
                    (uObject*)left &&
                    (uObject*)right &&
                    ((uObject*)left)->Equals((uObject*)right))
            : memcmp(left, right, type->ValueSize) == 0, void();
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.4.3/Source/Uno/IDisposable.uno
// ----------------------------------------------------------------------

// public abstract interface IDisposable :6
// {
uInterfaceType* IDisposable_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Uno.IDisposable", 0, 0);
    type->Reflection.SetFunctions(1,
        new uFunction("Dispose", NULL, NULL, offsetof(IDisposable, fp_Dispose), false, uVoid_typeof(), 0));
    return type;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.4.3/Source/Uno/Exceptions/IndexOutOfRangeException.uno
// ----------------------------------------------------------------------------------------------

// public sealed class IndexOutOfRangeException :6
// {
static void IndexOutOfRangeException_build(uType* type)
{
    ::STRINGS[30] = uString::Const("Index out of range");
    type->SetFields(4);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)IndexOutOfRangeException__New4_fn, 0, true, type, 0));
}

::g::Uno::Exception_type* IndexOutOfRangeException_typeof()
{
    static uSStrong< ::g::Uno::Exception_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Exception_typeof();
    options.FieldCount = 4;
    options.ObjectSize = sizeof(IndexOutOfRangeException);
    options.TypeSize = sizeof(::g::Uno::Exception_type);
    type = (::g::Uno::Exception_type*)uClassType::New("Uno.IndexOutOfRangeException", options);
    type->fp_build_ = IndexOutOfRangeException_build;
    type->fp_ctor_ = (void*)IndexOutOfRangeException__New4_fn;
    return type;
}

// public IndexOutOfRangeException() :8
void IndexOutOfRangeException__ctor_3_fn(IndexOutOfRangeException* __this)
{
    __this->ctor_3();
}

// public IndexOutOfRangeException New() :8
void IndexOutOfRangeException__New4_fn(IndexOutOfRangeException** __retval)
{
    *__retval = IndexOutOfRangeException::New4();
}

// public IndexOutOfRangeException() [instance] :8
void IndexOutOfRangeException::ctor_3()
{
    ctor_1(::STRINGS[30/*"Index out o...*/]);
}

// public IndexOutOfRangeException New() [static] :8
IndexOutOfRangeException* IndexOutOfRangeException::New4()
{
    IndexOutOfRangeException* obj1 = (IndexOutOfRangeException*)uNew(IndexOutOfRangeException_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.4.3/Source/Uno/Int.uno
// --------------------------------------------------------------

// public intrinsic struct Int :15
// {
static void Int_build(uType* type)
{
    ::TYPES[3] = uObject_typeof();
    type->Reflection.SetFunctions(2,
        new uFunction("Parse", NULL, (void*)Int__Parse_fn, 0, true, type, 1, ::g::Uno::String_typeof()),
        new uFunction("TryParse", NULL, (void*)Int__TryParse_fn, 0, true, ::g::Uno::Bool_typeof(), 2, ::g::Uno::String_typeof(), type->ByRef()));
}

uStructType* Int_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.Alignment = alignof(int);
    options.ValueSize = sizeof(int);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Int", options);
    type->fp_build_ = Int_build;
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))Int__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int*))Int__GetHashCode_fn;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))Int__ToString_fn;
    return type;
}

// public override sealed bool Equals(object o) :21
void Int__Equals_fn(int* __this, uType* __type, uObject* o, bool* __retval)
{
    bool ret1;
    return *__retval = (::g::Uno::Object__Equals_fn(uBox<int>(__type, *__this, U_ALLOCA(__type->ObjectSize)), o, &ret1), ret1), void();
}

// public override sealed int GetHashCode() :27
void Int__GetHashCode_fn(int* __this, uType* __type, int* __retval)
{
    return *__retval = (int)uBase::Default::Hash(*__this), void();
}

// public static int Parse(string str) :52
void Int__Parse_fn(uString* str, int* __retval)
{
    *__retval = Int::Parse(str);
}

// public override sealed string ToString() :38
void Int__ToString_fn(int* __this, uType* __type, uString** __retval)
{
    uBase::String ansi = uBase::Default::ToString(*__this);
    return *__retval = uString::Ansi(ansi.Ptr(), ansi.Length()), void();
}

// public static bool TryParse(string str, int& res) :87
void Int__TryParse_fn(uString* str, int* res, bool* __retval)
{
    *__retval = Int::TryParse(str, res);
}

// public static int Parse(string str) [static] :52
int Int::Parse(uString* str)
{
    try
    {
        if (str == NULL)
        {
            throw uBase::ArgumentException("String");
        }
    
        uBase::String s = uBase::Unicode::Utf16To8(str->_ptr, str->_length);
        return s.ToInt();
    }
    catch (const uBase::FormatException& e)
    {
        throw uThrowable(::g::Uno::FormatException::New4(uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
    }
    catch (const uBase::ArgumentException& e)
    {
        throw uThrowable(::g::Uno::ArgumentNullException::New6(uStringFromXliString("String")), e.GetFunction(), e.GetLine());
    }
    catch (const uBase::OverflowException& e)
    {
        throw uThrowable(::g::Uno::OverflowException::New4(uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
    }
}

// public static bool TryParse(string str, int& res) [static] :87
bool Int::TryParse(uString* str, int* res)
{
    *res = 0;
    if (str == NULL)
    {
        return false;
    }
    
    uBase::String s = uBase::Unicode::Utf16To8(str->_ptr, str->_length);
    return s.TryToInt(res);
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.4.3/Source/Uno/Int2.uno
// ---------------------------------------------------------------

// public intrinsic struct Int2 :7
// {
static void Int2_build(uType* type)
{
    ::STRINGS[14] = uString::Const(", ");
    ::TYPES[3] = uObject_typeof();
    ::TYPES[8] = ::g::Uno::Int_typeof();
    type->SetFields(0,
        ::TYPES[8/*int*/], offsetof(Int2, X), 0,
        ::TYPES[8/*int*/], offsetof(Int2, Y), 0);
    type->Reflection.SetFields(2,
        new uField("X", 0),
        new uField("Y", 1));
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)Int2__New1_fn, 0, true, type, 1, ::TYPES[8/*int*/]),
        new uFunction(".ctor", NULL, (void*)Int2__New2_fn, 0, true, type, 2, ::TYPES[8/*int*/], ::TYPES[8/*int*/]));
}

uStructType* Int2_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.Alignment = alignof(Int2);
    options.ValueSize = sizeof(Int2);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Int2", options);
    type->fp_build_ = Int2_build;
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))Int2__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int*))Int2__GetHashCode_fn;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))Int2__ToString_fn;
    return type;
}

// public Int2(int xy) :28
void Int2__ctor__fn(Int2* __this, int* xy)
{
    __this->ctor_(*xy);
}

// public Int2(int x, int y) :29
void Int2__ctor_1_fn(Int2* __this, int* x, int* y)
{
    __this->ctor_1(*x, *y);
}

// public override sealed bool Equals(object o) :52
void Int2__Equals_fn(Int2* __this, uType* __type, uObject* o, bool* __retval)
{
    bool ret3;
    return *__retval = (::g::Uno::Object__Equals_fn(uBox(__type, *__this, U_ALLOCA(__type->ObjectSize)), o, &ret3), ret3), void();
}

// public override sealed int GetHashCode() :53
void Int2__GetHashCode_fn(Int2* __this, uType* __type, int* __retval)
{
    int ret4;
    return *__retval = (::g::Uno::Object__GetHashCode_fn(uBox(__type, *__this, U_ALLOCA(__type->ObjectSize)), &ret4), ret4), void();
}

// public Int2 New(int xy) :28
void Int2__New1_fn(int* xy, Int2* __retval)
{
    *__retval = Int2__New1(*xy);
}

// public Int2 New(int x, int y) :29
void Int2__New2_fn(int* x, int* y, Int2* __retval)
{
    *__retval = Int2__New2(*x, *y);
}

// public static operator +(int2 a, int2 b) :31
void Int2__op_Addition1_fn(Int2* a, Int2* b, Int2* __retval)
{
    *__retval = Int2__op_Addition1(*a, *b);
}

// public static operator /(int2 a, int2 b) :34
void Int2__op_Division1_fn(Int2* a, Int2* b, Int2* __retval)
{
    *__retval = Int2__op_Division1(*a, *b);
}

// public static explicit operator int2(float2 v) :50
void Int2__op_Explicit1_fn(::g::Uno::Float2* v, Int2* __retval)
{
    *__retval = Int2__op_Explicit1(*v);
}

// public static implicit operator int2(ushort2 v) :48
void Int2__op_Implicit3_fn(::g::Uno::UShort2* v, Int2* __retval)
{
    *__retval = Int2__op_Implicit3(*v);
}

// public static operator !=(int2 a, int2 b) :42
void Int2__op_Inequality_fn(Int2* a, Int2* b, bool* __retval)
{
    *__retval = Int2__op_Inequality(*a, *b);
}

// public static operator *(int2 a, int b) :38
void Int2__op_Multiply_fn(Int2* a, int* b, Int2* __retval)
{
    *__retval = Int2__op_Multiply(*a, *b);
}

// public static operator *(int2 a, int2 b) :33
void Int2__op_Multiply1_fn(Int2* a, Int2* b, Int2* __retval)
{
    *__retval = Int2__op_Multiply1(*a, *b);
}

// public static operator -(int2 a, int2 b) :32
void Int2__op_Subtraction1_fn(Int2* a, Int2* b, Int2* __retval)
{
    *__retval = Int2__op_Subtraction1(*a, *b);
}

// public override sealed string ToString() :54
void Int2__ToString_fn(Int2* __this, uType* __type, uString** __retval)
{
    uStackFrame __("int2", "ToString()");
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::Int::ToString(__this->X, ::TYPES[8/*int*/]), ::STRINGS[14/*", "*/]), ::g::Uno::Int::ToString(__this->Y, ::TYPES[8/*int*/])), void();
}

// public Int2(int xy) [instance] :28
void Int2::ctor_(int xy)
{
    X = (Y = xy);
}

// public Int2(int x, int y) [instance] :29
void Int2::ctor_1(int x, int y)
{
    X = x;
    Y = y;
}

// public Int2 New(int xy) [static] :28
Int2 Int2__New1(int xy)
{
    Int2 obj1;
    obj1.ctor_(xy);
    return obj1;
}

// public Int2 New(int x, int y) [static] :29
Int2 Int2__New2(int x, int y)
{
    Int2 obj2;
    obj2.ctor_1(x, y);
    return obj2;
}

// public static operator +(int2 a, int2 b) [static] :31
Int2 Int2__op_Addition1(Int2 a, Int2 b)
{
    return Int2__New2(a.X + b.X, a.Y + b.Y);
}

// public static operator /(int2 a, int2 b) [static] :34
Int2 Int2__op_Division1(Int2 a, Int2 b)
{
    return Int2__New2(a.X / b.X, a.Y / b.Y);
}

// public static explicit operator int2(float2 v) [static] :50
Int2 Int2__op_Explicit1(::g::Uno::Float2 v)
{
    return Int2__New2((int)v.X, (int)v.Y);
}

// public static implicit operator int2(ushort2 v) [static] :48
Int2 Int2__op_Implicit3(::g::Uno::UShort2 v)
{
    return Int2__New2((int)v.X, (int)v.Y);
}

// public static operator !=(int2 a, int2 b) [static] :42
bool Int2__op_Inequality(Int2 a, Int2 b)
{
    return (a.X != b.X) || (a.Y != b.Y);
}

// public static operator *(int2 a, int b) [static] :38
Int2 Int2__op_Multiply(Int2 a, int b)
{
    return Int2__New2(a.X * b, a.Y * b);
}

// public static operator *(int2 a, int2 b) [static] :33
Int2 Int2__op_Multiply1(Int2 a, Int2 b)
{
    return Int2__New2(a.X * b.X, a.Y * b.Y);
}

// public static operator -(int2 a, int2 b) [static] :32
Int2 Int2__op_Subtraction1(Int2 a, Int2 b)
{
    return Int2__New2(a.X - b.X, a.Y - b.Y);
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.4.3/Source/Uno/Int3.uno
// ---------------------------------------------------------------

// public intrinsic struct Int3 :7
// {
static void Int3_build(uType* type)
{
    ::STRINGS[14] = uString::Const(", ");
    ::TYPES[3] = uObject_typeof();
    ::TYPES[8] = ::g::Uno::Int_typeof();
    type->SetFields(0,
        ::TYPES[8/*int*/], offsetof(Int3, X), 0,
        ::TYPES[8/*int*/], offsetof(Int3, Y), 0,
        ::TYPES[8/*int*/], offsetof(Int3, Z), 0);
    type->Reflection.SetFields(3,
        new uField("X", 0),
        new uField("Y", 1),
        new uField("Z", 2));
}

uStructType* Int3_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.Alignment = alignof(Int3);
    options.ValueSize = sizeof(Int3);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Int3", options);
    type->fp_build_ = Int3_build;
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))Int3__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int*))Int3__GetHashCode_fn;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))Int3__ToString_fn;
    return type;
}

// public override sealed bool Equals(object o) :50
void Int3__Equals_fn(Int3* __this, uType* __type, uObject* o, bool* __retval)
{
    bool ret5;
    return *__retval = (::g::Uno::Object__Equals_fn(uBox(__type, *__this, U_ALLOCA(__type->ObjectSize)), o, &ret5), ret5), void();
}

// public override sealed int GetHashCode() :51
void Int3__GetHashCode_fn(Int3* __this, uType* __type, int* __retval)
{
    int ret6;
    return *__retval = (::g::Uno::Object__GetHashCode_fn(uBox(__type, *__this, U_ALLOCA(__type->ObjectSize)), &ret6), ret6), void();
}

// public override sealed string ToString() :48
void Int3__ToString_fn(Int3* __this, uType* __type, uString** __retval)
{
    uStackFrame __("int3", "ToString()");
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::Int::ToString(__this->X, ::TYPES[8/*int*/]), ::STRINGS[14/*", "*/]), ::g::Uno::Int::ToString(__this->Y, ::TYPES[8/*int*/])), ::STRINGS[14/*", "*/]), ::g::Uno::Int::ToString(__this->Z, ::TYPES[8/*int*/])), void();
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.4.3/Source/Uno/Int4.uno
// ---------------------------------------------------------------

// public intrinsic struct Int4 :7
// {
static void Int4_build(uType* type)
{
    ::STRINGS[14] = uString::Const(", ");
    ::TYPES[3] = uObject_typeof();
    ::TYPES[8] = ::g::Uno::Int_typeof();
    type->SetFields(0,
        ::TYPES[8/*int*/], offsetof(Int4, X), 0,
        ::TYPES[8/*int*/], offsetof(Int4, Y), 0,
        ::TYPES[8/*int*/], offsetof(Int4, Z), 0,
        ::TYPES[8/*int*/], offsetof(Int4, W), 0);
    type->Reflection.SetFields(4,
        new uField("W", 3),
        new uField("X", 0),
        new uField("Y", 1),
        new uField("Z", 2));
    type->Reflection.SetFunctions(4,
        new uFunction("get_Item", NULL, (void*)Int4__get_Item_fn, 0, false, ::TYPES[8/*int*/], 1, ::TYPES[8/*int*/]),
        new uFunction("set_Item", NULL, (void*)Int4__set_Item_fn, 0, false, uVoid_typeof(), 2, ::TYPES[8/*int*/], ::TYPES[8/*int*/]),
        new uFunction(".ctor", NULL, (void*)Int4__New2_fn, 0, true, type, 4, ::TYPES[8/*int*/], ::TYPES[8/*int*/], ::TYPES[8/*int*/], ::TYPES[8/*int*/]),
        new uFunction(".ctor", NULL, (void*)Int4__New7_fn, 0, true, type, 2, ::g::Uno::Int2_typeof(), ::g::Uno::Int2_typeof()));
}

uStructType* Int4_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.Alignment = alignof(Int4);
    options.ValueSize = sizeof(Int4);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Int4", options);
    type->fp_build_ = Int4_build;
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))Int4__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int*))Int4__GetHashCode_fn;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))Int4__ToString_fn;
    return type;
}

// public Int4(int x, int y, int z, int w) :32
void Int4__ctor_1_fn(Int4* __this, int* x, int* y, int* z, int* w)
{
    __this->ctor_1(*x, *y, *z, *w);
}

// public Int4(int2 xy, int2 zw) :36
void Int4__ctor_6_fn(Int4* __this, ::g::Uno::Int2* xy, ::g::Uno::Int2* zw)
{
    __this->ctor_6(*xy, *zw);
}

// public override sealed bool Equals(object o) :60
void Int4__Equals_fn(Int4* __this, uType* __type, uObject* o, bool* __retval)
{
    bool ret9;
    return *__retval = (::g::Uno::Object__Equals_fn(uBox(__type, *__this, U_ALLOCA(__type->ObjectSize)), o, &ret9), ret9), void();
}

// public override sealed int GetHashCode() :61
void Int4__GetHashCode_fn(Int4* __this, uType* __type, int* __retval)
{
    int ret10;
    return *__retval = (::g::Uno::Object__GetHashCode_fn(uBox(__type, *__this, U_ALLOCA(__type->ObjectSize)), &ret10), ret10), void();
}

// public int get_Item(int index) :14
void Int4__get_Item_fn(Int4* __this, int* index, int* __retval)
{
    *__retval = __this->Item(*index);
}

// public void set_Item(int index, int value) :22
void Int4__set_Item_fn(Int4* __this, int* index, int* value)
{
    __this->Item(*index, *value);
}

// public Int4 New(int x, int y, int z, int w) :32
void Int4__New2_fn(int* x, int* y, int* z, int* w, Int4* __retval)
{
    *__retval = Int4__New2(*x, *y, *z, *w);
}

// public Int4 New(int2 xy, int2 zw) :36
void Int4__New7_fn(::g::Uno::Int2* xy, ::g::Uno::Int2* zw, Int4* __retval)
{
    *__retval = Int4__New7(*xy, *zw);
}

// public override sealed string ToString() :62
void Int4__ToString_fn(Int4* __this, uType* __type, uString** __retval)
{
    uStackFrame __("int4", "ToString()");
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::Int::ToString(__this->X, ::TYPES[8/*int*/]), ::STRINGS[14/*", "*/]), ::g::Uno::Int::ToString(__this->Y, ::TYPES[8/*int*/])), ::STRINGS[14/*", "*/]), ::g::Uno::Int::ToString(__this->Z, ::TYPES[8/*int*/])), ::STRINGS[14/*", "*/]), ::g::Uno::Int::ToString(__this->W, ::TYPES[8/*int*/])), void();
}

// public Int4(int x, int y, int z, int w) [instance] :32
void Int4::ctor_1(int x, int y, int z, int w)
{
    X = x;
    Y = y;
    Z = z;
    W = w;
}

// public Int4(int2 xy, int2 zw) [instance] :36
void Int4::ctor_6(::g::Uno::Int2 xy, ::g::Uno::Int2 zw)
{
    X = xy.X;
    Y = xy.Y;
    Z = zw.X;
    W = zw.Y;
}

// public int get_Item(int index) [instance] :14
int Int4::Item(int index)
{
    uStackFrame __("int4", "get_Item(int)");

    if (index == 0)
        return X;
    else if (index == 1)
        return Y;
    else if (index == 2)
        return Z;
    else if (index == 3)
        return W;
    else
        U_THROW(::g::Uno::IndexOutOfRangeException::New4());
}

// public void set_Item(int index, int value) [instance] :22
void Int4::Item(int index, int value)
{
    uStackFrame __("int4", "set_Item(int,int)");

    if (index == 0)
        X = value;
    else if (index == 1)
        Y = value;
    else if (index == 2)
        Z = value;
    else if (index == 3)
        W = value;
    else
        U_THROW(::g::Uno::IndexOutOfRangeException::New4());
}

// public Int4 New(int x, int y, int z, int w) [static] :32
Int4 Int4__New2(int x, int y, int z, int w)
{
    Int4 obj1;
    obj1.ctor_1(x, y, z, w);
    return obj1;
}

// public Int4 New(int2 xy, int2 zw) [static] :36
Int4 Int4__New7(::g::Uno::Int2 xy, ::g::Uno::Int2 zw)
{
    Int4 obj5;
    obj5.ctor_6(xy, zw);
    return obj5;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.4.3/Source/Uno/IntPtr.uno
// -----------------------------------------------------------------

// public intrinsic struct IntPtr :12
// {
static void IntPtr_build(uType* type)
{
    ::TYPES[3] = uObject_typeof();
}

uStructType* IntPtr_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.Alignment = alignof(void*);
    options.ValueSize = sizeof(void*);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.IntPtr", options);
    type->fp_build_ = IntPtr_build;
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))IntPtr__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int*))IntPtr__GetHashCode_fn;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))IntPtr__ToString_fn;
    return type;
}

// public override sealed bool Equals(object o) :64
void IntPtr__Equals_fn(void** __this, uType* __type, uObject* o, bool* __retval)
{
    bool ret1;
    return *__retval = (::g::Uno::Object__Equals_fn(uBox(__type, *__this, U_ALLOCA(__type->ObjectSize)), o, &ret1), ret1), void();
}

// public override sealed int GetHashCode() :70
void IntPtr__GetHashCode_fn(void** __this, uType* __type, int* __retval)
{
    return *__retval = (int)uBase::Default::Hash(*__this), void();
}

// public static operator ==(Uno.IntPtr left, Uno.IntPtr right) :33
void IntPtr__op_Equality_fn(void** left, void** right, bool* __retval)
{
    *__retval = IntPtr::op_Equality(*left, *right);
}

// public static operator !=(Uno.IntPtr left, Uno.IntPtr right) :43
void IntPtr__op_Inequality_fn(void** left, void** right, bool* __retval)
{
    *__retval = IntPtr::op_Inequality(*left, *right);
}

// public override sealed string ToString() :85
void IntPtr__ToString_fn(void** __this, uType* __type, uString** __retval)
{
    uBase::String ansi = uBase::Default::ToString(*__this);
    return *__retval = uString::Ansi(ansi.Ptr(), ansi.Length()), void();
}

void* IntPtr::Zero_;

// public static operator ==(Uno.IntPtr left, Uno.IntPtr right) [static] :33
bool IntPtr::op_Equality(void* left, void* right)
{
    return left == right;
}

// public static operator !=(Uno.IntPtr left, Uno.IntPtr right) [static] :43
bool IntPtr::op_Inequality(void* left, void* right)
{
    return left != right;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.4.3/Source/Uno/Exceptions/InvalidCastException.uno
// ------------------------------------------------------------------------------------------

// public sealed class InvalidCastException :6
// {
static void InvalidCastException_build(uType* type)
{
    ::STRINGS[31] = uString::Const("Invalid cast");
    type->SetFields(4);
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)InvalidCastException__New4_fn, 0, true, type, 0),
        new uFunction(".ctor", NULL, (void*)InvalidCastException__New5_fn, 0, true, type, 1, ::g::Uno::String_typeof()));
}

::g::Uno::Exception_type* InvalidCastException_typeof()
{
    static uSStrong< ::g::Uno::Exception_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Exception_typeof();
    options.FieldCount = 4;
    options.ObjectSize = sizeof(InvalidCastException);
    options.TypeSize = sizeof(::g::Uno::Exception_type);
    type = (::g::Uno::Exception_type*)uClassType::New("Uno.InvalidCastException", options);
    type->fp_build_ = InvalidCastException_build;
    type->fp_ctor_ = (void*)InvalidCastException__New4_fn;
    return type;
}

// public InvalidCastException() :13
void InvalidCastException__ctor_3_fn(InvalidCastException* __this)
{
    __this->ctor_3();
}

// public InvalidCastException(string message) :8
void InvalidCastException__ctor_4_fn(InvalidCastException* __this, uString* message)
{
    __this->ctor_4(message);
}

// public InvalidCastException New() :13
void InvalidCastException__New4_fn(InvalidCastException** __retval)
{
    *__retval = InvalidCastException::New4();
}

// public InvalidCastException New(string message) :8
void InvalidCastException__New5_fn(uString* message, InvalidCastException** __retval)
{
    *__retval = InvalidCastException::New5(message);
}

// public InvalidCastException() [instance] :13
void InvalidCastException::ctor_3()
{
    ctor_4(::STRINGS[31/*"Invalid cast"*/]);
}

// public InvalidCastException(string message) [instance] :8
void InvalidCastException::ctor_4(uString* message)
{
    ctor_1(message);
}

// public InvalidCastException New() [static] :13
InvalidCastException* InvalidCastException::New4()
{
    InvalidCastException* obj2 = (InvalidCastException*)uNew(InvalidCastException_typeof());
    obj2->ctor_3();
    return obj2;
}

// public InvalidCastException New(string message) [static] :8
InvalidCastException* InvalidCastException::New5(uString* message)
{
    InvalidCastException* obj1 = (InvalidCastException*)uNew(InvalidCastException_typeof());
    obj1->ctor_4(message);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.4.3/Source/Uno/Exceptions/InvalidOperationException.uno
// -----------------------------------------------------------------------------------------------

// public sealed class InvalidOperationException :6
// {
static void InvalidOperationException_build(uType* type)
{
    ::STRINGS[32] = uString::Const("Invalid operation");
    type->SetFields(4);
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)InvalidOperationException__New4_fn, 0, true, type, 0),
        new uFunction(".ctor", NULL, (void*)InvalidOperationException__New5_fn, 0, true, type, 1, ::g::Uno::String_typeof()));
}

::g::Uno::Exception_type* InvalidOperationException_typeof()
{
    static uSStrong< ::g::Uno::Exception_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Exception_typeof();
    options.FieldCount = 4;
    options.ObjectSize = sizeof(InvalidOperationException);
    options.TypeSize = sizeof(::g::Uno::Exception_type);
    type = (::g::Uno::Exception_type*)uClassType::New("Uno.InvalidOperationException", options);
    type->fp_build_ = InvalidOperationException_build;
    type->fp_ctor_ = (void*)InvalidOperationException__New4_fn;
    return type;
}

// public InvalidOperationException() :8
void InvalidOperationException__ctor_3_fn(InvalidOperationException* __this)
{
    __this->ctor_3();
}

// public InvalidOperationException(string message) :13
void InvalidOperationException__ctor_4_fn(InvalidOperationException* __this, uString* message)
{
    __this->ctor_4(message);
}

// public InvalidOperationException New() :8
void InvalidOperationException__New4_fn(InvalidOperationException** __retval)
{
    *__retval = InvalidOperationException::New4();
}

// public InvalidOperationException New(string message) :13
void InvalidOperationException__New5_fn(uString* message, InvalidOperationException** __retval)
{
    *__retval = InvalidOperationException::New5(message);
}

// public InvalidOperationException() [instance] :8
void InvalidOperationException::ctor_3()
{
    ctor_1(::STRINGS[32/*"Invalid ope...*/]);
}

// public InvalidOperationException(string message) [instance] :13
void InvalidOperationException::ctor_4(uString* message)
{
    ctor_1(message);
}

// public InvalidOperationException New() [static] :8
InvalidOperationException* InvalidOperationException::New4()
{
    InvalidOperationException* obj1 = (InvalidOperationException*)uNew(InvalidOperationException_typeof());
    obj1->ctor_3();
    return obj1;
}

// public InvalidOperationException New(string message) [static] :13
InvalidOperationException* InvalidOperationException::New5(uString* message)
{
    InvalidOperationException* obj2 = (InvalidOperationException*)uNew(InvalidOperationException_typeof());
    obj2->ctor_4(message);
    return obj2;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.4.3/Source/Uno/Tuple.uno
// ----------------------------------------------------------------

// internal abstract interface ITuple :6
// {
uInterfaceType* ITuple_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Uno.ITuple", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.4.3/Source/Uno/Long.uno
// ---------------------------------------------------------------

// public intrinsic struct Long :15
// {
static void Long_build(uType* type)
{
    ::TYPES[3] = uObject_typeof();
    type->Reflection.SetFunctions(1,
        new uFunction("Parse", NULL, (void*)Long__Parse_fn, 0, true, type, 1, ::g::Uno::String_typeof()));
}

uStructType* Long_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.Alignment = alignof(int64_t);
    options.ValueSize = sizeof(int64_t);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Long", options);
    type->fp_build_ = Long_build;
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))Long__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int*))Long__GetHashCode_fn;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))Long__ToString_fn;
    return type;
}

// public override sealed bool Equals(object o) :21
void Long__Equals_fn(int64_t* __this, uType* __type, uObject* o, bool* __retval)
{
    bool ret1;
    return *__retval = (::g::Uno::Object__Equals_fn(uBox<int64_t>(__type, *__this, U_ALLOCA(__type->ObjectSize)), o, &ret1), ret1), void();
}

// public override sealed int GetHashCode() :27
void Long__GetHashCode_fn(int64_t* __this, uType* __type, int* __retval)
{
    return *__retval = (int)uBase::Default::Hash(*__this), void();
}

// public static long Parse(string str) :52
void Long__Parse_fn(uString* str, int64_t* __retval)
{
    *__retval = Long::Parse(str);
}

// public override sealed string ToString() :38
void Long__ToString_fn(int64_t* __this, uType* __type, uString** __retval)
{
    uBase::String ansi = uBase::Default::ToString(*__this);
    return *__retval = uString::Ansi(ansi.Ptr(), ansi.Length()), void();
}

// public static long Parse(string str) [static] :52
int64_t Long::Parse(uString* str)
{
    try
    {
        if (str == NULL)
        {
            throw uBase::ArgumentException("String");
        }
    
        uBase::String s = uBase::Unicode::Utf16To8(str->_ptr, str->_length);
        return s.ToLong();
    }
    catch (const uBase::FormatException& e)
    {
        throw uThrowable(::g::Uno::FormatException::New4(uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
    }
    catch (const uBase::ArgumentException& e)
    {
        throw uThrowable(::g::Uno::ArgumentNullException::New6(uStringFromXliString("String")), e.GetFunction(), e.GetLine());
    }
    catch (const uBase::OverflowException& e)
    {
        throw uThrowable(::g::Uno::OverflowException::New4(uStringFromXliString(e.GetMessage())), e.GetFunction(), e.GetLine());
    }
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.4.3/Source/Uno/Math.uno
// ---------------------------------------------------------------

// public static class Math :8
// {
static void Math_build(uType* type)
{
    type->Reflection.SetFunctions(82,
        new uFunction("Abs", NULL, (void*)Math__Abs_fn, 0, true, ::g::Uno::Double_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("Abs", NULL, (void*)Math__Abs1_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("Abs", NULL, (void*)Math__Abs2_fn, 0, true, ::g::Uno::Float2_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("Abs", NULL, (void*)Math__Abs5_fn, 0, true, ::g::Uno::Int_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("Acos", NULL, (void*)Math__Acos_fn, 0, true, ::g::Uno::Double_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("Acos", NULL, (void*)Math__Acos1_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("Asin", NULL, (void*)Math__Asin_fn, 0, true, ::g::Uno::Double_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("Atan", NULL, (void*)Math__Atan_fn, 0, true, ::g::Uno::Double_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("Atan2", NULL, (void*)Math__Atan21_fn, 0, true, ::g::Uno::Double_typeof(), 2, ::g::Uno::Double_typeof(), ::g::Uno::Double_typeof()),
        new uFunction("Atan2", NULL, (void*)Math__Atan22_fn, 0, true, ::g::Uno::Float_typeof(), 2, ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof()),
        new uFunction("Ceil", NULL, (void*)Math__Ceil_fn, 0, true, ::g::Uno::Double_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("Ceil", NULL, (void*)Math__Ceil1_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("Ceil", NULL, (void*)Math__Ceil2_fn, 0, true, ::g::Uno::Float2_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("Clamp", NULL, (void*)Math__Clamp_fn, 0, true, ::g::Uno::Double_typeof(), 3, ::g::Uno::Double_typeof(), ::g::Uno::Double_typeof(), ::g::Uno::Double_typeof()),
        new uFunction("Clamp", NULL, (void*)Math__Clamp1_fn, 0, true, ::g::Uno::Float_typeof(), 3, ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof()),
        new uFunction("Clamp", NULL, (void*)Math__Clamp2_fn, 0, true, ::g::Uno::Float2_typeof(), 3, ::g::Uno::Float2_typeof(), ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof()),
        new uFunction("Clamp", NULL, (void*)Math__Clamp3_fn, 0, true, ::g::Uno::Float2_typeof(), 3, ::g::Uno::Float2_typeof(), ::g::Uno::Float2_typeof(), ::g::Uno::Float2_typeof()),
        new uFunction("Clamp", NULL, (void*)Math__Clamp4_fn, 0, true, ::g::Uno::Float3_typeof(), 3, ::g::Uno::Float3_typeof(), ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof()),
        new uFunction("Clamp", NULL, (void*)Math__Clamp6_fn, 0, true, ::g::Uno::Float4_typeof(), 3, ::g::Uno::Float4_typeof(), ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof()),
        new uFunction("Clamp", NULL, (void*)Math__Clamp8_fn, 0, true, ::g::Uno::Int_typeof(), 3, ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("Cos", NULL, (void*)Math__Cos_fn, 0, true, ::g::Uno::Double_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("Cos", NULL, (void*)Math__Cos1_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("DegreesToRadians", NULL, (void*)Math__DegreesToRadians_fn, 0, true, ::g::Uno::Double_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("DegreesToRadians", NULL, (void*)Math__DegreesToRadians1_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("DegreesToRadians", NULL, (void*)Math__DegreesToRadians3_fn, 0, true, ::g::Uno::Float3_typeof(), 1, ::g::Uno::Float3_typeof()),
        new uFunction("Exp", NULL, (void*)Math__Exp_fn, 0, true, ::g::Uno::Double_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("Exp", NULL, (void*)Math__Exp1_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("Exp2", NULL, (void*)Math__Exp21_fn, 0, true, ::g::Uno::Double_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("Exp2", NULL, (void*)Math__Exp22_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("Floor", NULL, (void*)Math__Floor_fn, 0, true, ::g::Uno::Double_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("Floor", NULL, (void*)Math__Floor1_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("Floor", NULL, (void*)Math__Floor2_fn, 0, true, ::g::Uno::Float2_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("Fract", NULL, (void*)Math__Fract_fn, 0, true, ::g::Uno::Double_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("IsPow2", NULL, (void*)Math__IsPow2_fn, 0, true, ::g::Uno::Bool_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("Lerp", NULL, (void*)Math__Lerp1_fn, 0, true, ::g::Uno::Float_typeof(), 3, ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof()),
        new uFunction("Lerp", NULL, (void*)Math__Lerp2_fn, 0, true, ::g::Uno::Float2_typeof(), 3, ::g::Uno::Float2_typeof(), ::g::Uno::Float2_typeof(), ::g::Uno::Float_typeof()),
        new uFunction("Lerp", NULL, (void*)Math__Lerp4_fn, 0, true, ::g::Uno::Float3_typeof(), 3, ::g::Uno::Float3_typeof(), ::g::Uno::Float3_typeof(), ::g::Uno::Float_typeof()),
        new uFunction("Lerp", NULL, (void*)Math__Lerp6_fn, 0, true, ::g::Uno::Float4_typeof(), 3, ::g::Uno::Float4_typeof(), ::g::Uno::Float4_typeof(), ::g::Uno::Float_typeof()),
        new uFunction("Log", NULL, (void*)Math__Log_fn, 0, true, ::g::Uno::Double_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("Log", NULL, (void*)Math__Log1_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("Log2", NULL, (void*)Math__Log21_fn, 0, true, ::g::Uno::Double_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("Log2", NULL, (void*)Math__Log22_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("Max", NULL, (void*)Math__Max_fn, 0, true, ::g::Uno::Double_typeof(), 2, ::g::Uno::Double_typeof(), ::g::Uno::Double_typeof()),
        new uFunction("Max", NULL, (void*)Math__Max1_fn, 0, true, ::g::Uno::Float_typeof(), 2, ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof()),
        new uFunction("Max", NULL, (void*)Math__Max2_fn, 0, true, ::g::Uno::Float2_typeof(), 2, ::g::Uno::Float2_typeof(), ::g::Uno::Float_typeof()),
        new uFunction("Max", NULL, (void*)Math__Max3_fn, 0, true, ::g::Uno::Float2_typeof(), 2, ::g::Uno::Float2_typeof(), ::g::Uno::Float2_typeof()),
        new uFunction("Max", NULL, (void*)Math__Max4_fn, 0, true, ::g::Uno::Float3_typeof(), 2, ::g::Uno::Float3_typeof(), ::g::Uno::Float_typeof()),
        new uFunction("Max", NULL, (void*)Math__Max5_fn, 0, true, ::g::Uno::Float3_typeof(), 2, ::g::Uno::Float3_typeof(), ::g::Uno::Float3_typeof()),
        new uFunction("Max", NULL, (void*)Math__Max6_fn, 0, true, ::g::Uno::Float4_typeof(), 2, ::g::Uno::Float4_typeof(), ::g::Uno::Float_typeof()),
        new uFunction("Max", NULL, (void*)Math__Max8_fn, 0, true, ::g::Uno::Int_typeof(), 2, ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("Max", NULL, (void*)Math__Max10_fn, 0, true, ::g::Uno::Int2_typeof(), 2, ::g::Uno::Int2_typeof(), ::g::Uno::Int2_typeof()),
        new uFunction("Min", NULL, (void*)Math__Min_fn, 0, true, ::g::Uno::Double_typeof(), 2, ::g::Uno::Double_typeof(), ::g::Uno::Double_typeof()),
        new uFunction("Min", NULL, (void*)Math__Min1_fn, 0, true, ::g::Uno::Float_typeof(), 2, ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof()),
        new uFunction("Min", NULL, (void*)Math__Min2_fn, 0, true, ::g::Uno::Float2_typeof(), 2, ::g::Uno::Float2_typeof(), ::g::Uno::Float_typeof()),
        new uFunction("Min", NULL, (void*)Math__Min3_fn, 0, true, ::g::Uno::Float2_typeof(), 2, ::g::Uno::Float2_typeof(), ::g::Uno::Float2_typeof()),
        new uFunction("Min", NULL, (void*)Math__Min4_fn, 0, true, ::g::Uno::Float3_typeof(), 2, ::g::Uno::Float3_typeof(), ::g::Uno::Float_typeof()),
        new uFunction("Min", NULL, (void*)Math__Min5_fn, 0, true, ::g::Uno::Float3_typeof(), 2, ::g::Uno::Float3_typeof(), ::g::Uno::Float3_typeof()),
        new uFunction("Min", NULL, (void*)Math__Min6_fn, 0, true, ::g::Uno::Float4_typeof(), 2, ::g::Uno::Float4_typeof(), ::g::Uno::Float_typeof()),
        new uFunction("Min", NULL, (void*)Math__Min8_fn, 0, true, ::g::Uno::Int_typeof(), 2, ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("Mod", NULL, (void*)Math__Mod_fn, 0, true, ::g::Uno::Double_typeof(), 2, ::g::Uno::Double_typeof(), ::g::Uno::Double_typeof()),
        new uFunction("Mod", NULL, (void*)Math__Mod1_fn, 0, true, ::g::Uno::Float_typeof(), 2, ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof()),
        new uFunction("NextPow2", NULL, (void*)Math__NextPow2_fn, 0, true, ::g::Uno::Int_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("Pow", NULL, (void*)Math__Pow_fn, 0, true, ::g::Uno::Double_typeof(), 2, ::g::Uno::Double_typeof(), ::g::Uno::Double_typeof()),
        new uFunction("Pow", NULL, (void*)Math__Pow1_fn, 0, true, ::g::Uno::Float_typeof(), 2, ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof()),
        new uFunction("RadiansToDegrees", NULL, (void*)Math__RadiansToDegrees_fn, 0, true, ::g::Uno::Double_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("RadiansToDegrees", NULL, (void*)Math__RadiansToDegrees1_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("RadiansToDegrees", NULL, (void*)Math__RadiansToDegrees3_fn, 0, true, ::g::Uno::Float3_typeof(), 1, ::g::Uno::Float3_typeof()),
        new uFunction("Round", NULL, (void*)Math__Round_fn, 0, true, ::g::Uno::Double_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("Round", NULL, (void*)Math__Round1_fn, 0, true, ::g::Uno::Double_typeof(), 2, ::g::Uno::Double_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("Round", NULL, (void*)Math__Round2_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("Round", NULL, (void*)Math__Round4_fn, 0, true, ::g::Uno::Float2_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("Saturate", NULL, (void*)Math__Saturate1_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("Sign", NULL, (void*)Math__Sign_fn, 0, true, ::g::Uno::Double_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("Sign", NULL, (void*)Math__Sign1_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("Sin", NULL, (void*)Math__Sin_fn, 0, true, ::g::Uno::Double_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("Sin", NULL, (void*)Math__Sin1_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("Sqrt", NULL, (void*)Math__Sqrt_fn, 0, true, ::g::Uno::Double_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("Sqrt", NULL, (void*)Math__Sqrt1_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("Sqrt", NULL, (void*)Math__Sqrt2_fn, 0, true, ::g::Uno::Float2_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("Sqrt", NULL, (void*)Math__Sqrt4_fn, 0, true, ::g::Uno::Float4_typeof(), 1, ::g::Uno::Float4_typeof()),
        new uFunction("Tan", NULL, (void*)Math__Tan_fn, 0, true, ::g::Uno::Double_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("Tan", NULL, (void*)Math__Tan1_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float_typeof()));
}

uClassType* Math_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Math", options);
    type->fp_build_ = Math_build;
    return type;
}

// public static double Abs(double x) :241
void Math__Abs_fn(double* x, double* __retval)
{
    *__retval = Math::Abs(*x);
}

// public static float Abs(float x) :242
void Math__Abs1_fn(float* x, float* __retval)
{
    *__retval = Math::Abs1(*x);
}

// public static float2 Abs(float2 a) :243
void Math__Abs2_fn(::g::Uno::Float2* a, ::g::Uno::Float2* __retval)
{
    *__retval = Math::Abs2(*a);
}

// public static int Abs(int x) :246
void Math__Abs5_fn(int* x, int* __retval)
{
    *__retval = Math::Abs5(*x);
}

// public static double Acos(double radians) :104
void Math__Acos_fn(double* radians, double* __retval)
{
    *__retval = Math::Acos(*radians);
}

// public static float Acos(float radians) :111
void Math__Acos1_fn(float* radians, float* __retval)
{
    *__retval = Math::Acos1(*radians);
}

// public static double Asin(double radians) :86
void Math__Asin_fn(double* radians, double* __retval)
{
    *__retval = Math::Asin(*radians);
}

// public static double Atan(double radians) :122
void Math__Atan_fn(double* radians, double* __retval)
{
    *__retval = Math::Atan(*radians);
}

// public static double Atan2(double y, double x) :140
void Math__Atan21_fn(double* y, double* x, double* __retval)
{
    *__retval = Math::Atan21(*y, *x);
}

// public static float Atan2(float y, float x) :147
void Math__Atan22_fn(float* y, float* x, float* __retval)
{
    *__retval = Math::Atan22(*y, *x);
}

// public static double Ceil(double x) :280
void Math__Ceil_fn(double* x, double* __retval)
{
    *__retval = Math::Ceil(*x);
}

// public static float Ceil(float x) :287
void Math__Ceil1_fn(float* x, float* __retval)
{
    *__retval = Math::Ceil1(*x);
}

// public static float2 Ceil(float2 v) :293
void Math__Ceil2_fn(::g::Uno::Float2* v, ::g::Uno::Float2* __retval)
{
    *__retval = Math::Ceil2(*v);
}

// public static double Clamp(double x, double minimum, double maximum) :344
void Math__Clamp_fn(double* x, double* minimum, double* maximum, double* __retval)
{
    *__retval = Math::Clamp(*x, *minimum, *maximum);
}

// public static float Clamp(float x, float minimum, float maximum) :345
void Math__Clamp1_fn(float* x, float* minimum, float* maximum, float* __retval)
{
    *__retval = Math::Clamp1(*x, *minimum, *maximum);
}

// public static float2 Clamp(float2 x, float minimum, float maximum) :346
void Math__Clamp2_fn(::g::Uno::Float2* x, float* minimum, float* maximum, ::g::Uno::Float2* __retval)
{
    *__retval = Math::Clamp2(*x, *minimum, *maximum);
}

// public static float2 Clamp(float2 x, float2 minimum, float2 maximum) :347
void Math__Clamp3_fn(::g::Uno::Float2* x, ::g::Uno::Float2* minimum, ::g::Uno::Float2* maximum, ::g::Uno::Float2* __retval)
{
    *__retval = Math::Clamp3(*x, *minimum, *maximum);
}

// public static float3 Clamp(float3 x, float minimum, float maximum) :348
void Math__Clamp4_fn(::g::Uno::Float3* x, float* minimum, float* maximum, ::g::Uno::Float3* __retval)
{
    *__retval = Math::Clamp4(*x, *minimum, *maximum);
}

// public static float4 Clamp(float4 x, float minimum, float maximum) :350
void Math__Clamp6_fn(::g::Uno::Float4* x, float* minimum, float* maximum, ::g::Uno::Float4* __retval)
{
    *__retval = Math::Clamp6(*x, *minimum, *maximum);
}

// public static int Clamp(int x, int minimum, int maximum) :352
void Math__Clamp8_fn(int* x, int* minimum, int* maximum, int* __retval)
{
    *__retval = Math::Clamp8(*x, *minimum, *maximum);
}

// public static double Cos(double radians) :50
void Math__Cos_fn(double* radians, double* __retval)
{
    *__retval = Math::Cos(*radians);
}

// public static float Cos(float radians) :57
void Math__Cos1_fn(float* radians, float* __retval)
{
    *__retval = Math::Cos1(*radians);
}

// public static double DegreesToRadians(double degrees) :19
void Math__DegreesToRadians_fn(double* degrees, double* __retval)
{
    *__retval = Math::DegreesToRadians(*degrees);
}

// public static float DegreesToRadians(float degrees) :20
void Math__DegreesToRadians1_fn(float* degrees, float* __retval)
{
    *__retval = Math::DegreesToRadians1(*degrees);
}

// public static float3 DegreesToRadians(float3 degrees) :22
void Math__DegreesToRadians3_fn(::g::Uno::Float3* degrees, ::g::Uno::Float3* __retval)
{
    *__retval = Math::DegreesToRadians3(*degrees);
}

// public static double Exp(double x) :178
void Math__Exp_fn(double* x, double* __retval)
{
    *__retval = Math::Exp(*x);
}

// public static float Exp(float x) :179
void Math__Exp1_fn(float* x, float* __retval)
{
    *__retval = Math::Exp1(*x);
}

// public static double Exp2(double x) :202
void Math__Exp21_fn(double* x, double* __retval)
{
    *__retval = Math::Exp21(*x);
}

// public static float Exp2(float x) :203
void Math__Exp22_fn(float* x, float* __retval)
{
    *__retval = Math::Exp22(*x);
}

// public static double Floor(double x) :262
void Math__Floor_fn(double* x, double* __retval)
{
    *__retval = Math::Floor(*x);
}

// public static float Floor(float x) :269
void Math__Floor1_fn(float* x, float* __retval)
{
    *__retval = Math::Floor1(*x);
}

// public static float2 Floor(float2 v) :275
void Math__Floor2_fn(::g::Uno::Float2* v, ::g::Uno::Float2* __retval)
{
    *__retval = Math::Floor2(*v);
}

// public static double Fract(double x) :297
void Math__Fract_fn(double* x, double* __retval)
{
    *__retval = Math::Fract(*x);
}

// public static bool IsPow2(int x) :498
void Math__IsPow2_fn(int* x, bool* __retval)
{
    *__retval = Math::IsPow2(*x);
}

// public static float Lerp(float a, float b, float t) :361
void Math__Lerp1_fn(float* a, float* b, float* t, float* __retval)
{
    *__retval = Math::Lerp1(*a, *b, *t);
}

// public static float2 Lerp(float2 a, float2 b, float t) :362
void Math__Lerp2_fn(::g::Uno::Float2* a, ::g::Uno::Float2* b, float* t, ::g::Uno::Float2* __retval)
{
    *__retval = Math::Lerp2(*a, *b, *t);
}

// public static float3 Lerp(float3 a, float3 b, float t) :364
void Math__Lerp4_fn(::g::Uno::Float3* a, ::g::Uno::Float3* b, float* t, ::g::Uno::Float3* __retval)
{
    *__retval = Math::Lerp4(*a, *b, *t);
}

// public static float4 Lerp(float4 a, float4 b, float t) :366
void Math__Lerp6_fn(::g::Uno::Float4* a, ::g::Uno::Float4* b, float* t, ::g::Uno::Float4* __retval)
{
    *__retval = Math::Lerp6(*a, *b, *t);
}

// public static double Log(double x) :185
void Math__Log_fn(double* x, double* __retval)
{
    *__retval = Math::Log(*x);
}

// public static float Log(float x) :192
void Math__Log1_fn(float* x, float* __retval)
{
    *__retval = Math::Log1(*x);
}

// public static double Log2(double x) :208
void Math__Log21_fn(double* x, double* __retval)
{
    *__retval = Math::Log21(*x);
}

// public static float Log2(float x) :209
void Math__Log22_fn(float* x, float* __retval)
{
    *__retval = Math::Log22(*x);
}

// public static double Max(double a, double b) :312
void Math__Max_fn(double* a, double* b, double* __retval)
{
    *__retval = Math::Max(*a, *b);
}

// public static float Max(float a, float b) :313
void Math__Max1_fn(float* a, float* b, float* __retval)
{
    *__retval = Math::Max1(*a, *b);
}

// public static float2 Max(float2 a, float b) :314
void Math__Max2_fn(::g::Uno::Float2* a, float* b, ::g::Uno::Float2* __retval)
{
    *__retval = Math::Max2(*a, *b);
}

// public static float2 Max(float2 a, float2 b) :315
void Math__Max3_fn(::g::Uno::Float2* a, ::g::Uno::Float2* b, ::g::Uno::Float2* __retval)
{
    *__retval = Math::Max3(*a, *b);
}

// public static float3 Max(float3 a, float b) :316
void Math__Max4_fn(::g::Uno::Float3* a, float* b, ::g::Uno::Float3* __retval)
{
    *__retval = Math::Max4(*a, *b);
}

// public static float3 Max(float3 a, float3 b) :317
void Math__Max5_fn(::g::Uno::Float3* a, ::g::Uno::Float3* b, ::g::Uno::Float3* __retval)
{
    *__retval = Math::Max5(*a, *b);
}

// public static float4 Max(float4 a, float b) :318
void Math__Max6_fn(::g::Uno::Float4* a, float* b, ::g::Uno::Float4* __retval)
{
    *__retval = Math::Max6(*a, *b);
}

// public static int Max(int a, int b) :320
void Math__Max8_fn(int* a, int* b, int* __retval)
{
    *__retval = Math::Max8(*a, *b);
}

// public static int2 Max(int2 a, int2 b) :322
void Math__Max10_fn(::g::Uno::Int2* a, ::g::Uno::Int2* b, ::g::Uno::Int2* __retval)
{
    *__retval = Math::Max10(*a, *b);
}

// public static double Min(double a, double b) :328
void Math__Min_fn(double* a, double* b, double* __retval)
{
    *__retval = Math::Min(*a, *b);
}

// public static float Min(float a, float b) :329
void Math__Min1_fn(float* a, float* b, float* __retval)
{
    *__retval = Math::Min1(*a, *b);
}

// public static float2 Min(float2 a, float b) :330
void Math__Min2_fn(::g::Uno::Float2* a, float* b, ::g::Uno::Float2* __retval)
{
    *__retval = Math::Min2(*a, *b);
}

// public static float2 Min(float2 a, float2 b) :331
void Math__Min3_fn(::g::Uno::Float2* a, ::g::Uno::Float2* b, ::g::Uno::Float2* __retval)
{
    *__retval = Math::Min3(*a, *b);
}

// public static float3 Min(float3 a, float b) :332
void Math__Min4_fn(::g::Uno::Float3* a, float* b, ::g::Uno::Float3* __retval)
{
    *__retval = Math::Min4(*a, *b);
}

// public static float3 Min(float3 a, float3 b) :333
void Math__Min5_fn(::g::Uno::Float3* a, ::g::Uno::Float3* b, ::g::Uno::Float3* __retval)
{
    *__retval = Math::Min5(*a, *b);
}

// public static float4 Min(float4 a, float b) :334
void Math__Min6_fn(::g::Uno::Float4* a, float* b, ::g::Uno::Float4* __retval)
{
    *__retval = Math::Min6(*a, *b);
}

// public static int Min(int a, int b) :336
void Math__Min8_fn(int* a, int* b, int* __retval)
{
    *__retval = Math::Min8(*a, *b);
}

// public static double Mod(double x, double y) :303
void Math__Mod_fn(double* x, double* y, double* __retval)
{
    *__retval = Math::Mod(*x, *y);
}

// public static float Mod(float x, float y) :304
void Math__Mod1_fn(float* x, float* y, float* __retval)
{
    *__retval = Math::Mod1(*x, *y);
}

// public static int NextPow2(int x) :487
void Math__NextPow2_fn(int* x, int* __retval)
{
    *__retval = Math::NextPow2(*x);
}

// public static double Pow(double x, double y) :161
void Math__Pow_fn(double* x, double* y, double* __retval)
{
    *__retval = Math::Pow(*x, *y);
}

// public static float Pow(float x, float y) :168
void Math__Pow1_fn(float* x, float* y, float* __retval)
{
    *__retval = Math::Pow1(*x, *y);
}

// public static double RadiansToDegrees(double radians) :25
void Math__RadiansToDegrees_fn(double* radians, double* __retval)
{
    *__retval = Math::RadiansToDegrees(*radians);
}

// public static float RadiansToDegrees(float radians) :26
void Math__RadiansToDegrees1_fn(float* radians, float* __retval)
{
    *__retval = Math::RadiansToDegrees1(*radians);
}

// public static float3 RadiansToDegrees(float3 radians) :28
void Math__RadiansToDegrees3_fn(::g::Uno::Float3* radians, ::g::Uno::Float3* __retval)
{
    *__retval = Math::RadiansToDegrees3(*radians);
}

// public static double Round(double x) :426
void Math__Round_fn(double* x, double* __retval)
{
    *__retval = Math::Round(*x);
}

// public static double Round(double d, int decimals) :437
void Math__Round1_fn(double* d, int* decimals, double* __retval)
{
    *__retval = Math::Round1(*d, *decimals);
}

// public static float Round(float x) :427
void Math__Round2_fn(float* x, float* __retval)
{
    *__retval = Math::Round2(*x);
}

// public static float2 Round(float2 x) :428
void Math__Round4_fn(::g::Uno::Float2* x, ::g::Uno::Float2* __retval)
{
    *__retval = Math::Round4(*x);
}

// public static float Saturate(float x) :421
void Math__Saturate1_fn(float* x, float* __retval)
{
    *__retval = Math::Saturate1(*x);
}

// public static double Sign(double x) :251
void Math__Sign_fn(double* x, double* __retval)
{
    *__retval = Math::Sign(*x);
}

// public static float Sign(float x) :252
void Math__Sign1_fn(float* x, float* __retval)
{
    *__retval = Math::Sign1(*x);
}

// public static double Sin(double radians) :32
void Math__Sin_fn(double* radians, double* __retval)
{
    *__retval = Math::Sin(*radians);
}

// public static float Sin(float radians) :39
void Math__Sin1_fn(float* radians, float* __retval)
{
    *__retval = Math::Sin1(*radians);
}

// public static double Sqrt(double x) :215
void Math__Sqrt_fn(double* x, double* __retval)
{
    *__retval = Math::Sqrt(*x);
}

// public static float Sqrt(float x) :222
void Math__Sqrt1_fn(float* x, float* __retval)
{
    *__retval = Math::Sqrt1(*x);
}

// public static float2 Sqrt(float2 x) :228
void Math__Sqrt2_fn(::g::Uno::Float2* x, ::g::Uno::Float2* __retval)
{
    *__retval = Math::Sqrt2(*x);
}

// public static float4 Sqrt(float4 x) :230
void Math__Sqrt4_fn(::g::Uno::Float4* x, ::g::Uno::Float4* __retval)
{
    *__retval = Math::Sqrt4(*x);
}

// public static double Tan(double radians) :68
void Math__Tan_fn(double* radians, double* __retval)
{
    *__retval = Math::Tan(*radians);
}

// public static float Tan(float radians) :75
void Math__Tan1_fn(float* radians, float* __retval)
{
    *__retval = Math::Tan1(*radians);
}

// public static double Abs(double x) [static] :241
double Math::Abs(double x)
{
    return (x >= 0.0) ? x : -x;
}

// public static float Abs(float x) [static] :242
float Math::Abs1(float x)
{
    return (x >= 0.0f) ? x : -x;
}

// public static float2 Abs(float2 a) [static] :243
::g::Uno::Float2 Math::Abs2(::g::Uno::Float2 a)
{
    return ::g::Uno::Float2__New2(Math::Abs1(a.X), Math::Abs1(a.Y));
}

// public static int Abs(int x) [static] :246
int Math::Abs5(int x)
{
    return (x >= 0) ? x : -x;
}

// public static double Acos(double radians) [static] :104
double Math::Acos(double radians)
{
    return acos(radians);
}

// public static float Acos(float radians) [static] :111
float Math::Acos1(float radians)
{
    return acosf(radians);
}

// public static double Asin(double radians) [static] :86
double Math::Asin(double radians)
{
    return asin(radians);
}

// public static double Atan(double radians) [static] :122
double Math::Atan(double radians)
{
    return atan(radians);
}

// public static double Atan2(double y, double x) [static] :140
double Math::Atan21(double y, double x)
{
    return atan2(y, x);
}

// public static float Atan2(float y, float x) [static] :147
float Math::Atan22(float y, float x)
{
    return atan2f(y, x);
}

// public static double Ceil(double x) [static] :280
double Math::Ceil(double x)
{
    return ceil(x);
}

// public static float Ceil(float x) [static] :287
float Math::Ceil1(float x)
{
    return ceilf(x);
}

// public static float2 Ceil(float2 v) [static] :293
::g::Uno::Float2 Math::Ceil2(::g::Uno::Float2 v)
{
    return ::g::Uno::Float2__New2(Math::Ceil1(v.X), Math::Ceil1(v.Y));
}

// public static double Clamp(double x, double minimum, double maximum) [static] :344
double Math::Clamp(double x, double minimum, double maximum)
{
    return Math::Max(Math::Min(x, maximum), minimum);
}

// public static float Clamp(float x, float minimum, float maximum) [static] :345
float Math::Clamp1(float x, float minimum, float maximum)
{
    return Math::Max1(Math::Min1(x, maximum), minimum);
}

// public static float2 Clamp(float2 x, float minimum, float maximum) [static] :346
::g::Uno::Float2 Math::Clamp2(::g::Uno::Float2 x, float minimum, float maximum)
{
    return Math::Max2(Math::Min2(x, maximum), minimum);
}

// public static float2 Clamp(float2 x, float2 minimum, float2 maximum) [static] :347
::g::Uno::Float2 Math::Clamp3(::g::Uno::Float2 x, ::g::Uno::Float2 minimum, ::g::Uno::Float2 maximum)
{
    return Math::Max3(Math::Min3(x, maximum), minimum);
}

// public static float3 Clamp(float3 x, float minimum, float maximum) [static] :348
::g::Uno::Float3 Math::Clamp4(::g::Uno::Float3 x, float minimum, float maximum)
{
    return Math::Max4(Math::Min4(x, maximum), minimum);
}

// public static float4 Clamp(float4 x, float minimum, float maximum) [static] :350
::g::Uno::Float4 Math::Clamp6(::g::Uno::Float4 x, float minimum, float maximum)
{
    return Math::Max6(Math::Min6(x, maximum), minimum);
}

// public static int Clamp(int x, int minimum, int maximum) [static] :352
int Math::Clamp8(int x, int minimum, int maximum)
{
    return Math::Max8(Math::Min8(x, maximum), minimum);
}

// public static double Cos(double radians) [static] :50
double Math::Cos(double radians)
{
    return cos(radians);
}

// public static float Cos(float radians) [static] :57
float Math::Cos1(float radians)
{
    return cosf(radians);
}

// public static double DegreesToRadians(double degrees) [static] :19
double Math::DegreesToRadians(double degrees)
{
    return degrees * 0.017453292519943295;
}

// public static float DegreesToRadians(float degrees) [static] :20
float Math::DegreesToRadians1(float degrees)
{
    return degrees * 0.0174532924f;
}

// public static float3 DegreesToRadians(float3 degrees) [static] :22
::g::Uno::Float3 Math::DegreesToRadians3(::g::Uno::Float3 degrees)
{
    return ::g::Uno::Float3__op_Multiply1(degrees, 0.0174532924f);
}

// public static double Exp(double x) [static] :178
double Math::Exp(double x)
{
    return Math::Pow(2.7182818284590451, x);
}

// public static float Exp(float x) [static] :179
float Math::Exp1(float x)
{
    return Math::Pow1(2.71828175f, x);
}

// public static double Exp2(double x) [static] :202
double Math::Exp21(double x)
{
    return Math::Pow(2.0, x);
}

// public static float Exp2(float x) [static] :203
float Math::Exp22(float x)
{
    return Math::Pow1(2.0f, x);
}

// public static double Floor(double x) [static] :262
double Math::Floor(double x)
{
    return floor(x);
}

// public static float Floor(float x) [static] :269
float Math::Floor1(float x)
{
    return floorf(x);
}

// public static float2 Floor(float2 v) [static] :275
::g::Uno::Float2 Math::Floor2(::g::Uno::Float2 v)
{
    return ::g::Uno::Float2__New2(Math::Floor1(v.X), Math::Floor1(v.Y));
}

// public static double Fract(double x) [static] :297
double Math::Fract(double x)
{
    return x - Math::Floor(x);
}

// public static bool IsPow2(int x) [static] :498
bool Math::IsPow2(int x)
{
    return x == (x & -x);
}

// public static float Lerp(float a, float b, float t) [static] :361
float Math::Lerp1(float a, float b, float t)
{
    return a + ((b - a) * t);
}

// public static float2 Lerp(float2 a, float2 b, float t) [static] :362
::g::Uno::Float2 Math::Lerp2(::g::Uno::Float2 a, ::g::Uno::Float2 b, float t)
{
    return ::g::Uno::Float2__op_Addition2(a, ::g::Uno::Float2__op_Multiply1(::g::Uno::Float2__op_Subtraction2(b, a), t));
}

// public static float3 Lerp(float3 a, float3 b, float t) [static] :364
::g::Uno::Float3 Math::Lerp4(::g::Uno::Float3 a, ::g::Uno::Float3 b, float t)
{
    return ::g::Uno::Float3__op_Addition2(a, ::g::Uno::Float3__op_Multiply1(::g::Uno::Float3__op_Subtraction2(b, a), t));
}

// public static float4 Lerp(float4 a, float4 b, float t) [static] :366
::g::Uno::Float4 Math::Lerp6(::g::Uno::Float4 a, ::g::Uno::Float4 b, float t)
{
    return ::g::Uno::Float4__op_Addition2(a, ::g::Uno::Float4__op_Multiply1(::g::Uno::Float4__op_Subtraction2(b, a), t));
}

// public static double Log(double x) [static] :185
double Math::Log(double x)
{
    return log(x);
}

// public static float Log(float x) [static] :192
float Math::Log1(float x)
{
    return logf(x);
}

// public static double Log2(double x) [static] :208
double Math::Log21(double x)
{
    return Math::Log(x) / Math::Log(2.0);
}

// public static float Log2(float x) [static] :209
float Math::Log22(float x)
{
    return Math::Log1(x) / Math::Log1(2.0f);
}

// public static double Max(double a, double b) [static] :312
double Math::Max(double a, double b)
{
    return (a > b) ? a : b;
}

// public static float Max(float a, float b) [static] :313
float Math::Max1(float a, float b)
{
    return (a > b) ? a : b;
}

// public static float2 Max(float2 a, float b) [static] :314
::g::Uno::Float2 Math::Max2(::g::Uno::Float2 a, float b)
{
    return ::g::Uno::Float2__New2(Math::Max1(a.X, b), Math::Max1(a.Y, b));
}

// public static float2 Max(float2 a, float2 b) [static] :315
::g::Uno::Float2 Math::Max3(::g::Uno::Float2 a, ::g::Uno::Float2 b)
{
    return ::g::Uno::Float2__New2(Math::Max1(a.X, b.X), Math::Max1(a.Y, b.Y));
}

// public static float3 Max(float3 a, float b) [static] :316
::g::Uno::Float3 Math::Max4(::g::Uno::Float3 a, float b)
{
    return ::g::Uno::Float3__New2(Math::Max1(a.X, b), Math::Max1(a.Y, b), Math::Max1(a.Z, b));
}

// public static float3 Max(float3 a, float3 b) [static] :317
::g::Uno::Float3 Math::Max5(::g::Uno::Float3 a, ::g::Uno::Float3 b)
{
    return ::g::Uno::Float3__New2(Math::Max1(a.X, b.X), Math::Max1(a.Y, b.Y), Math::Max1(a.Z, b.Z));
}

// public static float4 Max(float4 a, float b) [static] :318
::g::Uno::Float4 Math::Max6(::g::Uno::Float4 a, float b)
{
    return ::g::Uno::Float4__New2(Math::Max1(a.X, b), Math::Max1(a.Y, b), Math::Max1(a.Z, b), Math::Max1(a.W, b));
}

// public static int Max(int a, int b) [static] :320
int Math::Max8(int a, int b)
{
    return (a > b) ? a : b;
}

// public static int2 Max(int2 a, int2 b) [static] :322
::g::Uno::Int2 Math::Max10(::g::Uno::Int2 a, ::g::Uno::Int2 b)
{
    return ::g::Uno::Int2__New2(Math::Max8(a.X, b.X), Math::Max8(a.Y, b.Y));
}

// public static double Min(double a, double b) [static] :328
double Math::Min(double a, double b)
{
    return (a < b) ? a : b;
}

// public static float Min(float a, float b) [static] :329
float Math::Min1(float a, float b)
{
    return (a < b) ? a : b;
}

// public static float2 Min(float2 a, float b) [static] :330
::g::Uno::Float2 Math::Min2(::g::Uno::Float2 a, float b)
{
    return ::g::Uno::Float2__New2(Math::Min1(a.X, b), Math::Min1(a.Y, b));
}

// public static float2 Min(float2 a, float2 b) [static] :331
::g::Uno::Float2 Math::Min3(::g::Uno::Float2 a, ::g::Uno::Float2 b)
{
    return ::g::Uno::Float2__New2(Math::Min1(a.X, b.X), Math::Min1(a.Y, b.Y));
}

// public static float3 Min(float3 a, float b) [static] :332
::g::Uno::Float3 Math::Min4(::g::Uno::Float3 a, float b)
{
    return ::g::Uno::Float3__New2(Math::Min1(a.X, b), Math::Min1(a.Y, b), Math::Min1(a.Z, b));
}

// public static float3 Min(float3 a, float3 b) [static] :333
::g::Uno::Float3 Math::Min5(::g::Uno::Float3 a, ::g::Uno::Float3 b)
{
    return ::g::Uno::Float3__New2(Math::Min1(a.X, b.X), Math::Min1(a.Y, b.Y), Math::Min1(a.Z, b.Z));
}

// public static float4 Min(float4 a, float b) [static] :334
::g::Uno::Float4 Math::Min6(::g::Uno::Float4 a, float b)
{
    return ::g::Uno::Float4__New2(Math::Min1(a.X, b), Math::Min1(a.Y, b), Math::Min1(a.Z, b), Math::Min1(a.W, b));
}

// public static int Min(int a, int b) [static] :336
int Math::Min8(int a, int b)
{
    return (a < b) ? a : b;
}

// public static double Mod(double x, double y) [static] :303
double Math::Mod(double x, double y)
{
    return x - (y * Math::Floor(x / y));
}

// public static float Mod(float x, float y) [static] :304
float Math::Mod1(float x, float y)
{
    return x - (y * Math::Floor1(x / y));
}

// public static int NextPow2(int x) [static] :487
int Math::NextPow2(int x)
{
    int y = x - 1;
    y = y | (y >> 1);
    y = y | (y >> 2);
    y = y | (y >> 4);
    y = y | (y >> 8);
    y = y | (y >> 16);
    return y + 1;
}

// public static double Pow(double x, double y) [static] :161
double Math::Pow(double x, double y)
{
    return pow(x, y);
}

// public static float Pow(float x, float y) [static] :168
float Math::Pow1(float x, float y)
{
    return powf(x, y);
}

// public static double RadiansToDegrees(double radians) [static] :25
double Math::RadiansToDegrees(double radians)
{
    return radians * 57.295779513082323;
}

// public static float RadiansToDegrees(float radians) [static] :26
float Math::RadiansToDegrees1(float radians)
{
    return radians * 57.2957764f;
}

// public static float3 RadiansToDegrees(float3 radians) [static] :28
::g::Uno::Float3 Math::RadiansToDegrees3(::g::Uno::Float3 radians)
{
    return ::g::Uno::Float3__op_Multiply1(radians, 57.2957764f);
}

// public static double Round(double x) [static] :426
double Math::Round(double x)
{
    return Math::Floor(x + 0.5);
}

// public static double Round(double d, int decimals) [static] :437
double Math::Round1(double d, int decimals)
{
    int64_t multiplier = (int64_t)Math::Pow1(10.0f, (float)decimals);
    int64_t intPart = (int64_t)d;
    double decimalPart = Math::Round((d - (double)intPart) * (double)multiplier) / (double)multiplier;
    return (double)intPart + decimalPart;
}

// public static float Round(float x) [static] :427
float Math::Round2(float x)
{
    return Math::Floor1(x + 0.5f);
}

// public static float2 Round(float2 x) [static] :428
::g::Uno::Float2 Math::Round4(::g::Uno::Float2 x)
{
    return Math::Floor2(::g::Uno::Float2__op_Addition1(x, 0.5f));
}

// public static float Saturate(float x) [static] :421
float Math::Saturate1(float x)
{
    return Math::Clamp1(x, 0.0f, 1.0f);
}

// public static double Sign(double x) [static] :251
double Math::Sign(double x)
{
    return (x < 0.0) ? -1.0 : (x > 0.0) ? 1.0 : 0.0;
}

// public static float Sign(float x) [static] :252
float Math::Sign1(float x)
{
    return (x < 0.0f) ? -1.0f : (x > 0.0f) ? 1.0f : 0.0f;
}

// public static double Sin(double radians) [static] :32
double Math::Sin(double radians)
{
    return sin(radians);
}

// public static float Sin(float radians) [static] :39
float Math::Sin1(float radians)
{
    return sinf(radians);
}

// public static double Sqrt(double x) [static] :215
double Math::Sqrt(double x)
{
    return sqrt(x);
}

// public static float Sqrt(float x) [static] :222
float Math::Sqrt1(float x)
{
    return sqrtf(x);
}

// public static float2 Sqrt(float2 x) [static] :228
::g::Uno::Float2 Math::Sqrt2(::g::Uno::Float2 x)
{
    return ::g::Uno::Float2__New2(Math::Sqrt1(x.X), Math::Sqrt1(x.Y));
}

// public static float4 Sqrt(float4 x) [static] :230
::g::Uno::Float4 Math::Sqrt4(::g::Uno::Float4 x)
{
    return ::g::Uno::Float4__New2(Math::Sqrt1(x.X), Math::Sqrt1(x.Y), Math::Sqrt1(x.Z), Math::Sqrt1(x.W));
}

// public static double Tan(double radians) [static] :68
double Math::Tan(double radians)
{
    return tan(radians);
}

// public static float Tan(float radians) [static] :75
float Math::Tan1(float radians)
{
    return tanf(radians);
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.4.3/Source/Uno/Matrix.uno
// -----------------------------------------------------------------

// public static class Matrix :8
// {
static void Matrix_build(uType* type)
{
    type->Reflection.SetFunctions(15,
        new uFunction("Compose", NULL, (void*)Matrix__Compose_fn, 0, true, ::g::Uno::Float4x4_typeof(), 3, ::g::Uno::Float3_typeof(), ::g::Uno::Float4_typeof(), ::g::Uno::Float3_typeof()),
        new uFunction("Invert", NULL, (void*)Matrix__Invert2_fn, 0, true, ::g::Uno::Float4x4_typeof(), 1, ::g::Uno::Float4x4_typeof()),
        new uFunction("Mul", NULL, (void*)Matrix__Mul8_fn, 0, true, ::g::Uno::Float4x4_typeof(), 2, ::g::Uno::Float4x4_typeof(), ::g::Uno::Float4x4_typeof()),
        new uFunction("Mul", NULL, (void*)Matrix__Mul9_fn, 0, true, ::g::Uno::Float4x4_typeof(), 3, ::g::Uno::Float4x4_typeof(), ::g::Uno::Float4x4_typeof(), ::g::Uno::Float4x4_typeof()),
        new uFunction("Mul", NULL, (void*)Matrix__Mul10_fn, 0, true, ::g::Uno::Float4x4_typeof(), 4, ::g::Uno::Float4x4_typeof(), ::g::Uno::Float4x4_typeof(), ::g::Uno::Float4x4_typeof(), ::g::Uno::Float4x4_typeof()),
        new uFunction("RotationAxis", NULL, (void*)Matrix__RotationAxis_fn, 0, true, ::g::Uno::Float4x4_typeof(), 2, ::g::Uno::Float3_typeof(), ::g::Uno::Float_typeof()),
        new uFunction("RotationQuaternion", NULL, (void*)Matrix__RotationQuaternion_fn, 0, true, ::g::Uno::Float4x4_typeof(), 1, ::g::Uno::Float4_typeof()),
        new uFunction("RotationZ", NULL, (void*)Matrix__RotationZ_fn, 0, true, ::g::Uno::Float4x4_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("Scaling", NULL, (void*)Matrix__Scaling_fn, 0, true, ::g::Uno::Float4x4_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("Scaling", NULL, (void*)Matrix__Scaling1_fn, 0, true, ::g::Uno::Float4x4_typeof(), 3, ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof()),
        new uFunction("Scaling", NULL, (void*)Matrix__Scaling2_fn, 0, true, ::g::Uno::Float4x4_typeof(), 1, ::g::Uno::Float3_typeof()),
        new uFunction("Shear", NULL, (void*)Matrix__Shear_fn, 0, true, ::g::Uno::Float4x4_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("Translation", NULL, (void*)Matrix__Translation_fn, 0, true, ::g::Uno::Float4x4_typeof(), 3, ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof()),
        new uFunction("Translation", NULL, (void*)Matrix__Translation1_fn, 0, true, ::g::Uno::Float4x4_typeof(), 1, ::g::Uno::Float3_typeof()),
        new uFunction("TryInvert", NULL, (void*)Matrix__TryInvert2_fn, 0, true, ::g::Uno::Bool_typeof(), 2, ::g::Uno::Float4x4_typeof(), ::g::Uno::Float4x4_typeof()->ByRef()));
}

uClassType* Matrix_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Matrix", options);
    type->fp_build_ = Matrix_build;
    return type;
}

// public static float4x4 Compose(float3 scale, float4 rotationQuaternion, float3 translation) :546
void Matrix__Compose_fn(::g::Uno::Float3* scale, ::g::Uno::Float4* rotationQuaternion, ::g::Uno::Float3* translation, ::g::Uno::Float4x4* __retval)
{
    *__retval = Matrix::Compose(*scale, *rotationQuaternion, *translation);
}

// public static float4x4 Invert(float4x4 value) :417
void Matrix__Invert2_fn(::g::Uno::Float4x4* value, ::g::Uno::Float4x4* __retval)
{
    *__retval = Matrix::Invert2(*value);
}

// public static float4x4 Mul(float4x4 left, float4x4 right) :365
void Matrix__Mul8_fn(::g::Uno::Float4x4* left, ::g::Uno::Float4x4* right, ::g::Uno::Float4x4* __retval)
{
    *__retval = Matrix::Mul8(*left, *right);
}

// public static float4x4 Mul(float4x4 a, float4x4 b, float4x4 c) :338
void Matrix__Mul9_fn(::g::Uno::Float4x4* a, ::g::Uno::Float4x4* b, ::g::Uno::Float4x4* c, ::g::Uno::Float4x4* __retval)
{
    *__retval = Matrix::Mul9(*a, *b, *c);
}

// public static float4x4 Mul(float4x4 a, float4x4 b, float4x4 c, float4x4 d) :337
void Matrix__Mul10_fn(::g::Uno::Float4x4* a, ::g::Uno::Float4x4* b, ::g::Uno::Float4x4* c, ::g::Uno::Float4x4* d, ::g::Uno::Float4x4* __retval)
{
    *__retval = Matrix::Mul10(*a, *b, *c, *d);
}

// public static float4x4 RotationAxis(float3 axisNormalized, float angleRadians) :214
void Matrix__RotationAxis_fn(::g::Uno::Float3* axisNormalized, float* angleRadians, ::g::Uno::Float4x4* __retval)
{
    *__retval = Matrix::RotationAxis(*axisNormalized, *angleRadians);
}

// public static float4x4 RotationQuaternion(float4 rotation) :260
void Matrix__RotationQuaternion_fn(::g::Uno::Float4* rotation, ::g::Uno::Float4x4* __retval)
{
    *__retval = Matrix::RotationQuaternion(*rotation);
}

// public static float4x4 RotationZ(float angleRadians) :255
void Matrix__RotationZ_fn(float* angleRadians, ::g::Uno::Float4x4* __retval)
{
    *__retval = Matrix::RotationZ(*angleRadians);
}

// public static float4x4 Scaling(float scale) :196
void Matrix__Scaling_fn(float* scale, ::g::Uno::Float4x4* __retval)
{
    *__retval = Matrix::Scaling(*scale);
}

// public static float4x4 Scaling(float x, float y, float z) :187
void Matrix__Scaling1_fn(float* x, float* y, float* z, ::g::Uno::Float4x4* __retval)
{
    *__retval = Matrix::Scaling1(*x, *y, *z);
}

// public static float4x4 Scaling(float3 scale) :178
void Matrix__Scaling2_fn(::g::Uno::Float3* scale, ::g::Uno::Float4x4* __retval)
{
    *__retval = Matrix::Scaling2(*scale);
}

// public static float4x4 Shear(float2 angle) :205
void Matrix__Shear_fn(::g::Uno::Float2* angle, ::g::Uno::Float4x4* __retval)
{
    *__retval = Matrix::Shear(*angle);
}

// public static float4x4 Translation(float x, float y, float z) :319
void Matrix__Translation_fn(float* x, float* y, float* z, ::g::Uno::Float4x4* __retval)
{
    *__retval = Matrix::Translation(*x, *y, *z);
}

// public static float4x4 Translation(float3 offset) :310
void Matrix__Translation1_fn(::g::Uno::Float3* offset, ::g::Uno::Float4x4* __retval)
{
    *__retval = Matrix::Translation1(*offset);
}

// public static bool TryInvert(float4x4 value, float4x4& result) :431
void Matrix__TryInvert2_fn(::g::Uno::Float4x4* value, ::g::Uno::Float4x4* result, bool* __retval)
{
    *__retval = Matrix::TryInvert2(*value, result);
}

// public static float4x4 Compose(float3 scale, float4 rotationQuaternion, float3 translation) [static] :546
::g::Uno::Float4x4 Matrix::Compose(::g::Uno::Float3 scale, ::g::Uno::Float4 rotationQuaternion, ::g::Uno::Float3 translation)
{
    return Matrix::Mul8(Matrix::Mul8(Matrix::Scaling2(scale), Matrix::RotationQuaternion(rotationQuaternion)), Matrix::Translation1(translation));
}

// public static float4x4 Invert(float4x4 value) [static] :417
::g::Uno::Float4x4 Matrix::Invert2(::g::Uno::Float4x4 value)
{
    ::g::Uno::Float4x4 result;

    if (!Matrix::TryInvert2(value, &result))
        return ::g::Uno::Float4x4__Identity();

    return result;
}

// public static float4x4 Mul(float4x4 left, float4x4 right) [static] :365
::g::Uno::Float4x4 Matrix::Mul8(::g::Uno::Float4x4 left, ::g::Uno::Float4x4 right)
{
    ::g::Uno::Float4x4 result;
    result.M11 = ((((left.M11 * right.M11) + (left.M12 * right.M21)) + (left.M13 * right.M31)) + (left.M14 * right.M41));
    result.M12 = ((((left.M11 * right.M12) + (left.M12 * right.M22)) + (left.M13 * right.M32)) + (left.M14 * right.M42));
    result.M13 = ((((left.M11 * right.M13) + (left.M12 * right.M23)) + (left.M13 * right.M33)) + (left.M14 * right.M43));
    result.M14 = ((((left.M11 * right.M14) + (left.M12 * right.M24)) + (left.M13 * right.M34)) + (left.M14 * right.M44));
    result.M21 = ((((left.M21 * right.M11) + (left.M22 * right.M21)) + (left.M23 * right.M31)) + (left.M24 * right.M41));
    result.M22 = ((((left.M21 * right.M12) + (left.M22 * right.M22)) + (left.M23 * right.M32)) + (left.M24 * right.M42));
    result.M23 = ((((left.M21 * right.M13) + (left.M22 * right.M23)) + (left.M23 * right.M33)) + (left.M24 * right.M43));
    result.M24 = ((((left.M21 * right.M14) + (left.M22 * right.M24)) + (left.M23 * right.M34)) + (left.M24 * right.M44));
    result.M31 = ((((left.M31 * right.M11) + (left.M32 * right.M21)) + (left.M33 * right.M31)) + (left.M34 * right.M41));
    result.M32 = ((((left.M31 * right.M12) + (left.M32 * right.M22)) + (left.M33 * right.M32)) + (left.M34 * right.M42));
    result.M33 = ((((left.M31 * right.M13) + (left.M32 * right.M23)) + (left.M33 * right.M33)) + (left.M34 * right.M43));
    result.M34 = ((((left.M31 * right.M14) + (left.M32 * right.M24)) + (left.M33 * right.M34)) + (left.M34 * right.M44));
    result.M41 = ((((left.M41 * right.M11) + (left.M42 * right.M21)) + (left.M43 * right.M31)) + (left.M44 * right.M41));
    result.M42 = ((((left.M41 * right.M12) + (left.M42 * right.M22)) + (left.M43 * right.M32)) + (left.M44 * right.M42));
    result.M43 = ((((left.M41 * right.M13) + (left.M42 * right.M23)) + (left.M43 * right.M33)) + (left.M44 * right.M43));
    result.M44 = ((((left.M41 * right.M14) + (left.M42 * right.M24)) + (left.M43 * right.M34)) + (left.M44 * right.M44));
    return result;
}

// public static float4x4 Mul(float4x4 a, float4x4 b, float4x4 c) [static] :338
::g::Uno::Float4x4 Matrix::Mul9(::g::Uno::Float4x4 a, ::g::Uno::Float4x4 b, ::g::Uno::Float4x4 c)
{
    return Matrix::Mul8(Matrix::Mul8(a, b), c);
}

// public static float4x4 Mul(float4x4 a, float4x4 b, float4x4 c, float4x4 d) [static] :337
::g::Uno::Float4x4 Matrix::Mul10(::g::Uno::Float4x4 a, ::g::Uno::Float4x4 b, ::g::Uno::Float4x4 c, ::g::Uno::Float4x4 d)
{
    return Matrix::Mul8(Matrix::Mul9(a, b, c), d);
}

// public static float4x4 RotationAxis(float3 axisNormalized, float angleRadians) [static] :214
::g::Uno::Float4x4 Matrix::RotationAxis(::g::Uno::Float3 axisNormalized, float angleRadians)
{
    axisNormalized = ::g::Uno::Vector::Normalize1(axisNormalized);
    float x = axisNormalized.X;
    float y = axisNormalized.Y;
    float z = axisNormalized.Z;
    float c = ::g::Uno::Math::Cos1(angleRadians);
    float s = ::g::Uno::Math::Sin1(angleRadians);
    float xx = x * x;
    float yy = y * y;
    float zz = z * z;
    float xy = x * y;
    float xz = x * z;
    float yz = y * z;
    ::g::Uno::Float4x4 result = ::g::Uno::Float4x4__Identity();
    result.M11 = (xx + (c * (1.0f - xx)));
    result.M12 = ((xy - (c * xy)) + (s * z));
    result.M13 = ((xz - (c * xz)) - (s * y));
    result.M21 = ((xy - (c * xy)) - (s * z));
    result.M22 = (yy + (c * (1.0f - yy)));
    result.M23 = ((yz - (c * yz)) + (s * x));
    result.M31 = ((xz - (c * xz)) + (s * y));
    result.M32 = ((yz - (c * yz)) - (s * x));
    result.M33 = (zz + (c * (1.0f - zz)));
    return result;
}

// public static float4x4 RotationQuaternion(float4 rotation) [static] :260
::g::Uno::Float4x4 Matrix::RotationQuaternion(::g::Uno::Float4 rotation)
{
    float xx = rotation.X * rotation.X;
    float yy = rotation.Y * rotation.Y;
    float zz = rotation.Z * rotation.Z;
    float xy = rotation.X * rotation.Y;
    float zw = rotation.Z * rotation.W;
    float zx = rotation.Z * rotation.X;
    float yw = rotation.Y * rotation.W;
    float yz = rotation.Y * rotation.Z;
    float xw = rotation.X * rotation.W;
    ::g::Uno::Float4x4 result = ::g::Uno::Float4x4__Identity();
    result.M11 = (1.0f - (2.0f * (yy + zz)));
    result.M12 = (2.0f * (xy + zw));
    result.M13 = (2.0f * (zx - yw));
    result.M21 = (2.0f * (xy - zw));
    result.M22 = (1.0f - (2.0f * (zz + xx)));
    result.M23 = (2.0f * (yz + xw));
    result.M31 = (2.0f * (zx + yw));
    result.M32 = (2.0f * (yz - xw));
    result.M33 = (1.0f - (2.0f * (yy + xx)));
    return result;
}

// public static float4x4 RotationZ(float angleRadians) [static] :255
::g::Uno::Float4x4 Matrix::RotationZ(float angleRadians)
{
    return Matrix::RotationAxis(::g::Uno::Float3__New2(0.0f, 0.0f, 1.0f), angleRadians);
}

// public static float4x4 Scaling(float scale) [static] :196
::g::Uno::Float4x4 Matrix::Scaling(float scale)
{
    ::g::Uno::Float4x4 result = ::g::Uno::Float4x4__Identity();
    result.M11 = scale;
    result.M22 = scale;
    result.M33 = scale;
    return result;
}

// public static float4x4 Scaling(float x, float y, float z) [static] :187
::g::Uno::Float4x4 Matrix::Scaling1(float x, float y, float z)
{
    ::g::Uno::Float4x4 result = ::g::Uno::Float4x4__Identity();
    result.M11 = x;
    result.M22 = y;
    result.M33 = z;
    return result;
}

// public static float4x4 Scaling(float3 scale) [static] :178
::g::Uno::Float4x4 Matrix::Scaling2(::g::Uno::Float3 scale)
{
    ::g::Uno::Float4x4 result = ::g::Uno::Float4x4__Identity();
    result.M11 = scale.X;
    result.M22 = scale.Y;
    result.M33 = scale.Z;
    return result;
}

// public static float4x4 Shear(float2 angle) [static] :205
::g::Uno::Float4x4 Matrix::Shear(::g::Uno::Float2 angle)
{
    ::g::Uno::Float4x4 result = ::g::Uno::Float4x4__Identity();
    result.M12 = ::g::Uno::Math::Tan1(angle.Y);
    result.M21 = ::g::Uno::Math::Tan1(angle.X);
    return result;
}

// public static float4x4 Translation(float x, float y, float z) [static] :319
::g::Uno::Float4x4 Matrix::Translation(float x, float y, float z)
{
    ::g::Uno::Float4x4 result = ::g::Uno::Float4x4__Identity();
    result.M41 = x;
    result.M42 = y;
    result.M43 = z;
    return result;
}

// public static float4x4 Translation(float3 offset) [static] :310
::g::Uno::Float4x4 Matrix::Translation1(::g::Uno::Float3 offset)
{
    ::g::Uno::Float4x4 result = ::g::Uno::Float4x4__Identity();
    result.M41 = offset.X;
    result.M42 = offset.Y;
    result.M43 = offset.Z;
    return result;
}

// public static bool TryInvert(float4x4 value, float4x4& result) [static] :431
bool Matrix::TryInvert2(::g::Uno::Float4x4 value, ::g::Uno::Float4x4* result)
{
    float b0 = (value.M31 * value.M42) - (value.M32 * value.M41);
    float b1 = (value.M31 * value.M43) - (value.M33 * value.M41);
    float b2 = (value.M34 * value.M41) - (value.M31 * value.M44);
    float b3 = (value.M32 * value.M43) - (value.M33 * value.M42);
    float b4 = (value.M34 * value.M42) - (value.M32 * value.M44);
    float b5 = (value.M33 * value.M44) - (value.M34 * value.M43);
    float d11 = ((value.M22 * b5) + (value.M23 * b4)) + (value.M24 * b3);
    float d12 = ((value.M21 * b5) + (value.M23 * b2)) + (value.M24 * b1);
    float d13 = ((value.M21 * -b4) + (value.M22 * b2)) + (value.M24 * b0);
    float d14 = ((value.M21 * b3) + (value.M22 * -b1)) + (value.M23 * b0);
    float det = (((value.M11 * d11) - (value.M12 * d12)) + (value.M13 * d13)) - (value.M14 * d14);
    float detInv = 1.0f / det;
    float a0 = (value.M11 * value.M22) - (value.M12 * value.M21);
    float a1 = (value.M11 * value.M23) - (value.M13 * value.M21);
    float a2 = (value.M14 * value.M21) - (value.M11 * value.M24);
    float a3 = (value.M12 * value.M23) - (value.M13 * value.M22);
    float a4 = (value.M14 * value.M22) - (value.M12 * value.M24);
    float a5 = (value.M13 * value.M24) - (value.M14 * value.M23);
    float d21 = ((value.M12 * b5) + (value.M13 * b4)) + (value.M14 * b3);
    float d22 = ((value.M11 * b5) + (value.M13 * b2)) + (value.M14 * b1);
    float d23 = ((value.M11 * -b4) + (value.M12 * b2)) + (value.M14 * b0);
    float d24 = ((value.M11 * b3) + (value.M12 * -b1)) + (value.M13 * b0);
    float d31 = ((value.M42 * a5) + (value.M43 * a4)) + (value.M44 * a3);
    float d32 = ((value.M41 * a5) + (value.M43 * a2)) + (value.M44 * a1);
    float d33 = ((value.M41 * -a4) + (value.M42 * a2)) + (value.M44 * a0);
    float d34 = ((value.M41 * a3) + (value.M42 * -a1)) + (value.M43 * a0);
    float d41 = ((value.M32 * a5) + (value.M33 * a4)) + (value.M34 * a3);
    float d42 = ((value.M31 * a5) + (value.M33 * a2)) + (value.M34 * a1);
    float d43 = ((value.M31 * -a4) + (value.M32 * a2)) + (value.M34 * a0);
    float d44 = ((value.M31 * a3) + (value.M32 * -a1)) + (value.M33 * a0);
    (*result).M11 = (d11 * detInv);
    (*result).M12 = (-d21 * detInv);
    (*result).M13 = (d31 * detInv);
    (*result).M14 = (-d41 * detInv);
    (*result).M21 = (-d12 * detInv);
    (*result).M22 = (d22 * detInv);
    (*result).M23 = (-d32 * detInv);
    (*result).M24 = (d42 * detInv);
    (*result).M31 = (d13 * detInv);
    (*result).M32 = (-d23 * detInv);
    (*result).M33 = (d33 * detInv);
    (*result).M34 = (-d43 * detInv);
    (*result).M41 = (-d14 * detInv);
    (*result).M42 = (d24 * detInv);
    (*result).M43 = (-d34 * detInv);
    (*result).M44 = (d44 * detInv);
    return ::g::Uno::Math::Abs1(det) > 1e-05f;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.4.3/Source/Uno/Exceptions/NotImplementedException.uno
// ---------------------------------------------------------------------------------------------

// public sealed class NotImplementedException :6
// {
static void NotImplementedException_build(uType* type)
{
    ::STRINGS[33] = uString::Const("Not implemented");
    type->SetFields(4);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)NotImplementedException__New4_fn, 0, true, type, 0));
}

::g::Uno::Exception_type* NotImplementedException_typeof()
{
    static uSStrong< ::g::Uno::Exception_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Exception_typeof();
    options.FieldCount = 4;
    options.ObjectSize = sizeof(NotImplementedException);
    options.TypeSize = sizeof(::g::Uno::Exception_type);
    type = (::g::Uno::Exception_type*)uClassType::New("Uno.NotImplementedException", options);
    type->fp_build_ = NotImplementedException_build;
    type->fp_ctor_ = (void*)NotImplementedException__New4_fn;
    return type;
}

// public NotImplementedException() :8
void NotImplementedException__ctor_3_fn(NotImplementedException* __this)
{
    __this->ctor_3();
}

// public NotImplementedException New() :8
void NotImplementedException__New4_fn(NotImplementedException** __retval)
{
    *__retval = NotImplementedException::New4();
}

// public NotImplementedException() [instance] :8
void NotImplementedException::ctor_3()
{
    ctor_1(::STRINGS[33/*"Not impleme...*/]);
}

// public NotImplementedException New() [static] :8
NotImplementedException* NotImplementedException::New4()
{
    NotImplementedException* obj1 = (NotImplementedException*)uNew(NotImplementedException_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.4.3/Source/Uno/Exceptions/NotSupportedException.uno
// -------------------------------------------------------------------------------------------

// public sealed class NotSupportedException :6
// {
static void NotSupportedException_build(uType* type)
{
    ::STRINGS[34] = uString::Const("Method not supported");
    type->SetFields(4);
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)NotSupportedException__New4_fn, 0, true, type, 0),
        new uFunction(".ctor", NULL, (void*)NotSupportedException__New5_fn, 0, true, type, 1, ::g::Uno::String_typeof()));
}

::g::Uno::Exception_type* NotSupportedException_typeof()
{
    static uSStrong< ::g::Uno::Exception_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Exception_typeof();
    options.FieldCount = 4;
    options.ObjectSize = sizeof(NotSupportedException);
    options.TypeSize = sizeof(::g::Uno::Exception_type);
    type = (::g::Uno::Exception_type*)uClassType::New("Uno.NotSupportedException", options);
    type->fp_build_ = NotSupportedException_build;
    type->fp_ctor_ = (void*)NotSupportedException__New4_fn;
    return type;
}

// public NotSupportedException() :8
void NotSupportedException__ctor_3_fn(NotSupportedException* __this)
{
    __this->ctor_3();
}

// public NotSupportedException(string message) :13
void NotSupportedException__ctor_4_fn(NotSupportedException* __this, uString* message)
{
    __this->ctor_4(message);
}

// public NotSupportedException New() :8
void NotSupportedException__New4_fn(NotSupportedException** __retval)
{
    *__retval = NotSupportedException::New4();
}

// public NotSupportedException New(string message) :13
void NotSupportedException__New5_fn(uString* message, NotSupportedException** __retval)
{
    *__retval = NotSupportedException::New5(message);
}

// public NotSupportedException() [instance] :8
void NotSupportedException::ctor_3()
{
    ctor_1(::STRINGS[34/*"Method not ...*/]);
}

// public NotSupportedException(string message) [instance] :13
void NotSupportedException::ctor_4(uString* message)
{
    ctor_1(message);
}

// public NotSupportedException New() [static] :8
NotSupportedException* NotSupportedException::New4()
{
    NotSupportedException* obj1 = (NotSupportedException*)uNew(NotSupportedException_typeof());
    obj1->ctor_3();
    return obj1;
}

// public NotSupportedException New(string message) [static] :13
NotSupportedException* NotSupportedException::New5(uString* message)
{
    NotSupportedException* obj2 = (NotSupportedException*)uNew(NotSupportedException_typeof());
    obj2->ctor_4(message);
    return obj2;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.4.3/Source/Uno/Exceptions/NullReferenceException.uno
// --------------------------------------------------------------------------------------------

// public sealed class NullReferenceException :6
// {
static void NullReferenceException_build(uType* type)
{
    ::STRINGS[35] = uString::Const("Object reference was null");
    type->SetFields(4);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)NullReferenceException__New4_fn, 0, true, type, 0));
}

::g::Uno::Exception_type* NullReferenceException_typeof()
{
    static uSStrong< ::g::Uno::Exception_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Exception_typeof();
    options.FieldCount = 4;
    options.ObjectSize = sizeof(NullReferenceException);
    options.TypeSize = sizeof(::g::Uno::Exception_type);
    type = (::g::Uno::Exception_type*)uClassType::New("Uno.NullReferenceException", options);
    type->fp_build_ = NullReferenceException_build;
    type->fp_ctor_ = (void*)NullReferenceException__New4_fn;
    return type;
}

// public NullReferenceException() :8
void NullReferenceException__ctor_3_fn(NullReferenceException* __this)
{
    __this->ctor_3();
}

// public NullReferenceException New() :8
void NullReferenceException__New4_fn(NullReferenceException** __retval)
{
    *__retval = NullReferenceException::New4();
}

// public NullReferenceException() [instance] :8
void NullReferenceException::ctor_3()
{
    ctor_1(::STRINGS[35/*"Object refe...*/]);
}

// public NullReferenceException New() [static] :8
NullReferenceException* NullReferenceException::New4()
{
    NullReferenceException* obj1 = (NullReferenceException*)uNew(NullReferenceException_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.4.3/Source/Uno/Object.uno
// -----------------------------------------------------------------

// public intrinsic class Object :12
// {
// public virtual bool Equals(object o) :52
void Object__Equals_fn(uObject* __this, uObject* o, bool* __retval)
{
    switch (__this->__type->Type)
    {
    case uTypeTypeEnum:
    case uTypeTypeStruct:
        return *__retval = __this == o || (
                o != NULL && (
                    o->__type == __this->__type || (
                        o->__type->Type == uTypeTypeEnum &&
                        o->__type->Base == __this->__type
                    )
                ) &&
                memcmp((const uint8_t*)__this + sizeof(uObject), (const uint8_t*)o + sizeof(uObject), __this->__type->ValueSize) == 0
            ), void();
    default:
        return *__retval = __this == o, void();
    }
}

// public static bool Equals(object left, object right) :94
void Object__Equals1_fn(uObject* left, uObject* right, bool* __retval)
{
    *__retval = Object::Equals1(left, right);
}

// public virtual int GetHashCode() :32
void Object__GetHashCode_fn(uObject* __this, int* __retval)
{
    switch (__this->__type->Type)
    {
    case uTypeTypeEnum:
    case uTypeTypeStruct:
        return *__retval = (int)uBase::Default::Hash((const uint8_t*)__this + sizeof(uObject), (int)__this->__type->ValueSize), void();
    default:
        return *__retval = (int)uBase::Default::Hash(__this), void();
    }
}

// public Uno.Type GetType() :19
void Object__GetType_fn(uObject* __this, uType** __retval)
{
    *__retval = Object::GetType(__this);
}

// public Object New() :14
void Object__New_fn(uObject** __retval)
{
    *__retval = Object::New();
}

// public static bool ReferenceEquals(object left, object right) :106
void Object__ReferenceEquals_fn(uObject* left, uObject* right, bool* __retval)
{
    *__retval = Object::ReferenceEquals(left, right);
}

// public virtual string ToString() :80
void Object__ToString_fn(uObject* __this, uString** __retval)
{
    return *__retval = __this->__type->Type == uTypeTypeEnum
        ? uEnum::GetString(__this->__type, (uint8_t*)__this + sizeof(uObject))
        : uString::Const(__this->__type->FullName), void();
}

// public Uno.Type GetType() [instance] :19
uType* Object::GetType(uObject* __this)
{
    return __this->__type;
}

// public static bool Equals(object left, object right) [static] :94
bool Object::Equals1(uObject* left, uObject* right)
{
    uStackFrame __("object", "Equals(object,object)");

    if (left == right)
        return true;

    if ((left == NULL) || (right == NULL))
        return false;

    return Object::Equals(uPtr(left), right);
}

// public Object New() [static] :14
uObject* Object::New()
{
    uObject* obj1 = (uObject*)uNew(uObject_typeof());
    return obj1;
}

// public static bool ReferenceEquals(object left, object right) [static] :106
bool Object::ReferenceEquals(uObject* left, uObject* right)
{
    return left == right;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.4.3/Source/Uno/Exceptions/ObjectDisposedException.uno
// ---------------------------------------------------------------------------------------------

// public sealed class ObjectDisposedException :6
// {
static void ObjectDisposedException_build(uType* type)
{
    ::STRINGS[36] = uString::Const("Attempt to access disposed object: ");
    type->SetFields(4);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)ObjectDisposedException__New4_fn, 0, true, type, 1, ::g::Uno::String_typeof()));
}

::g::Uno::Exception_type* ObjectDisposedException_typeof()
{
    static uSStrong< ::g::Uno::Exception_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Exception_typeof();
    options.FieldCount = 4;
    options.ObjectSize = sizeof(ObjectDisposedException);
    options.TypeSize = sizeof(::g::Uno::Exception_type);
    type = (::g::Uno::Exception_type*)uClassType::New("Uno.ObjectDisposedException", options);
    type->fp_build_ = ObjectDisposedException_build;
    return type;
}

// public ObjectDisposedException(string objectName) :8
void ObjectDisposedException__ctor_3_fn(ObjectDisposedException* __this, uString* objectName)
{
    __this->ctor_3(objectName);
}

// public ObjectDisposedException New(string objectName) :8
void ObjectDisposedException__New4_fn(uString* objectName, ObjectDisposedException** __retval)
{
    *__retval = ObjectDisposedException::New4(objectName);
}

// public ObjectDisposedException(string objectName) [instance] :8
void ObjectDisposedException::ctor_3(uString* objectName)
{
    ctor_1(::g::Uno::String::op_Addition2(::STRINGS[36/*"Attempt to ...*/], objectName));
}

// public ObjectDisposedException New(string objectName) [static] :8
ObjectDisposedException* ObjectDisposedException::New4(uString* objectName)
{
    ObjectDisposedException* obj1 = (ObjectDisposedException*)uNew(ObjectDisposedException_typeof());
    obj1->ctor_3(objectName);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.4.3/Source/Uno/ObsoleteAttribute.uno
// ----------------------------------------------------------------------------

// public sealed class ObsoleteAttribute :9
// {
static void ObsoleteAttribute_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(ObsoleteAttribute, _IsError), 0,
        ::g::Uno::String_typeof(), offsetof(ObsoleteAttribute, _Message), 0);
    type->Reflection.SetFunctions(2,
        new uFunction("get_IsError", NULL, (void*)ObsoleteAttribute__get_IsError_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_Message", NULL, (void*)ObsoleteAttribute__get_Message_fn, 0, false, ::g::Uno::String_typeof(), 0));
}

uType* ObsoleteAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Attribute_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(ObsoleteAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.ObsoleteAttribute", options);
    type->fp_build_ = ObsoleteAttribute_build;
    type->fp_ctor_ = (void*)ObsoleteAttribute__New1_fn;
    return type;
}

// private ObsoleteAttribute() :11
void ObsoleteAttribute__ctor_1_fn(ObsoleteAttribute* __this)
{
    __this->ctor_1();
}

// private ObsoleteAttribute(string message) :13
void ObsoleteAttribute__ctor_2_fn(ObsoleteAttribute* __this, uString* message)
{
    __this->ctor_2(message);
}

// private ObsoleteAttribute(string message, bool isError) :18
void ObsoleteAttribute__ctor_3_fn(ObsoleteAttribute* __this, uString* message, bool* isError)
{
    __this->ctor_3(message, *isError);
}

// public generated bool get_IsError() :25
void ObsoleteAttribute__get_IsError_fn(ObsoleteAttribute* __this, bool* __retval)
{
    *__retval = __this->IsError();
}

// private generated void set_IsError(bool value) :25
void ObsoleteAttribute__set_IsError_fn(ObsoleteAttribute* __this, bool* value)
{
    __this->IsError(*value);
}

// public generated string get_Message() :24
void ObsoleteAttribute__get_Message_fn(ObsoleteAttribute* __this, uString** __retval)
{
    *__retval = __this->Message();
}

// private generated void set_Message(string value) :24
void ObsoleteAttribute__set_Message_fn(ObsoleteAttribute* __this, uString* value)
{
    __this->Message(value);
}

// private ObsoleteAttribute New() :11
void ObsoleteAttribute__New1_fn(ObsoleteAttribute** __retval)
{
    *__retval = ObsoleteAttribute::New1();
}

// private ObsoleteAttribute New(string message) :13
void ObsoleteAttribute__New2_fn(uString* message, ObsoleteAttribute** __retval)
{
    *__retval = ObsoleteAttribute::New2(message);
}

// private ObsoleteAttribute New(string message, bool isError) :18
void ObsoleteAttribute__New3_fn(uString* message, bool* isError, ObsoleteAttribute** __retval)
{
    *__retval = ObsoleteAttribute::New3(message, *isError);
}

// private ObsoleteAttribute() [instance] :11
void ObsoleteAttribute::ctor_1()
{
    ctor_();
}

// private ObsoleteAttribute(string message) [instance] :13
void ObsoleteAttribute::ctor_2(uString* message)
{
    ctor_();
    Message(message);
}

// private ObsoleteAttribute(string message, bool isError) [instance] :18
void ObsoleteAttribute::ctor_3(uString* message, bool isError)
{
    ctor_();
    Message(message);
    IsError(isError);
}

// public generated bool get_IsError() [instance] :25
bool ObsoleteAttribute::IsError()
{
    return _IsError;
}

// private generated void set_IsError(bool value) [instance] :25
void ObsoleteAttribute::IsError(bool value)
{
    _IsError = value;
}

// public generated string get_Message() [instance] :24
uString* ObsoleteAttribute::Message()
{
    return _Message;
}

// private generated void set_Message(string value) [instance] :24
void ObsoleteAttribute::Message(uString* value)
{
    _Message = value;
}

// private ObsoleteAttribute New() [static] :11
ObsoleteAttribute* ObsoleteAttribute::New1()
{
    ObsoleteAttribute* obj1 = (ObsoleteAttribute*)uNew(ObsoleteAttribute_typeof());
    obj1->ctor_1();
    return obj1;
}

// private ObsoleteAttribute New(string message) [static] :13
ObsoleteAttribute* ObsoleteAttribute::New2(uString* message)
{
    ObsoleteAttribute* obj2 = (ObsoleteAttribute*)uNew(ObsoleteAttribute_typeof());
    obj2->ctor_2(message);
    return obj2;
}

// private ObsoleteAttribute New(string message, bool isError) [static] :18
ObsoleteAttribute* ObsoleteAttribute::New3(uString* message, bool isError)
{
    ObsoleteAttribute* obj3 = (ObsoleteAttribute*)uNew(ObsoleteAttribute_typeof());
    obj3->ctor_3(message, isError);
    return obj3;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.4.3/Source/Uno/Exceptions/OverflowException.uno
// ---------------------------------------------------------------------------------------

// public sealed class OverflowException :6
// {
static void OverflowException_build(uType* type)
{
    type->SetFields(4);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)OverflowException__New4_fn, 0, true, type, 1, ::g::Uno::String_typeof()));
}

::g::Uno::Exception_type* OverflowException_typeof()
{
    static uSStrong< ::g::Uno::Exception_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Exception_typeof();
    options.FieldCount = 4;
    options.ObjectSize = sizeof(OverflowException);
    options.TypeSize = sizeof(::g::Uno::Exception_type);
    type = (::g::Uno::Exception_type*)uClassType::New("Uno.OverflowException", options);
    type->fp_build_ = OverflowException_build;
    return type;
}

// public OverflowException(string message) :8
void OverflowException__ctor_3_fn(OverflowException* __this, uString* message)
{
    __this->ctor_3(message);
}

// public OverflowException New(string message) :8
void OverflowException__New4_fn(uString* message, OverflowException** __retval)
{
    *__retval = OverflowException::New4(message);
}

// public OverflowException(string message) [instance] :8
void OverflowException::ctor_3(uString* message)
{
    ctor_1(message);
}

// public OverflowException New(string message) [static] :8
OverflowException* OverflowException::New4(uString* message)
{
    OverflowException* obj1 = (OverflowException*)uNew(OverflowException_typeof());
    obj1->ctor_3(message);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.4.3/Source/Uno/Predicate.uno
// --------------------------------------------------------------------

// public delegate bool Predicate<T>(T arg) :6
uDelegateType* Predicate_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.Predicate`1", 1, 1);
    type->SetSignature(::g::Uno::Bool_typeof(),
        type->T(0));
    return type;
}

// /usr/local/share/uno/Packages/UnoCore/1.4.3/Source/Uno/Quaternion.uno
// ---------------------------------------------------------------------

// public static class Quaternion :7
// {
static void Quaternion_build(uType* type)
{
    type->Reflection.SetFunctions(2,
        new uFunction("FromEulerAngle", NULL, (void*)Quaternion__FromEulerAngle_fn, 0, true, ::g::Uno::Float4_typeof(), 3, ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof()),
        new uFunction("FromEulerAngle", NULL, (void*)Quaternion__FromEulerAngle1_fn, 0, true, ::g::Uno::Float4_typeof(), 1, ::g::Uno::Float3_typeof()));
}

uClassType* Quaternion_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Quaternion", options);
    type->fp_build_ = Quaternion_build;
    return type;
}

// public static float4 FromEulerAngle(float pitch, float yaw, float roll) :139
void Quaternion__FromEulerAngle_fn(float* pitch, float* yaw, float* roll, ::g::Uno::Float4* __retval)
{
    *__retval = Quaternion::FromEulerAngle(*pitch, *yaw, *roll);
}

// public static float4 FromEulerAngle(float3 v) :134
void Quaternion__FromEulerAngle1_fn(::g::Uno::Float3* v, ::g::Uno::Float4* __retval)
{
    *__retval = Quaternion::FromEulerAngle1(*v);
}

// public static float4 FromEulerAngle(float pitch, float yaw, float roll) [static] :139
::g::Uno::Float4 Quaternion::FromEulerAngle(float pitch, float yaw, float roll)
{
    float tmp = pitch;
    pitch = yaw;
    yaw = tmp;
    float rollOver2 = roll * 0.5f;
    float sinRollOver2 = ::g::Uno::Math::Sin1(rollOver2);
    float cosRollOver2 = ::g::Uno::Math::Cos1(rollOver2);
    float yawOver2 = yaw * 0.5f;
    float sinYawOver2 = ::g::Uno::Math::Sin1(yawOver2);
    float cosYawOver2 = ::g::Uno::Math::Cos1(yawOver2);
    float pitchOver2 = pitch * 0.5f;
    float sinPitchOver2 = ::g::Uno::Math::Sin1(pitchOver2);
    float cosPitchOver2 = ::g::Uno::Math::Cos1(pitchOver2);
    ::g::Uno::Float4 result;
    result.W = (((cosPitchOver2 * cosYawOver2) * cosRollOver2) + ((sinPitchOver2 * sinYawOver2) * sinRollOver2));
    result.X = (((cosPitchOver2 * sinYawOver2) * cosRollOver2) + ((sinPitchOver2 * cosYawOver2) * sinRollOver2));
    result.Y = (((sinPitchOver2 * cosYawOver2) * cosRollOver2) - ((cosPitchOver2 * sinYawOver2) * sinRollOver2));
    result.Z = (((cosPitchOver2 * cosYawOver2) * sinRollOver2) - ((sinPitchOver2 * sinYawOver2) * cosRollOver2));
    return result;
}

// public static float4 FromEulerAngle(float3 v) [static] :134
::g::Uno::Float4 Quaternion::FromEulerAngle1(::g::Uno::Float3 v)
{
    return Quaternion::FromEulerAngle(v.X, v.Y, v.Z);
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.4.3/Source/Uno/Rect.uno
// ---------------------------------------------------------------

// public struct Rect :6
// {
static void Rect_build(uType* type)
{
    ::STRINGS[14] = uString::Const(", ");
    ::TYPES[6] = ::g::Uno::Float_typeof();
    type->SetFields(0,
        ::TYPES[6/*float*/], offsetof(Rect, Left), 0,
        ::TYPES[6/*float*/], offsetof(Rect, Top), 0,
        ::TYPES[6/*float*/], offsetof(Rect, Right), 0,
        ::TYPES[6/*float*/], offsetof(Rect, Bottom), 0);
    type->Reflection.SetFields(4,
        new uField("Bottom", 3),
        new uField("Left", 0),
        new uField("Right", 2),
        new uField("Top", 1));
    type->Reflection.SetFunctions(28,
        new uFunction("ContainingPoints", NULL, (void*)Rect__ContainingPoints_fn, 0, true, type, 2, ::g::Uno::Float2_typeof(), ::g::Uno::Float2_typeof()),
        new uFunction("ContainingPoints", NULL, (void*)Rect__ContainingPoints1_fn, 0, true, type, 4, ::g::Uno::Float2_typeof(), ::g::Uno::Float2_typeof(), ::g::Uno::Float2_typeof(), ::g::Uno::Float2_typeof()),
        new uFunction("get_Height", NULL, (void*)Rect__get_Height_fn, 0, false, ::TYPES[6/*float*/], 0),
        new uFunction("set_Height", NULL, (void*)Rect__set_Height_fn, 0, false, uVoid_typeof(), 1, ::TYPES[6/*float*/]),
        new uFunction("Inflate", NULL, (void*)Rect__Inflate_fn, 0, true, type, 2, type, ::TYPES[6/*float*/]),
        new uFunction("Inflate", NULL, (void*)Rect__Inflate1_fn, 0, true, type, 2, type, ::g::Uno::Float2_typeof()),
        new uFunction("Intersect", NULL, (void*)Rect__Intersect_fn, 0, true, type, 2, type, type),
        new uFunction("Intersects", NULL, (void*)Rect__Intersects_fn, 0, false, ::g::Uno::Bool_typeof(), 1, type),
        new uFunction("get_LeftBottom", NULL, (void*)Rect__get_LeftBottom_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("get_LeftTop", NULL, (void*)Rect__get_LeftTop_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("get_Maximum", NULL, (void*)Rect__get_Maximum_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("set_Maximum", NULL, (void*)Rect__set_Maximum_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("get_Minimum", NULL, (void*)Rect__get_Minimum_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("set_Minimum", NULL, (void*)Rect__set_Minimum_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction(".ctor", NULL, (void*)Rect__New1_fn, 0, true, type, 4, ::TYPES[6/*float*/], ::TYPES[6/*float*/], ::TYPES[6/*float*/], ::TYPES[6/*float*/]),
        new uFunction(".ctor", NULL, (void*)Rect__New2_fn, 0, true, type, 2, ::g::Uno::Float2_typeof(), ::g::Uno::Float2_typeof()),
        new uFunction("get_Position", NULL, (void*)Rect__get_Position_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("set_Position", NULL, (void*)Rect__set_Position_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("get_RightBottom", NULL, (void*)Rect__get_RightBottom_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("get_RightTop", NULL, (void*)Rect__get_RightTop_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("Scale", NULL, (void*)Rect__Scale_fn, 0, true, type, 2, type, ::TYPES[6/*float*/]),
        new uFunction("Scale", NULL, (void*)Rect__Scale1_fn, 0, true, type, 2, type, ::g::Uno::Float2_typeof()),
        new uFunction("get_Size", NULL, (void*)Rect__get_Size_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("set_Size", NULL, (void*)Rect__set_Size_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("Transform", NULL, (void*)Rect__Transform_fn, 0, true, type, 2, type, ::g::Uno::Float4x4_typeof()),
        new uFunction("Translate", NULL, (void*)Rect__Translate_fn, 0, true, type, 2, type, ::g::Uno::Float2_typeof()),
        new uFunction("get_Width", NULL, (void*)Rect__get_Width_fn, 0, false, ::TYPES[6/*float*/], 0),
        new uFunction("set_Width", NULL, (void*)Rect__set_Width_fn, 0, false, uVoid_typeof(), 1, ::TYPES[6/*float*/]));
}

uStructType* Rect_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.Alignment = alignof(Rect);
    options.ValueSize = sizeof(Rect);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Rect", options);
    type->fp_build_ = Rect_build;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))Rect__ToString_fn;
    return type;
}

// public Rect(float left, float top, float right, float bottom) :10
void Rect__ctor__fn(Rect* __this, float* left, float* top, float* right, float* bottom)
{
    __this->ctor_(*left, *top, *right, *bottom);
}

// public Rect(float2 pos, float2 size) :18
void Rect__ctor_1_fn(Rect* __this, ::g::Uno::Float2* pos, ::g::Uno::Float2* size)
{
    __this->ctor_1(*pos, *size);
}

// public static Uno.Rect ContainingPoints(float2 point0, float2 point1) :226
void Rect__ContainingPoints_fn(::g::Uno::Float2* point0, ::g::Uno::Float2* point1, Rect* __retval)
{
    *__retval = Rect__ContainingPoints(*point0, *point1);
}

// public static Uno.Rect ContainingPoints(float2 point0, float2 point1, float2 point2, float2 point3) :242
void Rect__ContainingPoints1_fn(::g::Uno::Float2* point0, ::g::Uno::Float2* point1, ::g::Uno::Float2* point2, ::g::Uno::Float2* point3, Rect* __retval)
{
    *__retval = Rect__ContainingPoints1(*point0, *point1, *point2, *point3);
}

// public float get_Height() :97
void Rect__get_Height_fn(Rect* __this, float* __retval)
{
    *__retval = __this->Height();
}

// public void set_Height(float value) :98
void Rect__set_Height_fn(Rect* __this, float* value)
{
    __this->Height(*value);
}

// public static Uno.Rect Inflate(Uno.Rect r, float size) :201
void Rect__Inflate_fn(Rect* r, float* size, Rect* __retval)
{
    *__retval = Rect__Inflate(*r, *size);
}

// public static Uno.Rect Inflate(Uno.Rect r, float2 size) :192
void Rect__Inflate1_fn(Rect* r, ::g::Uno::Float2* size, Rect* __retval)
{
    *__retval = Rect__Inflate1(*r, *size);
}

// public static Uno.Rect Intersect(Uno.Rect a, Uno.Rect b) :150
void Rect__Intersect_fn(Rect* a, Rect* b, Rect* __retval)
{
    *__retval = Rect__Intersect(*a, *b);
}

// public bool Intersects(Uno.Rect r) :126
void Rect__Intersects_fn(Rect* __this, Rect* r, bool* __retval)
{
    *__retval = __this->Intersects(*r);
}

// public float2 get_LeftBottom() :69
void Rect__get_LeftBottom_fn(Rect* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->LeftBottom();
}

// public float2 get_LeftTop() :59
void Rect__get_LeftTop_fn(Rect* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->LeftTop();
}

// public float2 get_Maximum() :48
void Rect__get_Maximum_fn(Rect* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Maximum();
}

// public void set_Maximum(float2 value) :49
void Rect__set_Maximum_fn(Rect* __this, ::g::Uno::Float2* value)
{
    __this->Maximum(*value);
}

// public float2 get_Minimum() :42
void Rect__get_Minimum_fn(Rect* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Minimum();
}

// public void set_Minimum(float2 value) :43
void Rect__set_Minimum_fn(Rect* __this, ::g::Uno::Float2* value)
{
    __this->Minimum(*value);
}

// public Rect New(float left, float top, float right, float bottom) :10
void Rect__New1_fn(float* left, float* top, float* right, float* bottom, Rect* __retval)
{
    *__retval = Rect__New1(*left, *top, *right, *bottom);
}

// public Rect New(float2 pos, float2 size) :18
void Rect__New2_fn(::g::Uno::Float2* pos, ::g::Uno::Float2* size, Rect* __retval)
{
    *__retval = Rect__New2(*pos, *size);
}

// public static implicit operator Uno.Rect(Uno.Recti r) :136
void Rect__op_Implicit_fn(::g::Uno::Recti* r, Rect* __retval)
{
    *__retval = Rect__op_Implicit(*r);
}

// public float2 get_Position() :79
void Rect__get_Position_fn(Rect* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Position();
}

// public void set_Position(float2 value) :80
void Rect__set_Position_fn(Rect* __this, ::g::Uno::Float2* value)
{
    __this->Position(*value);
}

// public float2 get_RightBottom() :74
void Rect__get_RightBottom_fn(Rect* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->RightBottom();
}

// public float2 get_RightTop() :64
void Rect__get_RightTop_fn(Rect* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->RightTop();
}

// public static Uno.Rect Scale(Uno.Rect r, float scale) :187
void Rect__Scale_fn(Rect* r, float* scale, Rect* __retval)
{
    *__retval = Rect__Scale(*r, *scale);
}

// public static Uno.Rect Scale(Uno.Rect r, float2 scale) :178
void Rect__Scale1_fn(Rect* r, ::g::Uno::Float2* scale, Rect* __retval)
{
    *__retval = Rect__Scale1(*r, *scale);
}

// public float2 get_Size() :103
void Rect__get_Size_fn(Rect* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Size();
}

// public void set_Size(float2 value) :104
void Rect__set_Size_fn(Rect* __this, ::g::Uno::Float2* value)
{
    __this->Size(*value);
}

// public override sealed string ToString() :131
void Rect__ToString_fn(Rect* __this, uType* __type, uString** __retval)
{
    uStackFrame __("Uno.Rect", "ToString()");
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::Float::ToString(__this->Left, ::TYPES[6/*float*/]), ::STRINGS[14/*", "*/]), ::g::Uno::Float::ToString(__this->Top, ::TYPES[6/*float*/])), ::STRINGS[14/*", "*/]), ::g::Uno::Float::ToString(__this->Right, ::TYPES[6/*float*/])), ::STRINGS[14/*", "*/]), ::g::Uno::Float::ToString(__this->Bottom, ::TYPES[6/*float*/])), void();
}

// public static Uno.Rect Transform(Uno.Rect r, float4x4 matrix) :160
void Rect__Transform_fn(Rect* r, ::g::Uno::Float4x4* matrix, Rect* __retval)
{
    *__retval = Rect__Transform(*r, *matrix);
}

// public static Uno.Rect Translate(Uno.Rect r, float2 offset) :169
void Rect__Translate_fn(Rect* r, ::g::Uno::Float2* offset, Rect* __retval)
{
    *__retval = Rect__Translate(*r, *offset);
}

// public float get_Width() :91
void Rect__get_Width_fn(Rect* __this, float* __retval)
{
    *__retval = __this->Width();
}

// public void set_Width(float value) :92
void Rect__set_Width_fn(Rect* __this, float* value)
{
    __this->Width(*value);
}

// public Rect(float left, float top, float right, float bottom) [instance] :10
void Rect::ctor_(float left, float top, float right, float bottom)
{
    Left = left;
    Top = top;
    Right = right;
    Bottom = bottom;
}

// public Rect(float2 pos, float2 size) [instance] :18
void Rect::ctor_1(::g::Uno::Float2 pos, ::g::Uno::Float2 size)
{
    Left = pos.X;
    Top = pos.Y;
    Right = (::g::Uno::Float::IsInfinity(size.X) ? size.X : Left + size.X);
    Bottom = (::g::Uno::Float::IsInfinity(size.Y) ? size.Y : Top + size.Y);
}

// public float get_Height() [instance] :97
float Rect::Height()
{
    return ::g::Uno::Float::IsInfinity(Bottom) ? Bottom : Bottom - Top;
}

// public void set_Height(float value) [instance] :98
void Rect::Height(float value)
{
    Bottom = (::g::Uno::Float::IsInfinity(value) ? value : Top + value);
}

// public bool Intersects(Uno.Rect r) [instance] :126
bool Rect::Intersects(Rect r)
{
    return !((((r.Left > Right) || (r.Right < Left)) || (r.Top > Bottom)) || (r.Bottom < Top));
}

// public float2 get_LeftBottom() [instance] :69
::g::Uno::Float2 Rect::LeftBottom()
{
    return ::g::Uno::Float2__New2(Left, Bottom);
}

// public float2 get_LeftTop() [instance] :59
::g::Uno::Float2 Rect::LeftTop()
{
    return ::g::Uno::Float2__New2(Left, Top);
}

// public float2 get_Maximum() [instance] :48
::g::Uno::Float2 Rect::Maximum()
{
    return ::g::Uno::Float2__New2(Right, Bottom);
}

// public void set_Maximum(float2 value) [instance] :49
void Rect::Maximum(::g::Uno::Float2 value)
{
    Right = value.X;
    Bottom = value.Y;
}

// public float2 get_Minimum() [instance] :42
::g::Uno::Float2 Rect::Minimum()
{
    return ::g::Uno::Float2__New2(Left, Top);
}

// public void set_Minimum(float2 value) [instance] :43
void Rect::Minimum(::g::Uno::Float2 value)
{
    Left = value.X;
    Top = value.Y;
}

// public float2 get_Position() [instance] :79
::g::Uno::Float2 Rect::Position()
{
    return Minimum();
}

// public void set_Position(float2 value) [instance] :80
void Rect::Position(::g::Uno::Float2 value)
{
    ::g::Uno::Float2 sz = Size();
    Left = value.X;
    Top = value.Y;
    Size(sz);
}

// public float2 get_RightBottom() [instance] :74
::g::Uno::Float2 Rect::RightBottom()
{
    return ::g::Uno::Float2__New2(Right, Bottom);
}

// public float2 get_RightTop() [instance] :64
::g::Uno::Float2 Rect::RightTop()
{
    return ::g::Uno::Float2__New2(Right, Top);
}

// public float2 get_Size() [instance] :103
::g::Uno::Float2 Rect::Size()
{
    return ::g::Uno::Float2__New2(Width(), Height());
}

// public void set_Size(float2 value) [instance] :104
void Rect::Size(::g::Uno::Float2 value)
{
    Width(value.X);
    Height(value.Y);
}

// public float get_Width() [instance] :91
float Rect::Width()
{
    return ::g::Uno::Float::IsInfinity(Right) ? Right : Right - Left;
}

// public void set_Width(float value) [instance] :92
void Rect::Width(float value)
{
    Right = (::g::Uno::Float::IsInfinity(value) ? value : Left + value);
}

// public static Uno.Rect ContainingPoints(float2 point0, float2 point1) [static] :226
Rect Rect__ContainingPoints(::g::Uno::Float2 point0, ::g::Uno::Float2 point1)
{
    float minX = point0.X;
    float maxX = point0.X;
    float minY = point0.Y;
    float maxY = point0.Y;
    minX = ::g::Uno::Math::Min1(minX, point1.X);
    maxX = ::g::Uno::Math::Max1(maxX, point1.X);
    minY = ::g::Uno::Math::Min1(minY, point1.Y);
    maxY = ::g::Uno::Math::Max1(maxY, point1.Y);
    return Rect__New1(minX, minY, maxX, maxY);
}

// public static Uno.Rect ContainingPoints(float2 point0, float2 point1, float2 point2, float2 point3) [static] :242
Rect Rect__ContainingPoints1(::g::Uno::Float2 point0, ::g::Uno::Float2 point1, ::g::Uno::Float2 point2, ::g::Uno::Float2 point3)
{
    float minX = point0.X;
    float maxX = point0.X;
    float minY = point0.Y;
    float maxY = point0.Y;
    minX = ::g::Uno::Math::Min1(minX, point1.X);
    maxX = ::g::Uno::Math::Max1(maxX, point1.X);
    minY = ::g::Uno::Math::Min1(minY, point1.Y);
    maxY = ::g::Uno::Math::Max1(maxY, point1.Y);
    minX = ::g::Uno::Math::Min1(minX, point2.X);
    maxX = ::g::Uno::Math::Max1(maxX, point2.X);
    minY = ::g::Uno::Math::Min1(minY, point2.Y);
    maxY = ::g::Uno::Math::Max1(maxY, point2.Y);
    minX = ::g::Uno::Math::Min1(minX, point3.X);
    maxX = ::g::Uno::Math::Max1(maxX, point3.X);
    minY = ::g::Uno::Math::Min1(minY, point3.Y);
    maxY = ::g::Uno::Math::Max1(maxY, point3.Y);
    return Rect__New1(minX, minY, maxX, maxY);
}

// public static Uno.Rect Inflate(Uno.Rect r, float size) [static] :201
Rect Rect__Inflate(Rect r, float size)
{
    return Rect__Inflate1(r, ::g::Uno::Float2__New2(size, size));
}

// public static Uno.Rect Inflate(Uno.Rect r, float2 size) [static] :192
Rect Rect__Inflate1(Rect r, ::g::Uno::Float2 size)
{
    return Rect__New1(r.Left - size.X, r.Top - size.Y, r.Right + size.X, r.Bottom + size.Y);
}

// public static Uno.Rect Intersect(Uno.Rect a, Uno.Rect b) [static] :150
Rect Rect__Intersect(Rect a, Rect b)
{
    return Rect__New1(::g::Uno::Math::Max1(a.Left, b.Left), ::g::Uno::Math::Max1(a.Top, b.Top), ::g::Uno::Math::Min1(a.Right, b.Right), ::g::Uno::Math::Min1(a.Bottom, b.Bottom));
}

// public Rect New(float left, float top, float right, float bottom) [static] :10
Rect Rect__New1(float left, float top, float right, float bottom)
{
    Rect obj1;
    obj1.ctor_(left, top, right, bottom);
    return obj1;
}

// public Rect New(float2 pos, float2 size) [static] :18
Rect Rect__New2(::g::Uno::Float2 pos, ::g::Uno::Float2 size)
{
    Rect obj2;
    obj2.ctor_1(pos, size);
    return obj2;
}

// public static implicit operator Uno.Rect(Uno.Recti r) [static] :136
Rect Rect__op_Implicit(::g::Uno::Recti r)
{
    return Rect__New1((float)r.Left, (float)r.Top, (float)r.Right, (float)r.Bottom);
}

// public static Uno.Rect Scale(Uno.Rect r, float scale) [static] :187
Rect Rect__Scale(Rect r, float scale)
{
    return Rect__Scale1(r, ::g::Uno::Float2__New2(scale, scale));
}

// public static Uno.Rect Scale(Uno.Rect r, float2 scale) [static] :178
Rect Rect__Scale1(Rect r, ::g::Uno::Float2 scale)
{
    return Rect__New1(r.Left * scale.X, r.Top * scale.Y, r.Right * scale.X, r.Bottom * scale.Y);
}

// public static Uno.Rect Transform(Uno.Rect r, float4x4 matrix) [static] :160
Rect Rect__Transform(Rect r, ::g::Uno::Float4x4 matrix)
{
    return Rect__ContainingPoints1(::g::Uno::Vector::TransformCoordinate(r.LeftTop(), matrix), ::g::Uno::Vector::TransformCoordinate(r.RightTop(), matrix), ::g::Uno::Vector::TransformCoordinate(r.RightBottom(), matrix), ::g::Uno::Vector::TransformCoordinate(r.LeftBottom(), matrix));
}

// public static Uno.Rect Translate(Uno.Rect r, float2 offset) [static] :169
Rect Rect__Translate(Rect r, ::g::Uno::Float2 offset)
{
    return Rect__New1(r.Left + offset.X, r.Top + offset.Y, r.Right + offset.X, r.Bottom + offset.Y);
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.4.3/Source/Uno/Rect.uno
// ---------------------------------------------------------------

// public struct Recti :269
// {
static void Recti_build(uType* type)
{
    ::STRINGS[14] = uString::Const(", ");
    ::TYPES[8] = ::g::Uno::Int_typeof();
    type->SetFields(0,
        ::TYPES[8/*int*/], offsetof(Recti, Left), 0,
        ::TYPES[8/*int*/], offsetof(Recti, Top), 0,
        ::TYPES[8/*int*/], offsetof(Recti, Right), 0,
        ::TYPES[8/*int*/], offsetof(Recti, Bottom), 0);
    type->Reflection.SetFields(4,
        new uField("Bottom", 3),
        new uField("Left", 0),
        new uField("Right", 2),
        new uField("Top", 1));
    type->Reflection.SetFunctions(16,
        new uFunction("get_Area", NULL, (void*)Recti__get_Area_fn, 0, false, ::TYPES[8/*int*/], 0),
        new uFunction("Contains", NULL, (void*)Recti__Contains1_fn, 0, false, ::g::Uno::Bool_typeof(), 1, type),
        new uFunction("Equals", NULL, (void*)Recti__Equals2_fn, 0, true, ::g::Uno::Bool_typeof(), 2, type, type),
        new uFunction("Inflate", NULL, (void*)Recti__Inflate_fn, 0, true, type, 2, type, ::TYPES[8/*int*/]),
        new uFunction("Inflate", NULL, (void*)Recti__Inflate1_fn, 0, true, type, 2, type, ::g::Uno::Int2_typeof()),
        new uFunction("Intersect", NULL, (void*)Recti__Intersect_fn, 0, true, type, 2, type, type),
        new uFunction("get_Maximum", NULL, (void*)Recti__get_Maximum_fn, 0, false, ::g::Uno::Int2_typeof(), 0),
        new uFunction("set_Maximum", NULL, (void*)Recti__set_Maximum_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int2_typeof()),
        new uFunction("get_Minimum", NULL, (void*)Recti__get_Minimum_fn, 0, false, ::g::Uno::Int2_typeof(), 0),
        new uFunction("set_Minimum", NULL, (void*)Recti__set_Minimum_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int2_typeof()),
        new uFunction(".ctor", NULL, (void*)Recti__New1_fn, 0, true, type, 4, ::TYPES[8/*int*/], ::TYPES[8/*int*/], ::TYPES[8/*int*/], ::TYPES[8/*int*/]),
        new uFunction(".ctor", NULL, (void*)Recti__New2_fn, 0, true, type, 2, ::g::Uno::Int2_typeof(), ::g::Uno::Int2_typeof()),
        new uFunction("get_Position", NULL, (void*)Recti__get_Position_fn, 0, false, ::g::Uno::Int2_typeof(), 0),
        new uFunction("set_Position", NULL, (void*)Recti__set_Position_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int2_typeof()),
        new uFunction("get_Size", NULL, (void*)Recti__get_Size_fn, 0, false, ::g::Uno::Int2_typeof(), 0),
        new uFunction("set_Size", NULL, (void*)Recti__set_Size_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int2_typeof()));
}

uStructType* Recti_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.Alignment = alignof(Recti);
    options.ValueSize = sizeof(Recti);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Recti", options);
    type->fp_build_ = Recti_build;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))Recti__ToString_fn;
    return type;
}

// public Recti(int left, int top, int right, int bottom) :273
void Recti__ctor__fn(Recti* __this, int* left, int* top, int* right, int* bottom)
{
    __this->ctor_(*left, *top, *right, *bottom);
}

// public Recti(int2 pos, int2 size) :281
void Recti__ctor_1_fn(Recti* __this, ::g::Uno::Int2* pos, ::g::Uno::Int2* size)
{
    __this->ctor_1(*pos, *size);
}

// public int get_Area() :348
void Recti__get_Area_fn(Recti* __this, int* __retval)
{
    *__retval = __this->Area();
}

// public bool Contains(Uno.Recti r) :351
void Recti__Contains1_fn(Recti* __this, Recti* r, bool* __retval)
{
    *__retval = __this->Contains1(*r);
}

// public static bool Equals(Uno.Recti rect1, Uno.Recti rect2) :289
void Recti__Equals2_fn(Recti* rect1, Recti* rect2, bool* __retval)
{
    *__retval = Recti__Equals2(*rect1, *rect2);
}

// public static Uno.Recti Inflate(Uno.Recti r, int size) :428
void Recti__Inflate_fn(Recti* r, int* size, Recti* __retval)
{
    *__retval = Recti__Inflate(*r, *size);
}

// public static Uno.Recti Inflate(Uno.Recti r, int2 size) :419
void Recti__Inflate1_fn(Recti* r, ::g::Uno::Int2* size, Recti* __retval)
{
    *__retval = Recti__Inflate1(*r, *size);
}

// public static Uno.Recti Intersect(Uno.Recti a, Uno.Recti b) :385
void Recti__Intersect_fn(Recti* a, Recti* b, Recti* __retval)
{
    *__retval = Recti__Intersect(*a, *b);
}

// public int2 get_Maximum() :305
void Recti__get_Maximum_fn(Recti* __this, ::g::Uno::Int2* __retval)
{
    *__retval = __this->Maximum();
}

// public void set_Maximum(int2 value) :306
void Recti__set_Maximum_fn(Recti* __this, ::g::Uno::Int2* value)
{
    __this->Maximum(*value);
}

// public int2 get_Minimum() :299
void Recti__get_Minimum_fn(Recti* __this, ::g::Uno::Int2* __retval)
{
    *__retval = __this->Minimum();
}

// public void set_Minimum(int2 value) :300
void Recti__set_Minimum_fn(Recti* __this, ::g::Uno::Int2* value)
{
    __this->Minimum(*value);
}

// public Recti New(int left, int top, int right, int bottom) :273
void Recti__New1_fn(int* left, int* top, int* right, int* bottom, Recti* __retval)
{
    *__retval = Recti__New1(*left, *top, *right, *bottom);
}

// public Recti New(int2 pos, int2 size) :281
void Recti__New2_fn(::g::Uno::Int2* pos, ::g::Uno::Int2* size, Recti* __retval)
{
    *__retval = Recti__New2(*pos, *size);
}

// public int2 get_Position() :336
void Recti__get_Position_fn(Recti* __this, ::g::Uno::Int2* __retval)
{
    *__retval = __this->Position();
}

// public void set_Position(int2 value) :337
void Recti__set_Position_fn(Recti* __this, ::g::Uno::Int2* value)
{
    __this->Position(*value);
}

// public int2 get_Size() :342
void Recti__get_Size_fn(Recti* __this, ::g::Uno::Int2* __retval)
{
    *__retval = __this->Size();
}

// public void set_Size(int2 value) :343
void Recti__set_Size_fn(Recti* __this, ::g::Uno::Int2* value)
{
    __this->Size(*value);
}

// public override sealed string ToString() :366
void Recti__ToString_fn(Recti* __this, uType* __type, uString** __retval)
{
    uStackFrame __("Uno.Recti", "ToString()");
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::Int::ToString(__this->Left, ::TYPES[8/*int*/]), ::STRINGS[14/*", "*/]), ::g::Uno::Int::ToString(__this->Top, ::TYPES[8/*int*/])), ::STRINGS[14/*", "*/]), ::g::Uno::Int::ToString(__this->Right, ::TYPES[8/*int*/])), ::STRINGS[14/*", "*/]), ::g::Uno::Int::ToString(__this->Bottom, ::TYPES[8/*int*/])), void();
}

// public Recti(int left, int top, int right, int bottom) [instance] :273
void Recti::ctor_(int left, int top, int right, int bottom)
{
    Left = left;
    Top = top;
    Right = right;
    Bottom = bottom;
}

// public Recti(int2 pos, int2 size) [instance] :281
void Recti::ctor_1(::g::Uno::Int2 pos, ::g::Uno::Int2 size)
{
    Left = pos.X;
    Top = pos.Y;
    Right = (Left + size.X);
    Bottom = (Top + size.Y);
}

// public int get_Area() [instance] :348
int Recti::Area()
{
    return (Right - Left) * (Bottom - Top);
}

// public bool Contains(Uno.Recti r) [instance] :351
bool Recti::Contains1(Recti r)
{
    return (((Left <= r.Left) && (Right >= r.Right)) && (Top <= r.Top)) && (Bottom >= r.Bottom);
}

// public int2 get_Maximum() [instance] :305
::g::Uno::Int2 Recti::Maximum()
{
    return ::g::Uno::Int2__New2(Right, Bottom);
}

// public void set_Maximum(int2 value) [instance] :306
void Recti::Maximum(::g::Uno::Int2 value)
{
    Right = value.X;
    Bottom = value.Y;
}

// public int2 get_Minimum() [instance] :299
::g::Uno::Int2 Recti::Minimum()
{
    return ::g::Uno::Int2__New2(Left, Top);
}

// public void set_Minimum(int2 value) [instance] :300
void Recti::Minimum(::g::Uno::Int2 value)
{
    Left = value.X;
    Top = value.Y;
}

// public int2 get_Position() [instance] :336
::g::Uno::Int2 Recti::Position()
{
    return Minimum();
}

// public void set_Position(int2 value) [instance] :337
void Recti::Position(::g::Uno::Int2 value)
{
    ::g::Uno::Int2 dp = ::g::Uno::Int2__op_Subtraction1(value, Position());
    Left = value.X;
    Right = (Right + dp.X);
    Top = value.Y;
    Bottom = (Bottom + dp.Y);
}

// public int2 get_Size() [instance] :342
::g::Uno::Int2 Recti::Size()
{
    return ::g::Uno::Int2__New2(Right - Left, Bottom - Top);
}

// public void set_Size(int2 value) [instance] :343
void Recti::Size(::g::Uno::Int2 value)
{
    Right = (Left + value.X);
    Bottom = (Top + value.Y);
}

// public static bool Equals(Uno.Recti rect1, Uno.Recti rect2) [static] :289
bool Recti__Equals2(Recti rect1, Recti rect2)
{
    return (((rect1.Left == rect2.Left) && (rect1.Top == rect2.Top)) && (rect1.Right == rect2.Right)) && (rect1.Bottom == rect2.Bottom);
}

// public static Uno.Recti Inflate(Uno.Recti r, int size) [static] :428
Recti Recti__Inflate(Recti r, int size)
{
    return Recti__Inflate1(r, ::g::Uno::Int2__New2(size, size));
}

// public static Uno.Recti Inflate(Uno.Recti r, int2 size) [static] :419
Recti Recti__Inflate1(Recti r, ::g::Uno::Int2 size)
{
    return Recti__New1(r.Left - size.X, r.Top - size.Y, r.Right + size.X, r.Bottom + size.Y);
}

// public static Uno.Recti Intersect(Uno.Recti a, Uno.Recti b) [static] :385
Recti Recti__Intersect(Recti a, Recti b)
{
    return Recti__New1(::g::Uno::Math::Max8(a.Left, b.Left), ::g::Uno::Math::Max8(a.Top, b.Top), ::g::Uno::Math::Min8(a.Right, b.Right), ::g::Uno::Math::Min8(a.Bottom, b.Bottom));
}

// public Recti New(int left, int top, int right, int bottom) [static] :273
Recti Recti__New1(int left, int top, int right, int bottom)
{
    Recti obj4;
    obj4.ctor_(left, top, right, bottom);
    return obj4;
}

// public Recti New(int2 pos, int2 size) [static] :281
Recti Recti__New2(::g::Uno::Int2 pos, ::g::Uno::Int2 size)
{
    Recti obj5;
    obj5.ctor_1(pos, size);
    return obj5;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.4.3/Source/Uno/SByte.uno
// ----------------------------------------------------------------

// public intrinsic struct SByte :12
// {
static void SByte_build(uType* type)
{
    ::TYPES[3] = uObject_typeof();
}

uStructType* SByte_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.Alignment = alignof(int8_t);
    options.ValueSize = sizeof(int8_t);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.SByte", options);
    type->fp_build_ = SByte_build;
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))SByte__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int*))SByte__GetHashCode_fn;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))SByte__ToString_fn;
    return type;
}

// public override sealed bool Equals(object o) :19
void SByte__Equals_fn(int8_t* __this, uType* __type, uObject* o, bool* __retval)
{
    bool ret1;
    return *__retval = (::g::Uno::Object__Equals_fn(uBox<int8_t>(__type, *__this, U_ALLOCA(__type->ObjectSize)), o, &ret1), ret1), void();
}

// public override sealed int GetHashCode() :25
void SByte__GetHashCode_fn(int8_t* __this, uType* __type, int* __retval)
{
    return *__retval = (int)*__this, void();
}

// public override sealed string ToString() :36
void SByte__ToString_fn(int8_t* __this, uType* __type, uString** __retval)
{
    uBase::String ansi((int)*__this);
    return *__retval = uString::Ansi(ansi.Ptr(), ansi.Length()), void();
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.4.3/Source/Uno/SByte2.uno
// -----------------------------------------------------------------

// public intrinsic struct SByte2 :7
// {
static void SByte2_build(uType* type)
{
    ::STRINGS[14] = uString::Const(", ");
    ::TYPES[3] = uObject_typeof();
    ::TYPES[9] = ::g::Uno::SByte_typeof();
    type->SetFields(0,
        ::TYPES[9/*sbyte*/], offsetof(SByte2, X), 0,
        ::TYPES[9/*sbyte*/], offsetof(SByte2, Y), 0);
    type->Reflection.SetFields(2,
        new uField("X", 0),
        new uField("Y", 1));
}

uStructType* SByte2_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.Alignment = alignof(SByte2);
    options.ValueSize = sizeof(SByte2);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.SByte2", options);
    type->fp_build_ = SByte2_build;
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))SByte2__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int*))SByte2__GetHashCode_fn;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))SByte2__ToString_fn;
    return type;
}

// public override sealed bool Equals(object o) :50
void SByte2__Equals_fn(SByte2* __this, uType* __type, uObject* o, bool* __retval)
{
    bool ret3;
    return *__retval = (::g::Uno::Object__Equals_fn(uBox(__type, *__this, U_ALLOCA(__type->ObjectSize)), o, &ret3), ret3), void();
}

// public override sealed int GetHashCode() :51
void SByte2__GetHashCode_fn(SByte2* __this, uType* __type, int* __retval)
{
    int ret4;
    return *__retval = (::g::Uno::Object__GetHashCode_fn(uBox(__type, *__this, U_ALLOCA(__type->ObjectSize)), &ret4), ret4), void();
}

// public override sealed string ToString() :52
void SByte2__ToString_fn(SByte2* __this, uType* __type, uString** __retval)
{
    uStackFrame __("sbyte2", "ToString()");
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::SByte::ToString(__this->X, ::TYPES[9/*sbyte*/]), ::STRINGS[14/*", "*/]), ::g::Uno::SByte::ToString(__this->Y, ::TYPES[9/*sbyte*/])), void();
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.4.3/Source/Uno/SByte4.uno
// -----------------------------------------------------------------

// public intrinsic struct SByte4 :7
// {
static void SByte4_build(uType* type)
{
    ::STRINGS[14] = uString::Const(", ");
    ::TYPES[3] = uObject_typeof();
    ::TYPES[9] = ::g::Uno::SByte_typeof();
    type->SetFields(0,
        ::TYPES[9/*sbyte*/], offsetof(SByte4, X), 0,
        ::TYPES[9/*sbyte*/], offsetof(SByte4, Y), 0,
        ::TYPES[9/*sbyte*/], offsetof(SByte4, Z), 0,
        ::TYPES[9/*sbyte*/], offsetof(SByte4, W), 0);
    type->Reflection.SetFields(4,
        new uField("W", 3),
        new uField("X", 0),
        new uField("Y", 1),
        new uField("Z", 2));
}

uStructType* SByte4_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.Alignment = alignof(SByte4);
    options.ValueSize = sizeof(SByte4);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.SByte4", options);
    type->fp_build_ = SByte4_build;
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))SByte4__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int*))SByte4__GetHashCode_fn;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))SByte4__ToString_fn;
    return type;
}

// public override sealed bool Equals(object o) :58
void SByte4__Equals_fn(SByte4* __this, uType* __type, uObject* o, bool* __retval)
{
    bool ret7;
    return *__retval = (::g::Uno::Object__Equals_fn(uBox(__type, *__this, U_ALLOCA(__type->ObjectSize)), o, &ret7), ret7), void();
}

// public override sealed int GetHashCode() :59
void SByte4__GetHashCode_fn(SByte4* __this, uType* __type, int* __retval)
{
    int ret8;
    return *__retval = (::g::Uno::Object__GetHashCode_fn(uBox(__type, *__this, U_ALLOCA(__type->ObjectSize)), &ret8), ret8), void();
}

// public override sealed string ToString() :60
void SByte4__ToString_fn(SByte4* __this, uType* __type, uString** __retval)
{
    uStackFrame __("sbyte4", "ToString()");
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::SByte::ToString(__this->X, ::TYPES[9/*sbyte*/]), ::STRINGS[14/*", "*/]), ::g::Uno::SByte::ToString(__this->Y, ::TYPES[9/*sbyte*/])), ::STRINGS[14/*", "*/]), ::g::Uno::SByte::ToString(__this->Z, ::TYPES[9/*sbyte*/])), ::STRINGS[14/*", "*/]), ::g::Uno::SByte::ToString(__this->W, ::TYPES[9/*sbyte*/])), void();
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.4.3/Source/Uno/Short.uno
// ----------------------------------------------------------------

// public intrinsic struct Short :12
// {
static void Short_build(uType* type)
{
    ::TYPES[3] = uObject_typeof();
}

uStructType* Short_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.Alignment = alignof(int16_t);
    options.ValueSize = sizeof(int16_t);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Short", options);
    type->fp_build_ = Short_build;
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))Short__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int*))Short__GetHashCode_fn;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))Short__ToString_fn;
    return type;
}

// public override sealed bool Equals(object o) :18
void Short__Equals_fn(int16_t* __this, uType* __type, uObject* o, bool* __retval)
{
    bool ret1;
    return *__retval = (::g::Uno::Object__Equals_fn(uBox<int16_t>(__type, *__this, U_ALLOCA(__type->ObjectSize)), o, &ret1), ret1), void();
}

// public override sealed int GetHashCode() :24
void Short__GetHashCode_fn(int16_t* __this, uType* __type, int* __retval)
{
    return *__retval = (int)*__this, void();
}

// public override sealed string ToString() :35
void Short__ToString_fn(int16_t* __this, uType* __type, uString** __retval)
{
    uBase::String ansi((int)*__this);
    return *__retval = uString::Ansi(ansi.Ptr(), ansi.Length()), void();
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.4.3/Source/Uno/Short2.uno
// -----------------------------------------------------------------

// public intrinsic struct Short2 :7
// {
static void Short2_build(uType* type)
{
    ::STRINGS[14] = uString::Const(", ");
    ::TYPES[3] = uObject_typeof();
    ::TYPES[10] = ::g::Uno::Short_typeof();
    type->SetFields(0,
        ::TYPES[10/*short*/], offsetof(Short2, X), 0,
        ::TYPES[10/*short*/], offsetof(Short2, Y), 0);
    type->Reflection.SetFields(2,
        new uField("X", 0),
        new uField("Y", 1));
}

uStructType* Short2_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.Alignment = alignof(Short2);
    options.ValueSize = sizeof(Short2);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Short2", options);
    type->fp_build_ = Short2_build;
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))Short2__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int*))Short2__GetHashCode_fn;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))Short2__ToString_fn;
    return type;
}

// public override sealed bool Equals(object o) :49
void Short2__Equals_fn(Short2* __this, uType* __type, uObject* o, bool* __retval)
{
    bool ret3;
    return *__retval = (::g::Uno::Object__Equals_fn(uBox(__type, *__this, U_ALLOCA(__type->ObjectSize)), o, &ret3), ret3), void();
}

// public override sealed int GetHashCode() :50
void Short2__GetHashCode_fn(Short2* __this, uType* __type, int* __retval)
{
    int ret4;
    return *__retval = (::g::Uno::Object__GetHashCode_fn(uBox(__type, *__this, U_ALLOCA(__type->ObjectSize)), &ret4), ret4), void();
}

// public override sealed string ToString() :51
void Short2__ToString_fn(Short2* __this, uType* __type, uString** __retval)
{
    uStackFrame __("short2", "ToString()");
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::Short::ToString(__this->X, ::TYPES[10/*short*/]), ::STRINGS[14/*", "*/]), ::g::Uno::Short::ToString(__this->Y, ::TYPES[10/*short*/])), void();
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.4.3/Source/Uno/Short4.uno
// -----------------------------------------------------------------

// public intrinsic struct Short4 :7
// {
static void Short4_build(uType* type)
{
    ::STRINGS[14] = uString::Const(", ");
    ::TYPES[3] = uObject_typeof();
    ::TYPES[10] = ::g::Uno::Short_typeof();
    type->SetFields(0,
        ::TYPES[10/*short*/], offsetof(Short4, X), 0,
        ::TYPES[10/*short*/], offsetof(Short4, Y), 0,
        ::TYPES[10/*short*/], offsetof(Short4, Z), 0,
        ::TYPES[10/*short*/], offsetof(Short4, W), 0);
    type->Reflection.SetFields(4,
        new uField("W", 3),
        new uField("X", 0),
        new uField("Y", 1),
        new uField("Z", 2));
}

uStructType* Short4_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.Alignment = alignof(Short4);
    options.ValueSize = sizeof(Short4);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Short4", options);
    type->fp_build_ = Short4_build;
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))Short4__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int*))Short4__GetHashCode_fn;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))Short4__ToString_fn;
    return type;
}

// public override sealed bool Equals(object o) :58
void Short4__Equals_fn(Short4* __this, uType* __type, uObject* o, bool* __retval)
{
    bool ret7;
    return *__retval = (::g::Uno::Object__Equals_fn(uBox(__type, *__this, U_ALLOCA(__type->ObjectSize)), o, &ret7), ret7), void();
}

// public override sealed int GetHashCode() :59
void Short4__GetHashCode_fn(Short4* __this, uType* __type, int* __retval)
{
    int ret8;
    return *__retval = (::g::Uno::Object__GetHashCode_fn(uBox(__type, *__this, U_ALLOCA(__type->ObjectSize)), &ret8), ret8), void();
}

// public override sealed string ToString() :60
void Short4__ToString_fn(Short4* __this, uType* __type, uString** __retval)
{
    uStackFrame __("short4", "ToString()");
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::Short::ToString(__this->X, ::TYPES[10/*short*/]), ::STRINGS[14/*", "*/]), ::g::Uno::Short::ToString(__this->Y, ::TYPES[10/*short*/])), ::STRINGS[14/*", "*/]), ::g::Uno::Short::ToString(__this->Z, ::TYPES[10/*short*/])), ::STRINGS[14/*", "*/]), ::g::Uno::Short::ToString(__this->W, ::TYPES[10/*short*/])), void();
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.4.3/Source/Uno/String.uno
// -----------------------------------------------------------------

// public intrinsic sealed class String :13
// {
// static generated String() :13
static void String__cctor__fn(uType* __type)
{
    String::Empty_ = ::STRINGS[25/*""*/];
}

static void String_build(uType* type)
{
    ::STRINGS[25] = uString::Const("");
    ::STRINGS[37] = uString::Const("value");
    ::STRINGS[38] = uString::Const("startIndex");
    ::STRINGS[39] = uString::Const("str");
    ::STRINGS[40] = uString::Const("pos");
    ::STRINGS[41] = uString::Const("oldValue");
    ::TYPES[11] = ::g::Uno::Char_typeof()->Array();
    ::TYPES[12] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Uno::Runtime::Implementation::Internal::FormatStringToken_typeof(), NULL);
    ::TYPES[13] = type->Array();
    ::TYPES[14] = ::TYPES[11/*char[]*/]->Array();
    type->SetFields(0,
        type, (uintptr_t)&String::Empty_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("Empty", 0));
    type->Reflection.SetFunctions(27,
        new uFunction("Compare", NULL, (void*)String__Compare_fn, 0, true, ::g::Uno::Int_typeof(), 2, type, type),
        new uFunction("Concat", NULL, (void*)String__Concat_fn, 0, true, type, 2, uObject_typeof(), uObject_typeof()),
        new uFunction("Concat", NULL, (void*)String__Concat1_fn, 0, true, type, 2, type, type),
        new uFunction("Contains", NULL, (void*)String__Contains_fn, 0, false, ::g::Uno::Bool_typeof(), 1, type),
        new uFunction("EndsWith", NULL, (void*)String__EndsWith_fn, 0, false, ::g::Uno::Bool_typeof(), 1, type),
        new uFunction("Equals", NULL, (void*)String__Equals2_fn, 0, false, ::g::Uno::Bool_typeof(), 1, type),
        new uFunction("Equals", NULL, (void*)String__Equals3_fn, 0, true, ::g::Uno::Bool_typeof(), 2, type, type),
        new uFunction("Format", NULL, (void*)String__Format_fn, 0, true, type, 2, type, uObject_typeof()->Array()),
        new uFunction("IndexOf", NULL, (void*)String__IndexOf_fn, 0, false, ::g::Uno::Int_typeof(), 2, ::g::Uno::Char_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("IndexOf", NULL, (void*)String__IndexOf1_fn, 0, false, ::g::Uno::Int_typeof(), 2, type, ::g::Uno::Int_typeof()),
        new uFunction("Insert", NULL, (void*)String__Insert_fn, 0, false, type, 2, ::g::Uno::Int_typeof(), type),
        new uFunction("IsNullOrEmpty", NULL, (void*)String__IsNullOrEmpty_fn, 0, true, ::g::Uno::Bool_typeof(), 1, type),
        new uFunction("Join", NULL, (void*)String__Join_fn, 0, true, type, 2, type, ::TYPES[13/*string[]*/]),
        new uFunction("LastIndexOf", NULL, (void*)String__LastIndexOf_fn, 0, false, ::g::Uno::Int_typeof(), 1, ::g::Uno::Char_typeof()),
        new uFunction("LastIndexOf", NULL, (void*)String__LastIndexOf1_fn, 0, false, ::g::Uno::Int_typeof(), 2, ::g::Uno::Char_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("Replace", NULL, (void*)String__Replace_fn, 0, false, type, 2, ::g::Uno::Char_typeof(), ::g::Uno::Char_typeof()),
        new uFunction("Replace", NULL, (void*)String__Replace1_fn, 0, false, type, 2, type, type),
        new uFunction("Split", NULL, (void*)String__Split_fn, 0, false, ::TYPES[13/*string[]*/], 1, ::TYPES[11/*char[]*/]),
        new uFunction("StartsWith", NULL, (void*)String__StartsWith_fn, 0, false, ::g::Uno::Bool_typeof(), 1, type),
        new uFunction("Substring", NULL, (void*)String__Substring_fn, 0, false, type, 1, ::g::Uno::Int_typeof()),
        new uFunction("Substring", NULL, (void*)String__Substring1_fn, 0, false, type, 2, ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("ToCharArray", NULL, (void*)String__ToCharArray_fn, 0, false, ::TYPES[11/*char[]*/], 0),
        new uFunction("ToCharArray", NULL, (void*)String__ToCharArray1_fn, 0, false, ::TYPES[11/*char[]*/], 2, ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("ToLower", NULL, (void*)String__ToLower_fn, 0, false, type, 0),
        new uFunction("ToUpper", NULL, (void*)String__ToUpper_fn, 0, false, type, 0),
        new uFunction("Trim", NULL, (void*)String__Trim_fn, 0, false, type, 0),
        new uFunction("Trim", NULL, (void*)String__Trim1_fn, 0, false, type, 1, ::TYPES[11/*char[]*/]));
}

uType* String_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(String);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.String", options);
    type->fp_build_ = String_build;
    type->fp_cctor_ = String__cctor__fn;
    type->fp_Equals = (void(*)(uObject*, uObject*, bool*))String__Equals_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int*))String__GetHashCode_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))String__ToString_fn;
    return type;
}

// public static int Compare(string a, string b) :648
void String__Compare_fn(uString* a, uString* b, int* __retval)
{
    *__retval = String::Compare(a, b);
}

// public static string Concat(object a, object b) :229
void String__Concat_fn(uObject* a, uObject* b, uString** __retval)
{
    *__retval = String::Concat(a, b);
}

// public static string Concat(string a, string b) :186
void String__Concat1_fn(uString* a, uString* b, uString** __retval)
{
    *__retval = String::Concat1(a, b);
}

// public bool Contains(string str) :672
void String__Contains_fn(uString* __this, uString* str, bool* __retval)
{
    *__retval = String::Contains(__this, str);
}

// public bool EndsWith(string value) :320
void String__EndsWith_fn(uString* __this, uString* value, bool* __retval)
{
    *__retval = String::EndsWith(__this, value);
}

// public override sealed bool Equals(object other) :136
void String__Equals_fn(uString* __this, uObject* other, bool* __retval)
{
    if (other != NULL && __this->__type == other->__type)
    {
        uString* str = (uString*)other;
        return *__retval = __this->_length == str->_length && !memcmp(__this->_ptr, str->_ptr, sizeof(uChar) * __this->_length), void();
    }
    
    return *__retval = false, void();
}

// public bool Equals(string other) :152
void String__Equals2_fn(uString* __this, uString* other, bool* __retval)
{
    *__retval = String::Equals2(__this, other);
}

// public static bool Equals(string left, string right) :157
void String__Equals3_fn(uString* left, uString* right, bool* __retval)
{
    *__retval = String::Equals3(left, right);
}

// public static string Format(string str, object[] objs) :661
void String__Format_fn(uString* str, uArray* objs, uString** __retval)
{
    *__retval = String::Format(str, objs);
}

// public override sealed int GetHashCode() :30
void String__GetHashCode_fn(uString* __this, int* __retval)
{
    return *__retval = (int)uBase::Default::Hash((const uint8_t*)__this->_ptr, sizeof(uChar) * __this->_length), void();
}

// public int IndexOf(char c, [int startIndex]) :274
void String__IndexOf_fn(uString* __this, uChar* c, int* startIndex, int* __retval)
{
    *__retval = String::IndexOf(__this, *c, *startIndex);
}

// public int IndexOf(string str, [int startIndex]) :619
void String__IndexOf1_fn(uString* __this, uString* str, int* startIndex, int* __retval)
{
    *__retval = String::IndexOf1(__this, str, *startIndex);
}

// private int IndexOfFirstNotInSet(char[] charSet) :558
void String__IndexOfFirstNotInSet_fn(uString* __this, uArray* charSet, int* __retval)
{
    *__retval = String::IndexOfFirstNotInSet(__this, charSet);
}

// private int IndexOfFirstNotWhiteSpace() :580
void String__IndexOfFirstNotWhiteSpace_fn(uString* __this, int* __retval)
{
    *__retval = String::IndexOfFirstNotWhiteSpace(__this);
}

// private int IndexOfLastNotInSet(char[] charSet) :566
void String__IndexOfLastNotInSet_fn(uString* __this, uArray* charSet, int* __retval)
{
    *__retval = String::IndexOfLastNotInSet(__this, charSet);
}

// private int IndexOfLastNotWhiteSpace() :588
void String__IndexOfLastNotWhiteSpace_fn(uString* __this, int* __retval)
{
    *__retval = String::IndexOfLastNotWhiteSpace(__this);
}

// public string Insert(int pos, string str) :596
void String__Insert_fn(uString* __this, int* pos, uString* str, uString** __retval)
{
    *__retval = String::Insert(__this, *pos, str);
}

// private bool InSet(char c, char[] charSet) :574
void String__InSet_fn(uString* __this, uChar* c, uArray* charSet, bool* __retval)
{
    *__retval = String::InSet(__this, *c, charSet);
}

// public static bool IsNullOrEmpty(string s) :420
void String__IsNullOrEmpty_fn(uString* s, bool* __retval)
{
    *__retval = String::IsNullOrEmpty(s);
}

// public static string Join(string separator, string[] value) :405
void String__Join_fn(uString* separator, uArray* value, uString** __retval)
{
    *__retval = String::Join(separator, value);
}

// public int LastIndexOf(char c) :286
void String__LastIndexOf_fn(uString* __this, uChar* c, int* __retval)
{
    *__retval = String::LastIndexOf(__this, *c);
}

// public int LastIndexOf(char c, [int startIndex]) :291
void String__LastIndexOf1_fn(uString* __this, uChar* c, int* startIndex, int* __retval)
{
    *__retval = String::LastIndexOf1(__this, *c, *startIndex);
}

// private bool MatchesAt(string str, int pos) :640
void String__MatchesAt_fn(uString* __this, uString* str, int* pos, bool* __retval)
{
    *__retval = String::MatchesAt(__this, str, *pos);
}

// public static operator +(object a, string b) :244
void String__op_Addition_fn(uObject* a, uString* b, uString** __retval)
{
    *__retval = String::op_Addition(a, b);
}

// public static operator +(string a, object b) :239
void String__op_Addition1_fn(uString* a, uObject* b, uString** __retval)
{
    *__retval = String::op_Addition1(a, b);
}

// public static operator +(string a, string b) :234
void String__op_Addition2_fn(uString* a, uString* b, uString** __retval)
{
    *__retval = String::op_Addition2(a, b);
}

// public static operator ==(string left, string right) :176
void String__op_Equality_fn(uString* left, uString* right, bool* __retval)
{
    *__retval = String::op_Equality(left, right);
}

// public static operator !=(string left, string right) :181
void String__op_Inequality_fn(uString* left, uString* right, bool* __retval)
{
    *__retval = String::op_Inequality(left, right);
}

// public string Replace(char oldChar, char newChar) :52
void String__Replace_fn(uString* __this, uChar* oldChar, uChar* newChar, uString** __retval)
{
    *__retval = String::Replace(__this, *oldChar, *newChar);
}

// public string Replace(string oldValue, string newValue) :63
void String__Replace1_fn(uString* __this, uString* oldValue, uString* newValue, uString** __retval)
{
    *__retval = String::Replace1(__this, oldValue, newValue);
}

// public string[] Split(char[] splitChars) :350
void String__Split_fn(uString* __this, uArray* splitChars, uArray** __retval)
{
    *__retval = String::Split(__this, splitChars);
}

// public bool StartsWith(string value) :306
void String__StartsWith_fn(uString* __this, uString* value, bool* __retval)
{
    *__retval = String::StartsWith(__this, value);
}

// private char[] SubCharArray(int start, int len) :92
void String__SubCharArray_fn(uString* __this, int* start, int* len, uArray** __retval)
{
    *__retval = String::SubCharArray(__this, *start, *len);
}

// public string Substring(int start) :269
void String__Substring_fn(uString* __this, int* start, uString** __retval)
{
    *__retval = String::Substring(__this, *start);
}

// public string Substring(int start, int len) :249
void String__Substring1_fn(uString* __this, int* start, int* len, uString** __retval)
{
    *__retval = String::Substring1(__this, *start, *len);
}

// public char[] ToCharArray() :345
void String__ToCharArray_fn(uString* __this, uArray** __retval)
{
    *__retval = String::ToCharArray(__this);
}

// public char[] ToCharArray(int start, int length) :335
void String__ToCharArray1_fn(uString* __this, int* start, int* length, uArray** __retval)
{
    *__retval = String::ToCharArray1(__this, *start, *length);
}

// public string ToLower() :102
void String__ToLower_fn(uString* __this, uString** __retval)
{
    *__retval = String::ToLower(__this);
}

// public override sealed string ToString() :47
void String__ToString_fn(uString* __this, uString** __retval)
{
    return *__retval = __this, void();
}

// public string ToUpper() :119
void String__ToUpper_fn(uString* __this, uString** __retval)
{
    *__retval = String::ToUpper(__this);
}

// public string Trim() :482
void String__Trim_fn(uString* __this, uString** __retval)
{
    *__retval = String::Trim(__this);
}

// public string Trim(char[] trimChars) :496
void String__Trim1_fn(uString* __this, uArray* trimChars, uString** __retval)
{
    *__retval = String::Trim1(__this, trimChars);
}

uSStrong<uString*> String::Empty_;

// public bool Contains(string str) [instance] :672
bool String::Contains(uString* __this, uString* str)
{
    uStackFrame __("string", "Contains(string)");
    return String::IndexOf1(__this, str, 0) >= 0;
}

// public bool EndsWith(string value) [instance] :320
bool String::EndsWith(uString* __this, uString* value)
{
    uStackFrame __("string", "EndsWith(string)");

    if (String::op_Equality(value, NULL))
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[37/*"value"*/]));

    if (__this->Length() < uPtr(value)->Length())
        return false;

    int index = __this->Length() - uPtr(value)->Length();

    for (int i = 0; i < value->Length(); i++)
        if (__this->Item(index++) != uPtr(value)->Item(i))
            return false;

    return true;
}

// public bool Equals(string other) [instance] :152
bool String::Equals2(uString* __this, uString* other)
{
    uStackFrame __("string", "Equals(string)");
    return String::Equals3(__this, other);
}

// public int IndexOf(char c, [int startIndex]) [instance] :274
int String::IndexOf(uString* __this, uChar c, int startIndex)
{
    uStackFrame __("string", "IndexOf(char,[int])");

    if (startIndex > __this->Length())
        U_THROW(::g::Uno::ArgumentOutOfRangeException::New6(::STRINGS[38/*"startIndex"*/]));

    for (int i = startIndex; i < __this->Length(); i++)
        if (__this->Item(i) == c)
            return i;

    return -1;
}

// public int IndexOf(string str, [int startIndex]) [instance] :619
int String::IndexOf1(uString* __this, uString* str, int startIndex)
{
    uStackFrame __("string", "IndexOf(string,[int])");

    if (String::op_Equality(str, NULL))
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[39/*"str"*/]));

    if (String::op_Equality(str, String::Empty_))
        return 0;

    if (startIndex > __this->Length())
        U_THROW(::g::Uno::ArgumentOutOfRangeException::New6(::STRINGS[38/*"startIndex"*/]));

    for (int hay = startIndex; hay < __this->Length(); hay++)
    {
        if (uPtr(str)->Length() > (__this->Length() - hay))
            return -1;

        if (String::MatchesAt(__this, str, hay))
            return hay;
    }

    return -1;
}

// private int IndexOfFirstNotInSet(char[] charSet) [instance] :558
int String::IndexOfFirstNotInSet(uString* __this, uArray* charSet)
{
    uStackFrame __("string", "IndexOfFirstNotInSet(char[])");

    for (int i = 0; i < __this->Length(); i++)
        if (!String::InSet(__this, __this->Item(i), charSet))
            return i;

    return -1;
}

// private int IndexOfFirstNotWhiteSpace() [instance] :580
int String::IndexOfFirstNotWhiteSpace(uString* __this)
{
    for (int i = 0; i < __this->Length(); i++)
        if (!::g::Uno::Char::IsWhiteSpace(__this->Item(i)))
            return i;

    return -1;
}

// private int IndexOfLastNotInSet(char[] charSet) [instance] :566
int String::IndexOfLastNotInSet(uString* __this, uArray* charSet)
{
    uStackFrame __("string", "IndexOfLastNotInSet(char[])");

    for (int i = __this->Length() - 1; i >= 0; i--)
        if (!String::InSet(__this, __this->Item(i), charSet))
            return i;

    return -1;
}

// private int IndexOfLastNotWhiteSpace() [instance] :588
int String::IndexOfLastNotWhiteSpace(uString* __this)
{
    for (int i = __this->Length() - 1; i >= 0; i--)
        if (!::g::Uno::Char::IsWhiteSpace(__this->Item(i)))
            return i;

    return -1;
}

// public string Insert(int pos, string str) [instance] :596
uString* String::Insert(uString* __this, int pos, uString* str)
{
    uStackFrame __("string", "Insert(int,string)");

    if (String::op_Equality(str, NULL))
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[39/*"str"*/]));

    if ((pos < 0) || (pos > __this->Length()))
        U_THROW(::g::Uno::ArgumentOutOfRangeException::New6(::STRINGS[40/*"pos"*/]));

    if (uPtr(str)->Length() == 0)
        return __this;

    if (__this->Length() == 0)
        return str;

    uArray* s = uArray::New(::TYPES[11/*char[]*/], __this->Length() + uPtr(str)->Length());

    for (int i = 0; i < pos; i++)
        uPtr(s)->Item<uChar>(i) = __this->Item(i);

    for (int i1 = 0; i1 < str->Length(); i1++)
        uPtr(s)->Item<uChar>(i1 + pos) = uPtr(str)->Item(i1);

    for (int i2 = pos; i2 < __this->Length(); i2++)
        uPtr(s)->Item<uChar>(i2 + uPtr(str)->Length()) = __this->Item(i2);

    return uString::CharArray(s);
}

// private bool InSet(char c, char[] charSet) [instance] :574
bool String::InSet(uString* __this, uChar c, uArray* charSet)
{
    uStackFrame __("string", "InSet(char,char[])");

    for (int i = 0; i < uPtr(charSet)->Length(); i++)
        if (uPtr(charSet)->Item<uChar>(i) == c)
            return true;

    return false;
}

// public int LastIndexOf(char c) [instance] :286
int String::LastIndexOf(uString* __this, uChar c)
{
    uStackFrame __("string", "LastIndexOf(char)");
    return String::LastIndexOf1(__this, c, __this->Length() - 1);
}

// public int LastIndexOf(char c, [int startIndex]) [instance] :291
int String::LastIndexOf1(uString* __this, uChar c, int startIndex)
{
    uStackFrame __("string", "LastIndexOf(char,[int])");

    if ((startIndex >= __this->Length()) && (__this->Length() > 0))
        U_THROW(::g::Uno::ArgumentOutOfRangeException::New6(::STRINGS[38/*"startIndex"*/]));

    if (__this->Length() == 0)
        return -1;

    for (int i = startIndex; i >= 0; i--)
        if (__this->Item(i) == c)
            return i;

    return -1;
}

// private bool MatchesAt(string str, int pos) [instance] :640
bool String::MatchesAt(uString* __this, uString* str, int pos)
{
    uStackFrame __("string", "MatchesAt(string,int)");

    for (int i = 0; i < uPtr(str)->Length(); i++)
        if (((pos + i) == __this->Length()) || (__this->Item(pos + i) != uPtr(str)->Item(i)))
            return false;

    return true;
}

// public string Replace(char oldChar, char newChar) [instance] :52
uString* String::Replace(uString* __this, uChar oldChar, uChar newChar)
{
    uStackFrame __("string", "Replace(char,char)");
    uArray* s = uArray::New(::TYPES[11/*char[]*/], __this->Length());

    for (int i = 0; i < __this->Length(); i++)
    {
        uPtr(s)->Item<uChar>(i) = __this->Item(i);

        if (s->Item<uChar>(i) == oldChar)
            uPtr(s)->Item<uChar>(i) = newChar;
    }

    return uString::CharArray(s);
}

// public string Replace(string oldValue, string newValue) [instance] :63
uString* String::Replace1(uString* __this, uString* oldValue, uString* newValue)
{
    uStackFrame __("string", "Replace(string,string)");

    if (String::op_Equality(oldValue, NULL))
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[41/*"oldValue"*/]));

    if (String::op_Equality(oldValue, String::Empty_))
        U_THROW(::g::Uno::ArgumentException::New5(::STRINGS[25/*""*/], ::STRINGS[41/*"oldValue"*/]));

    int index = String::IndexOf1(__this, oldValue, 0);

    if (index == -1)
        return __this;

    ::g::Uno::Text::StringBuilder* sb = ::g::Uno::Text::StringBuilder::New1();
    int pos = 0;

    while (index != -1)
    {
        uPtr(sb)->Append1(String::SubCharArray(__this, pos, index - pos));
        sb->Append2(newValue);
        pos = index + uPtr(oldValue)->Length();
        index = String::IndexOf1(__this, oldValue, pos);
    }

    sb->Append1(String::SubCharArray(__this, pos, __this->Length() - pos));
    return sb->ToString();
}

// public string[] Split(char[] splitChars) [instance] :350
uArray* String::Split(uString* __this, uArray* splitChars)
{
    uStackFrame __("string", "Split(char[])");

    if ((splitChars == NULL) || (uPtr(splitChars)->Length() == 0))
        splitChars = uArray::Init<int>(::TYPES[11/*char[]*/], 4, ' ', 9, 10, 13);

    int splitCount = 0;
    int charCount = 0;

    for (int i = 0; i < __this->Length(); i++)

        for (int k = 0; k < uPtr(splitChars)->Length(); k++)
            if (__this->Item(i) == uPtr(splitChars)->Item<uChar>(k))
                splitCount++;

    uArray* r = uArray::New(::TYPES[13/*string[]*/], splitCount + 1);
    uArray* ch = uArray::New(::TYPES[14/*char[][]*/], splitCount + 1);
    splitCount = 0;
    int start = 0;

    for (int i1 = 0; i1 < __this->Length(); i1++)
    {
        bool found = false;

        for (int k1 = 0; k1 < uPtr(splitChars)->Length(); k1++)
            if (__this->Item(i1) == uPtr(splitChars)->Item<uChar>(k1))
            {
                uPtr(ch)->Strong<uArray*>(splitCount) = uArray::New(::TYPES[11/*char[]*/], charCount);

                for (int n = 0; n < charCount; n++)
                    uPtr(uPtr(ch)->Strong<uArray*>(splitCount))->Item<uChar>(n) = __this->Item(start + n);

                start = i1 + 1;
                splitCount++;
                charCount = 0;
                found = true;
                break;
            }

        if (!found)
            charCount++;
    }

    ch->Strong<uArray*>(splitCount) = uArray::New(::TYPES[11/*char[]*/], charCount);

    for (int n1 = 0; n1 < charCount; n1++)
        uPtr(uPtr(ch)->Strong<uArray*>(splitCount))->Item<uChar>(n1) = __this->Item(start + n1);

    for (int i2 = 0; i2 < ch->Length(); i2++)
        uPtr(r)->Strong<uString*>(i2) = uString::CharArray(uPtr(ch)->Strong<uArray*>(i2));

    return r;
}

// public bool StartsWith(string value) [instance] :306
bool String::StartsWith(uString* __this, uString* value)
{
    uStackFrame __("string", "StartsWith(string)");

    if (String::op_Equality(value, NULL))
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[37/*"value"*/]));

    if (__this->Length() < uPtr(value)->Length())
        return false;

    for (int i = 0; i < uPtr(value)->Length(); i++)
        if (__this->Item(i) != uPtr(value)->Item(i))
            return false;

    return true;
}

// private char[] SubCharArray(int start, int len) [instance] :92
uArray* String::SubCharArray(uString* __this, int start, int len)
{
    uStackFrame __("string", "SubCharArray(int,int)");
    uArray* chars = uArray::New(::TYPES[11/*char[]*/], len);

    for (int i = 0; i < len; i++)
        uPtr(chars)->Item<uChar>(i) = __this->Item(start + i);

    return chars;
}

// public string Substring(int start) [instance] :269
uString* String::Substring(uString* __this, int start)
{
    uStackFrame __("string", "Substring(int)");
    return String::Substring1(__this, start, __this->Length() - start);
}

// public string Substring(int start, int len) [instance] :249
uString* String::Substring1(uString* __this, int start, int len)
{
    uStackFrame __("string", "Substring(int,int)");

    if ((start == __this->Length()) && (len == 0))
        return String::Empty_;

    uArray* s = uArray::New(::TYPES[11/*char[]*/], len);

    for (int i = 0; i < len; i++)
        uPtr(s)->Item<uChar>(i) = __this->Item(start + i);

    return uString::CharArray(s);
}

// public char[] ToCharArray() [instance] :345
uArray* String::ToCharArray(uString* __this)
{
    uStackFrame __("string", "ToCharArray()");
    return String::ToCharArray1(__this, 0, __this->Length());
}

// public char[] ToCharArray(int start, int length) [instance] :335
uArray* String::ToCharArray1(uString* __this, int start, int length)
{
    uStackFrame __("string", "ToCharArray(int,int)");
    uArray* result = uArray::New(::TYPES[11/*char[]*/], length);

    for (int i = 0; i < length; i++)
        uPtr(result)->Item<uChar>(i) = __this->Item(start + i);

    return result;
}

// public string ToLower() [instance] :102
uString* String::ToLower(uString* __this)
{
    uStackFrame __("string", "ToLower()");
    uArray* chars = uArray::New(::TYPES[11/*char[]*/], __this->Length());

    for (int i = 0; i < __this->Length(); i++)
        uPtr(chars)->Item<uChar>(i) = ::g::Uno::Char::ToLower(__this->Item(i));

    return uString::CharArray(chars);
}

// public string ToUpper() [instance] :119
uString* String::ToUpper(uString* __this)
{
    uStackFrame __("string", "ToUpper()");
    uArray* chars = uArray::New(::TYPES[11/*char[]*/], __this->Length());

    for (int i = 0; i < __this->Length(); i++)
        uPtr(chars)->Item<uChar>(i) = ::g::Uno::Char::ToUpper(__this->Item(i));

    return uString::CharArray(chars);
}

// public string Trim() [instance] :482
uString* String::Trim(uString* __this)
{
    uStackFrame __("string", "Trim()");

    if (String::op_Equality(__this, String::Empty_))
        return String::Empty_;

    int first = String::IndexOfFirstNotWhiteSpace(__this);

    if (first == -1)
        return String::Empty_;

    int last = String::IndexOfLastNotWhiteSpace(__this);
    int length = (last - first) + 1;
    return String::Substring1(__this, first, length);
}

// public string Trim(char[] trimChars) [instance] :496
uString* String::Trim1(uString* __this, uArray* trimChars)
{
    uStackFrame __("string", "Trim(char[])");

    if (String::op_Equality(__this, String::Empty_))
        return String::Empty_;

    int first = String::IndexOfFirstNotInSet(__this, trimChars);

    if (first == -1)
        return String::Empty_;

    int last = String::IndexOfLastNotInSet(__this, trimChars);
    int length = (last - first) + 1;
    return String::Substring1(__this, first, length);
}

// public static int Compare(string a, string b) [static] :648
int String::Compare(uString* a, uString* b)
{
    uStackFrame __("string", "Compare(string,string)");

    for (int i = 0; i < ::g::Uno::Math::Min8(uPtr(a)->Length(), uPtr(b)->Length()); i++)
    {
        if (uPtr(a)->Item(i) < uPtr(b)->Item(i))
            return -1;

        if (uPtr(b)->Item(i) < uPtr(a)->Item(i))
            return 1;
    }

    if (uPtr(a)->Length() < uPtr(b)->Length())
        return -1;

    if (uPtr(b)->Length() < uPtr(a)->Length())
        return 1;

    return 0;
}

// public static string Concat(object a, object b) [static] :229
uString* String::Concat(uObject* a, uObject* b)
{
    uStackFrame __("string", "Concat(object,object)");
    return String::Concat1((a == NULL) ? uCast<uString*>(NULL, String_typeof()) : (uString*)::g::Uno::Object::ToString(uPtr(a)), (b == NULL) ? uCast<uString*>(NULL, String_typeof()) : (uString*)::g::Uno::Object::ToString(uPtr(b)));
}

// public static string Concat(string a, string b) [static] :186
uString* String::Concat1(uString* a, uString* b)
{
    uStackFrame __("string", "Concat(string,string)");

    if (::g::Uno::Object::ReferenceEquals(a, NULL) && ::g::Uno::Object::ReferenceEquals(b, NULL))
        return String::Empty_;

    if (::g::Uno::Object::ReferenceEquals(a, NULL))
        return b;

    if (::g::Uno::Object::ReferenceEquals(b, NULL))
        return a;

    uArray* s = uArray::New(::TYPES[11/*char[]*/], uPtr(a)->Length() + uPtr(b)->Length());

    for (int i = 0; i < a->Length(); i++)
        uPtr(s)->Item<uChar>(i) = uPtr(a)->Item(i);

    for (int i1 = 0; i1 < b->Length(); i1++)
        uPtr(s)->Item<uChar>(uPtr(a)->Length() + i1) = uPtr(b)->Item(i1);

    return uString::CharArray(s);
}

// public static bool Equals(string left, string right) [static] :157
bool String::Equals3(uString* left, uString* right)
{
    uStackFrame __("string", "Equals(string,string)");

    if (::g::Uno::Object::ReferenceEquals(left, right))
        return true;

    if (::g::Uno::Object::ReferenceEquals(left, NULL) || ::g::Uno::Object::ReferenceEquals(right, NULL))
        return false;

    if (uPtr(left)->Length() != uPtr(right)->Length())
        return false;

    for (int i = 0; i < uPtr(left)->Length(); i++)
        if (uPtr(left)->Item(i) != uPtr(right)->Item(i))
            return false;

    return true;
}

// public static string Format(string str, object[] objs) [static] :661
uString* String::Format(uString* str, uArray* objs)
{
    uStackFrame __("string", "Format(string,object[])");
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Uno::Runtime::Implementation::Internal::FormatStringToken*> > ret3;
    ::g::Uno::Text::StringBuilder* builder = ::g::Uno::Text::StringBuilder::New1();
    ::g::Uno::Collections::List* tokens = ::g::Uno::Runtime::Implementation::Internal::FormatStringTokenizer::TokenizeFormatString(str);
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Uno::Runtime::Implementation::Internal::FormatStringToken*> > enum1 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(tokens), &ret3), ret3);

    try
    {
        {
            while (enum1.MoveNext(::TYPES[12/*Uno.Collections.List<Uno.Runtime.Implementation.Internal.FormatStringToken>.Enumerator*/]))
            {
                ::g::Uno::Runtime::Implementation::Internal::FormatStringToken* token = enum1.Current(::TYPES[12/*Uno.Collections.List<Uno.Runtime.Implementation.Internal.FormatStringToken>.Enumerator*/]);
                uPtr(builder)->Append2(uPtr(token)->ToString1(objs));
            }
        }
        {
            enum1.Dispose(::TYPES[12/*Uno.Collections.List<Uno.Runtime.Implementation.Internal.FormatStringToken>.Enumerator*/]);
        }
    }

    catch (const uThrowable& __t)
    {
        {
            enum1.Dispose(::TYPES[12/*Uno.Collections.List<Uno.Runtime.Implementation.Internal.FormatStringToken>.Enumerator*/]);
        }
                throw __t;
    }

    return builder->ToString();
}

// public static bool IsNullOrEmpty(string s) [static] :420
bool String::IsNullOrEmpty(uString* s)
{
    return String::op_Equality(s, NULL) || String::op_Equality(s, String::Empty_);
}

// public static string Join(string separator, string[] value) [static] :405
uString* String::Join(uString* separator, uArray* value)
{
    uStackFrame __("string", "Join(string,string[])");
    uString* result = ::STRINGS[25/*""*/];

    for (int i = 0; i < uPtr(value)->Length(); i++)
    {
        if (i > 0)
            result = String::op_Addition2(result, separator);

        result = String::op_Addition2(result, uPtr(value)->Strong<uString*>(i));
    }

    return result;
}

// public static operator +(object a, string b) [static] :244
uString* String::op_Addition(uObject* a, uString* b)
{
    uStackFrame __("string", "+(object,string)");
    return String::Concat(a, b);
}

// public static operator +(string a, object b) [static] :239
uString* String::op_Addition1(uString* a, uObject* b)
{
    uStackFrame __("string", "+(string,object)");
    return String::Concat(a, b);
}

// public static operator +(string a, string b) [static] :234
uString* String::op_Addition2(uString* a, uString* b)
{
    uStackFrame __("string", "+(string,string)");
    return String::Concat1(a, b);
}

// public static operator ==(string left, string right) [static] :176
bool String::op_Equality(uString* left, uString* right)
{
    uStackFrame __("string", "==(string,string)");
    return String::Equals3(left, right);
}

// public static operator !=(string left, string right) [static] :181
bool String::op_Inequality(uString* left, uString* right)
{
    uStackFrame __("string", "!=(string,string)");
    return !String::Equals3(left, right);
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.4.3/Source/Uno/Tuple.uno
// ----------------------------------------------------------------

// public static class Tuple :12
// {
static void Tuple_build(uType* type)
{
    ::TYPES[15] = ::g::Uno::Tuple2_typeof();
    type->MethodTypes[0]->SetPrecalc(
        ::TYPES[15/*Uno.Tuple`2*/]->MakeType(type->MethodTypes[0]->U(0), type->MethodTypes[0]->U(1), NULL));
    type->Reflection.SetFunctions(1,
        new uFunction("Create`2", type->MethodTypes[0], (void*)Tuple__Create1_fn, 0, true, ::TYPES[15/*Uno.Tuple`2*/]->MakeType(type->MethodTypes[0]->U(0), type->MethodTypes[0]->U(1), NULL), 2, type->MethodTypes[0]->U(0), type->MethodTypes[0]->U(1)));
}

uClassType* Tuple_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.MethodTypeCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Tuple", options);
    type->MethodTypes[0] = type->NewMethodType(2, 1,0);
    type->fp_build_ = Tuple_build;
    return type;
}

// public static Uno.Tuple<T1, T2> Create<T1, T2>(T1 item1, T2 item2) :15
void Tuple__Create1_fn(uType* __type, void* item1, void* item2, ::g::Uno::Tuple2** __retval)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Tuple<T1, T2>*/),
    };
    ::g::Uno::Tuple2* ret2;
    return *__retval = (::g::Uno::Tuple2__New1_fn(__types[0], item1, item2, &ret2), ret2), void();
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.4.3/Source/Uno/Tuple.uno
// ----------------------------------------------------------------

// public sealed class Tuple<T1, T2> :63
// {
static void Tuple2_build(uType* type)
{
    ::STRINGS[42] = uString::Const("(");
    ::STRINGS[43] = uString::Const(")");
    ::STRINGS[14] = uString::Const(", ");
    ::TYPES[16] = ::g::Uno::ITuple_typeof();
    type->SetInterfaces(
        ::TYPES[16/*Uno.ITuple*/], offsetof(Tuple2_type, interface0));
    type->SetFields(0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained,
        type->T(1), (uintptr_t)0, uFieldFlagsConstrained);
    type->Reflection.SetFunctions(3,
        new uFunction("get_Item1", NULL, (void*)Tuple2__get_Item1_fn, 0, false, type->T(0), 0),
        new uFunction("get_Item2", NULL, (void*)Tuple2__get_Item2_fn, 0, false, type->T(1), 0),
        new uFunction(".ctor", type, (void*)Tuple2__New1_fn, 0, true, type, 2, type->T(0), type->T(1)));
}

Tuple2_type* Tuple2_typeof()
{
    static uSStrong<Tuple2_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.GenericCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Tuple2);
    options.TypeSize = sizeof(Tuple2_type);
    type = (Tuple2_type*)uClassType::New("Uno.Tuple`2", options);
    type->fp_build_ = Tuple2_build;
    type->fp_Equals = (void(*)(uObject*, uObject*, bool*))Tuple2__Equals_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int*))Tuple2__GetHashCode_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))Tuple2__ToString_fn;
    type->interface0.fp_AppendItems = (void(*)(uObject*, ::g::Uno::Text::StringBuilder*))Tuple2__UnoITupleAppendItems_fn;
    return type;
}

// public Tuple(T1 item1, T2 item2) :68
void Tuple2__ctor__fn(Tuple2* __this, void* item1, void* item2)
{
    Tuple2__set_Item1_fn(__this, item1);
    Tuple2__set_Item2_fn(__this, item2);
}

// public override sealed bool Equals(object other) :74
void Tuple2__Equals_fn(Tuple2* __this, uObject* other, bool* __retval)
{
    uStackFrame __("Uno.Tuple`2", "Equals(object)");
    uT ret2(__this->__type->T(0), U_ALLOCA(__this->__type->T(0)->ValueSize));
    uT ret3(__this->__type->T(0), U_ALLOCA(__this->__type->T(0)->ValueSize));
    uT ret4(__this->__type->T(1), U_ALLOCA(__this->__type->T(1)->ValueSize));
    uT ret5(__this->__type->T(1), U_ALLOCA(__this->__type->T(1)->ValueSize));
    Tuple2* tother = uAs<Tuple2*>(other, __this->__type);
    return *__retval = (tother != NULL) ? ::g::Uno::Object::Equals(uBoxPtr(__this->__type->T(0), uPtr((Tuple2__get_Item1_fn(__this, &ret2), ret2)), U_ALLOCA(__this->__type->T(0)->ObjectSize)), uBoxPtr(__this->__type->T(0), (Tuple2__get_Item1_fn(uPtr(tother), &ret3), ret3))) && ::g::Uno::Object::Equals(uBoxPtr(__this->__type->T(1), uPtr((Tuple2__get_Item2_fn(__this, &ret4), ret4)), U_ALLOCA(__this->__type->T(1)->ObjectSize)), uBoxPtr(__this->__type->T(1), (Tuple2__get_Item2_fn(uPtr(tother), &ret5), ret5))) : false, void();
}

// public override sealed int GetHashCode() :82
void Tuple2__GetHashCode_fn(Tuple2* __this, int* __retval)
{
    uStackFrame __("Uno.Tuple`2", "GetHashCode()");
    uT ret6(__this->__type->T(0), U_ALLOCA(__this->__type->T(0)->ValueSize));
    uT ret7(__this->__type->T(1), U_ALLOCA(__this->__type->T(1)->ValueSize));
    return *__retval = ::g::Uno::Object::GetHashCode(uBoxPtr(__this->__type->T(0), uPtr((Tuple2__get_Item1_fn(__this, &ret6), ret6)), U_ALLOCA(__this->__type->T(0)->ObjectSize))) ^ ::g::Uno::Object::GetHashCode(uBoxPtr(__this->__type->T(1), uPtr((Tuple2__get_Item2_fn(__this, &ret7), ret7)), U_ALLOCA(__this->__type->T(1)->ObjectSize))), void();
}

// public generated T1 get_Item1() :65
void Tuple2__get_Item1_fn(Tuple2* __this, uTRef __retval)
{
    return __retval.Store(__this->_Item1()), void();
}

// private generated void set_Item1(T1 value) :65
void Tuple2__set_Item1_fn(Tuple2* __this, void* value)
{
    __this->_Item1() = value;
}

// public generated T2 get_Item2() :66
void Tuple2__get_Item2_fn(Tuple2* __this, uTRef __retval)
{
    return __retval.Store(__this->_Item2()), void();
}

// private generated void set_Item2(T2 value) :66
void Tuple2__set_Item2_fn(Tuple2* __this, void* value)
{
    __this->_Item2() = value;
}

// public Tuple New(T1 item1, T2 item2) :68
void Tuple2__New1_fn(uType* __type, void* item1, void* item2, Tuple2** __retval)
{
    Tuple2* obj1 = (Tuple2*)uNew(__type);
    Tuple2__ctor__fn(obj1, item1, item2);
    return *__retval = obj1, void();
}

// public override sealed string ToString() :87
void Tuple2__ToString_fn(Tuple2* __this, uString** __retval)
{
    uStackFrame __("Uno.Tuple`2", "ToString()");
    ::g::Uno::Text::StringBuilder* sb = ::g::Uno::Text::StringBuilder::New1();
    sb->Append2(::STRINGS[42/*"("*/]);
    ::g::Uno::ITuple::AppendItems(uInterface((uObject*)__this, ::TYPES[16/*Uno.ITuple*/]), sb);
    sb->Append2(::STRINGS[43/*")"*/]);
    return *__retval = sb->ToString(), void();
}

// private void Uno.ITuple.AppendItems(Uno.Text.StringBuilder sb) :96
void Tuple2__UnoITupleAppendItems_fn(Tuple2* __this, ::g::Uno::Text::StringBuilder* sb)
{
    uStackFrame __("Uno.Tuple`2", "Uno.ITuple.AppendItems(Uno.Text.StringBuilder)");
    uT ret8(__this->__type->T(0), U_ALLOCA(__this->__type->T(0)->ValueSize));
    uT ret9(__this->__type->T(1), U_ALLOCA(__this->__type->T(1)->ValueSize));
    uPtr(sb)->Append2(::g::Uno::Object::ToString(uBoxPtr(__this->__type->T(0), uPtr((Tuple2__get_Item1_fn(__this, &ret8), ret8)), U_ALLOCA(__this->__type->T(0)->ObjectSize))));
    sb->Append2(::STRINGS[14/*", "*/]);
    sb->Append2(::g::Uno::Object::ToString(uBoxPtr(__this->__type->T(1), uPtr((Tuple2__get_Item2_fn(__this, &ret9), ret9)), U_ALLOCA(__this->__type->T(1)->ObjectSize))));
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.4.3/Source/Uno/Type.uno
// ---------------------------------------------------------------

// public sealed class Type :23
// {
// static generated Type() :23
static void Type__cctor__fn(uType* __type)
{
    Type::EmptyTypes_ = uArray::New(::TYPES[17/*Uno.Type[]*/], 0);
}

static void Type_build(uType* type)
{
    ::STRINGS[44] = uString::Const("typeName");
    ::STRINGS[45] = uString::Const("typeArguments");
    ::TYPES[17] = type->Array();
    type->SetFields(0,
        ::TYPES[17/*Uno.Type[]*/], (uintptr_t)&Type::EmptyTypes_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("EmptyTypes", 0));
    type->Reflection.SetFunctions(24,
        new uFunction("get_BaseType", NULL, (void*)Type__get_BaseType_fn, 0, false, type, 0),
        new uFunction("get_ContainsGenericParameters", NULL, (void*)Type__get_ContainsGenericParameters_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_FullName", NULL, (void*)Type__get_FullName_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("get_GenericParameterPosition", NULL, (void*)Type__get_GenericParameterPosition_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("GetElementType", NULL, (void*)Type__GetElementType_fn, 0, false, type, 0),
        new uFunction("GetGenericArguments", NULL, (void*)Type__GetGenericArguments_fn, 0, false, ::TYPES[17/*Uno.Type[]*/], 0),
        new uFunction("GetGenericTypeDefinition", NULL, (void*)Type__GetGenericTypeDefinition_fn, 0, false, type, 0),
        new uFunction("GetInterfaces", NULL, (void*)Type__GetInterfaces_fn, 0, false, ::TYPES[17/*Uno.Type[]*/], 0),
        new uFunction("GetType", NULL, (void*)Type__GetType1_fn, 0, true, type, 1, ::g::Uno::String_typeof()),
        new uFunction("GetType", NULL, (void*)Type__GetType2_fn, 0, true, type, 2, ::g::Uno::String_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("get_HasElementType", NULL, (void*)Type__get_HasElementType_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_IsArray", NULL, (void*)Type__get_IsArray_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_IsByRef", NULL, (void*)Type__get_IsByRef_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_IsClass", NULL, (void*)Type__get_IsClass_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_IsEnum", NULL, (void*)Type__get_IsEnum_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_IsGenericParameter", NULL, (void*)Type__get_IsGenericParameter_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_IsGenericType", NULL, (void*)Type__get_IsGenericType_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_IsGenericTypeDefinition", NULL, (void*)Type__get_IsGenericTypeDefinition_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_IsInterface", NULL, (void*)Type__get_IsInterface_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("IsSubclassOf", NULL, (void*)Type__IsSubclassOf_fn, 0, false, ::g::Uno::Bool_typeof(), 1, type),
        new uFunction("get_IsValueType", NULL, (void*)Type__get_IsValueType_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("MakeArrayType", NULL, (void*)Type__MakeArrayType_fn, 0, false, type, 0),
        new uFunction("MakeByRefType", NULL, (void*)Type__MakeByRefType_fn, 0, false, type, 0),
        new uFunction("MakeGenericType", NULL, (void*)Type__MakeGenericType_fn, 0, false, type, 1, ::TYPES[17/*Uno.Type[]*/]));
}

uType* Type_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(Type);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Type", options);
    type->fp_build_ = Type_build;
    type->fp_ctor_ = (void*)Type__New1_fn;
    type->fp_cctor_ = Type__cctor__fn;
    type->fp_Equals = (void(*)(uObject*, uObject*, bool*))Type__Equals_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int*))Type__GetHashCode_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))Type__ToString_fn;
    return type;
}

// internal Type() :27
void Type__ctor__fn(uType* __this)
{
    Type::ctor_(__this);
}

// public Uno.Type get_BaseType() :60
void Type__get_BaseType_fn(uType* __this, uType** __retval)
{
    *__retval = Type::BaseType(__this);
}

// public bool get_ContainsGenericParameters() :71
void Type__get_ContainsGenericParameters_fn(uType* __this, bool* __retval)
{
    *__retval = Type::ContainsGenericParameters(__this);
}

// public override sealed bool Equals(object obj) :41
void Type__Equals_fn(uType* __this, uObject* obj, bool* __retval)
{
    bool ret2;
    return *__retval = (::g::Uno::Object__Equals_fn(__this, obj, &ret2), ret2), void();
}

// public string get_FullName() :82
void Type__get_FullName_fn(uType* __this, uString** __retval)
{
    *__retval = Type::FullName(__this);
}

// public int get_GenericParameterPosition() :93
void Type__get_GenericParameterPosition_fn(uType* __this, int* __retval)
{
    *__retval = Type::GenericParameterPosition(__this);
}

// public Uno.Type GetElementType() :212
void Type__GetElementType_fn(uType* __this, uType** __retval)
{
    *__retval = Type::GetElementType(__this);
}

// public Uno.Type[] GetGenericArguments() :222
void Type__GetGenericArguments_fn(uType* __this, uArray** __retval)
{
    *__retval = Type::GetGenericArguments(__this);
}

// public Uno.Type GetGenericTypeDefinition() :235
void Type__GetGenericTypeDefinition_fn(uType* __this, uType** __retval)
{
    *__retval = Type::GetGenericTypeDefinition(__this);
}

// public override sealed int GetHashCode() :46
void Type__GetHashCode_fn(uType* __this, int* __retval)
{
    int ret3;
    return *__retval = (::g::Uno::Object__GetHashCode_fn(__this, &ret3), ret3), void();
}

// public Uno.Type[] GetInterfaces() :243
void Type__GetInterfaces_fn(uType* __this, uArray** __retval)
{
    *__retval = Type::GetInterfaces(__this);
}

// public static extern Uno.Type GetType(string typeName) :257
void Type__GetType1_fn(uString* typeName, uType** __retval)
{
    *__retval = Type::GetType1(typeName);
}

// public static extern Uno.Type GetType(string typeName, bool throwOnError) :266
void Type__GetType2_fn(uString* typeName, bool* throwOnError, uType** __retval)
{
    *__retval = Type::GetType2(typeName, *throwOnError);
}

// public bool get_HasElementType() :104
void Type__get_HasElementType_fn(uType* __this, bool* __retval)
{
    *__retval = Type::HasElementType(__this);
}

// public bool get_IsArray() :115
void Type__get_IsArray_fn(uType* __this, bool* __retval)
{
    *__retval = Type::IsArray(__this);
}

// public bool get_IsByRef() :126
void Type__get_IsByRef_fn(uType* __this, bool* __retval)
{
    *__retval = Type::IsByRef(__this);
}

// public bool get_IsClass() :137
void Type__get_IsClass_fn(uType* __this, bool* __retval)
{
    *__retval = Type::IsClass(__this);
}

// public bool get_IsEnum() :148
void Type__get_IsEnum_fn(uType* __this, bool* __retval)
{
    *__retval = Type::IsEnum(__this);
}

// public bool get_IsGenericParameter() :159
void Type__get_IsGenericParameter_fn(uType* __this, bool* __retval)
{
    *__retval = Type::IsGenericParameter(__this);
}

// public bool get_IsGenericType() :170
void Type__get_IsGenericType_fn(uType* __this, bool* __retval)
{
    *__retval = Type::IsGenericType(__this);
}

// public bool get_IsGenericTypeDefinition() :181
void Type__get_IsGenericTypeDefinition_fn(uType* __this, bool* __retval)
{
    *__retval = Type::IsGenericTypeDefinition(__this);
}

// public bool get_IsInterface() :192
void Type__get_IsInterface_fn(uType* __this, bool* __retval)
{
    *__retval = Type::IsInterface(__this);
}

// public bool IsSubclassOf(Uno.Type c) :279
void Type__IsSubclassOf_fn(uType* __this, uType* c, bool* __retval)
{
    *__retval = Type::IsSubclassOf(__this, c);
}

// public bool get_IsValueType() :203
void Type__get_IsValueType_fn(uType* __this, bool* __retval)
{
    *__retval = Type::IsValueType(__this);
}

// public Uno.Type MakeArrayType() :287
void Type__MakeArrayType_fn(uType* __this, uType** __retval)
{
    *__retval = Type::MakeArrayType(__this);
}

// public Uno.Type MakeByRefType() :295
void Type__MakeByRefType_fn(uType* __this, uType** __retval)
{
    *__retval = Type::MakeByRefType(__this);
}

// public Uno.Type MakeGenericType(Uno.Type[] typeArguments) :303
void Type__MakeGenericType_fn(uType* __this, uArray* typeArguments, uType** __retval)
{
    *__retval = Type::MakeGenericType(__this, typeArguments);
}

// internal Type New() :27
void Type__New1_fn(uType** __retval)
{
    *__retval = Type::New1();
}

// public static operator ==(Uno.Type a, Uno.Type b) :31
void Type__op_Equality_fn(uType* a, uType* b, bool* __retval)
{
    *__retval = Type::op_Equality(a, b);
}

// public static operator !=(Uno.Type a, Uno.Type b) :36
void Type__op_Inequality_fn(uType* a, uType* b, bool* __retval)
{
    *__retval = Type::op_Inequality(a, b);
}

// public override sealed string ToString() :51
void Type__ToString_fn(uType* __this, uString** __retval)
{
    return *__retval = Type::FullName(__this), void();
}

uSStrong<uArray*> Type::EmptyTypes_;

// internal Type() [instance] :27
void Type::ctor_(uType* __this)
{
}

// public Uno.Type get_BaseType() [instance] :60
uType* Type::BaseType(uType* __this)
{
    return __this->Base;
}

// public bool get_ContainsGenericParameters() [instance] :71
bool Type::ContainsGenericParameters(uType* __this)
{
    return !__this->IsClosed();
}

// public string get_FullName() [instance] :82
uString* Type::FullName(uType* __this)
{
    return uString::Utf8(__this->FullName);
}

// public int get_GenericParameterPosition() [instance] :93
int Type::GenericParameterPosition(uType* __this)
{
    return __this->Type == uTypeTypeGeneric ? (int)((uGenericType*)__this)->GenericIndex : -1;
}

// public Uno.Type GetElementType() [instance] :212
uType* Type::GetElementType(uType* __this)
{
    return Type::IsArray(__this) ? ((uArrayType*)__this)->ElementType : Type::IsByRef(__this) ? ((uByRefType*)__this)->ValueType : NULL;
}

// public Uno.Type[] GetGenericArguments() [instance] :222
uArray* Type::GetGenericArguments(uType* __this)
{
    uStackFrame __("Uno.Type", "GetGenericArguments()");
    uArray* array = uArray::New(::TYPES[17/*Uno.Type[]*/], __this->GenericCount);

    for (int i = 0; i < array->Length(); i++)
        uPtr(array)->Strong<uType*>(i) = __this->Generics[i];

    return array;
}

// public Uno.Type GetGenericTypeDefinition() [instance] :235
uType* Type::GetGenericTypeDefinition(uType* __this)
{
    return __this->Definition;
}

// public Uno.Type[] GetInterfaces() [instance] :243
uArray* Type::GetInterfaces(uType* __this)
{
    uStackFrame __("Uno.Type", "GetInterfaces()");
    uArray* array = uArray::New(::TYPES[17/*Uno.Type[]*/], __this->InterfaceCount);

    for (int i = 0; i < array->Length(); i++)
        uPtr(array)->Strong<uType*>(i) = __this->Interfaces[i].Type;

    return array;
}

// public bool get_HasElementType() [instance] :104
bool Type::HasElementType(uType* __this)
{
    return __this->Type == uTypeTypeArray || __this->Type == uTypeTypeByRef;
}

// public bool get_IsArray() [instance] :115
bool Type::IsArray(uType* __this)
{
    return __this->Type == uTypeTypeArray;
}

// public bool get_IsByRef() [instance] :126
bool Type::IsByRef(uType* __this)
{
    return __this->Type == uTypeTypeByRef;
}

// public bool get_IsClass() [instance] :137
bool Type::IsClass(uType* __this)
{
    return __this->Type != uTypeTypeInterface && U_IS_OBJECT(__this);
}

// public bool get_IsEnum() [instance] :148
bool Type::IsEnum(uType* __this)
{
    return __this->Type == uTypeTypeEnum;
}

// public bool get_IsGenericParameter() [instance] :159
bool Type::IsGenericParameter(uType* __this)
{
    return __this->Type == uTypeTypeGeneric;
}

// public bool get_IsGenericType() [instance] :170
bool Type::IsGenericType(uType* __this)
{
    return __this->GenericCount > 0;
}

// public bool get_IsGenericTypeDefinition() [instance] :181
bool Type::IsGenericTypeDefinition(uType* __this)
{
    return __this->GenericCount > 0 && __this->Definition == __this;
}

// public bool get_IsInterface() [instance] :192
bool Type::IsInterface(uType* __this)
{
    return __this->Type == uTypeTypeInterface;
}

// public bool IsSubclassOf(Uno.Type c) [instance] :279
bool Type::IsSubclassOf(uType* __this, uType* c)
{
    return __this->Is(c);
}

// public bool get_IsValueType() [instance] :203
bool Type::IsValueType(uType* __this)
{
    return U_IS_VALUE(__this);
}

// public Uno.Type MakeArrayType() [instance] :287
uType* Type::MakeArrayType(uType* __this)
{
    return __this->Array();
}

// public Uno.Type MakeByRefType() [instance] :295
uType* Type::MakeByRefType(uType* __this)
{
    return __this->ByRef();
}

// public Uno.Type MakeGenericType(Uno.Type[] typeArguments) [instance] :303
uType* Type::MakeGenericType(uType* __this, uArray* typeArguments)
{
    uStackFrame __("Uno.Type", "MakeGenericType(Uno.Type[])");

    if (typeArguments == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[45/*"typeArguments"*/]));

    return __this->MakeGeneric((size_t)typeArguments->Length(), (uType**)typeArguments->Ptr());
}

// public static extern Uno.Type GetType(string typeName) [static] :257
uType* Type::GetType1(uString* typeName)
{
    return uReflection::GetType(typeName);
}

// public static extern Uno.Type GetType(string typeName, bool throwOnError) [static] :266
uType* Type::GetType2(uString* typeName, bool throwOnError)
{
    uStackFrame __("Uno.Type", "GetType(string,bool)");
    uType* type = uReflection::GetType(typeName);

    if (throwOnError && Type::op_Equality(type, NULL))
        U_THROW(::g::Uno::ArgumentException::New4(::STRINGS[44/*"typeName"*/]));

    return type;
}

// internal Type New() [static] :27
uType* Type::New1()
{
    uType* obj1 = (uType*)uNew(Type_typeof());
    Type::ctor_(obj1);
    return obj1;
}

// public static operator ==(Uno.Type a, Uno.Type b) [static] :31
bool Type::op_Equality(uType* a, uType* b)
{
    return ::g::Uno::Object::ReferenceEquals(a, b);
}

// public static operator !=(Uno.Type a, Uno.Type b) [static] :36
bool Type::op_Inequality(uType* a, uType* b)
{
    return !::g::Uno::Object::ReferenceEquals(a, b);
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.4.3/Source/Uno/UInt.uno
// ---------------------------------------------------------------

// public intrinsic struct UInt :11
// {
static void UInt_build(uType* type)
{
    ::TYPES[3] = uObject_typeof();
}

uStructType* UInt_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.Alignment = alignof(uint32_t);
    options.ValueSize = sizeof(uint32_t);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.UInt", options);
    type->fp_build_ = UInt_build;
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))UInt__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int*))UInt__GetHashCode_fn;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))UInt__ToString_fn;
    return type;
}

// public override sealed bool Equals(object o) :17
void UInt__Equals_fn(uint32_t* __this, uType* __type, uObject* o, bool* __retval)
{
    bool ret1;
    return *__retval = (::g::Uno::Object__Equals_fn(uBox<uint32_t>(__type, *__this, U_ALLOCA(__type->ObjectSize)), o, &ret1), ret1), void();
}

// public override sealed int GetHashCode() :23
void UInt__GetHashCode_fn(uint32_t* __this, uType* __type, int* __retval)
{
    return *__retval = (int)*__this, void();
}

// public override sealed string ToString() :34
void UInt__ToString_fn(uint32_t* __this, uType* __type, uString** __retval)
{
    uBase::String ansi = uBase::Default::ToString(*__this);
    return *__retval = uString::Ansi(ansi.Ptr(), ansi.Length()), void();
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.4.3/Source/Uno/ULong.uno
// ----------------------------------------------------------------

// public intrinsic struct ULong :14
// {
static void ULong_build(uType* type)
{
    ::TYPES[3] = uObject_typeof();
}

uStructType* ULong_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.Alignment = alignof(uint64_t);
    options.ValueSize = sizeof(uint64_t);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.ULong", options);
    type->fp_build_ = ULong_build;
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))ULong__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int*))ULong__GetHashCode_fn;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))ULong__ToString_fn;
    return type;
}

// public override sealed bool Equals(object o) :20
void ULong__Equals_fn(uint64_t* __this, uType* __type, uObject* o, bool* __retval)
{
    bool ret1;
    return *__retval = (::g::Uno::Object__Equals_fn(uBox<uint64_t>(__type, *__this, U_ALLOCA(__type->ObjectSize)), o, &ret1), ret1), void();
}

// public override sealed int GetHashCode() :26
void ULong__GetHashCode_fn(uint64_t* __this, uType* __type, int* __retval)
{
    return *__retval = (int)uBase::Default::Hash(*__this), void();
}

// public override sealed string ToString() :37
void ULong__ToString_fn(uint64_t* __this, uType* __type, uString** __retval)
{
    uBase::String ansi = uBase::Default::ToString(*__this);
    return *__retval = uString::Ansi(ansi.Ptr(), ansi.Length()), void();
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.4.3/Source/Uno/UShort.uno
// -----------------------------------------------------------------

// public intrinsic struct UShort :11
// {
static void UShort_build(uType* type)
{
    ::TYPES[3] = uObject_typeof();
}

uStructType* UShort_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.Alignment = alignof(uint16_t);
    options.ValueSize = sizeof(uint16_t);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.UShort", options);
    type->fp_build_ = UShort_build;
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))UShort__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int*))UShort__GetHashCode_fn;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))UShort__ToString_fn;
    return type;
}

// public override sealed bool Equals(object o) :17
void UShort__Equals_fn(uint16_t* __this, uType* __type, uObject* o, bool* __retval)
{
    bool ret1;
    return *__retval = (::g::Uno::Object__Equals_fn(uBox<uint16_t>(__type, *__this, U_ALLOCA(__type->ObjectSize)), o, &ret1), ret1), void();
}

// public override sealed int GetHashCode() :23
void UShort__GetHashCode_fn(uint16_t* __this, uType* __type, int* __retval)
{
    return *__retval = (int)*__this, void();
}

// public override sealed string ToString() :34
void UShort__ToString_fn(uint16_t* __this, uType* __type, uString** __retval)
{
    uBase::String ansi((int)*__this);
    return *__retval = uString::Ansi(ansi.Ptr(), ansi.Length()), void();
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.4.3/Source/Uno/UShort2.uno
// ------------------------------------------------------------------

// public intrinsic struct UShort2 :6
// {
static void UShort2_build(uType* type)
{
    ::STRINGS[14] = uString::Const(", ");
    ::TYPES[3] = uObject_typeof();
    ::TYPES[18] = ::g::Uno::UShort_typeof();
    type->SetFields(0,
        ::TYPES[18/*ushort*/], offsetof(UShort2, X), 0,
        ::TYPES[18/*ushort*/], offsetof(UShort2, Y), 0);
    type->Reflection.SetFields(2,
        new uField("X", 0),
        new uField("Y", 1));
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)UShort2__New2_fn, 0, true, type, 2, ::TYPES[18/*ushort*/], ::TYPES[18/*ushort*/]));
}

uStructType* UShort2_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.Alignment = alignof(UShort2);
    options.ValueSize = sizeof(UShort2);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.UShort2", options);
    type->fp_build_ = UShort2_build;
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))UShort2__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int*))UShort2__GetHashCode_fn;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))UShort2__ToString_fn;
    return type;
}

// public UShort2(ushort x, ushort y) :27
void UShort2__ctor_1_fn(UShort2* __this, uint16_t* x, uint16_t* y)
{
    __this->ctor_1(*x, *y);
}

// public override sealed bool Equals(object o) :48
void UShort2__Equals_fn(UShort2* __this, uType* __type, uObject* o, bool* __retval)
{
    bool ret3;
    return *__retval = (::g::Uno::Object__Equals_fn(uBox(__type, *__this, U_ALLOCA(__type->ObjectSize)), o, &ret3), ret3), void();
}

// public override sealed int GetHashCode() :49
void UShort2__GetHashCode_fn(UShort2* __this, uType* __type, int* __retval)
{
    int ret4;
    return *__retval = (::g::Uno::Object__GetHashCode_fn(uBox(__type, *__this, U_ALLOCA(__type->ObjectSize)), &ret4), ret4), void();
}

// public UShort2 New(ushort x, ushort y) :27
void UShort2__New2_fn(uint16_t* x, uint16_t* y, UShort2* __retval)
{
    *__retval = UShort2__New2(*x, *y);
}

// public override sealed string ToString() :50
void UShort2__ToString_fn(UShort2* __this, uType* __type, uString** __retval)
{
    uStackFrame __("ushort2", "ToString()");
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::UShort::ToString(__this->X, ::TYPES[18/*ushort*/]), ::STRINGS[14/*", "*/]), ::g::Uno::UShort::ToString(__this->Y, ::TYPES[18/*ushort*/])), void();
}

// public UShort2(ushort x, ushort y) [instance] :27
void UShort2::ctor_1(uint16_t x, uint16_t y)
{
    X = x;
    Y = y;
}

// public UShort2 New(ushort x, ushort y) [static] :27
UShort2 UShort2__New2(uint16_t x, uint16_t y)
{
    UShort2 obj2;
    obj2.ctor_1(x, y);
    return obj2;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.4.3/Source/Uno/UShort4.uno
// ------------------------------------------------------------------

// public intrinsic struct UShort4 :6
// {
static void UShort4_build(uType* type)
{
    ::STRINGS[14] = uString::Const(", ");
    ::TYPES[3] = uObject_typeof();
    ::TYPES[18] = ::g::Uno::UShort_typeof();
    type->SetFields(0,
        ::TYPES[18/*ushort*/], offsetof(UShort4, X), 0,
        ::TYPES[18/*ushort*/], offsetof(UShort4, Y), 0,
        ::TYPES[18/*ushort*/], offsetof(UShort4, Z), 0,
        ::TYPES[18/*ushort*/], offsetof(UShort4, W), 0);
    type->Reflection.SetFields(4,
        new uField("W", 3),
        new uField("X", 0),
        new uField("Y", 1),
        new uField("Z", 2));
}

uStructType* UShort4_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.Alignment = alignof(UShort4);
    options.ValueSize = sizeof(UShort4);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.UShort4", options);
    type->fp_build_ = UShort4_build;
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))UShort4__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int*))UShort4__GetHashCode_fn;
    type->fp_ToString_struct = (void(*)(void*, uType*, uString**))UShort4__ToString_fn;
    return type;
}

// public override sealed bool Equals(object o) :57
void UShort4__Equals_fn(UShort4* __this, uType* __type, uObject* o, bool* __retval)
{
    bool ret7;
    return *__retval = (::g::Uno::Object__Equals_fn(uBox(__type, *__this, U_ALLOCA(__type->ObjectSize)), o, &ret7), ret7), void();
}

// public override sealed int GetHashCode() :58
void UShort4__GetHashCode_fn(UShort4* __this, uType* __type, int* __retval)
{
    int ret8;
    return *__retval = (::g::Uno::Object__GetHashCode_fn(uBox(__type, *__this, U_ALLOCA(__type->ObjectSize)), &ret8), ret8), void();
}

// public override sealed string ToString() :59
void UShort4__ToString_fn(UShort4* __this, uType* __type, uString** __retval)
{
    uStackFrame __("ushort4", "ToString()");
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::UShort::ToString(__this->X, ::TYPES[18/*ushort*/]), ::STRINGS[14/*", "*/]), ::g::Uno::UShort::ToString(__this->Y, ::TYPES[18/*ushort*/])), ::STRINGS[14/*", "*/]), ::g::Uno::UShort::ToString(__this->Z, ::TYPES[18/*ushort*/])), ::STRINGS[14/*", "*/]), ::g::Uno::UShort::ToString(__this->W, ::TYPES[18/*ushort*/])), void();
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.4.3/Source/Uno/Vector.uno
// -----------------------------------------------------------------

// public static class Vector :8
// {
static void Vector_build(uType* type)
{
    type->Reflection.SetFunctions(17,
        new uFunction("Distance", NULL, (void*)Vector__Distance_fn, 0, true, ::g::Uno::Float_typeof(), 2, ::g::Uno::Float2_typeof(), ::g::Uno::Float2_typeof()),
        new uFunction("Dot", NULL, (void*)Vector__Dot_fn, 0, true, ::g::Uno::Float_typeof(), 2, ::g::Uno::Float2_typeof(), ::g::Uno::Float2_typeof()),
        new uFunction("Length", NULL, (void*)Vector__Length_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("Length", NULL, (void*)Vector__Length1_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float3_typeof()),
        new uFunction("Length", NULL, (void*)Vector__Length2_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float4_typeof()),
        new uFunction("LengthSquared", NULL, (void*)Vector__LengthSquared_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("LengthSquared", NULL, (void*)Vector__LengthSquared1_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float3_typeof()),
        new uFunction("LengthSquared", NULL, (void*)Vector__LengthSquared2_fn, 0, true, ::g::Uno::Float_typeof(), 1, ::g::Uno::Float4_typeof()),
        new uFunction("Normalize", NULL, (void*)Vector__Normalize_fn, 0, true, ::g::Uno::Float2_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("Normalize", NULL, (void*)Vector__Normalize1_fn, 0, true, ::g::Uno::Float3_typeof(), 1, ::g::Uno::Float3_typeof()),
        new uFunction("Normalize", NULL, (void*)Vector__Normalize2_fn, 0, true, ::g::Uno::Float4_typeof(), 1, ::g::Uno::Float4_typeof()),
        new uFunction("Transform", NULL, (void*)Vector__Transform1_fn, 0, true, ::g::Uno::Float4_typeof(), 2, ::g::Uno::Float2_typeof(), ::g::Uno::Float4x4_typeof()),
        new uFunction("Transform", NULL, (void*)Vector__Transform4_fn, 0, true, ::g::Uno::Float4_typeof(), 2, ::g::Uno::Float3_typeof(), ::g::Uno::Float4x4_typeof()),
        new uFunction("Transform", NULL, (void*)Vector__Transform5_fn, 0, true, ::g::Uno::Float4_typeof(), 2, ::g::Uno::Float4_typeof(), ::g::Uno::Float4x4_typeof()),
        new uFunction("TransformCoordinate", NULL, (void*)Vector__TransformCoordinate_fn, 0, true, ::g::Uno::Float2_typeof(), 2, ::g::Uno::Float2_typeof(), ::g::Uno::Float4x4_typeof()),
        new uFunction("TransformCoordinate", NULL, (void*)Vector__TransformCoordinate1_fn, 0, true, ::g::Uno::Float3_typeof(), 2, ::g::Uno::Float3_typeof(), ::g::Uno::Float4x4_typeof()),
        new uFunction("TransformNormal", NULL, (void*)Vector__TransformNormal1_fn, 0, true, ::g::Uno::Float3_typeof(), 2, ::g::Uno::Float3_typeof(), ::g::Uno::Float4x4_typeof()));
}

uClassType* Vector_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Vector", options);
    type->fp_build_ = Vector_build;
    return type;
}

// public static float Distance(float2 p0, float2 p1) :18
void Vector__Distance_fn(::g::Uno::Float2* p0, ::g::Uno::Float2* p1, float* __retval)
{
    *__retval = Vector::Distance(*p0, *p1);
}

// public static float Dot(float2 a, float2 b) :26
void Vector__Dot_fn(::g::Uno::Float2* a, ::g::Uno::Float2* b, float* __retval)
{
    *__retval = Vector::Dot(*a, *b);
}

// public static float Length(float2 v) :14
void Vector__Length_fn(::g::Uno::Float2* v, float* __retval)
{
    *__retval = Vector::Length(*v);
}

// public static float Length(float3 v) :15
void Vector__Length1_fn(::g::Uno::Float3* v, float* __retval)
{
    *__retval = Vector::Length1(*v);
}

// public static float Length(float4 v) :16
void Vector__Length2_fn(::g::Uno::Float4* v, float* __retval)
{
    *__retval = Vector::Length2(*v);
}

// public static float LengthSquared(float2 v) :10
void Vector__LengthSquared_fn(::g::Uno::Float2* v, float* __retval)
{
    *__retval = Vector::LengthSquared(*v);
}

// public static float LengthSquared(float3 v) :11
void Vector__LengthSquared1_fn(::g::Uno::Float3* v, float* __retval)
{
    *__retval = Vector::LengthSquared1(*v);
}

// public static float LengthSquared(float4 v) :12
void Vector__LengthSquared2_fn(::g::Uno::Float4* v, float* __retval)
{
    *__retval = Vector::LengthSquared2(*v);
}

// public static float2 Normalize(float2 v) :22
void Vector__Normalize_fn(::g::Uno::Float2* v, ::g::Uno::Float2* __retval)
{
    *__retval = Vector::Normalize(*v);
}

// public static float3 Normalize(float3 v) :23
void Vector__Normalize1_fn(::g::Uno::Float3* v, ::g::Uno::Float3* __retval)
{
    *__retval = Vector::Normalize1(*v);
}

// public static float4 Normalize(float4 v) :24
void Vector__Normalize2_fn(::g::Uno::Float4* v, ::g::Uno::Float4* __retval)
{
    *__retval = Vector::Normalize2(*v);
}

// public static float4 Transform(float2 vector, float4x4 matrix) :152
void Vector__Transform1_fn(::g::Uno::Float2* vector, ::g::Uno::Float4x4* matrix, ::g::Uno::Float4* __retval)
{
    *__retval = Vector::Transform1(*vector, *matrix);
}

// public static float4 Transform(float3 vector, float4x4 matrix) :161
void Vector__Transform4_fn(::g::Uno::Float3* vector, ::g::Uno::Float4x4* matrix, ::g::Uno::Float4* __retval)
{
    *__retval = Vector::Transform4(*vector, *matrix);
}

// public static float4 Transform(float4 vector, float4x4 matrix) :143
void Vector__Transform5_fn(::g::Uno::Float4* vector, ::g::Uno::Float4x4* matrix, ::g::Uno::Float4* __retval)
{
    *__retval = Vector::Transform5(*vector, *matrix);
}

// public static float2 TransformCoordinate(float2 vector, float4x4 matrix) :196
void Vector__TransformCoordinate_fn(::g::Uno::Float2* vector, ::g::Uno::Float4x4* matrix, ::g::Uno::Float2* __retval)
{
    *__retval = Vector::TransformCoordinate(*vector, *matrix);
}

// public static float3 TransformCoordinate(float3 vector, float4x4 matrix) :180
void Vector__TransformCoordinate1_fn(::g::Uno::Float3* vector, ::g::Uno::Float4x4* matrix, ::g::Uno::Float3* __retval)
{
    *__retval = Vector::TransformCoordinate1(*vector, *matrix);
}

// public static float3 TransformNormal(float3 vector, float4x4 matrix) :187
void Vector__TransformNormal1_fn(::g::Uno::Float3* vector, ::g::Uno::Float4x4* matrix, ::g::Uno::Float3* __retval)
{
    *__retval = Vector::TransformNormal1(*vector, *matrix);
}

// public static float Distance(float2 p0, float2 p1) [static] :18
float Vector::Distance(::g::Uno::Float2 p0, ::g::Uno::Float2 p1)
{
    return Vector::Length(::g::Uno::Float2__op_Subtraction2(p1, p0));
}

// public static float Dot(float2 a, float2 b) [static] :26
float Vector::Dot(::g::Uno::Float2 a, ::g::Uno::Float2 b)
{
    return (a.X * b.X) + (a.Y * b.Y);
}

// public static float Length(float2 v) [static] :14
float Vector::Length(::g::Uno::Float2 v)
{
    return ::g::Uno::Math::Sqrt1(Vector::LengthSquared(v));
}

// public static float Length(float3 v) [static] :15
float Vector::Length1(::g::Uno::Float3 v)
{
    return ::g::Uno::Math::Sqrt1(Vector::LengthSquared1(v));
}

// public static float Length(float4 v) [static] :16
float Vector::Length2(::g::Uno::Float4 v)
{
    return ::g::Uno::Math::Sqrt1(Vector::LengthSquared2(v));
}

// public static float LengthSquared(float2 v) [static] :10
float Vector::LengthSquared(::g::Uno::Float2 v)
{
    return (v.X * v.X) + (v.Y * v.Y);
}

// public static float LengthSquared(float3 v) [static] :11
float Vector::LengthSquared1(::g::Uno::Float3 v)
{
    return ((v.X * v.X) + (v.Y * v.Y)) + (v.Z * v.Z);
}

// public static float LengthSquared(float4 v) [static] :12
float Vector::LengthSquared2(::g::Uno::Float4 v)
{
    return (((v.X * v.X) + (v.Y * v.Y)) + (v.Z * v.Z)) + (v.W * v.W);
}

// public static float2 Normalize(float2 v) [static] :22
::g::Uno::Float2 Vector::Normalize(::g::Uno::Float2 v)
{
    return ::g::Uno::Float2__op_Division1(v, Vector::Length(v));
}

// public static float3 Normalize(float3 v) [static] :23
::g::Uno::Float3 Vector::Normalize1(::g::Uno::Float3 v)
{
    return ::g::Uno::Float3__op_Division1(v, Vector::Length1(v));
}

// public static float4 Normalize(float4 v) [static] :24
::g::Uno::Float4 Vector::Normalize2(::g::Uno::Float4 v)
{
    return ::g::Uno::Float4__op_Division1(v, Vector::Length2(v));
}

// public static float4 Transform(float2 vector, float4x4 matrix) [static] :152
::g::Uno::Float4 Vector::Transform1(::g::Uno::Float2 vector, ::g::Uno::Float4x4 matrix)
{
    return ::g::Uno::Float4__New2(((vector.X * matrix.M11) + (vector.Y * matrix.M21)) + matrix.M41, ((vector.X * matrix.M12) + (vector.Y * matrix.M22)) + matrix.M42, ((vector.X * matrix.M13) + (vector.Y * matrix.M23)) + matrix.M43, ((vector.X * matrix.M14) + (vector.Y * matrix.M24)) + matrix.M44);
}

// public static float4 Transform(float3 vector, float4x4 matrix) [static] :161
::g::Uno::Float4 Vector::Transform4(::g::Uno::Float3 vector, ::g::Uno::Float4x4 matrix)
{
    return ::g::Uno::Float4__New2((((vector.X * matrix.M11) + (vector.Y * matrix.M21)) + (vector.Z * matrix.M31)) + matrix.M41, (((vector.X * matrix.M12) + (vector.Y * matrix.M22)) + (vector.Z * matrix.M32)) + matrix.M42, (((vector.X * matrix.M13) + (vector.Y * matrix.M23)) + (vector.Z * matrix.M33)) + matrix.M43, (((vector.X * matrix.M14) + (vector.Y * matrix.M24)) + (vector.Z * matrix.M34)) + matrix.M44);
}

// public static float4 Transform(float4 vector, float4x4 matrix) [static] :143
::g::Uno::Float4 Vector::Transform5(::g::Uno::Float4 vector, ::g::Uno::Float4x4 matrix)
{
    return ::g::Uno::Float4__New2((((vector.X * matrix.M11) + (vector.Y * matrix.M21)) + (vector.Z * matrix.M31)) + (vector.W * matrix.M41), (((vector.X * matrix.M12) + (vector.Y * matrix.M22)) + (vector.Z * matrix.M32)) + (vector.W * matrix.M42), (((vector.X * matrix.M13) + (vector.Y * matrix.M23)) + (vector.Z * matrix.M33)) + (vector.W * matrix.M43), (((vector.X * matrix.M14) + (vector.Y * matrix.M24)) + (vector.Z * matrix.M34)) + (vector.W * matrix.M44));
}

// public static float2 TransformCoordinate(float2 vector, float4x4 matrix) [static] :196
::g::Uno::Float2 Vector::TransformCoordinate(::g::Uno::Float2 vector, ::g::Uno::Float4x4 matrix)
{
    ::g::Uno::Float4 tmp = Vector::Transform1(vector, matrix);
    return ::g::Uno::Float2__op_Division1(::g::Uno::Float2__New2(tmp.X, tmp.Y), tmp.W);
}

// public static float3 TransformCoordinate(float3 vector, float4x4 matrix) [static] :180
::g::Uno::Float3 Vector::TransformCoordinate1(::g::Uno::Float3 vector, ::g::Uno::Float4x4 matrix)
{
    ::g::Uno::Float4 tmp = Vector::Transform4(vector, matrix);
    return ::g::Uno::Float3__op_Division1(::g::Uno::Float3__New2(tmp.X, tmp.Y, tmp.Z), tmp.W);
}

// public static float3 TransformNormal(float3 vector, float4x4 matrix) [static] :187
::g::Uno::Float3 Vector::TransformNormal1(::g::Uno::Float3 vector, ::g::Uno::Float4x4 matrix)
{
    return ::g::Uno::Float3__New2(((vector.X * matrix.M11) + (vector.Y * matrix.M21)) + (vector.Z * matrix.M31), ((vector.X * matrix.M12) + (vector.Y * matrix.M22)) + (vector.Z * matrix.M32), ((vector.X * matrix.M13) + (vector.Y * matrix.M23)) + (vector.Z * matrix.M33));
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.4.3/Source/Uno/WeakReference.uno
// ------------------------------------------------------------------------

// public sealed class WeakReference<T> :6
// {
static void WeakReference_build(uType* type)
{
    type->SetFields(0,
        type->T(0), offsetof(WeakReference, _target), uFieldFlagsWeak);
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", type, (void*)WeakReference__New1_fn, 0, true, type, 1, type->T(0)),
        new uFunction("TryGetTarget", NULL, (void*)WeakReference__TryGetTarget_fn, 0, false, ::g::Uno::Bool_typeof(), 1, type->T(0)->ByRef()));
}

uType* WeakReference_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.GenericCount = 1;
    options.ObjectSize = sizeof(WeakReference);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.WeakReference`1", options);
    type->fp_build_ = WeakReference_build;
    return type;
}

// public WeakReference(T target) :12
void WeakReference__ctor__fn(WeakReference* __this, uObject* target)
{
    __this->ctor_(target);
}

// public WeakReference New(T target) :12
void WeakReference__New1_fn(uType* __type, uObject* target, WeakReference** __retval)
{
    *__retval = WeakReference::New1(__type, target);
}

// public bool TryGetTarget(T& target) :22
void WeakReference__TryGetTarget_fn(WeakReference* __this, uObject** target, bool* __retval)
{
    *__retval = __this->TryGetTarget(target);
}

// public WeakReference(T target) [instance] :12
void WeakReference::ctor_(uObject* target)
{
    _target = target;
}

// public bool TryGetTarget(T& target) [instance] :22
bool WeakReference::TryGetTarget(uObject** target)
{
    uObject* result = _target;
    *target = result;
    return result != NULL;
}

// public WeakReference New(T target) [static] :12
WeakReference* WeakReference::New1(uType* __type, uObject* target)
{
    WeakReference* obj1 = (WeakReference*)uNew(__type);
    obj1->ctor_(target);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.4.3/Source/Uno/WeakReferenceAttribute.uno
// ---------------------------------------------------------------------------------

// public sealed class WeakReferenceAttribute :6
// {
static void WeakReferenceAttribute_build(uType* type)
{
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)WeakReferenceAttribute__New1_fn, 0, true, type, 0));
}

uType* WeakReferenceAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Attribute_typeof();
    options.ObjectSize = sizeof(WeakReferenceAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.WeakReferenceAttribute", options);
    type->fp_build_ = WeakReferenceAttribute_build;
    type->fp_ctor_ = (void*)WeakReferenceAttribute__New1_fn;
    return type;
}

// public generated WeakReferenceAttribute() :6
void WeakReferenceAttribute__ctor_1_fn(WeakReferenceAttribute* __this)
{
    __this->ctor_1();
}

// public generated WeakReferenceAttribute New() :6
void WeakReferenceAttribute__New1_fn(WeakReferenceAttribute** __retval)
{
    *__retval = WeakReferenceAttribute::New1();
}

// public generated WeakReferenceAttribute() [instance] :6
void WeakReferenceAttribute::ctor_1()
{
    ctor_();
}

// public generated WeakReferenceAttribute New() [static] :6
WeakReferenceAttribute* WeakReferenceAttribute::New1()
{
    WeakReferenceAttribute* obj1 = (WeakReferenceAttribute*)uNew(WeakReferenceAttribute_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

}} // ::g::Uno
