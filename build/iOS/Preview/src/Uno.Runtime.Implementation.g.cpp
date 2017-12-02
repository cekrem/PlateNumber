// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Uno.Bool.h>
#include <Uno.Byte.h>
#include <Uno.Double.h>
#include <Uno.Float.h>
#include <Uno.Int.h>
#include <Uno.Runtime.Implementation.BufferImpl.h>
#include <Uno.Runtime.Implementation.GraphicsContextHandle.h>
#include <Uno.Runtime.Implementation.PlatformWindowHandle.h>
#include <Uno.Short.h>
#include <Uno.UInt.h>
#include <Uno.UShort.h>
#include <Uno/Support.h>

namespace g{
namespace Uno{
namespace Runtime{
namespace Implementation{

// /usr/local/share/uno/Packages/UnoCore/1.4.3/Source/Uno/Runtime/Implementation/BufferImpl.uno
// --------------------------------------------------------------------------------------------

// public static class BufferImpl :7
// {
static void BufferImpl_build(uType* type)
{
    type->Reflection.SetFunctions(9,
        new uFunction("GetDouble", NULL, (void*)BufferImpl__GetDouble_fn, 0, true, ::g::Uno::Double_typeof(), 3, ::g::Uno::Byte_typeof()->Array(), ::g::Uno::Int_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("GetFloat", NULL, (void*)BufferImpl__GetFloat_fn, 0, true, ::g::Uno::Float_typeof(), 3, ::g::Uno::Byte_typeof()->Array(), ::g::Uno::Int_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("GetInt", NULL, (void*)BufferImpl__GetInt_fn, 0, true, ::g::Uno::Int_typeof(), 3, ::g::Uno::Byte_typeof()->Array(), ::g::Uno::Int_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("GetUInt", NULL, (void*)BufferImpl__GetUInt_fn, 0, true, ::g::Uno::UInt_typeof(), 3, ::g::Uno::Byte_typeof()->Array(), ::g::Uno::Int_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("SetDouble", NULL, (void*)BufferImpl__SetDouble_fn, 0, true, uVoid_typeof(), 4, ::g::Uno::Byte_typeof()->Array(), ::g::Uno::Int_typeof(), ::g::Uno::Double_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("SetFloat", NULL, (void*)BufferImpl__SetFloat_fn, 0, true, uVoid_typeof(), 4, ::g::Uno::Byte_typeof()->Array(), ::g::Uno::Int_typeof(), ::g::Uno::Float_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("SetInt", NULL, (void*)BufferImpl__SetInt_fn, 0, true, uVoid_typeof(), 4, ::g::Uno::Byte_typeof()->Array(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("SetShort", NULL, (void*)BufferImpl__SetShort_fn, 0, true, uVoid_typeof(), 4, ::g::Uno::Byte_typeof()->Array(), ::g::Uno::Int_typeof(), ::g::Uno::Short_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("SetUShort", NULL, (void*)BufferImpl__SetUShort_fn, 0, true, uVoid_typeof(), 4, ::g::Uno::Byte_typeof()->Array(), ::g::Uno::Int_typeof(), ::g::Uno::UShort_typeof(), ::g::Uno::Bool_typeof()));
}

uClassType* BufferImpl_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Runtime.Implementation.BufferImpl", options);
    type->fp_build_ = BufferImpl_build;
    return type;
}

// public static double GetDouble(byte[] buffer, int offset, bool littleEndian) :265
void BufferImpl__GetDouble_fn(uArray* buffer, int* offset, bool* littleEndian, double* __retval)
{
    *__retval = BufferImpl::GetDouble(buffer, *offset, *littleEndian);
}

// public static float GetFloat(byte[] buffer, int offset, bool littleEndian) :229
void BufferImpl__GetFloat_fn(uArray* buffer, int* offset, bool* littleEndian, float* __retval)
{
    *__retval = BufferImpl::GetFloat(buffer, *offset, *littleEndian);
}

// public static int GetInt(byte[] buffer, int offset, bool littleEndian) :81
void BufferImpl__GetInt_fn(uArray* buffer, int* offset, bool* littleEndian, int* __retval)
{
    *__retval = BufferImpl::GetInt(buffer, *offset, *littleEndian);
}

// public static uint GetUInt(byte[] buffer, int offset, bool littleEndian) :117
void BufferImpl__GetUInt_fn(uArray* buffer, int* offset, bool* littleEndian, uint32_t* __retval)
{
    *__retval = BufferImpl::GetUInt(buffer, *offset, *littleEndian);
}

// public static void SetDouble(byte[] buffer, int offset, double value, bool littleEndian) :283
void BufferImpl__SetDouble_fn(uArray* buffer, int* offset, double* value, bool* littleEndian)
{
    BufferImpl::SetDouble(buffer, *offset, *value, *littleEndian);
}

// public static void SetFloat(byte[] buffer, int offset, float value, bool littleEndian) :247
void BufferImpl__SetFloat_fn(uArray* buffer, int* offset, float* value, bool* littleEndian)
{
    BufferImpl::SetFloat(buffer, *offset, *value, *littleEndian);
}

// public static void SetInt(byte[] buffer, int offset, int value, bool littleEndian) :99
void BufferImpl__SetInt_fn(uArray* buffer, int* offset, int* value, bool* littleEndian)
{
    BufferImpl::SetInt(buffer, *offset, *value, *littleEndian);
}

// public static void SetShort(byte[] buffer, int offset, short value, bool littleEndian) :27
void BufferImpl__SetShort_fn(uArray* buffer, int* offset, int16_t* value, bool* littleEndian)
{
    BufferImpl::SetShort(buffer, *offset, *value, *littleEndian);
}

// public static void SetUShort(byte[] buffer, int offset, ushort value, bool littleEndian) :63
void BufferImpl__SetUShort_fn(uArray* buffer, int* offset, uint16_t* value, bool* littleEndian)
{
    BufferImpl::SetUShort(buffer, *offset, *value, *littleEndian);
}

// public static double GetDouble(byte[] buffer, int offset, bool littleEndian) [static] :265
double BufferImpl::GetDouble(uArray* buffer, int offset, bool littleEndian)
{
    return uLoadBytes<double>((uint8_t*)buffer->_ptr + offset, littleEndian);
}

// public static float GetFloat(byte[] buffer, int offset, bool littleEndian) [static] :229
float BufferImpl::GetFloat(uArray* buffer, int offset, bool littleEndian)
{
    return uLoadBytes<float>((uint8_t*)buffer->_ptr + offset, littleEndian);
}

// public static int GetInt(byte[] buffer, int offset, bool littleEndian) [static] :81
int BufferImpl::GetInt(uArray* buffer, int offset, bool littleEndian)
{
    return uLoadBytes<int>((uint8_t*)buffer->_ptr + offset, littleEndian);
}

// public static uint GetUInt(byte[] buffer, int offset, bool littleEndian) [static] :117
uint32_t BufferImpl::GetUInt(uArray* buffer, int offset, bool littleEndian)
{
    return uLoadBytes<uint32_t>((uint8_t*)buffer->_ptr + offset, littleEndian);
}

// public static void SetDouble(byte[] buffer, int offset, double value, bool littleEndian) [static] :283
void BufferImpl::SetDouble(uArray* buffer, int offset, double value, bool littleEndian)
{
    uStoreBytes((uint8_t*)buffer->_ptr + offset, value, littleEndian);
}

// public static void SetFloat(byte[] buffer, int offset, float value, bool littleEndian) [static] :247
void BufferImpl::SetFloat(uArray* buffer, int offset, float value, bool littleEndian)
{
    uStoreBytes((uint8_t*)buffer->_ptr + offset, value, littleEndian);
}

// public static void SetInt(byte[] buffer, int offset, int value, bool littleEndian) [static] :99
void BufferImpl::SetInt(uArray* buffer, int offset, int value, bool littleEndian)
{
    uStoreBytes((uint8_t*)buffer->_ptr + offset, value, littleEndian);
}

// public static void SetShort(byte[] buffer, int offset, short value, bool littleEndian) [static] :27
void BufferImpl::SetShort(uArray* buffer, int offset, int16_t value, bool littleEndian)
{
    uStoreBytes((uint8_t*)buffer->_ptr + offset, value, littleEndian);
}

// public static void SetUShort(byte[] buffer, int offset, ushort value, bool littleEndian) [static] :63
void BufferImpl::SetUShort(uArray* buffer, int offset, uint16_t value, bool littleEndian)
{
    uStoreBytes((uint8_t*)buffer->_ptr + offset, value, littleEndian);
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.4.3/Source/Uno/Runtime/Implementation/GraphicsControllerImpl.uno
// --------------------------------------------------------------------------------------------------------

// internal struct GraphicsContextHandle :12
// {
static void GraphicsContextHandle_build(uType* type)
{
}

uStructType* GraphicsContextHandle_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.Alignment = alignof(void*);
    options.ValueSize = sizeof(void*);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Runtime.Implementation.GraphicsContextHandle", options);
    type->fp_build_ = GraphicsContextHandle_build;
    return type;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.4.3/Source/Uno/Runtime/Implementation/PlatformWindowImpl.uno
// ----------------------------------------------------------------------------------------------------

// public struct PlatformWindowHandle :11
// {
static void PlatformWindowHandle_build(uType* type)
{
}

uStructType* PlatformWindowHandle_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.Alignment = alignof(void*);
    options.ValueSize = sizeof(void*);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Runtime.Implementation.PlatformWindowHandle", options);
    type->fp_build_ = PlatformWindowHandle_build;
    return type;
}
// }

}}}} // ::g::Uno::Runtime::Implementation
