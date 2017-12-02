// This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.4.3/Source/Uno/Content/Splines/FullsampledSpline.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Content.Splines.Spline-1.h>
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Content{namespace Splines{struct FullsampledSpline;}}}}

namespace g{
namespace Uno{
namespace Content{
namespace Splines{

// public sealed class FullsampledSpline<T> :6
// {
::g::Uno::Content::Splines::Spline_type* FullsampledSpline_typeof();
void FullsampledSpline__get_End_fn(FullsampledSpline* __this, double* __retval);
void FullsampledSpline__Sample1_fn(FullsampledSpline* __this, double* time, uTRef result);
void FullsampledSpline__get_Start_fn(FullsampledSpline* __this, double* __retval);

struct FullsampledSpline : ::g::Uno::Content::Splines::Spline
{
    double _start;
    double _fps;
    uStrong<uArray*> _frames;
};
// }

}}}} // ::g::Uno::Content::Splines
