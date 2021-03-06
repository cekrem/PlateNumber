// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.FuseNodes_bundle.h>
#include <Fuse.DrawContext.h>
#include <Fuse.IRenderViewport.h>
#include <Fuse.Nodes.DrawRect.h>
#include <Fuse.Nodes.DrawRectVisualizer.h>
#include <Uno.Bool.h>
#include <Uno.Buffer.h>
#include <Uno.Collections.List-1.Enumerator.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
#include <Uno.Float4x4.h>
#include <Uno.Graphics.BlendOperand.h>
#include <Uno.Graphics.BufferUsage.h>
#include <Uno.Graphics.DeviceBuffer.h>
#include <Uno.Graphics.PolygonFace.h>
#include <Uno.Graphics.RenderTarget.h>
#include <Uno.Graphics.VertexAttributeType.h>
#include <Uno.Graphics.VertexBuffer.h>
#include <Uno.Int.h>
#include <Uno.Recti.h>
#include <Uno.Runtime.Implementation.Internal.BufferConverters.h>
#include <Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram.h>
#include <Uno.Vector.h>
static uType* TYPES[5];

namespace g{
namespace Fuse{
namespace Nodes{

// /usr/local/share/uno/Packages/Fuse.Nodes/1.4.0/DrawRectVisualizer.uno
// ---------------------------------------------------------------------

// internal struct DrawRect :31
// {
static void DrawRect_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Float4_typeof(), offsetof(DrawRect, A), 0,
        ::g::Uno::Float4_typeof(), offsetof(DrawRect, B), 0,
        ::g::Uno::Float4_typeof(), offsetof(DrawRect, C), 0,
        ::g::Uno::Float4_typeof(), offsetof(DrawRect, D), 0,
        ::g::Uno::Recti_typeof(), offsetof(DrawRect, Scissor), 0);
}

uStructType* DrawRect_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.Alignment = alignof(DrawRect);
    options.ValueSize = sizeof(DrawRect);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Nodes.DrawRect", options);
    type->fp_build_ = DrawRect_build;
    return type;
}

// public DrawRect(float4 a, float4 b, float4 c, float4 d, Uno.Recti scissor) :40
void DrawRect__ctor__fn(DrawRect* __this, ::g::Uno::Float4* a, ::g::Uno::Float4* b, ::g::Uno::Float4* c, ::g::Uno::Float4* d, ::g::Uno::Recti* scissor)
{
    __this->ctor_(*a, *b, *c, *d, *scissor);
}

// public DrawRect(float4[] verts, Uno.Recti scissor) :50
void DrawRect__ctor_1_fn(DrawRect* __this, uArray* verts, ::g::Uno::Recti* scissor)
{
    __this->ctor_1(verts, *scissor);
}

// public DrawRect New(float4 a, float4 b, float4 c, float4 d, Uno.Recti scissor) :40
void DrawRect__New1_fn(::g::Uno::Float4* a, ::g::Uno::Float4* b, ::g::Uno::Float4* c, ::g::Uno::Float4* d, ::g::Uno::Recti* scissor, DrawRect* __retval)
{
    *__retval = DrawRect__New1(*a, *b, *c, *d, *scissor);
}

// public DrawRect New(float4[] verts, Uno.Recti scissor) :50
void DrawRect__New2_fn(uArray* verts, ::g::Uno::Recti* scissor, DrawRect* __retval)
{
    *__retval = DrawRect__New2(verts, *scissor);
}

// public DrawRect(float4 a, float4 b, float4 c, float4 d, Uno.Recti scissor) [instance] :40
void DrawRect::ctor_(::g::Uno::Float4 a, ::g::Uno::Float4 b, ::g::Uno::Float4 c, ::g::Uno::Float4 d, ::g::Uno::Recti scissor)
{
    A = a;
    B = b;
    C = c;
    D = d;
    Scissor = scissor;
}

// public DrawRect(float4[] verts, Uno.Recti scissor) [instance] :50
void DrawRect::ctor_1(uArray* verts, ::g::Uno::Recti scissor)
{
    uStackFrame __("Fuse.Nodes.DrawRect", ".ctor(float4[],Uno.Recti)");
    A = uPtr(verts)->Item< ::g::Uno::Float4>(0);
    B = verts->Item< ::g::Uno::Float4>(1);
    C = verts->Item< ::g::Uno::Float4>(2);
    D = verts->Item< ::g::Uno::Float4>(3);
    Scissor = scissor;
}

// public DrawRect New(float4 a, float4 b, float4 c, float4 d, Uno.Recti scissor) [static] :40
DrawRect DrawRect__New1(::g::Uno::Float4 a, ::g::Uno::Float4 b, ::g::Uno::Float4 c, ::g::Uno::Float4 d, ::g::Uno::Recti scissor)
{
    DrawRect obj1;
    obj1.ctor_(a, b, c, d, scissor);
    return obj1;
}

// public DrawRect New(float4[] verts, Uno.Recti scissor) [static] :50
DrawRect DrawRect__New2(uArray* verts, ::g::Uno::Recti scissor)
{
    DrawRect obj2;
    obj2.ctor_1(verts, scissor);
    return obj2;
}
// }

// /usr/local/share/uno/Packages/Fuse.Nodes/1.4.0/DrawRectVisualizer.uno
// ---------------------------------------------------------------------

// internal sealed class DrawRectVisualizer :61
// {
// static generated DrawRectVisualizer() :61
static void DrawRectVisualizer__cctor__fn(uType* __type)
{
    DrawRectVisualizer::_instance_ = DrawRectVisualizer::New1();
}

static void DrawRectVisualizer_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Nodes::DrawRect_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Float2_typeof()->Array();
    ::TYPES[2] = ::g::Uno::Float4_typeof()->Array();
    ::TYPES[3] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Fuse::Nodes::DrawRect_typeof(), NULL);
    ::TYPES[4] = ::g::Fuse::IRenderViewport_typeof();
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(DrawRectVisualizer, _isCaptureEnabled), 0,
        ::g::Uno::Graphics::RenderTarget_typeof(), offsetof(DrawRectVisualizer, _renderTarget), 0,
        ::TYPES[0/*Uno.Collections.List<Fuse.Nodes.DrawRect>*/], offsetof(DrawRectVisualizer, _drawRects), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(DrawRectVisualizer, EndFrameAndVisualizeImpl_Coord_c7ca0230_1_1_1), 0,
        ::TYPES[1/*float2[]*/], offsetof(DrawRectVisualizer, EndFrameAndVisualizeImpl_Vertices_c7ca0230_1_0_3), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(DrawRectVisualizer, EndFrameAndVisualizeImpl_p_c7ca0291_1_3_1), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(DrawRectVisualizer, EndFrameAndVisualizeImpl_edgeCoord_c7ca0291_1_5_4), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(DrawRectVisualizer, _draw_c7ca0230), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(DrawRectVisualizer, _draw_c7ca0291), 0,
        type, (uintptr_t)&DrawRectVisualizer::_instance_, uFieldFlagsStatic);
}

uType* DrawRectVisualizer_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 10;
    options.ObjectSize = sizeof(DrawRectVisualizer);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Nodes.DrawRectVisualizer", options);
    type->fp_build_ = DrawRectVisualizer_build;
    type->fp_ctor_ = (void*)DrawRectVisualizer__New1_fn;
    type->fp_cctor_ = DrawRectVisualizer__cctor__fn;
    return type;
}

// public generated DrawRectVisualizer() :61
void DrawRectVisualizer__ctor__fn(DrawRectVisualizer* __this)
{
    __this->ctor_();
}

// public static void Capture(float2 position, float2 size, float4x4 worldTransform, Fuse.DrawContext dc) :87
void DrawRectVisualizer__Capture_fn(::g::Uno::Float2* position, ::g::Uno::Float2* size, ::g::Uno::Float4x4* worldTransform, ::g::Fuse::DrawContext* dc)
{
    DrawRectVisualizer::Capture(*position, *size, *worldTransform, dc);
}

// public static void EndFrameAndVisualize(Fuse.DrawContext dc) :82
void DrawRectVisualizer__EndFrameAndVisualize_fn(::g::Fuse::DrawContext* dc)
{
    DrawRectVisualizer::EndFrameAndVisualize(dc);
}

// private void EndFrameAndVisualizeImpl(Fuse.DrawContext dc) :124
void DrawRectVisualizer__EndFrameAndVisualizeImpl_fn(DrawRectVisualizer* __this, ::g::Fuse::DrawContext* dc)
{
    __this->EndFrameAndVisualizeImpl(dc);
}

// private generated void init_DrawCalls() :61
void DrawRectVisualizer__init_DrawCalls_fn(DrawRectVisualizer* __this)
{
    __this->init_DrawCalls();
}

// public static bool get_IsCaptureEnabled() :73
void DrawRectVisualizer__get_IsCaptureEnabled_fn(bool* __retval)
{
    *__retval = DrawRectVisualizer::IsCaptureEnabled();
}

// public static void set_IsCaptureEnabled(bool value) :74
void DrawRectVisualizer__set_IsCaptureEnabled_fn(bool* value)
{
    DrawRectVisualizer::IsCaptureEnabled(*value);
}

// public generated DrawRectVisualizer New() :61
void DrawRectVisualizer__New1_fn(DrawRectVisualizer** __retval)
{
    *__retval = DrawRectVisualizer::New1();
}

// public static void StartFrame(Uno.Graphics.RenderTarget rt) :77
void DrawRectVisualizer__StartFrame_fn(::g::Uno::Graphics::RenderTarget* rt)
{
    DrawRectVisualizer::StartFrame(rt);
}

// private void StartFrameImpl(Uno.Graphics.RenderTarget rt) :115
void DrawRectVisualizer__StartFrameImpl_fn(DrawRectVisualizer* __this, ::g::Uno::Graphics::RenderTarget* rt)
{
    __this->StartFrameImpl(rt);
}

uSStrong<DrawRectVisualizer*> DrawRectVisualizer::_instance_;

// public generated DrawRectVisualizer() [instance] :61
void DrawRectVisualizer::ctor_()
{
    _drawRects = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[0/*Uno.Collections.List<Fuse.Nodes.DrawRect>*/]));
    init_DrawCalls();
}

// private void EndFrameAndVisualizeImpl(Fuse.DrawContext dc) [instance] :124
void DrawRectVisualizer::EndFrameAndVisualizeImpl(::g::Fuse::DrawContext* dc)
{
    uStackFrame __("Fuse.Nodes.DrawRectVisualizer", "EndFrameAndVisualizeImpl(Fuse.DrawContext)");
    ::g::Uno::Collections::List__Enumerator< ::g::Fuse::Nodes::DrawRect> ret3;

    if (!DrawRectVisualizer::IsCaptureEnabled())
        return;

    _draw_c7ca0230.BlendEnabled(true);
    _draw_c7ca0230.DepthTestEnabled(false);
    _draw_c7ca0230.CullFace(0);
    _draw_c7ca0230.BlendSrcRgb(2);
    _draw_c7ca0230.BlendSrcAlpha(0);
    _draw_c7ca0230.BlendDstRgb(3);
    _draw_c7ca0230.BlendDstAlpha(6);
    _draw_c7ca0230.Use();
    _draw_c7ca0230.Attrib1(0, 2, EndFrameAndVisualizeImpl_Coord_c7ca0230_1_1_1, 8, 0);
    _draw_c7ca0230.DrawArrays(uPtr(EndFrameAndVisualizeImpl_Vertices_c7ca0230_1_0_3)->Length());
    ::g::Uno::Collections::List__Enumerator< ::g::Fuse::Nodes::DrawRect> enum1 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(_drawRects), &ret3), ret3);

    try
    {
        {
            while (enum1.MoveNext(::TYPES[3/*Uno.Collections.List<Fuse.Nodes.DrawRect>.Enumerator*/]))
            {
                ::g::Fuse::Nodes::DrawRect r = enum1.Current(::TYPES[3/*Uno.Collections.List<Fuse.Nodes.DrawRect>.Enumerator*/]);
                uPtr(dc)->PushScissor(r.Scissor);
                uPtr(EndFrameAndVisualizeImpl_p_c7ca0291_1_3_1)->Update(::g::Uno::Runtime::Implementation::Internal::BufferConverters::ToBuffer5(uArray::Init< ::g::Uno::Float4>(::TYPES[2/*float4[]*/], 6, r.A, r.B, r.C, r.C, r.D, r.A)));
                _draw_c7ca0291.BlendEnabled(true);
                _draw_c7ca0291.DepthTestEnabled(false);
                _draw_c7ca0291.CullFace(0);
                _draw_c7ca0291.BlendSrcRgb(2);
                _draw_c7ca0291.Use();
                _draw_c7ca0291.Attrib1(0, 4, EndFrameAndVisualizeImpl_p_c7ca0291_1_3_1, 16, 0);
                _draw_c7ca0291.Attrib1(1, 2, EndFrameAndVisualizeImpl_edgeCoord_c7ca0291_1_5_4, 8, 0);
                _draw_c7ca0291.Uniform12(2, ::g::Fuse::IRenderViewport::ViewProjectionTransform(uInterface(uPtr(uPtr(dc)->Viewport()), ::TYPES[4/*Fuse.IRenderViewport*/])));
                _draw_c7ca0291.DrawArrays(6);
                dc->PopScissor();
            }
        }
        {
            enum1.Dispose(::TYPES[3/*Uno.Collections.List<Fuse.Nodes.DrawRect>.Enumerator*/]);
        }
    }

    catch (const uThrowable& __t)
    {
        {
            enum1.Dispose(::TYPES[3/*Uno.Collections.List<Fuse.Nodes.DrawRect>.Enumerator*/]);
        }
                throw __t;
    }

    _renderTarget = NULL;
    uPtr(_drawRects)->Clear();
}

// private generated void init_DrawCalls() [instance] :61
void DrawRectVisualizer::init_DrawCalls()
{
    uStackFrame __("Fuse.Nodes.DrawRectVisualizer", "init_DrawCalls()");
    uArray* Vertices_c7ca0230_1_0_0 = uArray::Init< ::g::Uno::Float2>(::TYPES[1/*float2[]*/], 6, ::g::Uno::Float2__New2(0.0f, 0.0f), ::g::Uno::Float2__New2(0.0f, 1.0f), ::g::Uno::Float2__New2(1.0f, 1.0f), ::g::Uno::Float2__New2(0.0f, 0.0f), ::g::Uno::Float2__New2(1.0f, 1.0f), ::g::Uno::Float2__New2(1.0f, 0.0f));
    EndFrameAndVisualizeImpl_Coord_c7ca0230_1_1_1 = ::g::Uno::Graphics::VertexBuffer::New2(::g::Uno::Runtime::Implementation::Internal::BufferConverters::ToBuffer3(Vertices_c7ca0230_1_0_0), 0);
    EndFrameAndVisualizeImpl_Vertices_c7ca0230_1_0_3 = Vertices_c7ca0230_1_0_0;
    EndFrameAndVisualizeImpl_p_c7ca0291_1_3_1 = ::g::Uno::Graphics::VertexBuffer::New3(1);
    EndFrameAndVisualizeImpl_edgeCoord_c7ca0291_1_5_4 = ::g::Uno::Graphics::VertexBuffer::New2(::g::Uno::Runtime::Implementation::Internal::BufferConverters::ToBuffer3(uArray::Init< ::g::Uno::Float2>(::TYPES[1/*float2[]*/], 6, ::g::Uno::Float2__New2(0.0f, 0.0f), ::g::Uno::Float2__New2(1.0f, 0.0f), ::g::Uno::Float2__New2(1.0f, 1.0f), ::g::Uno::Float2__New2(1.0f, 1.0f), ::g::Uno::Float2__New2(0.0f, 1.0f), ::g::Uno::Float2__New2(0.0f, 0.0f))), 0);
    _draw_c7ca0230 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseNodes_bundle::DrawRectVisualizer5cbb2c45());
    _draw_c7ca0291 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseNodes_bundle::DrawRectVisualizer5cbb2c46());
}

// private void StartFrameImpl(Uno.Graphics.RenderTarget rt) [instance] :115
void DrawRectVisualizer::StartFrameImpl(::g::Uno::Graphics::RenderTarget* rt)
{
    uStackFrame __("Fuse.Nodes.DrawRectVisualizer", "StartFrameImpl(Uno.Graphics.RenderTarget)");

    if (!DrawRectVisualizer::IsCaptureEnabled())
        return;

    _renderTarget = rt;
    uPtr(_drawRects)->Clear();
}

// public static void Capture(float2 position, float2 size, float4x4 worldTransform, Fuse.DrawContext dc) [static] :87
void DrawRectVisualizer::Capture(::g::Uno::Float2 position, ::g::Uno::Float2 size, ::g::Uno::Float4x4 worldTransform, ::g::Fuse::DrawContext* dc)
{
    uStackFrame __("Fuse.Nodes.DrawRectVisualizer", "Capture(float2,float2,float4x4,Fuse.DrawContext)");

    if (!DrawRectVisualizer::IsCaptureEnabled() || (uPtr(dc)->RenderTarget() != uPtr(DrawRectVisualizer::_instance_)->_renderTarget))
        return;

    uArray* drawRectInputVerts = uArray::Init< ::g::Uno::Float2>(::TYPES[1/*float2[]*/], 4, ::g::Uno::Float2__New2(0.0f, 0.0f), ::g::Uno::Float2__New2(1.0f, 0.0f), ::g::Uno::Float2__New2(1.0f, 1.0f), ::g::Uno::Float2__New2(0.0f, 1.0f));
    uArray* drawRectWorldSpaceVerts = uArray::Init< ::g::Uno::Float4>(::TYPES[2/*float4[]*/], 4, ::g::Uno::Float4__New1(0.0f), ::g::Uno::Float4__New1(0.0f), ::g::Uno::Float4__New1(0.0f), ::g::Uno::Float4__New1(0.0f));

    for (int i = 0; i < 4; i++)
    {
        ::g::Uno::Float2 coord = uPtr(drawRectInputVerts)->Item< ::g::Uno::Float2>(i);
        ::g::Uno::Float4 p = ::g::Uno::Vector::Transform5(::g::Uno::Float4__New6(::g::Uno::Float2__op_Division1(::g::Uno::Float2__op_Addition2(position, ::g::Uno::Float2__op_Multiply2(coord, size)), uPtr(dc)->ViewportPixelsPerPoint()), 0.0f, 1.0f), worldTransform);
        uPtr(drawRectWorldSpaceVerts)->Item< ::g::Uno::Float4>(i) = p;
    }

    ::g::Uno::Collections::List__Add_fn(uPtr(uPtr(DrawRectVisualizer::_instance_)->_drawRects), uCRef(::g::Fuse::Nodes::DrawRect__New2(drawRectWorldSpaceVerts, uPtr(dc)->Scissor())));
}

// public static void EndFrameAndVisualize(Fuse.DrawContext dc) [static] :82
void DrawRectVisualizer::EndFrameAndVisualize(::g::Fuse::DrawContext* dc)
{
    uStackFrame __("Fuse.Nodes.DrawRectVisualizer", "EndFrameAndVisualize(Fuse.DrawContext)");
    uPtr(DrawRectVisualizer::_instance_)->EndFrameAndVisualizeImpl(dc);
}

// public generated DrawRectVisualizer New() [static] :61
DrawRectVisualizer* DrawRectVisualizer::New1()
{
    DrawRectVisualizer* obj2 = (DrawRectVisualizer*)uNew(DrawRectVisualizer_typeof());
    obj2->ctor_();
    return obj2;
}

// public static void StartFrame(Uno.Graphics.RenderTarget rt) [static] :77
void DrawRectVisualizer::StartFrame(::g::Uno::Graphics::RenderTarget* rt)
{
    uStackFrame __("Fuse.Nodes.DrawRectVisualizer", "StartFrame(Uno.Graphics.RenderTarget)");
    uPtr(DrawRectVisualizer::_instance_)->StartFrameImpl(rt);
}

// public static bool get_IsCaptureEnabled() [static] :73
bool DrawRectVisualizer::IsCaptureEnabled()
{
    uStackFrame __("Fuse.Nodes.DrawRectVisualizer", "get_IsCaptureEnabled()");
    return uPtr(DrawRectVisualizer::_instance_)->_isCaptureEnabled;
}

// public static void set_IsCaptureEnabled(bool value) [static] :74
void DrawRectVisualizer::IsCaptureEnabled(bool value)
{
    uStackFrame __("Fuse.Nodes.DrawRectVisualizer", "set_IsCaptureEnabled(bool)");
    uPtr(DrawRectVisualizer::_instance_)->_isCaptureEnabled = value;
}
// }

}}} // ::g::Fuse::Nodes
