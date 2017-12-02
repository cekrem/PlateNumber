// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Binding.h>
#include <Fuse.DeferredManager.h>
#include <Fuse.Diagnostics.h>
#include <Fuse.IArray.h>
#include <Fuse.Internal.ObjectList-1.Equality.h>
#include <Fuse.Internal.ObjectList-1.h>
#include <Fuse.IObject.h>
#include <Fuse.ITemplateSource.h>
#include <Fuse.Json.h>
#include <Fuse.LayoutPriority.h>
#include <Fuse.Marshal.h>
#include <Fuse.MarshalException.h>
#include <Fuse.NameRegistry.h>
#include <Fuse.NameValuePair.h>
#include <Fuse.Node.h>
#include <Fuse.Properties.h>
#include <Fuse.PropertyHandle.h>
#include <Fuse.Reactive.Abs.h>
#include <Fuse.Reactive.Acos.h>
#include <Fuse.Reactive.Add.h>
#include <Fuse.Reactive.Alternate.h>
#include <Fuse.Reactive.Array.h>
#include <Fuse.Reactive.ArrayObject.h>
#include <Fuse.Reactive.Asin.h>
#include <Fuse.Reactive.Atan.h>
#include <Fuse.Reactive.Atan2.h>
#include <Fuse.Reactive.BinaryFloatOperator.FloatOp.h>
#include <Fuse.Reactive.BinaryFloatOperator.h>
#include <Fuse.Reactive.BinaryOperator.h>
#include <Fuse.Reactive.BinaryOperator.Subscription.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Case.h>
#include <Fuse.Reactive.Ceil.h>
#include <Fuse.Reactive.Clamp.h>
#include <Fuse.Reactive.Closure.h>
#include <Fuse.Reactive.ClosureArgs.h>
#include <Fuse.Reactive.ClosureHandler.h>
#include <Fuse.Reactive.Conditional.h>
#include <Fuse.Reactive.Console.h>
#include <Fuse.Reactive.Constant.h>
#include <Fuse.Reactive.ConstantExpression.h>
#include <Fuse.Reactive.Cos.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.DataSubscription.h>
#include <Fuse.Reactive.DataToResource.DataToResourceSubscription.h>
#include <Fuse.Reactive.DataToResource.h>
#include <Fuse.Reactive.DebugLog.h>
#include <Fuse.Reactive.DegreesToRadians.h>
#include <Fuse.Reactive.Divide.h>
#include <Fuse.Reactive.Each.h>
#include <Fuse.Reactive.Equal.h>
#include <Fuse.Reactive.Even.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Reactive.EventRecord.h>
#include <Fuse.Reactive.Exp.h>
#include <Fuse.Reactive.Exp2.h>
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.ExpressionBinding.h>
#include <Fuse.Reactive.Floor.h>
#include <Fuse.Reactive.Fract.h>
#include <Fuse.Reactive.GreaterOrEqual.h>
#include <Fuse.Reactive.GreaterThan.h>
#include <Fuse.Reactive.IContext.h>
#include <Fuse.Reactive.IEventHandler.h>
#include <Fuse.Reactive.IEventRecord.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.IListener.h>
#include <Fuse.Reactive.IndexFunction.h>
#include <Fuse.Reactive.InfixOperator.h>
#include <Fuse.Reactive.InnerListener.h>
#include <Fuse.Reactive.InnerListener.ObservableSubscription.h>
#include <Fuse.Reactive.Instance.h>
#include <Fuse.Reactive.InstanceDefer.h>
#include <Fuse.Reactive.InstanceIdentity.h>
#include <Fuse.Reactive.InstanceReuse.h>
#include <Fuse.Reactive.Instantiator.CountItem.h>
#include <Fuse.Reactive.Instantiator.h>
#include <Fuse.Reactive.Instantiator.ObservableLink.h>
#include <Fuse.Reactive.Instantiator.TemplateMatch.h>
#include <Fuse.Reactive.Instantiator.WindowItem.h>
#include <Fuse.Reactive.InstantiatorFunction.h>
#include <Fuse.Reactive.InstantiatorFunction.InstantiatorSubscription.h>
#include <Fuse.Reactive.Internal.PatchAlgorithm.h>
#include <Fuse.Reactive.Internal.PatchItem.h>
#include <Fuse.Reactive.Internal.PatchList.h>
#include <Fuse.Reactive.Internal.PatchOp.h>
#include <Fuse.Reactive.IObservable.h>
#include <Fuse.Reactive.IObservableArray.h>
#include <Fuse.Reactive.IObservableObject.h>
#include <Fuse.Reactive.IObserver.h>
#include <Fuse.Reactive.IPropertyObserver.h>
#include <Fuse.Reactive.IPropertySubscription.h>
#include <Fuse.Reactive.ISubscription.h>
#include <Fuse.Reactive.IWriteable.h>
#include <Fuse.Reactive.JavaScript.Dependency.h>
#include <Fuse.Reactive.JavaScript.h>
#include <Fuse.Reactive.Lerp.h>
#include <Fuse.Reactive.LessOrEqual.h>
#include <Fuse.Reactive.LessThan.h>
#include <Fuse.Reactive.Log.h>
#include <Fuse.Reactive.Log2.h>
#include <Fuse.Reactive.LogicalAnd.h>
#include <Fuse.Reactive.LogicalOr.h>
#include <Fuse.Reactive.LookUp.h>
#include <Fuse.Reactive.LookUp.LookUpSubscription.h>
#include <Fuse.Reactive.Match.h>
#include <Fuse.Reactive.Max.h>
#include <Fuse.Reactive.Member.h>
#include <Fuse.Reactive.Member.MemberSubscription.h>
#include <Fuse.Reactive.Min.h>
#include <Fuse.Reactive.Mod.h>
#include <Fuse.Reactive.Multiply.h>
#include <Fuse.Reactive.NameValuePair.h>
#include <Fuse.Reactive.Negate.h>
#include <Fuse.Reactive.NodeExpressionBinding.h>
#include <Fuse.Reactive.NotEqual.h>
#include <Fuse.Reactive.NullCoalesce.h>
#include <Fuse.Reactive.Object.h>
#include <Fuse.Reactive.ObserverMap-1.h>
#include <Fuse.Reactive.Odd.h>
#include <Fuse.Reactive.OffsetIndexFunction.h>
#include <Fuse.Reactive.Parameter.h>
#include <Fuse.Reactive.Parameter.ParameterSubscription.h>
#include <Fuse.Reactive.Pow.h>
#include <Fuse.Reactive.Property.h>
#include <Fuse.Reactive.Property.Subscription.h>
#include <Fuse.Reactive.PropertyBinding.h>
#include <Fuse.Reactive.QuaternaryOperator.h>
#include <Fuse.Reactive.QuaternaryOperator.Subscription.h>
#include <Fuse.Reactive.RadiansToDegrees.h>
#include <Fuse.Reactive.Resource.h>
#include <Fuse.Reactive.ResourceBinding.h>
#include <Fuse.Reactive.ResourceSubscription.h>
#include <Fuse.Reactive.Round.h>
#include <Fuse.Reactive.Select.h>
#include <Fuse.Reactive.Sign.h>
#include <Fuse.Reactive.SimpleVarArgFunction.h>
#include <Fuse.Reactive.SimpleVarArgFunction.SimpleSubscription.h>
#include <Fuse.Reactive.Sin.h>
#include <Fuse.Reactive.Snapshot.h>
#include <Fuse.Reactive.Snapshot.Subscription.h>
#include <Fuse.Reactive.Sqrt.h>
#include <Fuse.Reactive.Subtract.h>
#include <Fuse.Reactive.Tan.h>
#include <Fuse.Reactive.TernaryOperator.h>
#include <Fuse.Reactive.TernaryOperator.Subscription.h>
#include <Fuse.Reactive.ToLower.h>
#include <Fuse.Reactive.ToUpper.h>
#include <Fuse.Reactive.Trunc.h>
#include <Fuse.Reactive.UnaryFloatOperator.FloatOp.h>
#include <Fuse.Reactive.UnaryFloatOperator.h>
#include <Fuse.Reactive.UnaryOperator.h>
#include <Fuse.Reactive.UnaryOperator.Subscription.h>
#include <Fuse.Reactive.UnmappedView-1.h>
#include <Fuse.Reactive.ValueForwarder.h>
#include <Fuse.Reactive.ValueForwarder.IValueListener.h>
#include <Fuse.Reactive.ValueObserver.h>
#include <Fuse.Reactive.VarArgFunction.Argument.h>
#include <Fuse.Reactive.VarArgFunction.h>
#include <Fuse.Reactive.VarArgFunction.Subscription.h>
#include <Fuse.Reactive.Vector.h>
#include <Fuse.Reactive.WhileCount.h>
#include <Fuse.Reactive.WhileCount.Range.h>
#include <Fuse.Reactive.WhileEmpty.h>
#include <Fuse.Reactive.WhileNotEmpty.h>
#include <Fuse.Reactive.With.h>
#include <Fuse.Resources.ResourceRegistry.h>
#include <Fuse.Scripting.AppInitialized.h>
#include <Fuse.Scripting.Array.h>
#include <Fuse.Scripting.Callback.h>
#include <Fuse.Scripting.Context.h>
#include <Fuse.Scripting.Function.h>
#include <Fuse.Scripting.IEventSerializer.h>
#include <Fuse.Scripting.IScriptEvent.h>
#include <Fuse.Scripting.Module.h>
#include <Fuse.Scripting.ModuleInstance.h>
#include <Fuse.Scripting.NativeModule.h>
#include <Fuse.Scripting.Object.h>
#include <Fuse.Scripting.RootableScriptModule.h>
#include <Fuse.Scripting.ScriptModule.h>
#include <Fuse.Scripting.ThreadWorker.h>
#include <Fuse.Scripting.ValueMirror.h>
#include <Fuse.Triggers.BusyTask.h>
#include <Fuse.Triggers.BusyTaskActivity.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.UpdateManager.h>
#include <Fuse.UpdateStage.h>
#include <Fuse.Visual.h>
#include <Uno.Action.h>
#include <Uno.Action-1.h>
#include <Uno.Bool.h>
#include <Uno.Collections.Dictionary-2.Enumerator.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.Dictionary-2.KeyCollection.h>
#include <Uno.Collections.Dictionary-2.ValueCollection.Enumerator.h>
#include <Uno.Collections.Dictionary-2.ValueCollection.h>
#include <Uno.Collections.EnumerableExtensions.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IEnumerator.h>
#include <Uno.Collections.IEnumerator-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Collections.KeyValuePair-2.h>
#include <Uno.Collections.List-1.Enumerator.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Collections.RootableList-1.h>
#include <Uno.Delegate.h>
#include <Uno.Diagnostics.Debug.h>
#include <Uno.Diagnostics.DebugMessageType.h>
#include <Uno.Double.h>
#include <Uno.EventArgs.h>
#include <Uno.EventHandler.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float3.h>
#include <Uno.Float4.h>
#include <Uno.IDisposable.h>
#include <Uno.Int.h>
#include <Uno.Math.h>
#include <Uno.Object.h>
#include <Uno.Predicate-1.h>
#include <Uno.String.h>
#include <Uno.Text.StringBuilder.h>
#include <Uno.Type.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.NameTable.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.PropertyAccessor.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Resource.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Template.h>
static uString* STRINGS[106];
static uType* TYPES[63];

namespace g{
namespace Fuse{
namespace Reactive{

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.4.0/MathFunctions.uno
// -------------------------------------------------------------------------------

// public sealed class Abs :279
// {
static void Abs_build(uType* type)
{
    ::STRINGS[0] = uString::Const("abs");
    ::TYPES[0] = ::g::Fuse::Reactive::UnaryFloatOperator__FloatOp_typeof();
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::UnaryOperator_type, interface0));
    type->SetFields(3);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Abs__New1_fn, 0, true, type, 1, ::g::Fuse::Reactive::Expression_typeof()));
}

::g::Fuse::Reactive::UnaryOperator_type* Abs_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::UnaryOperator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::UnaryFloatOperator_typeof();
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Abs);
    options.TypeSize = sizeof(::g::Fuse::Reactive::UnaryOperator_type);
    type = (::g::Fuse::Reactive::UnaryOperator_type*)uClassType::New("Fuse.Reactive.Abs", options);
    type->fp_build_ = Abs_build;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::UnaryOperator__Subscribe_fn;
    return type;
}

// public Abs(Fuse.Reactive.Expression operand) :282
void Abs__ctor_3_fn(Abs* __this, ::g::Fuse::Reactive::Expression* operand)
{
    __this->ctor_3(operand);
}

// public Abs New(Fuse.Reactive.Expression operand) :282
void Abs__New1_fn(::g::Fuse::Reactive::Expression* operand, Abs** __retval)
{
    *__retval = Abs::New1(operand);
}

// public Abs(Fuse.Reactive.Expression operand) [instance] :282
void Abs::ctor_3(::g::Fuse::Reactive::Expression* operand)
{
    ctor_2(operand, ::STRINGS[0/*"abs"*/], uDelegate::New(::TYPES[0/*Fuse.Reactive.UnaryFloatOperator.FloatOp*/], (void*)::g::Uno::Math__Abs_fn));
}

// public Abs New(Fuse.Reactive.Expression operand) [static] :282
Abs* Abs::New1(::g::Fuse::Reactive::Expression* operand)
{
    Abs* obj1 = (Abs*)uNew(Abs_typeof());
    obj1->ctor_3(operand);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.4.0/MathFunctions.uno
// -------------------------------------------------------------------------------

// public sealed class Acos :249
// {
static void Acos_build(uType* type)
{
    ::STRINGS[1] = uString::Const("acos");
    ::TYPES[0] = ::g::Fuse::Reactive::UnaryFloatOperator__FloatOp_typeof();
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::UnaryOperator_type, interface0));
    type->SetFields(3);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Acos__New1_fn, 0, true, type, 1, ::g::Fuse::Reactive::Expression_typeof()));
}

::g::Fuse::Reactive::UnaryOperator_type* Acos_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::UnaryOperator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::UnaryFloatOperator_typeof();
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Acos);
    options.TypeSize = sizeof(::g::Fuse::Reactive::UnaryOperator_type);
    type = (::g::Fuse::Reactive::UnaryOperator_type*)uClassType::New("Fuse.Reactive.Acos", options);
    type->fp_build_ = Acos_build;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::UnaryOperator__Subscribe_fn;
    return type;
}

// public Acos(Fuse.Reactive.Expression operand) :252
void Acos__ctor_3_fn(Acos* __this, ::g::Fuse::Reactive::Expression* operand)
{
    __this->ctor_3(operand);
}

// public Acos New(Fuse.Reactive.Expression operand) :252
void Acos__New1_fn(::g::Fuse::Reactive::Expression* operand, Acos** __retval)
{
    *__retval = Acos::New1(operand);
}

// public Acos(Fuse.Reactive.Expression operand) [instance] :252
void Acos::ctor_3(::g::Fuse::Reactive::Expression* operand)
{
    ctor_2(operand, ::STRINGS[1/*"acos"*/], uDelegate::New(::TYPES[0/*Fuse.Reactive.UnaryFloatOperator.FloatOp*/], (void*)::g::Uno::Math__Acos_fn));
}

// public Acos New(Fuse.Reactive.Expression operand) [static] :252
Acos* Acos::New1(::g::Fuse::Reactive::Expression* operand)
{
    Acos* obj1 = (Acos*)uNew(Acos_typeof());
    obj1->ctor_3(operand);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.4.0/Operators.uno
// ---------------------------------------------------------------------------

// public sealed class Add :19
// {
static void Add_build(uType* type)
{
    ::STRINGS[2] = uString::Const("+");
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::InfixOperator_type, interface0));
    type->SetFields(2);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Add__New1_fn, 0, true, type, 2, ::g::Fuse::Reactive::Expression_typeof(), ::g::Fuse::Reactive::Expression_typeof()));
}

::g::Fuse::Reactive::InfixOperator_type* Add_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::InfixOperator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::InfixOperator_typeof();
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Add);
    options.TypeSize = sizeof(::g::Fuse::Reactive::InfixOperator_type);
    type = (::g::Fuse::Reactive::InfixOperator_type*)uClassType::New("Fuse.Reactive.Add", options);
    type->fp_build_ = Add_build;
    type->fp_Compute = (void(*)(::g::Fuse::Reactive::BinaryOperator*, uObject*, uObject*, uObject**))Add__Compute_fn;
    type->fp_get_Symbol = (void(*)(::g::Fuse::Reactive::InfixOperator*, uString**))Add__get_Symbol_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::BinaryOperator__Subscribe_fn;
    return type;
}

// public Add(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) :22
void Add__ctor_3_fn(Add* __this, ::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right)
{
    __this->ctor_3(left, right);
}

// protected override sealed object Compute(object left, object right) :23
void Add__Compute_fn(Add* __this, uObject* left, uObject* right, uObject** __retval)
{
    uStackFrame __("Fuse.Reactive.Add", "Compute(object,object)");
    return *__retval = ::g::Fuse::Marshal::Add(left, right), void();
}

// public Add New(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) :22
void Add__New1_fn(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right, Add** __retval)
{
    *__retval = Add::New1(left, right);
}

// public override sealed string get_Symbol() :28
void Add__get_Symbol_fn(Add* __this, uString** __retval)
{
    return *__retval = ::STRINGS[2/*"+"*/], void();
}

// public Add(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) [instance] :22
void Add::ctor_3(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right)
{
    ctor_2(left, right);
}

// public Add New(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) [static] :22
Add* Add::New1(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right)
{
    Add* obj1 = (Add*)uNew(Add_typeof());
    obj1->ctor_3(left, right);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.4.0/MathFunctions.uno
// -------------------------------------------------------------------------------

// public sealed class Alternate :112
// {
static void Alternate_build(uType* type)
{
    ::STRINGS[3] = uString::Const("alternate(");
    ::STRINGS[4] = uString::Const(", ");
    ::STRINGS[5] = uString::Const(")");
    ::TYPES[1] = ::g::Fuse::Marshal_typeof()->MakeMethod(1/*TryToType<float>*/, ::g::Uno::Float_typeof(), NULL);
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::BinaryOperator_type, interface0));
    type->SetFields(2);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Alternate__New1_fn, 0, true, type, 2, ::g::Fuse::Reactive::Expression_typeof(), ::g::Fuse::Reactive::Expression_typeof()));
}

::g::Fuse::Reactive::BinaryOperator_type* Alternate_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::BinaryOperator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::BinaryOperator_typeof();
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Alternate);
    options.TypeSize = sizeof(::g::Fuse::Reactive::BinaryOperator_type);
    type = (::g::Fuse::Reactive::BinaryOperator_type*)uClassType::New("Fuse.Reactive.Alternate", options);
    type->fp_build_ = Alternate_build;
    type->fp_Compute = (void(*)(::g::Fuse::Reactive::BinaryOperator*, uObject*, uObject*, uObject**))Alternate__Compute_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))Alternate__ToString_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::BinaryOperator__Subscribe_fn;
    return type;
}

// public Alternate(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) :115
void Alternate__ctor_2_fn(Alternate* __this, ::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right)
{
    __this->ctor_2(left, right);
}

// protected override sealed object Compute(object left, object right) :116
void Alternate__Compute_fn(Alternate* __this, uObject* left, uObject* right, uObject** __retval)
{
    uStackFrame __("Fuse.Reactive.Alternate", "Compute(object,object)");
    bool ret2;
    bool ret3;
    float fvalue = 0.0f;
    float fgroup = 0.0f;

    if (!(::g::Fuse::Marshal__TryToType_fn(::TYPES[1/*Fuse.Marshal.TryToType<float>*/], left, &fvalue, &ret2), ret2) || !(::g::Fuse::Marshal__TryToType_fn(::TYPES[1/*Fuse.Marshal.TryToType<float>*/], right, &fgroup, &ret3), ret3))
        return *__retval = NULL, void();

    int value = (int)::g::Uno::Math::Round2(fvalue);
    int group = (int)::g::Uno::Math::Round2(fgroup);
    bool b = (value >= 0) ? (value % (group * 2)) < group : (-(value + 1) % (group * 2)) >= group;
    return *__retval = uBox(::TYPES[9/*bool*/], b), void();
}

// public Alternate New(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) :115
void Alternate__New1_fn(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right, Alternate** __retval)
{
    *__retval = Alternate::New1(left, right);
}

// public override sealed string ToString() :131
void Alternate__ToString_fn(Alternate* __this, uString** __retval)
{
    uStackFrame __("Fuse.Reactive.Alternate", "ToString()");
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[3/*"alternate("*/], __this->Left()), ::STRINGS[4/*", "*/]), __this->Right()), ::STRINGS[5/*")"*/]), void();
}

// public Alternate(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) [instance] :115
void Alternate::ctor_2(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right)
{
    ctor_1(left, right);
}

// public Alternate New(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) [static] :115
Alternate* Alternate::New1(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right)
{
    Alternate* obj1 = (Alternate*)uNew(Alternate_typeof());
    obj1->ctor_2(left, right);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.4.0/VarArgFunction.uno
// --------------------------------------------------------------------------------

// public sealed class VarArgFunction.Argument :16
// {
static void VarArgFunction__Argument_build(uType* type)
{
    ::TYPES[2] = ::g::Uno::IDisposable_typeof();
    type->SetFields(0,
        ::TYPES[2/*Uno.IDisposable*/], offsetof(VarArgFunction__Argument, Subscription), 0,
        ::g::Uno::Bool_typeof(), offsetof(VarArgFunction__Argument, _HasValue), 0,
        uObject_typeof(), offsetof(VarArgFunction__Argument, _Value), 0);
    type->Reflection.SetFunctions(3,
        new uFunction("get_HasValue", NULL, (void*)VarArgFunction__Argument__get_HasValue_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)VarArgFunction__Argument__New1_fn, 0, true, type, 0),
        new uFunction("get_Value", NULL, (void*)VarArgFunction__Argument__get_Value_fn, 0, false, uObject_typeof(), 0));
}

uType* VarArgFunction__Argument_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(VarArgFunction__Argument);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.VarArgFunction.Argument", options);
    type->fp_build_ = VarArgFunction__Argument_build;
    type->fp_ctor_ = (void*)VarArgFunction__Argument__New1_fn;
    return type;
}

// public generated Argument() :16
void VarArgFunction__Argument__ctor__fn(VarArgFunction__Argument* __this)
{
    __this->ctor_();
}

// internal void Dispose() :28
void VarArgFunction__Argument__Dispose_fn(VarArgFunction__Argument* __this)
{
    __this->Dispose();
}

// public generated bool get_HasValue() :26
void VarArgFunction__Argument__get_HasValue_fn(VarArgFunction__Argument* __this, bool* __retval)
{
    *__retval = __this->HasValue();
}

// internal generated void set_HasValue(bool value) :26
void VarArgFunction__Argument__set_HasValue_fn(VarArgFunction__Argument* __this, bool* value)
{
    __this->HasValue(*value);
}

// public generated Argument New() :16
void VarArgFunction__Argument__New1_fn(VarArgFunction__Argument** __retval)
{
    *__retval = VarArgFunction__Argument::New1();
}

// public generated object get_Value() :21
void VarArgFunction__Argument__get_Value_fn(VarArgFunction__Argument* __this, uObject** __retval)
{
    *__retval = __this->Value();
}

// internal generated void set_Value(object value) :21
void VarArgFunction__Argument__set_Value_fn(VarArgFunction__Argument* __this, uObject* value)
{
    __this->Value(value);
}

// public generated Argument() [instance] :16
void VarArgFunction__Argument::ctor_()
{
}

// internal void Dispose() [instance] :28
void VarArgFunction__Argument::Dispose()
{
    uStackFrame __("Fuse.Reactive.VarArgFunction.Argument", "Dispose()");

    if (Subscription != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(Subscription), ::TYPES[2/*Uno.IDisposable*/]));
        Subscription = NULL;
    }

    Value(NULL);
    HasValue(false);
}

// public generated bool get_HasValue() [instance] :26
bool VarArgFunction__Argument::HasValue()
{
    return _HasValue;
}

// internal generated void set_HasValue(bool value) [instance] :26
void VarArgFunction__Argument::HasValue(bool value)
{
    _HasValue = value;
}

// public generated object get_Value() [instance] :21
uObject* VarArgFunction__Argument::Value()
{
    return _Value;
}

// internal generated void set_Value(object value) [instance] :21
void VarArgFunction__Argument::Value(uObject* value)
{
    _Value = value;
}

// public generated Argument New() [static] :16
VarArgFunction__Argument* VarArgFunction__Argument::New1()
{
    VarArgFunction__Argument* obj1 = (VarArgFunction__Argument*)uNew(VarArgFunction__Argument_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.4.0/VectorFunctions.uno
// ---------------------------------------------------------------------------------

// internal class Array :24
// {
static void Array_build(uType* type)
{
    ::STRINGS[6] = uString::Const("(");
    ::STRINGS[4] = uString::Const(", ");
    ::STRINGS[5] = uString::Const(")");
    ::TYPES[3] = uObject_typeof()->Array();
    type->SetInterfaces(
        ::g::Fuse::IArray_typeof(), offsetof(Array_type, interface0));
    type->SetFields(0,
        ::TYPES[3/*object[]*/], offsetof(Array, _items), 0);
}

Array_type* Array_typeof()
{
    static uSStrong<Array_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Array);
    options.TypeSize = sizeof(Array_type);
    type = (Array_type*)uClassType::New("Fuse.Reactive.Array", options);
    type->fp_build_ = Array_build;
    type->fp_ToString = (void(*)(uObject*, uString**))Array__ToString_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uObject**))Array__FuseIArrayget_Item_fn;
    type->interface0.fp_get_Length = (void(*)(uObject*, int*))Array__FuseIArrayget_Length_fn;
    return type;
}

// public Array(Fuse.Reactive.VarArgFunction.Argument[] args) :27
void Array__ctor__fn(Array* __this, uArray* args)
{
    __this->ctor_(args);
}

// private object Fuse.IArray.get_Item(int index) :33
void Array__FuseIArrayget_Item_fn(Array* __this, int* index, uObject** __retval)
{
    uStackFrame __("Fuse.Reactive.Array", "Fuse.IArray.get_Item(int)");
    int index_ = *index;
    return *__retval = uPtr(__this->_items)->Strong<uObject*>(index_), void();
}

// private int Fuse.IArray.get_Length() :34
void Array__FuseIArrayget_Length_fn(Array* __this, int* __retval)
{
    uStackFrame __("Fuse.Reactive.Array", "Fuse.IArray.get_Length()");
    return *__retval = uPtr(__this->_items)->Length(), void();
}

// public Array New(Fuse.Reactive.VarArgFunction.Argument[] args) :27
void Array__New1_fn(uArray* args, Array** __retval)
{
    *__retval = Array::New1(args);
}

// public override sealed string ToString() :36
void Array__ToString_fn(Array* __this, uString** __retval)
{
    uStackFrame __("Fuse.Reactive.Array", "ToString()");
    ::g::Uno::Text::StringBuilder* sb = ::g::Uno::Text::StringBuilder::New1();
    sb->Append2(::STRINGS[6/*"("*/]);

    for (int i = 0; i < uPtr(__this->_items)->Length(); i++)
    {
        if (i > 0)
            uPtr(sb)->Append2(::STRINGS[4/*", "*/]);

        uPtr(sb)->Append2(::g::Uno::Object::ToString(uPtr(uPtr(__this->_items)->Strong<uObject*>(i))));
    }

    sb->Append2(::STRINGS[5/*")"*/]);
    return *__retval = sb->ToString(), void();
}

// public Array(Fuse.Reactive.VarArgFunction.Argument[] args) [instance] :27
void Array::ctor_(uArray* args)
{
    uStackFrame __("Fuse.Reactive.Array", ".ctor(Fuse.Reactive.VarArgFunction.Argument[])");
    _items = uArray::New(::TYPES[3/*object[]*/], uPtr(args)->Length());

    for (int i = 0; i < args->Length(); i++)
        uPtr(_items)->Strong<uObject*>(i) = uPtr(uPtr(args)->Strong< ::g::Fuse::Reactive::VarArgFunction__Argument*>(i))->Value();
}

// public Array New(Fuse.Reactive.VarArgFunction.Argument[] args) [static] :27
Array* Array::New1(uArray* args)
{
    Array* obj1 = (Array*)uNew(Array_typeof());
    obj1->ctor_(args);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.4.0/Object.uno
// ------------------------------------------------------------------------

// internal sealed class ArrayObject :24
// {
static void ArrayObject_build(uType* type)
{
    ::TYPES[4] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof(), NULL);
    ::TYPES[5] = ::g::Fuse::NameValuePair_typeof();
    ::TYPES[6] = ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(9/*ToArray<string>*/, ::g::Uno::String_typeof(), NULL);
    type->SetInterfaces(
        ::g::Fuse::IArray_typeof(), offsetof(ArrayObject_type, interface0),
        ::g::Fuse::IObject_typeof(), offsetof(ArrayObject_type, interface1));
    type->SetFields(1,
        ::TYPES[4/*Uno.Collections.Dictionary<string, object>*/], offsetof(ArrayObject, _dict), 0);
}

ArrayObject_type* ArrayObject_typeof()
{
    static uSStrong<ArrayObject_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::Array_typeof();
    options.FieldCount = 2;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(ArrayObject);
    options.TypeSize = sizeof(ArrayObject_type);
    type = (ArrayObject_type*)uClassType::New("Fuse.Reactive.ArrayObject", options);
    type->fp_build_ = ArrayObject_build;
    type->interface1.fp_ContainsKey = (void(*)(uObject*, uString*, bool*))ArrayObject__FuseIObjectContainsKey_fn;
    type->interface1.fp_get_Item = (void(*)(uObject*, uString*, uObject**))ArrayObject__FuseIObjectget_Item_fn;
    type->interface1.fp_get_Keys = (void(*)(uObject*, uArray**))ArrayObject__FuseIObjectget_Keys_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uObject**))::g::Fuse::Reactive::Array__FuseIArrayget_Item_fn;
    type->interface0.fp_get_Length = (void(*)(uObject*, int*))::g::Fuse::Reactive::Array__FuseIArrayget_Length_fn;
    return type;
}

// public ArrayObject(Fuse.Reactive.VarArgFunction.Argument[] args) :28
void ArrayObject__ctor_1_fn(ArrayObject* __this, uArray* args)
{
    __this->ctor_1(args);
}

// private bool Fuse.IObject.ContainsKey(string key) :38
void ArrayObject__FuseIObjectContainsKey_fn(ArrayObject* __this, uString* key, bool* __retval)
{
    uStackFrame __("Fuse.Reactive.ArrayObject", "Fuse.IObject.ContainsKey(string)");
    bool ret2;
    return *__retval = (::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(__this->_dict), key, &ret2), ret2), void();
}

// private object Fuse.IObject.get_Item(string key) :45
void ArrayObject__FuseIObjectget_Item_fn(ArrayObject* __this, uString* key, uObject** __retval)
{
    uStackFrame __("Fuse.Reactive.ArrayObject", "Fuse.IObject.get_Item(string)");
    uObject* ret3;
    return *__retval = (::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(__this->_dict), key, &ret3), ret3), void();
}

// private string[] Fuse.IObject.get_Keys() :50
void ArrayObject__FuseIObjectget_Keys_fn(ArrayObject* __this, uArray** __retval)
{
    uStackFrame __("Fuse.Reactive.ArrayObject", "Fuse.IObject.get_Keys()");
    return *__retval = (uArray*)::g::Uno::Collections::EnumerableExtensions::ToArray(::TYPES[6/*Uno.Collections.EnumerableExtensions.ToArray<string>*/], (uObject*)((::g::Uno::Collections::Dictionary__KeyCollection*)uPtr(__this->_dict)->Keys())), void();
}

// public ArrayObject New(Fuse.Reactive.VarArgFunction.Argument[] args) :28
void ArrayObject__New2_fn(uArray* args, ArrayObject** __retval)
{
    *__retval = ArrayObject::New2(args);
}

// public ArrayObject(Fuse.Reactive.VarArgFunction.Argument[] args) [instance] :28
void ArrayObject::ctor_1(uArray* args)
{
    uStackFrame __("Fuse.Reactive.ArrayObject", ".ctor(Fuse.Reactive.VarArgFunction.Argument[])");
    _dict = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[4/*Uno.Collections.Dictionary<string, object>*/]));
    ctor_(args);

    for (int i = 0; i < uPtr(args)->Length(); i++)
    {
        ::g::Fuse::NameValuePair* nvp = uAs< ::g::Fuse::NameValuePair*>(uPtr(uPtr(args)->Strong< ::g::Fuse::Reactive::VarArgFunction__Argument*>(i))->Value(), ::TYPES[5/*Fuse.NameValuePair*/]);

        if (nvp != NULL)
            ::g::Uno::Collections::Dictionary__Add_fn(uPtr(_dict), uPtr(nvp)->Name(), uPtr(nvp)->Value());
    }
}

// public ArrayObject New(Fuse.Reactive.VarArgFunction.Argument[] args) [static] :28
ArrayObject* ArrayObject::New2(uArray* args)
{
    ArrayObject* obj1 = (ArrayObject*)uNew(ArrayObject_typeof());
    obj1->ctor_1(args);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.4.0/MathFunctions.uno
// -------------------------------------------------------------------------------

// public sealed class Asin :240
// {
static void Asin_build(uType* type)
{
    ::STRINGS[7] = uString::Const("asin");
    ::TYPES[0] = ::g::Fuse::Reactive::UnaryFloatOperator__FloatOp_typeof();
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::UnaryOperator_type, interface0));
    type->SetFields(3);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Asin__New1_fn, 0, true, type, 1, ::g::Fuse::Reactive::Expression_typeof()));
}

::g::Fuse::Reactive::UnaryOperator_type* Asin_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::UnaryOperator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::UnaryFloatOperator_typeof();
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Asin);
    options.TypeSize = sizeof(::g::Fuse::Reactive::UnaryOperator_type);
    type = (::g::Fuse::Reactive::UnaryOperator_type*)uClassType::New("Fuse.Reactive.Asin", options);
    type->fp_build_ = Asin_build;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::UnaryOperator__Subscribe_fn;
    return type;
}

// public Asin(Fuse.Reactive.Expression operand) :243
void Asin__ctor_3_fn(Asin* __this, ::g::Fuse::Reactive::Expression* operand)
{
    __this->ctor_3(operand);
}

// public Asin New(Fuse.Reactive.Expression operand) :243
void Asin__New1_fn(::g::Fuse::Reactive::Expression* operand, Asin** __retval)
{
    *__retval = Asin::New1(operand);
}

// public Asin(Fuse.Reactive.Expression operand) [instance] :243
void Asin::ctor_3(::g::Fuse::Reactive::Expression* operand)
{
    ctor_2(operand, ::STRINGS[7/*"asin"*/], uDelegate::New(::TYPES[0/*Fuse.Reactive.UnaryFloatOperator.FloatOp*/], (void*)::g::Uno::Math__Asin_fn));
}

// public Asin New(Fuse.Reactive.Expression operand) [static] :243
Asin* Asin::New1(::g::Fuse::Reactive::Expression* operand)
{
    Asin* obj1 = (Asin*)uNew(Asin_typeof());
    obj1->ctor_3(operand);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.4.0/MathFunctions.uno
// -------------------------------------------------------------------------------

// public sealed class Atan :258
// {
static void Atan_build(uType* type)
{
    ::STRINGS[8] = uString::Const("atan");
    ::TYPES[0] = ::g::Fuse::Reactive::UnaryFloatOperator__FloatOp_typeof();
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::UnaryOperator_type, interface0));
    type->SetFields(3);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Atan__New1_fn, 0, true, type, 1, ::g::Fuse::Reactive::Expression_typeof()));
}

::g::Fuse::Reactive::UnaryOperator_type* Atan_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::UnaryOperator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::UnaryFloatOperator_typeof();
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Atan);
    options.TypeSize = sizeof(::g::Fuse::Reactive::UnaryOperator_type);
    type = (::g::Fuse::Reactive::UnaryOperator_type*)uClassType::New("Fuse.Reactive.Atan", options);
    type->fp_build_ = Atan_build;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::UnaryOperator__Subscribe_fn;
    return type;
}

// public Atan(Fuse.Reactive.Expression operand) :261
void Atan__ctor_3_fn(Atan* __this, ::g::Fuse::Reactive::Expression* operand)
{
    __this->ctor_3(operand);
}

// public Atan New(Fuse.Reactive.Expression operand) :261
void Atan__New1_fn(::g::Fuse::Reactive::Expression* operand, Atan** __retval)
{
    *__retval = Atan::New1(operand);
}

// public Atan(Fuse.Reactive.Expression operand) [instance] :261
void Atan::ctor_3(::g::Fuse::Reactive::Expression* operand)
{
    ctor_2(operand, ::STRINGS[8/*"atan"*/], uDelegate::New(::TYPES[0/*Fuse.Reactive.UnaryFloatOperator.FloatOp*/], (void*)::g::Uno::Math__Atan_fn));
}

// public Atan New(Fuse.Reactive.Expression operand) [static] :261
Atan* Atan::New1(::g::Fuse::Reactive::Expression* operand)
{
    Atan* obj1 = (Atan*)uNew(Atan_typeof());
    obj1->ctor_3(operand);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.4.0/MathFunctions.uno
// -------------------------------------------------------------------------------

// public sealed class Atan2 :271
// {
static void Atan2_build(uType* type)
{
    ::STRINGS[9] = uString::Const("atan2");
    ::TYPES[7] = ::g::Fuse::Reactive::BinaryFloatOperator__FloatOp_typeof();
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::BinaryOperator_type, interface0));
    type->SetFields(4);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Atan2__New1_fn, 0, true, type, 2, ::g::Fuse::Reactive::Expression_typeof(), ::g::Fuse::Reactive::Expression_typeof()));
}

::g::Fuse::Reactive::BinaryOperator_type* Atan2_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::BinaryOperator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::BinaryFloatOperator_typeof();
    options.FieldCount = 4;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Atan2);
    options.TypeSize = sizeof(::g::Fuse::Reactive::BinaryOperator_type);
    type = (::g::Fuse::Reactive::BinaryOperator_type*)uClassType::New("Fuse.Reactive.Atan2", options);
    type->fp_build_ = Atan2_build;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::BinaryOperator__Subscribe_fn;
    return type;
}

// public Atan2(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) :274
void Atan2__ctor_3_fn(Atan2* __this, ::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right)
{
    __this->ctor_3(left, right);
}

// public Atan2 New(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) :274
void Atan2__New1_fn(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right, Atan2** __retval)
{
    *__retval = Atan2::New1(left, right);
}

// public Atan2(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) [instance] :274
void Atan2::ctor_3(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right)
{
    ctor_2(left, right, ::STRINGS[9/*"atan2"*/], uDelegate::New(::TYPES[7/*Fuse.Reactive.BinaryFloatOperator.FloatOp*/], (void*)::g::Uno::Math__Atan21_fn));
}

// public Atan2 New(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) [static] :274
Atan2* Atan2::New1(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right)
{
    Atan2* obj1 = (Atan2*)uNew(Atan2_typeof());
    obj1->ctor_3(left, right);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.4.0/MathFunctions.uno
// -------------------------------------------------------------------------------

// public abstract class BinaryFloatOperator :185
// {
static void BinaryFloatOperator_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::BinaryOperator_type, interface0));
    type->SetFields(2,
        ::g::Uno::String_typeof(), offsetof(BinaryFloatOperator, _name), 0,
        BinaryFloatOperator__FloatOp_typeof(), offsetof(BinaryFloatOperator, _op), 0);
}

::g::Fuse::Reactive::BinaryOperator_type* BinaryFloatOperator_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::BinaryOperator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::BinaryOperator_typeof();
    options.FieldCount = 4;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(BinaryFloatOperator);
    options.TypeSize = sizeof(::g::Fuse::Reactive::BinaryOperator_type);
    type = (::g::Fuse::Reactive::BinaryOperator_type*)uClassType::New("Fuse.Reactive.BinaryFloatOperator", options);
    type->fp_build_ = BinaryFloatOperator_build;
    type->fp_Compute = (void(*)(::g::Fuse::Reactive::BinaryOperator*, uObject*, uObject*, uObject**))BinaryFloatOperator__Compute_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))BinaryFloatOperator__ToString_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::BinaryOperator__Subscribe_fn;
    return type;
}

// internal BinaryFloatOperator(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right, string name, Fuse.Reactive.BinaryFloatOperator.FloatOp op) :190
void BinaryFloatOperator__ctor_2_fn(BinaryFloatOperator* __this, ::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right, uString* name, uDelegate* op)
{
    __this->ctor_2(left, right, name, op);
}

// protected override sealed object Compute(object left, object right) :196
void BinaryFloatOperator__Compute_fn(BinaryFloatOperator* __this, uObject* left, uObject* right, uObject** __retval)
{
    uStackFrame __("Fuse.Reactive.BinaryFloatOperator", "Compute(object,object)");
    bool ret1;
    bool ret2;
    double ret3;
    double lv = 0.0;
    double rv = 0.0;

    if (!(::g::Fuse::Marshal__TryToType_fn(::g::Fuse::Marshal_typeof()->MakeMethod(1/*TryToType<double>*/, ::TYPES[11/*double*/], NULL), left, &lv, &ret1), ret1) || !(::g::Fuse::Marshal__TryToType_fn(::g::Fuse::Marshal_typeof()->MakeMethod(1/*TryToType<double>*/, ::TYPES[11/*double*/], NULL), right, &rv, &ret2), ret2))
        return *__retval = NULL, void();

    return *__retval = uBox(::TYPES[11/*double*/], (uPtr(__this->_op)->Invoke(&ret3, 2, uCRef(lv), uCRef(rv)), ret3)), void();
}

// public override sealed string ToString() :205
void BinaryFloatOperator__ToString_fn(BinaryFloatOperator* __this, uString** __retval)
{
    uStackFrame __("Fuse.Reactive.BinaryFloatOperator", "ToString()");
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(__this->_name, ::STRINGS[6/*"("*/]), __this->Left()), ::STRINGS[13/*","*/]), __this->Right()), ::STRINGS[5/*")"*/]), void();
}

// internal BinaryFloatOperator(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right, string name, Fuse.Reactive.BinaryFloatOperator.FloatOp op) [instance] :190
void BinaryFloatOperator::ctor_2(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right, uString* name, uDelegate* op)
{
    ctor_1(left, right);
    _name = name;
    _op = op;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.4.0/BinaryOperator.uno
// --------------------------------------------------------------------------------

// public abstract class BinaryOperator :12
// {
static void BinaryOperator_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(BinaryOperator_type, interface0));
    type->SetFields(0,
        ::g::Fuse::Reactive::Expression_typeof(), offsetof(BinaryOperator, _Left), 0,
        ::g::Fuse::Reactive::Expression_typeof(), offsetof(BinaryOperator, _Right), 0);
    type->Reflection.SetFunctions(2,
        new uFunction("get_Left", NULL, (void*)BinaryOperator__get_Left_fn, 0, false, ::g::Fuse::Reactive::Expression_typeof(), 0),
        new uFunction("get_Right", NULL, (void*)BinaryOperator__get_Right_fn, 0, false, ::g::Fuse::Reactive::Expression_typeof(), 0));
}

BinaryOperator_type* BinaryOperator_typeof()
{
    static uSStrong<BinaryOperator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::Expression_typeof();
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(BinaryOperator);
    options.TypeSize = sizeof(BinaryOperator_type);
    type = (BinaryOperator_type*)uClassType::New("Fuse.Reactive.BinaryOperator", options);
    type->fp_build_ = BinaryOperator_build;
    type->fp_Compute = BinaryOperator__Compute_fn;
    type->fp_get_IsLeftOptional = BinaryOperator__get_IsLeftOptional_fn;
    type->fp_OnNewOperands = BinaryOperator__OnNewOperands_fn;
    type->fp_Subscribe = (void(*)(::g::Fuse::Reactive::Expression*, uObject*, uObject*, uObject**))BinaryOperator__Subscribe_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))BinaryOperator__Subscribe_fn;
    return type;
}

// protected BinaryOperator(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) :16
void BinaryOperator__ctor_1_fn(BinaryOperator* __this, ::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right)
{
    __this->ctor_1(left, right);
}

// protected virtual object Compute(object left, object right) :30
void BinaryOperator__Compute_fn(BinaryOperator* __this, uObject* left, uObject* right, uObject** __retval)
{
    uStackFrame __("Fuse.Reactive.BinaryOperator", "Compute(object,object)");
    U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition2(::g::Uno::Type::FullName(uPtr(::g::Uno::Object::GetType(__this))), uString::Const(" does not implement the required methods"))));
}

// protected virtual bool get_IsLeftOptional() :27
void BinaryOperator__get_IsLeftOptional_fn(BinaryOperator* __this, bool* __retval)
{
    return *__retval = false, void();
}

// protected bool get_IsRightOptional() :28
void BinaryOperator__get_IsRightOptional_fn(BinaryOperator* __this, bool* __retval)
{
    *__retval = __this->IsRightOptional();
}

// public generated Fuse.Reactive.Expression get_Left() :14
void BinaryOperator__get_Left_fn(BinaryOperator* __this, ::g::Fuse::Reactive::Expression** __retval)
{
    *__retval = __this->Left();
}

// private generated void set_Left(Fuse.Reactive.Expression value) :14
void BinaryOperator__set_Left_fn(BinaryOperator* __this, ::g::Fuse::Reactive::Expression* value)
{
    __this->Left(value);
}

// protected virtual void OnNewOperands(Fuse.Reactive.IListener listener, object left, object right) :35
void BinaryOperator__OnNewOperands_fn(BinaryOperator* __this, uObject* listener, uObject* left, uObject* right)
{
    uStackFrame __("Fuse.Reactive.BinaryOperator", "OnNewOperands(Fuse.Reactive.IListener,object,object)");
    ::g::Fuse::Reactive::IListener::OnNewData(uInterface(uPtr(listener), ::TYPES[23/*Fuse.Reactive.IListener*/]), (uObject*)__this, __this->Compute(left, right));
}

// public generated Fuse.Reactive.Expression get_Right() :15
void BinaryOperator__get_Right_fn(BinaryOperator* __this, ::g::Fuse::Reactive::Expression** __retval)
{
    *__retval = __this->Right();
}

// private generated void set_Right(Fuse.Reactive.Expression value) :15
void BinaryOperator__set_Right_fn(BinaryOperator* __this, ::g::Fuse::Reactive::Expression* value)
{
    __this->Right(value);
}

// public override sealed Uno.IDisposable Subscribe(Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :22
void BinaryOperator__Subscribe_fn(BinaryOperator* __this, uObject* context, uObject* listener, uObject** __retval)
{
    uStackFrame __("Fuse.Reactive.BinaryOperator", "Subscribe(Fuse.Reactive.IContext,Fuse.Reactive.IListener)");
    return *__retval = (uObject*)BinaryOperator__Subscription::Create(__this, context, listener), void();
}

// protected BinaryOperator(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) [instance] :16
void BinaryOperator::ctor_1(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right)
{
    ctor_();
    Left(left);
    Right(right);
}

// protected bool get_IsRightOptional() [instance] :28
bool BinaryOperator::IsRightOptional()
{
    return false;
}

// public generated Fuse.Reactive.Expression get_Left() [instance] :14
::g::Fuse::Reactive::Expression* BinaryOperator::Left()
{
    return _Left;
}

// private generated void set_Left(Fuse.Reactive.Expression value) [instance] :14
void BinaryOperator::Left(::g::Fuse::Reactive::Expression* value)
{
    _Left = value;
}

// public generated Fuse.Reactive.Expression get_Right() [instance] :15
::g::Fuse::Reactive::Expression* BinaryOperator::Right()
{
    return _Right;
}

// private generated void set_Right(Fuse.Reactive.Expression value) [instance] :15
void BinaryOperator::Right(::g::Fuse::Reactive::Expression* value)
{
    _Right = value;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Bindings/1.4.0/DataBinding.uno
// --------------------------------------------------------------------------

// public enum BindingMode :8
uEnumType* BindingMode_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Reactive.BindingMode", ::g::Uno::Int_typeof(), 8);
    type->SetLiterals(
        "Read", 1LL,
        "Write", 2LL,
        "Clear", 4LL,
        "ReadClear", 5LL,
        "WriteClear", 6LL,
        "ReadWriteClear", 7LL,
        "ReadWrite", 3LL,
        "Default", 3LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Reactive.Bindings/1.4.0/MatchCase.uno
// ------------------------------------------------------------------------

// public sealed class Case :274
// {
static void Case_build(uType* type)
{
    ::STRINGS[10] = uString::Const("Case already has a Match");
    ::TYPES[8] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL);
    ::TYPES[9] = ::g::Uno::Bool_typeof();
    ::TYPES[10] = ::g::Uno::Collections::RootableList_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL);
    ::TYPES[11] = ::g::Uno::Double_typeof();
    ::TYPES[12] = ::g::Uno::String_typeof();
    type->SetFields(0,
        ::g::Fuse::Reactive::Match_typeof(), offsetof(Case, _match), 0,
        uObject_typeof(), offsetof(Case, _value), 0,
        ::TYPES[10/*Uno.Collections.RootableList<Uno.UX.Template>*/], offsetof(Case, _factories), 0,
        ::TYPES[9/*bool*/], offsetof(Case, _IsDefault), 0);
    type->Reflection.SetFunctions(12,
        new uFunction("get_Bool", NULL, (void*)Case__get_Bool_fn, 0, false, ::TYPES[9/*bool*/], 0),
        new uFunction("set_Bool", NULL, (void*)Case__set_Bool_fn, 0, false, uVoid_typeof(), 1, ::TYPES[9/*bool*/]),
        new uFunction("get_Factories", NULL, (void*)Case__get_Factories_fn, 0, false, ::g::Uno::Collections::IList_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL), 0),
        new uFunction("get_IsDefault", NULL, (void*)Case__get_IsDefault_fn, 0, false, ::TYPES[9/*bool*/], 0),
        new uFunction("set_IsDefault", NULL, (void*)Case__set_IsDefault_fn, 0, false, uVoid_typeof(), 1, ::TYPES[9/*bool*/]),
        new uFunction(".ctor", NULL, (void*)Case__New1_fn, 0, true, type, 0),
        new uFunction("get_Number", NULL, (void*)Case__get_Number_fn, 0, false, ::TYPES[11/*double*/], 0),
        new uFunction("set_Number", NULL, (void*)Case__set_Number_fn, 0, false, uVoid_typeof(), 1, ::TYPES[11/*double*/]),
        new uFunction("get_String", NULL, (void*)Case__get_String_fn, 0, false, ::TYPES[12/*string*/], 0),
        new uFunction("set_String", NULL, (void*)Case__set_String_fn, 0, false, uVoid_typeof(), 1, ::TYPES[12/*string*/]),
        new uFunction("get_Value", NULL, (void*)Case__get_Value_fn, 0, false, uObject_typeof(), 0),
        new uFunction("set_Value", NULL, (void*)Case__set_Value_fn, 0, false, uVoid_typeof(), 1, uObject_typeof()));
}

uType* Case_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(Case);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.Case", options);
    type->fp_build_ = Case_build;
    type->fp_ctor_ = (void*)Case__New1_fn;
    return type;
}

// public generated Case() :274
void Case__ctor__fn(Case* __this)
{
    __this->ctor_();
}

// public bool get_Bool() :333
void Case__get_Bool_fn(Case* __this, bool* __retval)
{
    *__retval = __this->Bool();
}

// public void set_Bool(bool value) :334
void Case__set_Bool_fn(Case* __this, bool* value)
{
    __this->Bool(*value);
}

// public Uno.Collections.IList<Uno.UX.Template> get_Factories() :353
void Case__get_Factories_fn(Case* __this, uObject** __retval)
{
    *__retval = __this->Factories();
}

// private void Invalidate() :370
void Case__Invalidate_fn(Case* __this)
{
    __this->Invalidate();
}

// public generated bool get_IsDefault() :341
void Case__get_IsDefault_fn(Case* __this, bool* __retval)
{
    *__retval = __this->IsDefault();
}

// public generated void set_IsDefault(bool value) :342
void Case__set_IsDefault_fn(Case* __this, bool* value)
{
    __this->IsDefault(*value);
}

// private bool get_IsRooted() :277
void Case__get_IsRooted_fn(Case* __this, bool* __retval)
{
    *__retval = __this->IsRooted();
}

// public generated Case New() :274
void Case__New1_fn(Case** __retval)
{
    *__retval = Case::New1();
}

// public double get_Number() :325
void Case__get_Number_fn(Case* __this, double* __retval)
{
    *__retval = __this->Number();
}

// public void set_Number(double value) :326
void Case__set_Number_fn(Case* __this, double* value)
{
    __this->Number(*value);
}

// private void OnFactoriesChanged(Uno.UX.Template f) :365
void Case__OnFactoriesChanged_fn(Case* __this, ::g::Uno::UX::Template* f)
{
    __this->OnFactoriesChanged(f);
}

// internal void Root(Fuse.Reactive.Match match) :279
void Case__Root_fn(Case* __this, ::g::Fuse::Reactive::Match* match)
{
    __this->Root(match);
}

// public string get_String() :317
void Case__get_String_fn(Case* __this, uString** __retval)
{
    *__retval = __this->String();
}

// public void set_String(string value) :318
void Case__set_String_fn(Case* __this, uString* value)
{
    __this->String(value);
}

// internal void Unroot() :288
void Case__Unroot_fn(Case* __this)
{
    __this->Unroot();
}

// public object get_Value() :302
void Case__get_Value_fn(Case* __this, uObject** __retval)
{
    *__retval = __this->Value();
}

// public void set_Value(object value) :303
void Case__set_Value_fn(Case* __this, uObject* value)
{
    __this->Value(value);
}

// public generated Case() [instance] :274
void Case::ctor_()
{
}

// public bool get_Bool() [instance] :333
bool Case::Bool()
{
    uStackFrame __("Fuse.Reactive.Case", "get_Bool()");
    return uIs((uObject*)_value, ::TYPES[9/*bool*/]) ? uUnbox<bool>(::TYPES[9/*bool*/], _value) : false;
}

// public void set_Bool(bool value) [instance] :334
void Case::Bool(bool value)
{
    Value(uBox(::TYPES[9/*bool*/], value));
}

// public Uno.Collections.IList<Uno.UX.Template> get_Factories() [instance] :353
uObject* Case::Factories()
{
    uStackFrame __("Fuse.Reactive.Case", "get_Factories()");

    if (_factories == NULL)
    {
        _factories = ((::g::Uno::Collections::RootableList*)::g::Uno::Collections::RootableList::New1(::TYPES[10/*Uno.Collections.RootableList<Uno.UX.Template>*/]));

        if (IsRooted())
            uPtr(_factories)->Subscribe(uDelegate::New(::TYPES[8/*Uno.Action<Uno.UX.Template>*/], (void*)Case__OnFactoriesChanged_fn, this), uDelegate::New(::TYPES[8/*Uno.Action<Uno.UX.Template>*/], (void*)Case__OnFactoriesChanged_fn, this));
    }

    return (uObject*)_factories;
}

// private void Invalidate() [instance] :370
void Case::Invalidate()
{
    uStackFrame __("Fuse.Reactive.Case", "Invalidate()");

    if (_match != NULL)
        uPtr(_match)->Invalidate();
}

// public generated bool get_IsDefault() [instance] :341
bool Case::IsDefault()
{
    return _IsDefault;
}

// public generated void set_IsDefault(bool value) [instance] :342
void Case::IsDefault(bool value)
{
    _IsDefault = value;
}

// private bool get_IsRooted() [instance] :277
bool Case::IsRooted()
{
    return _match != NULL;
}

// public double get_Number() [instance] :325
double Case::Number()
{
    uStackFrame __("Fuse.Reactive.Case", "get_Number()");
    return uIs((uObject*)_value, ::TYPES[11/*double*/]) ? uUnbox<double>(::TYPES[11/*double*/], _value) : 0.0;
}

// public void set_Number(double value) [instance] :326
void Case::Number(double value)
{
    Value(uBox(::TYPES[11/*double*/], value));
}

// private void OnFactoriesChanged(Uno.UX.Template f) [instance] :365
void Case::OnFactoriesChanged(::g::Uno::UX::Template* f)
{
    uStackFrame __("Fuse.Reactive.Case", "OnFactoriesChanged(Uno.UX.Template)");
    Invalidate();
}

// internal void Root(Fuse.Reactive.Match match) [instance] :279
void Case::Root(::g::Fuse::Reactive::Match* match)
{
    uStackFrame __("Fuse.Reactive.Case", "Root(Fuse.Reactive.Match)");

    if (_match != NULL)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[10/*"Case alread...*/]));

    _match = match;

    if (_factories != NULL)
        uPtr(_factories)->Subscribe(uDelegate::New(::TYPES[8/*Uno.Action<Uno.UX.Template>*/], (void*)Case__OnFactoriesChanged_fn, this), uDelegate::New(::TYPES[8/*Uno.Action<Uno.UX.Template>*/], (void*)Case__OnFactoriesChanged_fn, this));
}

// public string get_String() [instance] :317
uString* Case::String()
{
    return uAs<uString*>(_value, ::TYPES[12/*string*/]);
}

// public void set_String(string value) [instance] :318
void Case::String(uString* value)
{
    Value(value);
}

// internal void Unroot() [instance] :288
void Case::Unroot()
{
    uStackFrame __("Fuse.Reactive.Case", "Unroot()");

    if (_factories != NULL)
        uPtr(_factories)->Unsubscribe();

    _match = NULL;
}

// public object get_Value() [instance] :302
uObject* Case::Value()
{
    return _value;
}

// public void set_Value(object value) [instance] :303
void Case::Value(uObject* value)
{
    uStackFrame __("Fuse.Reactive.Case", "set_Value(object)");

    if (_value != value)
    {
        _value = value;
        Invalidate();
    }
}

// public generated Case New() [static] :274
Case* Case::New1()
{
    Case* obj1 = (Case*)uNew(Case_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.4.0/MathFunctions.uno
// -------------------------------------------------------------------------------

// public sealed class Ceil :295
// {
static void Ceil_build(uType* type)
{
    ::STRINGS[11] = uString::Const("ceil");
    ::TYPES[0] = ::g::Fuse::Reactive::UnaryFloatOperator__FloatOp_typeof();
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::UnaryOperator_type, interface0));
    type->SetFields(3);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Ceil__New1_fn, 0, true, type, 1, ::g::Fuse::Reactive::Expression_typeof()));
}

::g::Fuse::Reactive::UnaryOperator_type* Ceil_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::UnaryOperator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::UnaryFloatOperator_typeof();
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Ceil);
    options.TypeSize = sizeof(::g::Fuse::Reactive::UnaryOperator_type);
    type = (::g::Fuse::Reactive::UnaryOperator_type*)uClassType::New("Fuse.Reactive.Ceil", options);
    type->fp_build_ = Ceil_build;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::UnaryOperator__Subscribe_fn;
    return type;
}

// public Ceil(Fuse.Reactive.Expression operand) :298
void Ceil__ctor_3_fn(Ceil* __this, ::g::Fuse::Reactive::Expression* operand)
{
    __this->ctor_3(operand);
}

// public Ceil New(Fuse.Reactive.Expression operand) :298
void Ceil__New1_fn(::g::Fuse::Reactive::Expression* operand, Ceil** __retval)
{
    *__retval = Ceil::New1(operand);
}

// public Ceil(Fuse.Reactive.Expression operand) [instance] :298
void Ceil::ctor_3(::g::Fuse::Reactive::Expression* operand)
{
    ctor_2(operand, ::STRINGS[11/*"ceil"*/], uDelegate::New(::TYPES[0/*Fuse.Reactive.UnaryFloatOperator.FloatOp*/], (void*)::g::Uno::Math__Ceil_fn));
}

// public Ceil New(Fuse.Reactive.Expression operand) [static] :298
Ceil* Ceil::New1(::g::Fuse::Reactive::Expression* operand)
{
    Ceil* obj1 = (Ceil*)uNew(Ceil_typeof());
    obj1->ctor_3(operand);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.4.0/MathFunctions.uno
// -------------------------------------------------------------------------------

// public sealed class Clamp :467
// {
static void Clamp_build(uType* type)
{
    ::STRINGS[12] = uString::Const("clamp(");
    ::STRINGS[13] = uString::Const(",");
    ::STRINGS[5] = uString::Const(")");
    ::TYPES[1] = ::g::Fuse::Marshal_typeof()->MakeMethod(1/*TryToType<float>*/, ::g::Uno::Float_typeof(), NULL);
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::TernaryOperator_type, interface0));
    type->SetFields(3);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Clamp__New1_fn, 0, true, type, 3, ::g::Fuse::Reactive::Expression_typeof(), ::g::Fuse::Reactive::Expression_typeof(), ::g::Fuse::Reactive::Expression_typeof()));
}

::g::Fuse::Reactive::TernaryOperator_type* Clamp_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::TernaryOperator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::TernaryOperator_typeof();
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Clamp);
    options.TypeSize = sizeof(::g::Fuse::Reactive::TernaryOperator_type);
    type = (::g::Fuse::Reactive::TernaryOperator_type*)uClassType::New("Fuse.Reactive.Clamp", options);
    type->fp_build_ = Clamp_build;
    type->fp_Compute = (void(*)(::g::Fuse::Reactive::TernaryOperator*, uObject*, uObject*, uObject*, uObject**))Clamp__Compute_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))Clamp__ToString_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::TernaryOperator__Subscribe_fn;
    return type;
}

// public Clamp(Fuse.Reactive.Expression first, Fuse.Reactive.Expression second, Fuse.Reactive.Expression third) :470
void Clamp__ctor_2_fn(Clamp* __this, ::g::Fuse::Reactive::Expression* first, ::g::Fuse::Reactive::Expression* second, ::g::Fuse::Reactive::Expression* third)
{
    __this->ctor_2(first, second, third);
}

// protected override sealed object Compute(object a, object mn, object mx) :475
void Clamp__Compute_fn(Clamp* __this, uObject* a, uObject* mn, uObject* mx, uObject** __retval)
{
    uStackFrame __("Fuse.Reactive.Clamp", "Compute(object,object,object)");
    bool ret2;
    bool ret3;
    ::g::Uno::Float4 av = ::g::Uno::Float4__New1(0.0f);
    float mxv = 0.0f, mnv = 0.0f;
    int size = 0;

    if ((!::g::Fuse::Marshal::TryToZeroFloat4(a, &av, &size) || !(::g::Fuse::Marshal__TryToType_fn(::TYPES[1/*Fuse.Marshal.TryToType<float>*/], mn, &mnv, &ret2), ret2)) || !(::g::Fuse::Marshal__TryToType_fn(::TYPES[1/*Fuse.Marshal.TryToType<float>*/], mx, &mxv, &ret3), ret3))
        return *__retval = NULL, void();

    if (size == 1)
        return *__retval = uBox(::TYPES[18/*float*/], ::g::Uno::Math::Clamp1(av.X, mnv, mxv)), void();

    if (size == 2)
        return *__retval = uBox(::g::Uno::Float2_typeof(), ::g::Uno::Math::Clamp2(::g::Uno::Float2__New2(av.X, av.Y), mnv, mxv)), void();

    if (size == 3)
        return *__retval = uBox(::g::Uno::Float3_typeof(), ::g::Uno::Math::Clamp4(::g::Uno::Float3__New2(av.X, av.Y, av.Z), mnv, mxv)), void();

    if (size == 4)
        return *__retval = uBox(::g::Uno::Float4_typeof(), ::g::Uno::Math::Clamp6(av, mnv, mxv)), void();

    return *__retval = NULL, void();
}

// public Clamp New(Fuse.Reactive.Expression first, Fuse.Reactive.Expression second, Fuse.Reactive.Expression third) :470
void Clamp__New1_fn(::g::Fuse::Reactive::Expression* first, ::g::Fuse::Reactive::Expression* second, ::g::Fuse::Reactive::Expression* third, Clamp** __retval)
{
    *__retval = Clamp::New1(first, second, third);
}

// public override sealed string ToString() :496
void Clamp__ToString_fn(Clamp* __this, uString** __retval)
{
    uStackFrame __("Fuse.Reactive.Clamp", "ToString()");
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[12/*"clamp("*/], __this->First()), ::STRINGS[13/*","*/]), __this->Second()), ::STRINGS[13/*","*/]), __this->Third()), ::STRINGS[5/*")"*/]), void();
}

// public Clamp(Fuse.Reactive.Expression first, Fuse.Reactive.Expression second, Fuse.Reactive.Expression third) [instance] :470
void Clamp::ctor_2(::g::Fuse::Reactive::Expression* first, ::g::Fuse::Reactive::Expression* second, ::g::Fuse::Reactive::Expression* third)
{
    ctor_1(first, second, third);
}

// public Clamp New(Fuse.Reactive.Expression first, Fuse.Reactive.Expression second, Fuse.Reactive.Expression third) [static] :470
Clamp* Clamp::New1(::g::Fuse::Reactive::Expression* first, ::g::Fuse::Reactive::Expression* second, ::g::Fuse::Reactive::Expression* third)
{
    Clamp* obj1 = (Clamp*)uNew(Clamp_typeof());
    obj1->ctor_2(first, second, third);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Bindings/1.4.0/Closure.uno
// ----------------------------------------------------------------------

// public sealed class Closure :43
// {
static void Closure_build(uType* type)
{
    ::TYPES[13] = ::g::Fuse::Reactive::ClosureHandler_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Node_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Node_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Node_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface5));
    type->SetFields(16,
        ::g::Uno::UX::NameTable_typeof(), offsetof(Closure, _nameTable), 0,
        ::TYPES[13/*Fuse.Reactive.ClosureHandler*/], offsetof(Closure, _ready), 0);
    type->Reflection.SetFunctions(3,
        new uFunction(".ctor", NULL, (void*)Closure__New2_fn, 0, true, type, 1, ::g::Uno::UX::NameTable_typeof()),
        new uFunction("add_Ready", NULL, (void*)Closure__add_Ready_fn, 0, false, uVoid_typeof(), 1, ::TYPES[13/*Fuse.Reactive.ClosureHandler*/]),
        new uFunction("remove_Ready", NULL, (void*)Closure__remove_Ready_fn, 0, false, uVoid_typeof(), 1, ::TYPES[13/*Fuse.Reactive.ClosureHandler*/]));
}

::g::Fuse::Node_type* Closure_typeof()
{
    static uSStrong< ::g::Fuse::Node_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Node_typeof();
    options.FieldCount = 18;
    options.InterfaceCount = 6;
    options.ObjectSize = sizeof(Closure);
    options.TypeSize = sizeof(::g::Fuse::Node_type);
    type = (::g::Fuse::Node_type*)uClassType::New("Fuse.Reactive.Closure", options);
    type->fp_build_ = Closure_build;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))Closure__OnRooted_fn;
    type->interface4.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface4.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface5.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface4.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface4.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public Closure(Uno.UX.NameTable nameTable) :48
void Closure__ctor_2_fn(Closure* __this, ::g::Uno::UX::NameTable* nameTable)
{
    __this->ctor_2(nameTable);
}

// public Closure New(Uno.UX.NameTable nameTable) :48
void Closure__New2_fn(::g::Uno::UX::NameTable* nameTable, Closure** __retval)
{
    *__retval = Closure::New2(nameTable);
}

// protected override sealed void OnRooted() :93
void Closure__OnRooted_fn(Closure* __this)
{
    uStackFrame __("Fuse.Reactive.Closure", "OnRooted()");
    ::g::Fuse::Node__OnRooted_fn(__this);
    __this->ScheduleReady();
}

// public void add_Ready(Fuse.Reactive.ClosureHandler value) :80
void Closure__add_Ready_fn(Closure* __this, uDelegate* value)
{
    __this->add_Ready(value);
}

// public void remove_Ready(Fuse.Reactive.ClosureHandler value) :87
void Closure__remove_Ready_fn(Closure* __this, uDelegate* value)
{
    __this->remove_Ready(value);
}

// private void ScheduleReady() :99
void Closure__ScheduleReady_fn(Closure* __this)
{
    __this->ScheduleReady();
}

// public Closure(Uno.UX.NameTable nameTable) [instance] :48
void Closure::ctor_2(::g::Uno::UX::NameTable* nameTable)
{
    ctor_1();
    _nameTable = nameTable;
}

// public void add_Ready(Fuse.Reactive.ClosureHandler value) [instance] :80
void Closure::add_Ready(uDelegate* value)
{
    uStackFrame __("Fuse.Reactive.Closure", "add_Ready(Fuse.Reactive.ClosureHandler)");

    if (IsRootingCompleted())
        ScheduleReady();

    _ready = uCast<uDelegate*>(::g::Uno::Delegate::Combine(_ready, value), ::TYPES[13/*Fuse.Reactive.ClosureHandler*/]);
}

// public void remove_Ready(Fuse.Reactive.ClosureHandler value) [instance] :87
void Closure::remove_Ready(uDelegate* value)
{
    uStackFrame __("Fuse.Reactive.Closure", "remove_Ready(Fuse.Reactive.ClosureHandler)");
    _ready = uCast<uDelegate*>(::g::Uno::Delegate::Remove(_ready, value), ::TYPES[13/*Fuse.Reactive.ClosureHandler*/]);
}

// private void ScheduleReady() [instance] :99
void Closure::ScheduleReady()
{
    uStackFrame __("Fuse.Reactive.Closure", "ScheduleReady()");

    if (::g::Uno::Delegate::op_Inequality(_ready, NULL))
        uPtr(_ready)->Invoke(2, this, (::g::Fuse::Reactive::ClosureArgs*)::g::Fuse::Reactive::ClosureArgs::New2(_nameTable));
}

// public Closure New(Uno.UX.NameTable nameTable) [static] :48
Closure* Closure::New2(::g::Uno::UX::NameTable* nameTable)
{
    Closure* obj1 = (Closure*)uNew(Closure_typeof());
    obj1->ctor_2(nameTable);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Bindings/1.4.0/Closure.uno
// ----------------------------------------------------------------------

// public sealed class ClosureArgs :11
// {
static void ClosureArgs_build(uType* type)
{
    ::TYPES[14] = ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL);
    ::TYPES[15] = ::g::Uno::Collections::IList_typeof()->MakeType(uObject_typeof(), NULL);
    ::TYPES[16] = ::g::Fuse::Scripting::IEventSerializer_typeof();
    type->SetInterfaces(
        ::g::Fuse::Scripting::IScriptEvent_typeof(), offsetof(ClosureArgs_type, interface0));
    type->SetFields(0,
        ::g::Uno::UX::NameTable_typeof(), offsetof(ClosureArgs, _names), 0);
    type->Reflection.SetFunctions(1,
        new uFunction("Serialize", NULL, (void*)ClosureArgs__Serialize_fn, 0, false, uVoid_typeof(), 1, ::TYPES[16/*Fuse.Scripting.IEventSerializer*/]));
}

ClosureArgs_type* ClosureArgs_typeof()
{
    static uSStrong<ClosureArgs_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::EventArgs_typeof();
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(ClosureArgs);
    options.TypeSize = sizeof(ClosureArgs_type);
    type = (ClosureArgs_type*)uClassType::New("Fuse.Reactive.ClosureArgs", options);
    type->fp_build_ = ClosureArgs_build;
    type->interface0.fp_Serialize = (void(*)(uObject*, uObject*))ClosureArgs__Serialize_fn;
    return type;
}

// internal ClosureArgs(Uno.UX.NameTable names) :15
void ClosureArgs__ctor_1_fn(ClosureArgs* __this, ::g::Uno::UX::NameTable* names)
{
    __this->ctor_1(names);
}

// internal ClosureArgs New(Uno.UX.NameTable names) :15
void ClosureArgs__New2_fn(::g::Uno::UX::NameTable* names, ClosureArgs** __retval)
{
    *__retval = ClosureArgs::New2(names);
}

// public void Serialize(Fuse.Scripting.IEventSerializer s) :20
void ClosureArgs__Serialize_fn(ClosureArgs* __this, uObject* s)
{
    __this->Serialize(s);
}

// internal ClosureArgs(Uno.UX.NameTable names) [instance] :15
void ClosureArgs::ctor_1(::g::Uno::UX::NameTable* names)
{
    ctor_();
    _names = names;
}

// public void Serialize(Fuse.Scripting.IEventSerializer s) [instance] :20
void ClosureArgs::Serialize(uObject* s)
{
    uStackFrame __("Fuse.Reactive.ClosureArgs", "Serialize(Fuse.Scripting.IEventSerializer)");
    uObject* ret2;
    ::g::Uno::UX::NameTable* nt = _names;
    int o = (nt != NULL) ? ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(uPtr(nt)->Objects()), ::TYPES[14/*Uno.Collections.ICollection<object>*/])) - 1 : 0;

    while (nt != NULL)
    {
        for (int e = uPtr(uPtr(nt)->Entries)->Length(); (e--) > 0; )
        {
            uString* name = uPtr(uPtr(nt)->Entries)->Strong<uString*>(e);
            uObject* obj = (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(uPtr(_names)->Objects()), ::TYPES[15/*Uno.Collections.IList<object>*/]), uCRef<int>(o--), &ret2), ret2);
            ::g::Fuse::Scripting::IEventSerializer::AddObject(uInterface(uPtr(s), ::TYPES[16/*Fuse.Scripting.IEventSerializer*/]), name, obj);
        }

        nt = uPtr(nt)->ParentTable;
    }
}

// internal ClosureArgs New(Uno.UX.NameTable names) [static] :15
ClosureArgs* ClosureArgs::New2(::g::Uno::UX::NameTable* names)
{
    ClosureArgs* obj1 = (ClosureArgs*)uNew(ClosureArgs_typeof());
    obj1->ctor_1(names);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Bindings/1.4.0/Closure.uno
// ----------------------------------------------------------------------

// public delegate void ClosureHandler(object sender, Fuse.Reactive.ClosureArgs args) :38
uDelegateType* ClosureHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Reactive.ClosureHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::Reactive::ClosureArgs_typeof());
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.4.0/Operators.uno
// ---------------------------------------------------------------------------

// public sealed class Conditional :83
// {
static void Conditional_build(uType* type)
{
    ::STRINGS[6] = uString::Const("(");
    ::STRINGS[14] = uString::Const(" ? ");
    ::STRINGS[15] = uString::Const(" : ");
    ::STRINGS[5] = uString::Const(")");
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::TernaryOperator_type, interface0));
    type->SetFields(3);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Conditional__New1_fn, 0, true, type, 3, ::g::Fuse::Reactive::Expression_typeof(), ::g::Fuse::Reactive::Expression_typeof(), ::g::Fuse::Reactive::Expression_typeof()));
}

::g::Fuse::Reactive::TernaryOperator_type* Conditional_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::TernaryOperator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::TernaryOperator_typeof();
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Conditional);
    options.TypeSize = sizeof(::g::Fuse::Reactive::TernaryOperator_type);
    type = (::g::Fuse::Reactive::TernaryOperator_type*)uClassType::New("Fuse.Reactive.Conditional", options);
    type->fp_build_ = Conditional_build;
    type->fp_Compute = (void(*)(::g::Fuse::Reactive::TernaryOperator*, uObject*, uObject*, uObject*, uObject**))Conditional__Compute_fn;
    type->fp_get_IsThirdOptional = (void(*)(::g::Fuse::Reactive::TernaryOperator*, bool*))Conditional__get_IsThirdOptional_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))Conditional__ToString_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::TernaryOperator__Subscribe_fn;
    return type;
}

// public Conditional(Fuse.Reactive.Expression condition, Fuse.Reactive.Expression trueValue, Fuse.Reactive.Expression falseValue) :86
void Conditional__ctor_2_fn(Conditional* __this, ::g::Fuse::Reactive::Expression* condition, ::g::Fuse::Reactive::Expression* trueValue, ::g::Fuse::Reactive::Expression* falseValue)
{
    __this->ctor_2(condition, trueValue, falseValue);
}

// protected override sealed object Compute(object cond, object trueVal, object falseVal) :89
void Conditional__Compute_fn(Conditional* __this, uObject* cond, uObject* trueVal, uObject* falseVal, uObject** __retval)
{
    uStackFrame __("Fuse.Reactive.Conditional", "Compute(object,object,object)");

    if (cond == NULL)
        return *__retval = NULL, void();

    if (::g::Fuse::Marshal::ToBool(cond))
        return *__retval = trueVal, void();

    return *__retval = falseVal, void();
}

// protected override sealed bool get_IsThirdOptional() :96
void Conditional__get_IsThirdOptional_fn(Conditional* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public Conditional New(Fuse.Reactive.Expression condition, Fuse.Reactive.Expression trueValue, Fuse.Reactive.Expression falseValue) :86
void Conditional__New1_fn(::g::Fuse::Reactive::Expression* condition, ::g::Fuse::Reactive::Expression* trueValue, ::g::Fuse::Reactive::Expression* falseValue, Conditional** __retval)
{
    *__retval = Conditional::New1(condition, trueValue, falseValue);
}

// public override sealed string ToString() :98
void Conditional__ToString_fn(Conditional* __this, uString** __retval)
{
    uStackFrame __("Fuse.Reactive.Conditional", "ToString()");
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[6/*"("*/], __this->First()), ::STRINGS[14/*" ? "*/]), __this->Second()), ::STRINGS[15/*" : "*/]), __this->Third()), ::STRINGS[5/*")"*/]), void();
}

// public Conditional(Fuse.Reactive.Expression condition, Fuse.Reactive.Expression trueValue, Fuse.Reactive.Expression falseValue) [instance] :86
void Conditional::ctor_2(::g::Fuse::Reactive::Expression* condition, ::g::Fuse::Reactive::Expression* trueValue, ::g::Fuse::Reactive::Expression* falseValue)
{
    ctor_1(condition, trueValue, falseValue);
}

// public Conditional New(Fuse.Reactive.Expression condition, Fuse.Reactive.Expression trueValue, Fuse.Reactive.Expression falseValue) [static] :86
Conditional* Conditional::New1(::g::Fuse::Reactive::Expression* condition, ::g::Fuse::Reactive::Expression* trueValue, ::g::Fuse::Reactive::Expression* falseValue)
{
    Conditional* obj1 = (Conditional*)uNew(Conditional_typeof());
    obj1->ctor_2(condition, trueValue, falseValue);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.4.0/FuseJS/DebugLog.uno
// ---------------------------------------------------------------------------------

// internal static class Console :24
// {
static void Console_build(uType* type)
{
    ::STRINGS[16] = uString::Const("/usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.4.0/FuseJS/DebugLog.uno");
    ::STRINGS[17] = uString::Const("null");
    ::STRINGS[18] = uString::Const("\"");
    ::STRINGS[19] = uString::Const("function");
    ::STRINGS[20] = uString::Const("Object");
    ::STRINGS[21] = uString::Const("");
    ::STRINGS[22] = uString::Const(": ");
    ::STRINGS[23] = uString::Const("Array[");
    ::STRINGS[24] = uString::Const("]");
    ::STRINGS[25] = uString::Const("  ");
    ::STRINGS[26] = uString::Const("log");
    ::STRINGS[27] = uString::Const("dir");
    ::STRINGS[28] = uString::Const("console");
    ::TYPES[17] = ::g::Uno::Int_typeof();
    ::TYPES[18] = ::g::Uno::Float_typeof();
    ::TYPES[11] = ::g::Uno::Double_typeof();
    ::TYPES[9] = ::g::Uno::Bool_typeof();
    ::TYPES[12] = ::g::Uno::String_typeof();
    ::TYPES[19] = ::g::Fuse::Scripting::Function_typeof();
    ::TYPES[20] = ::g::Fuse::Scripting::Object_typeof();
    ::TYPES[21] = ::g::Fuse::Scripting::Array_typeof();
    ::TYPES[22] = ::g::Fuse::Scripting::Callback_typeof();
    type->SetDependencies(
        ::g::Uno::Diagnostics::Debug_typeof());
}

uClassType* Console_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.DependencyCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Reactive.Console", options);
    type->fp_build_ = Console_build;
    return type;
}

// private static object Dir(object[] args) :45
void Console__Dir_fn(uArray* args, uObject** __retval)
{
    *__retval = Console::Dir(args);
}

// private static void Dir(Uno.Text.StringBuilder builder, object obj, [int maxDepth], [int indent]) :57
void Console__Dir1_fn(::g::Uno::Text::StringBuilder* builder, uObject* obj, int* maxDepth, int* indent)
{
    Console::Dir1(builder, obj, *maxDepth, *indent);
}

// private static void Indent(Uno.Text.StringBuilder builder, int indent) :126
void Console__Indent_fn(::g::Uno::Text::StringBuilder* builder, int* indent)
{
    Console::Indent(builder, *indent);
}

// public static void Init(Fuse.Scripting.Context c) :26
void Console__Init_fn(::g::Fuse::Scripting::Context* c)
{
    Console::Init(c);
}

// private static object Log(object[] args) :35
void Console__Log_fn(uArray* args, uObject** __retval)
{
    *__retval = Console::Log(args);
}

// private static object Dir(object[] args) [static] :45
uObject* Console::Dir(uArray* args)
{
    uStackFrame __("Fuse.Reactive.Console", "Dir(object[])");
    int maxDepth = 1;
    ::g::Uno::Text::StringBuilder* builder = ::g::Uno::Text::StringBuilder::New1();

    for (int i = 0; i < uPtr(args)->Length(); i++)
        Console::Dir1(builder, uPtr(args)->Strong<uObject*>(i), 1, 0);

    ::g::Uno::Diagnostics::Debug::Log5(builder->ToString(), 0, ::STRINGS[16/*"/usr/local/...*/], 53);
    return NULL;
}

// private static void Dir(Uno.Text.StringBuilder builder, object obj, [int maxDepth], [int indent]) [static] :57
void Console::Dir1(::g::Uno::Text::StringBuilder* builder, uObject* obj, int maxDepth, int indent)
{
    uStackFrame __("Fuse.Reactive.Console", "Dir(Uno.Text.StringBuilder,object,[int],[int])");
    uArray* array1;
    int index2;
    int length3;
    indent++;

    if (obj == NULL)
    {
        uPtr(builder)->AppendLine(::STRINGS[17/*"null"*/]);
        return;
    }

    if ((uIs(obj, ::TYPES[17/*int*/]) || uIs(obj, ::TYPES[18/*float*/])) || uIs(obj, ::TYPES[11/*double*/]))
    {
        uPtr(builder)->AppendLine(::g::Uno::Object::ToString(uPtr(obj)));
        return;
    }

    if (uIs(obj, ::TYPES[9/*bool*/]))
    {
        uPtr(builder)->AppendLine(::g::Uno::String::ToLower(uPtr(::g::Uno::Object::ToString(uPtr(obj)))));
        return;
    }

    if (uIs(obj, ::TYPES[12/*string*/]))
    {
        uPtr(builder)->AppendLine(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[18/*"\""*/], ::g::Uno::Object::ToString(uPtr(obj))), ::STRINGS[18/*"\""*/]));
        return;
    }

    if (uIs(obj, ::TYPES[19/*Fuse.Scripting.Function*/]))
    {
        uPtr(builder)->AppendLine(::STRINGS[19/*"function"*/]);
        return;
    }

    if (uIs(obj, ::TYPES[20/*Fuse.Scripting.Object*/]))
    {
        ::g::Fuse::Scripting::Object* o = uCast< ::g::Fuse::Scripting::Object*>(obj, ::TYPES[20/*Fuse.Scripting.Object*/]);
        uPtr(builder)->AppendLine(::STRINGS[20/*"Object"*/]);

        if (indent <= maxDepth)

            for (array1 = uPtr(o)->Keys(), index2 = 0, length3 = uPtr(array1)->Length(); index2 < length3; ++index2)
            {
                uString* k = uPtr(array1)->Strong<uString*>(index2);
                Console::Indent(builder, indent);
                uPtr(builder)->Append2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[21/*""*/], k), ::STRINGS[22/*": "*/]));
                Console::Dir1(builder, uPtr(o)->Item(k), maxDepth, indent);
            }

        return;
    }

    if (uIs(obj, ::TYPES[21/*Fuse.Scripting.Array*/]))
    {
        ::g::Fuse::Scripting::Array* a = uCast< ::g::Fuse::Scripting::Array*>(obj, ::TYPES[21/*Fuse.Scripting.Array*/]);
        uPtr(builder)->AppendLine(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[23/*"Array["*/], uBox<int>(::TYPES[17/*int*/], uPtr(a)->Length())), ::STRINGS[24/*"]"*/]));

        if (indent <= maxDepth)

            for (int i = 0; i < uPtr(a)->Length(); i++)
            {
                Console::Indent(builder, indent);
                uPtr(builder)->Append2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[21/*""*/], uBox<int>(::TYPES[17/*int*/], i)), ::STRINGS[22/*": "*/]));
                Console::Dir1(builder, uPtr(a)->Item(i), maxDepth, indent);
            }

        return;
    }

    uPtr(builder)->AppendLine(::g::Uno::Object::ToString(uPtr(obj)));
}

// private static void Indent(Uno.Text.StringBuilder builder, int indent) [static] :126
void Console::Indent(::g::Uno::Text::StringBuilder* builder, int indent)
{
    uStackFrame __("Fuse.Reactive.Console", "Indent(Uno.Text.StringBuilder,int)");

    for (int i = 0; i < indent; i++)
        uPtr(builder)->Append2(::STRINGS[25/*"  "*/]);
}

// public static void Init(Fuse.Scripting.Context c) [static] :26
void Console::Init(::g::Fuse::Scripting::Context* c)
{
    uStackFrame __("Fuse.Reactive.Console", "Init(Fuse.Scripting.Context)");
    ::g::Fuse::Scripting::Object* console = uPtr(c)->NewObject();
    uPtr(console)->Item(::STRINGS[26/*"log"*/], uDelegate::New(::TYPES[22/*Fuse.Scripting.Callback*/], (void*)Console__Log_fn));
    console->Item(::STRINGS[27/*"dir"*/], uDelegate::New(::TYPES[22/*Fuse.Scripting.Callback*/], (void*)Console__Dir_fn));
    uPtr(c->GlobalObject())->Item(::STRINGS[28/*"console"*/], console);
}

// private static object Log(object[] args) [static] :35
uObject* Console::Log(uArray* args)
{
    uStackFrame __("Fuse.Reactive.Console", "Log(object[])");

    for (int i = 0; i < uPtr(args)->Length(); i++)
        ::g::Uno::Diagnostics::Debug::Log5((uPtr(args)->Strong<uObject*>(i) != NULL) ? (uString*)::g::Uno::Object::ToString(uPtr(uPtr(args)->Strong<uObject*>(i))) : ::STRINGS[17/*"null"*/], 0, ::STRINGS[16/*"/usr/local/...*/], 39);

    return NULL;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.4.0/Expression.uno
// ----------------------------------------------------------------------------

// public sealed class Constant :24
// {
static void Constant_build(uType* type)
{
    ::STRINGS[29] = uString::Const("'");
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::ConstantExpression_type, interface0));
    type->SetFields(0,
        uObject_typeof(), offsetof(Constant, _Value), 0);
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)Constant__New1_fn, 0, true, type, 1, uObject_typeof()),
        new uFunction("get_Value", NULL, (void*)Constant__get_Value_fn, 0, false, uObject_typeof(), 0));
}

::g::Fuse::Reactive::ConstantExpression_type* Constant_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::ConstantExpression_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::ConstantExpression_typeof();
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Constant);
    options.TypeSize = sizeof(::g::Fuse::Reactive::ConstantExpression_type);
    type = (::g::Fuse::Reactive::ConstantExpression_type*)uClassType::New("Fuse.Reactive.Constant", options);
    type->fp_build_ = Constant_build;
    type->fp_GetValue = (void(*)(::g::Fuse::Reactive::ConstantExpression*, uObject*, uObject**))Constant__GetValue_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))Constant__ToString_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::ConstantExpression__Subscribe_fn;
    return type;
}

// public Constant(object value) :28
void Constant__ctor_2_fn(Constant* __this, uObject* value)
{
    __this->ctor_2(value);
}

// public override sealed object GetValue(Fuse.Reactive.IContext context) :29
void Constant__GetValue_fn(Constant* __this, uObject* context, uObject** __retval)
{
    return *__retval = __this->Value(), void();
}

// public Constant New(object value) :28
void Constant__New1_fn(uObject* value, Constant** __retval)
{
    *__retval = Constant::New1(value);
}

// public override sealed string ToString() :31
void Constant__ToString_fn(Constant* __this, uString** __retval)
{
    uStackFrame __("Fuse.Reactive.Constant", "ToString()");
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[29/*"'"*/], ::g::Uno::Object::ToString(uPtr(__this->Value()))), ::STRINGS[29/*"'"*/]), void();
}

// public generated object get_Value() :26
void Constant__get_Value_fn(Constant* __this, uObject** __retval)
{
    *__retval = __this->Value();
}

// private generated void set_Value(object value) :26
void Constant__set_Value_fn(Constant* __this, uObject* value)
{
    __this->Value(value);
}

// public Constant(object value) [instance] :28
void Constant::ctor_2(uObject* value)
{
    ctor_1();
    Value(value);
}

// public generated object get_Value() [instance] :26
uObject* Constant::Value()
{
    return _Value;
}

// private generated void set_Value(object value) [instance] :26
void Constant::Value(uObject* value)
{
    _Value = value;
}

// public Constant New(object value) [static] :28
Constant* Constant::New1(uObject* value)
{
    Constant* obj1 = (Constant*)uNew(Constant_typeof());
    obj1->ctor_2(value);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.4.0/Expression.uno
// ----------------------------------------------------------------------------

// public abstract class ConstantExpression :13
// {
static void ConstantExpression_build(uType* type)
{
    ::TYPES[23] = ::g::Fuse::Reactive::IListener_typeof();
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(ConstantExpression_type, interface0));
    type->Reflection.SetFunctions(1,
        new uFunction("GetValue", NULL, NULL, offsetof(ConstantExpression_type, fp_GetValue), false, uObject_typeof(), 1, ::g::Fuse::Reactive::IContext_typeof()));
}

ConstantExpression_type* ConstantExpression_typeof()
{
    static uSStrong<ConstantExpression_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::Expression_typeof();
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(ConstantExpression);
    options.TypeSize = sizeof(ConstantExpression_type);
    type = (ConstantExpression_type*)uClassType::New("Fuse.Reactive.ConstantExpression", options);
    type->fp_build_ = ConstantExpression_build;
    type->fp_Subscribe = (void(*)(::g::Fuse::Reactive::Expression*, uObject*, uObject*, uObject**))ConstantExpression__Subscribe_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))ConstantExpression__Subscribe_fn;
    return type;
}

// protected generated ConstantExpression() :13
void ConstantExpression__ctor_1_fn(ConstantExpression* __this)
{
    __this->ctor_1();
}

// public override sealed Uno.IDisposable Subscribe(Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :17
void ConstantExpression__Subscribe_fn(ConstantExpression* __this, uObject* context, uObject* listener, uObject** __retval)
{
    uStackFrame __("Fuse.Reactive.ConstantExpression", "Subscribe(Fuse.Reactive.IContext,Fuse.Reactive.IListener)");
    ::g::Fuse::Reactive::IListener::OnNewData(uInterface(uPtr(listener), ::TYPES[23/*Fuse.Reactive.IListener*/]), (uObject*)__this, __this->GetValue(context));
    return *__retval = NULL, void();
}

// protected generated ConstantExpression() [instance] :13
void ConstantExpression::ctor_1()
{
    ctor_();
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.4.0/MathFunctions.uno
// -------------------------------------------------------------------------------

// public sealed class Cos :222
// {
static void Cos_build(uType* type)
{
    ::STRINGS[30] = uString::Const("cos");
    ::TYPES[0] = ::g::Fuse::Reactive::UnaryFloatOperator__FloatOp_typeof();
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::UnaryOperator_type, interface0));
    type->SetFields(3);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Cos__New1_fn, 0, true, type, 1, ::g::Fuse::Reactive::Expression_typeof()));
}

::g::Fuse::Reactive::UnaryOperator_type* Cos_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::UnaryOperator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::UnaryFloatOperator_typeof();
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Cos);
    options.TypeSize = sizeof(::g::Fuse::Reactive::UnaryOperator_type);
    type = (::g::Fuse::Reactive::UnaryOperator_type*)uClassType::New("Fuse.Reactive.Cos", options);
    type->fp_build_ = Cos_build;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::UnaryOperator__Subscribe_fn;
    return type;
}

// public Cos(Fuse.Reactive.Expression operand) :225
void Cos__ctor_3_fn(Cos* __this, ::g::Fuse::Reactive::Expression* operand)
{
    __this->ctor_3(operand);
}

// public Cos New(Fuse.Reactive.Expression operand) :225
void Cos__New1_fn(::g::Fuse::Reactive::Expression* operand, Cos** __retval)
{
    *__retval = Cos::New1(operand);
}

// public Cos(Fuse.Reactive.Expression operand) [instance] :225
void Cos::ctor_3(::g::Fuse::Reactive::Expression* operand)
{
    ctor_2(operand, ::STRINGS[30/*"cos"*/], uDelegate::New(::TYPES[0/*Fuse.Reactive.UnaryFloatOperator.FloatOp*/], (void*)::g::Uno::Math__Cos_fn));
}

// public Cos New(Fuse.Reactive.Expression operand) [static] :225
Cos* Cos::New1(::g::Fuse::Reactive::Expression* operand)
{
    Cos* obj1 = (Cos*)uNew(Cos_typeof());
    obj1->ctor_3(operand);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Bindings/1.4.0/Instance.API.uno
// ---------------------------------------------------------------------------

// private sealed class Instantiator.CountItem :317
// {
static void Instantiator__CountItem_build(uType* type)
{
}

uType* Instantiator__CountItem_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(Instantiator__CountItem);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.Instantiator.CountItem", options);
    type->fp_build_ = Instantiator__CountItem_build;
    type->fp_ctor_ = (void*)Instantiator__CountItem__New1_fn;
    return type;
}

// public generated CountItem() :317
void Instantiator__CountItem__ctor__fn(Instantiator__CountItem* __this)
{
    __this->ctor_();
}

// public generated CountItem New() :317
void Instantiator__CountItem__New1_fn(Instantiator__CountItem** __retval)
{
    *__retval = Instantiator__CountItem::New1();
}

// public generated CountItem() [instance] :317
void Instantiator__CountItem::ctor_()
{
}

// public generated CountItem New() [static] :317
Instantiator__CountItem* Instantiator__CountItem::New1()
{
    Instantiator__CountItem* obj1 = (Instantiator__CountItem*)uNew(Instantiator__CountItem_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.4.0/Expression.uno
// ----------------------------------------------------------------------------

// public sealed class Data :37
// {
static void Data_build(uType* type)
{
    ::STRINGS[31] = uString::Const("{");
    ::STRINGS[32] = uString::Const("}");
    ::TYPES[24] = ::g::Fuse::Reactive::IContext_typeof();
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::Expression_type, interface0));
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(Data, _Key), 0);
    type->Reflection.SetFunctions(2,
        new uFunction("get_Key", NULL, (void*)Data__get_Key_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)Data__New1_fn, 0, true, type, 1, ::g::Uno::String_typeof()));
}

::g::Fuse::Reactive::Expression_type* Data_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::Expression_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::Expression_typeof();
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Data);
    options.TypeSize = sizeof(::g::Fuse::Reactive::Expression_type);
    type = (::g::Fuse::Reactive::Expression_type*)uClassType::New("Fuse.Reactive.Data", options);
    type->fp_build_ = Data_build;
    type->fp_Subscribe = (void(*)(::g::Fuse::Reactive::Expression*, uObject*, uObject*, uObject**))Data__Subscribe_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))Data__ToString_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))Data__Subscribe_fn;
    return type;
}

// public Data(string key) :41
void Data__ctor_1_fn(Data* __this, uString* key)
{
    __this->ctor_1(key);
}

// public generated string get_Key() :39
void Data__get_Key_fn(Data* __this, uString** __retval)
{
    *__retval = __this->Key();
}

// private generated void set_Key(string value) :39
void Data__set_Key_fn(Data* __this, uString* value)
{
    __this->Key(value);
}

// public Data New(string key) :41
void Data__New1_fn(uString* key, Data** __retval)
{
    *__retval = Data::New1(key);
}

// public override sealed Uno.IDisposable Subscribe(Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :43
void Data__Subscribe_fn(Data* __this, uObject* context, uObject* listener, uObject** __retval)
{
    uStackFrame __("Fuse.Reactive.Data", "Subscribe(Fuse.Reactive.IContext,Fuse.Reactive.IListener)");
    return *__retval = ::g::Fuse::Reactive::IContext::Subscribe(uInterface(uPtr(context), ::TYPES[24/*Fuse.Reactive.IContext*/]), (uObject*)__this, __this->Key(), listener), void();
}

// public override sealed string ToString() :48
void Data__ToString_fn(Data* __this, uString** __retval)
{
    uStackFrame __("Fuse.Reactive.Data", "ToString()");
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[31/*"{"*/], __this->Key()), ::STRINGS[32/*"}"*/]), void();
}

// public Data(string key) [instance] :41
void Data::ctor_1(uString* key)
{
    ctor_();
    Key(key);
}

// public generated string get_Key() [instance] :39
uString* Data::Key()
{
    return _Key;
}

// private generated void set_Key(string value) [instance] :39
void Data::Key(uString* value)
{
    _Key = value;
}

// public Data New(string key) [static] :41
Data* Data::New1(uString* key)
{
    Data* obj1 = (Data*)uNew(Data_typeof());
    obj1->ctor_1(key);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Bindings/1.4.0/DataBinding.uno
// --------------------------------------------------------------------------

// public class DataBinding :45
// {
static void DataBinding_build(uType* type)
{
    ::STRINGS[21] = uString::Const("");
    ::STRINGS[33] = uString::Const("Cannot bind '");
    ::STRINGS[34] = uString::Const("' to property '");
    ::STRINGS[35] = uString::Const("'. The observable must contain exactly one ");
    ::STRINGS[36] = uString::Const(".");
    ::STRINGS[37] = uString::Const("/usr/local/share/uno/Packages/Fuse.Reactive.Bindings/1.4.0/DataBinding.uno");
    ::STRINGS[38] = uString::Const("InvalidListOperation");
    ::STRINGS[39] = uString::Const("TryPushAsMarshalledValue");
    ::STRINGS[40] = uString::Const("number");
    ::STRINGS[41] = uString::Const("string");
    ::STRINGS[42] = uString::Const("value that can be converted to type ");
    ::TYPES[25] = ::g::Fuse::IArray_typeof();
    ::TYPES[2] = ::g::Uno::IDisposable_typeof();
    ::TYPES[26] = ::g::Uno::Type_typeof();
    ::TYPES[27] = ::g::Fuse::Reactive::IObservableArray_typeof();
    ::TYPES[28] = ::g::Uno::UX::Selector_typeof();
    ::TYPES[12] = ::g::Uno::String_typeof();
    ::TYPES[29] = ::g::Uno::Exception_typeof();
    ::TYPES[30] = ::g::Uno::Predicate_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[31] = ::g::Fuse::Reactive::ISubscription_typeof();
    type->SetDependencies(
        ::g::Fuse::Diagnostics_typeof(),
        ::g::Fuse::NameRegistry_typeof(),
        ::g::Uno::UX::Selector_typeof(),
        ::g::Uno::Type_typeof());
    type->SetInterfaces(
        ::g::Fuse::Reactive::IContext_typeof(), offsetof(DataBinding_type, interface0),
        ::g::Fuse::Reactive::IListener_typeof(), offsetof(DataBinding_type, interface1),
        ::g::Fuse::Reactive::IObserver_typeof(), offsetof(DataBinding_type, interface2),
        ::g::Fuse::INameListener_typeof(), offsetof(DataBinding_type, interface3),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(DataBinding_type, interface4));
    type->SetFields(3,
        ::g::Fuse::Reactive::BindingMode_typeof(), offsetof(DataBinding, _mode), 0,
        ::g::Fuse::Triggers::BusyTask_typeof(), offsetof(DataBinding, _busyTask), 0,
        ::TYPES[2/*Uno.IDisposable*/], offsetof(DataBinding, _subscription), 0,
        uObject_typeof(), offsetof(DataBinding, _currentValue), 0,
        ::TYPES[12/*string*/], offsetof(DataBinding, _registryName), 0,
        ::g::Uno::UX::Property_typeof(), offsetof(DataBinding, _Target), 0);
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)DataBinding__New1_fn, 0, true, type, 3, ::g::Uno::UX::Property_typeof(), ::g::Fuse::Reactive::IExpression_typeof(), ::g::Fuse::Reactive::BindingMode_typeof()),
        new uFunction("get_Target", NULL, (void*)DataBinding__get_Target_fn, 0, false, ::g::Uno::UX::Property_typeof(), 0));
}

DataBinding_type* DataBinding_typeof()
{
    static uSStrong<DataBinding_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::ExpressionBinding_typeof();
    options.FieldCount = 9;
    options.InterfaceCount = 5;
    options.DependencyCount = 4;
    options.ObjectSize = sizeof(DataBinding);
    options.TypeSize = sizeof(DataBinding_type);
    type = (DataBinding_type*)uClassType::New("Fuse.Reactive.DataBinding", options);
    type->fp_build_ = DataBinding_build;
    type->fp_NewValue = (void(*)(::g::Fuse::Reactive::ExpressionBinding*, uObject*))DataBinding__NewValue_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Binding*))DataBinding__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Binding*))DataBinding__OnUnrooted_fn;
    type->fp_SubscribeResource = (void(*)(::g::Fuse::Reactive::ExpressionBinding*, uObject*, uString*, uObject*, uObject**))DataBinding__SubscribeResource_fn;
    type->interface2.fp_OnClear = (void(*)(uObject*))DataBinding__FuseReactiveIObserverOnClear_fn;
    type->interface2.fp_OnSet = (void(*)(uObject*, uObject*))DataBinding__FuseReactiveIObserverOnSet_fn;
    type->interface2.fp_OnAdd = (void(*)(uObject*, uObject*))DataBinding__FuseReactiveIObserverOnAdd_fn;
    type->interface2.fp_OnNewAt = (void(*)(uObject*, int*, uObject*))DataBinding__FuseReactiveIObserverOnNewAt_fn;
    type->interface2.fp_OnFailed = (void(*)(uObject*, uString*))DataBinding__FuseReactiveIObserverOnFailed_fn;
    type->interface2.fp_OnNewAll = (void(*)(uObject*, uObject*))DataBinding__FuseReactiveIObserverOnNewAll_fn;
    type->interface2.fp_OnRemoveAt = (void(*)(uObject*, int*))DataBinding__FuseReactiveIObserverOnRemoveAt_fn;
    type->interface2.fp_OnInsertAt = (void(*)(uObject*, int*, uObject*))DataBinding__FuseReactiveIObserverOnInsertAt_fn;
    type->interface3.fp_OnNameChanged = (void(*)(uObject*, ::g::Fuse::Node*, ::g::Uno::UX::Selector*))DataBinding__FuseINameListenerOnNameChanged_fn;
    type->interface4.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))DataBinding__UnoUXIPropertyListenerOnPropertyChanged_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uString*, uObject*, uObject**))::g::Fuse::Reactive::ExpressionBinding__FuseReactiveIContextSubscribe_fn;
    type->interface1.fp_OnNewData = (void(*)(uObject*, uObject*, uObject*))::g::Fuse::Reactive::ExpressionBinding__FuseReactiveIListenerOnNewData_fn;
    type->interface0.fp_get_Node = (void(*)(uObject*, ::g::Fuse::Node**))::g::Fuse::Reactive::ExpressionBinding__FuseReactiveIContextget_Node_fn;
    type->interface0.fp_SubscribeResource = (void(*)(uObject*, uObject*, uString*, uObject*, uObject**))DataBinding__SubscribeResource_fn;
    return type;
}

// public DataBinding(Uno.UX.Property target, Fuse.Reactive.IExpression key, Fuse.Reactive.BindingMode mode) :53
void DataBinding__ctor_2_fn(DataBinding* __this, ::g::Uno::UX::Property* target, uObject* key, int* mode)
{
    __this->ctor_2(target, key, *mode);
}

// private bool Acceptor(object obj) :299
void DataBinding__Acceptor_fn(DataBinding* __this, uObject* obj, bool* __retval)
{
    *__retval = __this->Acceptor(obj);
}

// private bool get_Clear() :69
void DataBinding__get_Clear_fn(DataBinding* __this, bool* __retval)
{
    *__retval = __this->Clear();
}

// private void ClearFailed() :138
void DataBinding__ClearFailed_fn(DataBinding* __this)
{
    __this->ClearFailed();
}

// private void ClearValue() :167
void DataBinding__ClearValue_fn(DataBinding* __this)
{
    __this->ClearValue();
}

// private void Fuse.INameListener.OnNameChanged(Fuse.Node obj, Uno.UX.Selector name) :172
void DataBinding__FuseINameListenerOnNameChanged_fn(DataBinding* __this, ::g::Fuse::Node* obj, ::g::Uno::UX::Selector* name)
{
    uStackFrame __("Fuse.Reactive.DataBinding", "Fuse.INameListener.OnNameChanged(Fuse.Node,Uno.UX.Selector)");
    __this->PushValue(__this->_currentValue);
}

// private void Fuse.Reactive.IObserver.OnAdd(object addedValue) :93
void DataBinding__FuseReactiveIObserverOnAdd_fn(DataBinding* __this, uObject* addedValue)
{
    uStackFrame __("Fuse.Reactive.DataBinding", "Fuse.Reactive.IObserver.OnAdd(object)");
    __this->InvalidListOperation();
}

// private void Fuse.Reactive.IObserver.OnClear() :71
void DataBinding__FuseReactiveIObserverOnClear_fn(DataBinding* __this)
{
    uStackFrame __("Fuse.Reactive.DataBinding", "Fuse.Reactive.IObserver.OnClear()");
    __this->ClearValue();
}

// private void Fuse.Reactive.IObserver.OnFailed(string message) :103
void DataBinding__FuseReactiveIObserverOnFailed_fn(DataBinding* __this, uString* message)
{
    uStackFrame __("Fuse.Reactive.DataBinding", "Fuse.Reactive.IObserver.OnFailed(string)");
    __this->ClearValue();
    __this->MarkFailed(message);
}

// private void Fuse.Reactive.IObserver.OnInsertAt(int index, object value) :120
void DataBinding__FuseReactiveIObserverOnInsertAt_fn(DataBinding* __this, int* index, uObject* value)
{
    uStackFrame __("Fuse.Reactive.DataBinding", "Fuse.Reactive.IObserver.OnInsertAt(int,object)");
    __this->InvalidListOperation();
}

// private void Fuse.Reactive.IObserver.OnNewAll(Fuse.IArray values) :109
void DataBinding__FuseReactiveIObserverOnNewAll_fn(DataBinding* __this, uObject* values)
{
    uStackFrame __("Fuse.Reactive.DataBinding", "Fuse.Reactive.IObserver.OnNewAll(Fuse.IArray)");

    if (::g::Fuse::IArray::Length(uInterface(uPtr(values), ::TYPES[25/*Fuse.IArray*/])) > 0)
        __this->InvalidListOperation();
}

// private void Fuse.Reactive.IObserver.OnNewAt(int index, object value) :98
void DataBinding__FuseReactiveIObserverOnNewAt_fn(DataBinding* __this, int* index, uObject* value)
{
    uStackFrame __("Fuse.Reactive.DataBinding", "Fuse.Reactive.IObserver.OnNewAt(int,object)");
    __this->InvalidListOperation();
}

// private void Fuse.Reactive.IObserver.OnRemoveAt(int index) :115
void DataBinding__FuseReactiveIObserverOnRemoveAt_fn(DataBinding* __this, int* index)
{
    uStackFrame __("Fuse.Reactive.DataBinding", "Fuse.Reactive.IObserver.OnRemoveAt(int)");
    __this->InvalidListOperation();
}

// private void Fuse.Reactive.IObserver.OnSet(object newValue) :76
void DataBinding__FuseReactiveIObserverOnSet_fn(DataBinding* __this, uObject* newValue)
{
    uStackFrame __("Fuse.Reactive.DataBinding", "Fuse.Reactive.IObserver.OnSet(object)");
    __this->PushValue(newValue);
}

// private void InvalidListOperation() :88
void DataBinding__InvalidListOperation_fn(DataBinding* __this)
{
    __this->InvalidListOperation();
}

// private void MarkFailed(string message) :133
void DataBinding__MarkFailed_fn(DataBinding* __this, uString* message)
{
    __this->MarkFailed(message);
}

// public DataBinding New(Uno.UX.Property target, Fuse.Reactive.IExpression key, Fuse.Reactive.BindingMode mode) :53
void DataBinding__New1_fn(::g::Uno::UX::Property* target, uObject* key, int* mode, DataBinding** __retval)
{
    *__retval = DataBinding::New1(target, key, *mode);
}

// internal override sealed void NewValue(object value) :198
void DataBinding__NewValue_fn(DataBinding* __this, uObject* value)
{
    uStackFrame __("Fuse.Reactive.DataBinding", "NewValue(object)");

    if (__this->_subscription != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(__this->_subscription), ::TYPES[2/*Uno.IDisposable*/]));
        __this->_subscription = NULL;
    }

    if (::g::Fuse::Marshal::Is(value, uPtr(__this->Target())->PropertyType()))
        __this->PushValue(value);
    else if (::g::Fuse::Marshal::Is(value, ::TYPES[43/*Fuse.Reactive.IObservable*/]))
    {
        uObject* obs = (uObject*)value;

        if (::g::Fuse::IArray::Length(uInterface(uPtr(obs), ::TYPES[25/*Fuse.IArray*/])) > 0)
            __this->PushValue(::g::Fuse::IArray::Item(uInterface(uPtr(obs), ::TYPES[25/*Fuse.IArray*/]), 0));

        __this->_subscription = ::g::Fuse::Reactive::IObservableArray::Subscribe(uInterface(uPtr(obs), ::TYPES[27/*Fuse.Reactive.IObservableArray*/]), (uObject*)__this);
    }
    else
        __this->PushValue(value);
}

// protected override sealed void OnRooted() :125
void DataBinding__OnRooted_fn(DataBinding* __this)
{
    uStackFrame __("Fuse.Reactive.DataBinding", "OnRooted()");
    ::g::Fuse::Reactive::ExpressionBinding__OnRooted_fn(__this);

    if (__this->Write() && uPtr(__this->Target())->SupportsOriginSetter())
        uPtr(__this->Target())->AddListener((uObject*)__this);
}

// protected override sealed void OnUnrooted() :144
void DataBinding__OnUnrooted_fn(DataBinding* __this)
{
    uStackFrame __("Fuse.Reactive.DataBinding", "OnUnrooted()");
    __this->ClearFailed();
    __this->UnlistenNameRegistry();

    if (__this->Write() && uPtr(__this->Target())->SupportsOriginSetter())
        uPtr(__this->Target())->RemoveListener((uObject*)__this);

    if (__this->_subscription != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(__this->_subscription), ::TYPES[2/*Uno.IDisposable*/]));
        __this->_subscription = NULL;
    }

    __this->ClearValue();
    ::g::Fuse::Reactive::ExpressionBinding__OnUnrooted_fn(__this);
}

// protected void PushValue(object newValue) :229
void DataBinding__PushValue_fn(DataBinding* __this, uObject* newValue)
{
    __this->PushValue(newValue);
}

// private bool get_Read() :67
void DataBinding__get_Read_fn(DataBinding* __this, bool* __retval)
{
    *__retval = __this->Read();
}

// internal void SetTarget(object value) :161
void DataBinding__SetTarget_fn(DataBinding* __this, uObject* value)
{
    __this->SetTarget(value);
}

// public override sealed Uno.IDisposable SubscribeResource(Fuse.Reactive.IExpression source, string key, Fuse.Reactive.IListener listener) :62
void DataBinding__SubscribeResource_fn(DataBinding* __this, uObject* source, uString* key, uObject* listener, uObject** __retval)
{
    uStackFrame __("Fuse.Reactive.DataBinding", "SubscribeResource(Fuse.Reactive.IExpression,string,Fuse.Reactive.IListener)");
    return *__retval = (uObject*)::g::Fuse::Reactive::ResourceSubscription::New1(source, __this->Parent(), key, listener, uPtr(__this->Target())->PropertyType()), void();
}

// public generated Uno.UX.Property get_Target() :48
void DataBinding__get_Target_fn(DataBinding* __this, ::g::Uno::UX::Property** __retval)
{
    *__retval = __this->Target();
}

// private generated void set_Target(Uno.UX.Property value) :48
void DataBinding__set_Target_fn(DataBinding* __this, ::g::Uno::UX::Property* value)
{
    __this->Target(value);
}

// private static Uno.UX.Selector ToSelector(object newValue) :292
void DataBinding__ToSelector_fn(uObject* newValue, ::g::Uno::UX::Selector* __retval)
{
    *__retval = DataBinding::ToSelector(newValue);
}

// private void TryPushAsMarshalledValue(object newValue) :304
void DataBinding__TryPushAsMarshalledValue_fn(DataBinding* __this, uObject* newValue)
{
    __this->TryPushAsMarshalledValue(newValue);
}

// private bool TryPushAsName(object newValue) :263
void DataBinding__TryPushAsName_fn(DataBinding* __this, uObject* newValue, bool* __retval)
{
    *__retval = __this->TryPushAsName(newValue);
}

// private bool TryPushAsValue(object newValue) :241
void DataBinding__TryPushAsValue_fn(DataBinding* __this, uObject* newValue, bool* __retval)
{
    *__retval = __this->TryPushAsValue(newValue);
}

// private static string TypeToJSName(Uno.Type t) :81
void DataBinding__TypeToJSName_fn(uType* t, uString** __retval)
{
    *__retval = DataBinding::TypeToJSName(t);
}

// private void UnlistenNameRegistry() :254
void DataBinding__UnlistenNameRegistry_fn(DataBinding* __this)
{
    __this->UnlistenNameRegistry();
}

// private void Uno.UX.IPropertyListener.OnPropertyChanged(Uno.UX.PropertyObject obj, Uno.UX.Selector prop) :177
void DataBinding__UnoUXIPropertyListenerOnPropertyChanged_fn(DataBinding* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::Selector* prop)
{
    uStackFrame __("Fuse.Reactive.DataBinding", "Uno.UX.IPropertyListener.OnPropertyChanged(Uno.UX.PropertyObject,Uno.UX.Selector)");
    ::g::Uno::UX::Selector prop_ = *prop;

    if (::g::Uno::UX::Selector__op_Equality(prop_, uPtr(__this->Target())->Name()))
    {
        if (__this->_subscription != NULL)
        {
            if (__this->Write())
            {
                uObject* sub = uAs<uObject*>(__this->_subscription, ::TYPES[31/*Fuse.Reactive.ISubscription*/]);

                if (sub != NULL)
                    ::g::Fuse::Reactive::ISubscription::SetExclusive(uInterface(uPtr(sub), ::TYPES[31/*Fuse.Reactive.ISubscription*/]), uPtr(__this->Target())->GetAsObject1());
            }
        }
        else if (__this->CanWriteBack())
            __this->WriteBack(uPtr(__this->Target())->GetAsObject1());
    }
}

// private bool get_Write() :68
void DataBinding__get_Write_fn(DataBinding* __this, bool* __retval)
{
    *__retval = __this->Write();
}

// public DataBinding(Uno.UX.Property target, Fuse.Reactive.IExpression key, Fuse.Reactive.BindingMode mode) [instance] :53
void DataBinding::ctor_2(::g::Uno::UX::Property* target, uObject* key, int mode)
{
    ctor_1(key);
    _mode = mode;
    Target(target);
}

// private bool Acceptor(object obj) [instance] :299
bool DataBinding::Acceptor(uObject* obj)
{
    uStackFrame __("Fuse.Reactive.DataBinding", "Acceptor(object)");
    return ::g::Fuse::Marshal::Is(obj, uPtr(Target())->PropertyType());
}

// private bool get_Clear() [instance] :69
bool DataBinding::Clear()
{
    return (_mode & 4) == 4;
}

// private void ClearFailed() [instance] :138
void DataBinding::ClearFailed()
{
    uStackFrame __("Fuse.Reactive.DataBinding", "ClearFailed()");

    if (Parent() != NULL)
        ::g::Fuse::Triggers::BusyTask::SetBusy(Parent(), &_busyTask, 0, ::STRINGS[21/*""*/]);
}

// private void ClearValue() [instance] :167
void DataBinding::ClearValue()
{
    uStackFrame __("Fuse.Reactive.DataBinding", "ClearValue()");

    if (Clear())
        SetTarget(NULL);
}

// private void InvalidListOperation() [instance] :88
void DataBinding::InvalidListOperation()
{
    uStackFrame __("Fuse.Reactive.DataBinding", "InvalidListOperation()");
    ::g::Fuse::Diagnostics::UserError(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[33/*"Cannot bind '"*/], Key()), ::STRINGS[34/*"' to proper...*/]), ::g::Uno::UX::Selector__op_Implicit1(uPtr(Target())->Name())), ::STRINGS[35/*"'. The obse...*/]), DataBinding::TypeToJSName(uPtr(Target())->PropertyType())), ::STRINGS[36/*"."*/]), this, ::STRINGS[37/*"/usr/local/...*/], 90, ::STRINGS[38/*"InvalidList...*/], NULL);
}

// private void MarkFailed(string message) [instance] :133
void DataBinding::MarkFailed(uString* message)
{
    uStackFrame __("Fuse.Reactive.DataBinding", "MarkFailed(string)");
    ::g::Fuse::Triggers::BusyTask::SetBusy(Parent(), &_busyTask, 16, message);
}

// protected void PushValue(object newValue) [instance] :229
void DataBinding::PushValue(uObject* newValue)
{
    uStackFrame __("Fuse.Reactive.DataBinding", "PushValue(object)");

    if (!Read())
        return;

    if (Parent() == NULL)
        return;

    _currentValue = newValue;

    if (TryPushAsValue(newValue))
        return;
    else if (TryPushAsName(newValue))
        return;
    else
        TryPushAsMarshalledValue(newValue);
}

// private bool get_Read() [instance] :67
bool DataBinding::Read()
{
    return (_mode & 1) == 1;
}

// internal void SetTarget(object value) [instance] :161
void DataBinding::SetTarget(uObject* value)
{
    uStackFrame __("Fuse.Reactive.DataBinding", "SetTarget(object)");
    ClearFailed();
    uPtr(Target())->SetAsObject1(value, (uObject*)this);
}

// public generated Uno.UX.Property get_Target() [instance] :48
::g::Uno::UX::Property* DataBinding::Target()
{
    return _Target;
}

// private generated void set_Target(Uno.UX.Property value) [instance] :48
void DataBinding::Target(::g::Uno::UX::Property* value)
{
    _Target = value;
}

// private void TryPushAsMarshalledValue(object newValue) [instance] :304
void DataBinding::TryPushAsMarshalledValue(uObject* newValue)
{
    uStackFrame __("Fuse.Reactive.DataBinding", "TryPushAsMarshalledValue(object)");
    uObject* res;

    if (::g::Fuse::Marshal::TryConvertTo(uPtr(Target())->PropertyType(), newValue, &res, this))
    {
        try
        {
            {
                SetTarget(res);
            }
        }

        catch (const uThrowable& __t)
        {
            ::g::Uno::Exception* e = __t.Exception;
            MarkFailed(uPtr(e)->ToString());
            ::g::Fuse::Diagnostics::UserError(e->ToString(), Target(), ::STRINGS[37/*"/usr/local/...*/], 317, ::STRINGS[39/*"TryPushAsMa...*/], NULL);
        }
    }
}

// private bool TryPushAsName(object newValue) [instance] :263
bool DataBinding::TryPushAsName(uObject* newValue)
{
    uStackFrame __("Fuse.Reactive.DataBinding", "TryPushAsName(object)");
    ::g::Uno::UX::Selector name = DataBinding::ToSelector(newValue);

    if (!name.IsNull())
    {
        UnlistenNameRegistry();
        _registryName = ::g::Uno::UX::Selector__op_Implicit1(name);
        ::g::Fuse::NameRegistry::AddListener(::g::Uno::UX::Selector__op_Implicit(_registryName), (uObject*)this);
        ::g::Fuse::Node* k = uPtr(Parent())->FindNodeByName(name, uDelegate::New(::TYPES[30/*Uno.Predicate<Fuse.Node>*/], (void*)DataBinding__Acceptor_fn, this));

        if (k != NULL)
        {
            SetTarget(k);
            return true;
        }

        if (::g::Uno::Type::IsClass(uPtr(uPtr(Target())->PropertyType())) && !::g::Fuse::Marshal::CanConvertClass(uPtr(Target())->PropertyType()))
            return true;
    }

    return false;
}

// private bool TryPushAsValue(object newValue) [instance] :241
bool DataBinding::TryPushAsValue(uObject* newValue)
{
    uStackFrame __("Fuse.Reactive.DataBinding", "TryPushAsValue(object)");

    if (::g::Fuse::Marshal::Is(newValue, uPtr(Target())->PropertyType()))
    {
        UnlistenNameRegistry();
        SetTarget(newValue);
        return true;
    }

    return false;
}

// private void UnlistenNameRegistry() [instance] :254
void DataBinding::UnlistenNameRegistry()
{
    uStackFrame __("Fuse.Reactive.DataBinding", "UnlistenNameRegistry()");

    if (::g::Uno::String::op_Inequality(_registryName, NULL))
    {
        ::g::Fuse::NameRegistry::RemoveListener1(::g::Uno::UX::Selector__op_Implicit(_registryName), (uObject*)this);
        _registryName = NULL;
    }
}

// private bool get_Write() [instance] :68
bool DataBinding::Write()
{
    return (_mode & 2) == 2;
}

// public DataBinding New(Uno.UX.Property target, Fuse.Reactive.IExpression key, Fuse.Reactive.BindingMode mode) [static] :53
DataBinding* DataBinding::New1(::g::Uno::UX::Property* target, uObject* key, int mode)
{
    DataBinding* obj1 = (DataBinding*)uNew(DataBinding_typeof());
    obj1->ctor_2(target, key, mode);
    return obj1;
}

// private static Uno.UX.Selector ToSelector(object newValue) [static] :292
::g::Uno::UX::Selector DataBinding::ToSelector(uObject* newValue)
{
    uStackFrame __("Fuse.Reactive.DataBinding", "ToSelector(object)");
    return uIs(newValue, ::TYPES[28/*Uno.UX.Selector*/]) ? uUnbox< ::g::Uno::UX::Selector>(::TYPES[28/*Uno.UX.Selector*/], newValue) : uIs(newValue, ::TYPES[12/*string*/]) ? ::g::Uno::UX::Selector__New1(uCast<uString*>(newValue, ::TYPES[12/*string*/])) : uDefault< ::g::Uno::UX::Selector>();
}

// private static string TypeToJSName(Uno.Type t) [static] :81
uString* DataBinding::TypeToJSName(uType* t)
{
    uStackFrame __("Fuse.Reactive.DataBinding", "TypeToJSName(Uno.Type)");

    if ((::g::Uno::Type::op_Equality(t, ::TYPES[17/*int*/]) || ::g::Uno::Type::op_Equality(t, ::TYPES[18/*float*/])) || ::g::Uno::Type::op_Equality(t, ::TYPES[11/*double*/]))
        return ::STRINGS[40/*"number"*/];

    if (::g::Uno::Type::op_Equality(t, ::TYPES[12/*string*/]))
        return ::STRINGS[41/*"string"*/];

    return ::g::Uno::String::op_Addition2(::STRINGS[42/*"value that ...*/], ::g::Uno::Type::FullName(uPtr(t)));
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Bindings/1.4.0/Subscription/DataSubscription.uno
// --------------------------------------------------------------------------------------------

// internal sealed class DataSubscription :6
// {
static void DataSubscription_build(uType* type)
{
    ::STRINGS[31] = uString::Const("{");
    ::STRINGS[43] = uString::Const("} not found in data context");
    ::TYPES[2] = ::g::Uno::IDisposable_typeof();
    ::TYPES[32] = ::g::Fuse::Reactive::IPropertySubscription_typeof();
    ::TYPES[33] = ::g::Fuse::Reactive::IObservableObject_typeof();
    ::TYPES[23] = ::g::Fuse::Reactive::IListener_typeof();
    type->SetDependencies(
        ::g::Fuse::Diagnostics_typeof());
    type->SetInterfaces(
        ::g::Fuse::Node__IDataEnumerator_typeof(), offsetof(DataSubscription_type, interface0),
        ::TYPES[2/*Uno.IDisposable*/], offsetof(DataSubscription_type, interface1),
        ::g::Fuse::Node__IDataListener_typeof(), offsetof(DataSubscription_type, interface2),
        ::g::Fuse::Reactive::IPropertyObserver_typeof(), offsetof(DataSubscription_type, interface3),
        ::g::Fuse::Reactive::IWriteable_typeof(), offsetof(DataSubscription_type, interface4));
    type->SetFields(1,
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(DataSubscription, _source), 0,
        ::g::Fuse::Node_typeof(), offsetof(DataSubscription, _origin), 0,
        ::TYPES[23/*Fuse.Reactive.IListener*/], offsetof(DataSubscription, _listener), 0,
        ::TYPES[2/*Uno.IDisposable*/], offsetof(DataSubscription, _diag), 0,
        ::g::Uno::Bool_typeof(), offsetof(DataSubscription, _isResolved), 0,
        uObject_typeof(), offsetof(DataSubscription, _currentData), 0,
        ::TYPES[32/*Fuse.Reactive.IPropertySubscription*/], offsetof(DataSubscription, _sub), 0);
}

DataSubscription_type* DataSubscription_typeof()
{
    static uSStrong<DataSubscription_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Node__DataFinder_typeof();
    options.FieldCount = 8;
    options.InterfaceCount = 5;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(DataSubscription);
    options.TypeSize = sizeof(DataSubscription_type);
    type = (DataSubscription_type*)uClassType::New("Fuse.Reactive.DataSubscription", options);
    type->fp_build_ = DataSubscription_build;
    type->fp_Resolve = (void(*)(::g::Fuse::Node__DataFinder*, uObject*, uObject*))DataSubscription__Resolve_fn;
    type->interface4.fp_TrySetExclusive = (void(*)(uObject*, uObject*, bool*))DataSubscription__FuseReactiveIWriteableTrySetExclusive_fn;
    type->interface3.fp_OnPropertyChanged = (void(*)(uObject*, uObject*, uString*, uObject*))DataSubscription__FuseReactiveIPropertyObserverOnPropertyChanged_fn;
    type->interface2.fp_OnDataChanged = (void(*)(uObject*))DataSubscription__FuseNodeIDataListenerOnDataChanged_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))DataSubscription__Dispose_fn;
    type->interface0.fp_NextData = (void(*)(uObject*, uObject*, bool*))::g::Fuse::Node__DataFinder__NextData_fn;
    return type;
}

// public DataSubscription(Fuse.Reactive.IExpression source, Fuse.Node origin, string key, Fuse.Reactive.IListener listener) :13
void DataSubscription__ctor_1_fn(DataSubscription* __this, uObject* source, ::g::Fuse::Node* origin, uString* key, uObject* listener)
{
    __this->ctor_1(source, origin, key, listener);
}

// private void ClearDiagnostic() :102
void DataSubscription__ClearDiagnostic_fn(DataSubscription* __this)
{
    __this->ClearDiagnostic();
}

// public void Dispose() :87
void DataSubscription__Dispose_fn(DataSubscription* __this)
{
    __this->Dispose();
}

// private void DisposeSubscription() :41
void DataSubscription__DisposeSubscription_fn(DataSubscription* __this)
{
    __this->DisposeSubscription();
}

// private void FindData() :26
void DataSubscription__FindData_fn(DataSubscription* __this)
{
    __this->FindData();
}

// private void Fuse.Node.IDataListener.OnDataChanged() :97
void DataSubscription__FuseNodeIDataListenerOnDataChanged_fn(DataSubscription* __this)
{
    uStackFrame __("Fuse.Reactive.DataSubscription", "Fuse.Node.IDataListener.OnDataChanged()");
    __this->FindData();
}

// private void Fuse.Reactive.IPropertyObserver.OnPropertyChanged(Uno.IDisposable sub, string propertyName, object newValue) :70
void DataSubscription__FuseReactiveIPropertyObserverOnPropertyChanged_fn(DataSubscription* __this, uObject* sub, uString* propertyName, uObject* newValue)
{
    uStackFrame __("Fuse.Reactive.DataSubscription", "Fuse.Reactive.IPropertyObserver.OnPropertyChanged(Uno.IDisposable,string,object)");

    if (sub != __this->_sub)
        return;

    if (::g::Uno::String::op_Inequality(propertyName, __this->Key()))
        return;

    __this->ResolveInner(newValue);
}

// private bool Fuse.Reactive.IWriteable.TrySetExclusive(object newValue) :50
void DataSubscription__FuseReactiveIWriteableTrySetExclusive_fn(DataSubscription* __this, uObject* newValue, bool* __retval)
{
    uStackFrame __("Fuse.Reactive.DataSubscription", "Fuse.Reactive.IWriteable.TrySetExclusive(object)");
    uObject* w = uAs<uObject*>(__this->_sub, ::TYPES[32/*Fuse.Reactive.IPropertySubscription*/]);

    if (w != NULL)
        return *__retval = ::g::Fuse::Reactive::IPropertySubscription::TrySetExclusive(uInterface(uPtr(w), ::TYPES[32/*Fuse.Reactive.IPropertySubscription*/]), __this->Key(), newValue), void();

    return *__retval = false, void();
}

// public DataSubscription New(Fuse.Reactive.IExpression source, Fuse.Node origin, string key, Fuse.Reactive.IListener listener) :13
void DataSubscription__New1_fn(uObject* source, ::g::Fuse::Node* origin, uString* key, uObject* listener, DataSubscription** __retval)
{
    *__retval = DataSubscription::New1(source, origin, key, listener);
}

// protected override sealed void Resolve(Fuse.IObject provider, object data) :59
void DataSubscription__Resolve_fn(DataSubscription* __this, uObject* provider, uObject* data)
{
    uStackFrame __("Fuse.Reactive.DataSubscription", "Resolve(Fuse.IObject,object)");
    __this->DisposeSubscription();
    uObject* obs = uAs<uObject*>(provider, ::TYPES[33/*Fuse.Reactive.IObservableObject*/]);

    if (obs != NULL)
        __this->_sub = ::g::Fuse::Reactive::IObservableObject::Subscribe(uInterface(uPtr(obs), ::TYPES[33/*Fuse.Reactive.IObservableObject*/]), (uObject*)__this);

    __this->ResolveInner(data);
}

// private void ResolveInner(object data) :77
void DataSubscription__ResolveInner_fn(DataSubscription* __this, uObject* data)
{
    __this->ResolveInner(data);
}

// public DataSubscription(Fuse.Reactive.IExpression source, Fuse.Node origin, string key, Fuse.Reactive.IListener listener) [instance] :13
void DataSubscription::ctor_1(uObject* source, ::g::Fuse::Node* origin, uString* key, uObject* listener)
{
    uStackFrame __("Fuse.Reactive.DataSubscription", ".ctor(Fuse.Reactive.IExpression,Fuse.Node,string,Fuse.Reactive.IListener)");
    ctor_(key);
    _source = source;
    _origin = origin;
    _listener = listener;
    uPtr(_origin)->AddDataListener(key, (uObject*)this);
    FindData();
}

// private void ClearDiagnostic() [instance] :102
void DataSubscription::ClearDiagnostic()
{
    uStackFrame __("Fuse.Reactive.DataSubscription", "ClearDiagnostic()");

    if (_diag != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_diag), ::TYPES[2/*Uno.IDisposable*/]));
        _diag = NULL;
    }
}

// public void Dispose() [instance] :87
void DataSubscription::Dispose()
{
    uStackFrame __("Fuse.Reactive.DataSubscription", "Dispose()");
    DisposeSubscription();
    ClearDiagnostic();
    uPtr(_origin)->RemoveDataListener(Key(), (uObject*)this);
    _origin = NULL;
    _source = NULL;
    _listener = NULL;
}

// private void DisposeSubscription() [instance] :41
void DataSubscription::DisposeSubscription()
{
    uStackFrame __("Fuse.Reactive.DataSubscription", "DisposeSubscription()");

    if (_sub != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_sub), ::TYPES[2/*Uno.IDisposable*/]));
        _sub = NULL;
    }
}

// private void FindData() [instance] :26
void DataSubscription::FindData()
{
    uStackFrame __("Fuse.Reactive.DataSubscription", "FindData()");

    if (_origin == NULL)
        return;

    ClearDiagnostic();
    _isResolved = false;
    uPtr(_origin)->EnumerateData((uObject*)this);

    if (!_isResolved)
        _diag = ::g::Fuse::Diagnostics::ReportTemporalUserWarning(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[31/*"{"*/], Key()), ::STRINGS[43/*"} not found...*/]), _origin);
}

// private void ResolveInner(object data) [instance] :77
void DataSubscription::ResolveInner(uObject* data)
{
    uStackFrame __("Fuse.Reactive.DataSubscription", "ResolveInner(object)");
    _isResolved = true;

    if (data != _currentData)
    {
        _currentData = data;
        ::g::Fuse::Reactive::IListener::OnNewData(uInterface(uPtr(_listener), ::TYPES[23/*Fuse.Reactive.IListener*/]), _source, data);
    }
}

// public DataSubscription New(Fuse.Reactive.IExpression source, Fuse.Node origin, string key, Fuse.Reactive.IListener listener) [static] :13
DataSubscription* DataSubscription::New1(uObject* source, ::g::Fuse::Node* origin, uString* key, uObject* listener)
{
    DataSubscription* obj1 = (DataSubscription*)uNew(DataSubscription_typeof());
    obj1->ctor_1(source, origin, key, listener);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.4.0/DataToResource.uno
// --------------------------------------------------------------------------------

// public sealed class DataToResource :33
// {
static void DataToResource_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::UnaryOperator_type, interface0));
    type->SetFields(1);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)DataToResource__New1_fn, 0, true, type, 1, ::g::Fuse::Reactive::Expression_typeof()));
}

::g::Fuse::Reactive::UnaryOperator_type* DataToResource_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::UnaryOperator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::UnaryOperator_typeof();
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(DataToResource);
    options.TypeSize = sizeof(::g::Fuse::Reactive::UnaryOperator_type);
    type = (::g::Fuse::Reactive::UnaryOperator_type*)uClassType::New("Fuse.Reactive.DataToResource", options);
    type->fp_build_ = DataToResource_build;
    type->fp_Subscribe = (void(*)(::g::Fuse::Reactive::Expression*, uObject*, uObject*, uObject**))DataToResource__Subscribe_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))DataToResource__Subscribe_fn;
    return type;
}

// public DataToResource(Fuse.Reactive.Expression data) :36
void DataToResource__ctor_2_fn(DataToResource* __this, ::g::Fuse::Reactive::Expression* data)
{
    __this->ctor_2(data);
}

// public DataToResource New(Fuse.Reactive.Expression data) :36
void DataToResource__New1_fn(::g::Fuse::Reactive::Expression* data, DataToResource** __retval)
{
    *__retval = DataToResource::New1(data);
}

// public override sealed Uno.IDisposable Subscribe(Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :41
void DataToResource__Subscribe_fn(DataToResource* __this, uObject* context, uObject* listener, uObject** __retval)
{
    uStackFrame __("Fuse.Reactive.DataToResource", "Subscribe(Fuse.Reactive.IContext,Fuse.Reactive.IListener)");
    return *__retval = (uObject*)DataToResource__DataToResourceSubscription::New2(__this, context, listener), void();
}

// public DataToResource(Fuse.Reactive.Expression data) [instance] :36
void DataToResource::ctor_2(::g::Fuse::Reactive::Expression* data)
{
    ctor_1(data);
}

// public DataToResource New(Fuse.Reactive.Expression data) [static] :36
DataToResource* DataToResource::New1(::g::Fuse::Reactive::Expression* data)
{
    DataToResource* obj1 = (DataToResource*)uNew(DataToResource_typeof());
    obj1->ctor_2(data);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.4.0/DataToResource.uno
// --------------------------------------------------------------------------------

// private sealed class DataToResource.DataToResourceSubscription :46
// {
static void DataToResource__DataToResourceSubscription_build(uType* type)
{
    ::TYPES[24] = ::g::Fuse::Reactive::IContext_typeof();
    ::TYPES[12] = ::g::Uno::String_typeof();
    ::TYPES[34] = ::g::Uno::Action_typeof();
    type->SetDependencies(
        ::g::Fuse::Resources::ResourceRegistry_typeof());
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Reactive::UnaryOperator__Subscription_type, interface0),
        ::g::Fuse::Reactive::IListener_typeof(), offsetof(::g::Fuse::Reactive::UnaryOperator__Subscription_type, interface1));
    type->SetFields(5,
        ::g::Fuse::Node_typeof(), offsetof(DataToResource__DataToResourceSubscription, _node), 0,
        ::TYPES[12/*string*/], offsetof(DataToResource__DataToResourceSubscription, _key), 0);
}

::g::Fuse::Reactive::UnaryOperator__Subscription_type* DataToResource__DataToResourceSubscription_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::UnaryOperator__Subscription_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::UnaryOperator__Subscription_typeof();
    options.FieldCount = 7;
    options.InterfaceCount = 2;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(DataToResource__DataToResourceSubscription);
    options.TypeSize = sizeof(::g::Fuse::Reactive::UnaryOperator__Subscription_type);
    type = (::g::Fuse::Reactive::UnaryOperator__Subscription_type*)uClassType::New("Fuse.Reactive.DataToResource.DataToResourceSubscription", options);
    type->fp_build_ = DataToResource__DataToResourceSubscription_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Reactive::InnerListener*))DataToResource__DataToResourceSubscription__Dispose_fn;
    type->fp_OnNewData = (void(*)(::g::Fuse::Reactive::InnerListener*, uObject*, uObject*))DataToResource__DataToResourceSubscription__OnNewData_fn;
    type->interface1.fp_OnNewData = (void(*)(uObject*, uObject*, uObject*))::g::Fuse::Reactive::InnerListener__FuseReactiveIListenerOnNewData_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))DataToResource__DataToResourceSubscription__Dispose_fn;
    return type;
}

// public DataToResourceSubscription(Fuse.Reactive.DataToResource dtr, Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :49
void DataToResource__DataToResourceSubscription__ctor_2_fn(DataToResource__DataToResourceSubscription* __this, ::g::Fuse::Reactive::DataToResource* dtr, uObject* context, uObject* listener)
{
    __this->ctor_2(dtr, context, listener);
}

// public override sealed void Dispose() :56
void DataToResource__DataToResourceSubscription__Dispose_fn(DataToResource__DataToResourceSubscription* __this)
{
    uStackFrame __("Fuse.Reactive.DataToResource.DataToResourceSubscription", "Dispose()");
    ::g::Fuse::Reactive::UnaryOperator__Subscription__Dispose_fn(__this);
    __this->_node = NULL;
    __this->Unsubscribe();
}

// public DataToResourceSubscription New(Fuse.Reactive.DataToResource dtr, Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :49
void DataToResource__DataToResourceSubscription__New2_fn(::g::Fuse::Reactive::DataToResource* dtr, uObject* context, uObject* listener, DataToResource__DataToResourceSubscription** __retval)
{
    *__retval = DataToResource__DataToResourceSubscription::New2(dtr, context, listener);
}

// private void OnChanged() :85
void DataToResource__DataToResourceSubscription__OnChanged_fn(DataToResource__DataToResourceSubscription* __this)
{
    __this->OnChanged();
}

// protected override sealed void OnNewData(Fuse.Reactive.IExpression source, object value) :65
void DataToResource__DataToResourceSubscription__OnNewData_fn(DataToResource__DataToResourceSubscription* __this, uObject* source, uObject* value)
{
    uStackFrame __("Fuse.Reactive.DataToResource.DataToResourceSubscription", "OnNewData(Fuse.Reactive.IExpression,object)");
    __this->Unsubscribe();
    __this->_key = uAs<uString*>(value, ::TYPES[12/*string*/]);
    __this->Subscribe();
    __this->OnChanged();
}

// private void Subscribe() :73
void DataToResource__DataToResourceSubscription__Subscribe_fn(DataToResource__DataToResourceSubscription* __this)
{
    __this->Subscribe();
}

// private void Unsubscribe() :79
void DataToResource__DataToResourceSubscription__Unsubscribe_fn(DataToResource__DataToResourceSubscription* __this)
{
    __this->Unsubscribe();
}

// public DataToResourceSubscription(Fuse.Reactive.DataToResource dtr, Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) [instance] :49
void DataToResource__DataToResourceSubscription::ctor_2(::g::Fuse::Reactive::DataToResource* dtr, uObject* context, uObject* listener)
{
    uStackFrame __("Fuse.Reactive.DataToResource.DataToResourceSubscription", ".ctor(Fuse.Reactive.DataToResource,Fuse.Reactive.IContext,Fuse.Reactive.IListener)");
    ctor_1(dtr, listener);
    _node = ::g::Fuse::Reactive::IContext::Node(uInterface(uPtr(context), ::TYPES[24/*Fuse.Reactive.IContext*/]));
    OnChanged();
    Init(context);
}

// private void OnChanged() [instance] :85
void DataToResource__DataToResourceSubscription::OnChanged()
{
    uStackFrame __("Fuse.Reactive.DataToResource.DataToResourceSubscription", "OnChanged()");

    if (::g::Uno::String::op_Equality(_key, NULL))
        return;

    if (_node == NULL)
        return;

    uObject* v;

    if (uPtr(_node)->TryGetResource(_key, NULL, &v))
        PushNewData(v);
}

// private void Subscribe() [instance] :73
void DataToResource__DataToResourceSubscription::Subscribe()
{
    uStackFrame __("Fuse.Reactive.DataToResource.DataToResourceSubscription", "Subscribe()");

    if (::g::Uno::String::op_Inequality(_key, NULL))
        ::g::Fuse::Resources::ResourceRegistry::AddResourceChangedHandler(_key, uDelegate::New(::TYPES[34/*Uno.Action*/], (void*)DataToResource__DataToResourceSubscription__OnChanged_fn, this));
}

// private void Unsubscribe() [instance] :79
void DataToResource__DataToResourceSubscription::Unsubscribe()
{
    uStackFrame __("Fuse.Reactive.DataToResource.DataToResourceSubscription", "Unsubscribe()");

    if (::g::Uno::String::op_Inequality(_key, NULL))
        ::g::Fuse::Resources::ResourceRegistry::RemoveResourceChangedHandler(_key, uDelegate::New(::TYPES[34/*Uno.Action*/], (void*)DataToResource__DataToResourceSubscription__OnChanged_fn, this));
}

// public DataToResourceSubscription New(Fuse.Reactive.DataToResource dtr, Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) [static] :49
DataToResource__DataToResourceSubscription* DataToResource__DataToResourceSubscription::New2(::g::Fuse::Reactive::DataToResource* dtr, uObject* context, uObject* listener)
{
    DataToResource__DataToResourceSubscription* obj1 = (DataToResource__DataToResourceSubscription*)uNew(DataToResource__DataToResourceSubscription_typeof());
    obj1->ctor_2(dtr, context, listener);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.4.0/FuseJS/DebugLog.uno
// ---------------------------------------------------------------------------------

// internal static class DebugLog :6
// {
static void DebugLog_build(uType* type)
{
    ::STRINGS[44] = uString::Const("debug_log");
    ::STRINGS[17] = uString::Const("null");
    ::STRINGS[16] = uString::Const("/usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.4.0/FuseJS/DebugLog.uno");
    ::TYPES[22] = ::g::Fuse::Scripting::Callback_typeof();
    type->SetDependencies(
        ::g::Uno::Diagnostics::Debug_typeof());
}

uClassType* DebugLog_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.DependencyCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Reactive.DebugLog", options);
    type->fp_build_ = DebugLog_build;
    return type;
}

// public static void Init(Fuse.Scripting.Context c) :8
void DebugLog__Init_fn(::g::Fuse::Scripting::Context* c)
{
    DebugLog::Init(c);
}

// private static object Log(object[] args) :13
void DebugLog__Log_fn(uArray* args, uObject** __retval)
{
    *__retval = DebugLog::Log(args);
}

// public static void Init(Fuse.Scripting.Context c) [static] :8
void DebugLog::Init(::g::Fuse::Scripting::Context* c)
{
    uStackFrame __("Fuse.Reactive.DebugLog", "Init(Fuse.Scripting.Context)");
    uPtr(uPtr(c)->GlobalObject())->Item(::STRINGS[44/*"debug_log"*/], uDelegate::New(::TYPES[22/*Fuse.Scripting.Callback*/], (void*)DebugLog__Log_fn));
}

// private static object Log(object[] args) [static] :13
uObject* DebugLog::Log(uArray* args)
{
    uStackFrame __("Fuse.Reactive.DebugLog", "Log(object[])");

    for (int i = 0; i < uPtr(args)->Length(); i++)
        ::g::Uno::Diagnostics::Debug::Log5((uPtr(args)->Strong<uObject*>(i) != NULL) ? (uString*)::g::Uno::Object::ToString(uPtr(uPtr(args)->Strong<uObject*>(i))) : ::STRINGS[17/*"null"*/], 0, ::STRINGS[16/*"/usr/local/...*/], 17);

    return NULL;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.4.0/MathFunctions.uno
// -------------------------------------------------------------------------------

// public sealed class DegreesToRadians :311
// {
static void DegreesToRadians_build(uType* type)
{
    ::STRINGS[45] = uString::Const("degreesToRadians");
    ::TYPES[0] = ::g::Fuse::Reactive::UnaryFloatOperator__FloatOp_typeof();
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::UnaryOperator_type, interface0));
    type->SetFields(3);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)DegreesToRadians__New1_fn, 0, true, type, 1, ::g::Fuse::Reactive::Expression_typeof()));
}

::g::Fuse::Reactive::UnaryOperator_type* DegreesToRadians_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::UnaryOperator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::UnaryFloatOperator_typeof();
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(DegreesToRadians);
    options.TypeSize = sizeof(::g::Fuse::Reactive::UnaryOperator_type);
    type = (::g::Fuse::Reactive::UnaryOperator_type*)uClassType::New("Fuse.Reactive.DegreesToRadians", options);
    type->fp_build_ = DegreesToRadians_build;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::UnaryOperator__Subscribe_fn;
    return type;
}

// public DegreesToRadians(Fuse.Reactive.Expression operand) :314
void DegreesToRadians__ctor_3_fn(DegreesToRadians* __this, ::g::Fuse::Reactive::Expression* operand)
{
    __this->ctor_3(operand);
}

// public DegreesToRadians New(Fuse.Reactive.Expression operand) :314
void DegreesToRadians__New1_fn(::g::Fuse::Reactive::Expression* operand, DegreesToRadians** __retval)
{
    *__retval = DegreesToRadians::New1(operand);
}

// public DegreesToRadians(Fuse.Reactive.Expression operand) [instance] :314
void DegreesToRadians::ctor_3(::g::Fuse::Reactive::Expression* operand)
{
    ctor_2(operand, ::STRINGS[45/*"degreesToRa...*/], uDelegate::New(::TYPES[0/*Fuse.Reactive.UnaryFloatOperator.FloatOp*/], (void*)::g::Uno::Math__DegreesToRadians_fn));
}

// public DegreesToRadians New(Fuse.Reactive.Expression operand) [static] :314
DegreesToRadians* DegreesToRadians::New1(::g::Fuse::Reactive::Expression* operand)
{
    DegreesToRadians* obj1 = (DegreesToRadians*)uNew(DegreesToRadians_typeof());
    obj1->ctor_3(operand);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.4.0/JavaScript.Dependencies.uno
// -----------------------------------------------------------------------------------------

// public sealed class JavaScript.Dependency :12
// {
static void JavaScript__Dependency_build(uType* type)
{
    ::TYPES[35] = ::g::Fuse::Reactive::IExpression_typeof();
    ::TYPES[2] = ::g::Uno::IDisposable_typeof();
    type->SetInterfaces(
        ::g::Fuse::Reactive::IListener_typeof(), offsetof(JavaScript__Dependency_type, interface0));
    type->SetFields(0,
        ::g::Fuse::Reactive::JavaScript_typeof(), offsetof(JavaScript__Dependency, _script), 0,
        ::TYPES[2/*Uno.IDisposable*/], offsetof(JavaScript__Dependency, _expSubscription), 0,
        ::g::Uno::Bool_typeof(), offsetof(JavaScript__Dependency, HasValue), 0,
        uObject_typeof(), offsetof(JavaScript__Dependency, Value), 0,
        ::TYPES[35/*Fuse.Reactive.IExpression*/], offsetof(JavaScript__Dependency, _Expression), 0,
        ::g::Uno::String_typeof(), offsetof(JavaScript__Dependency, _Name), 0);
}

JavaScript__Dependency_type* JavaScript__Dependency_typeof()
{
    static uSStrong<JavaScript__Dependency_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(JavaScript__Dependency);
    options.TypeSize = sizeof(JavaScript__Dependency_type);
    type = (JavaScript__Dependency_type*)uClassType::New("Fuse.Reactive.JavaScript.Dependency", options);
    type->fp_build_ = JavaScript__Dependency_build;
    type->interface0.fp_OnNewData = (void(*)(uObject*, uObject*, uObject*))JavaScript__Dependency__FuseReactiveIListenerOnNewData_fn;
    return type;
}

// internal generated Fuse.Reactive.IExpression get_Expression() :15
void JavaScript__Dependency__get_Expression_fn(JavaScript__Dependency* __this, uObject** __retval)
{
    *__retval = __this->Expression();
}

// private generated void set_Expression(Fuse.Reactive.IExpression value) :15
void JavaScript__Dependency__set_Expression_fn(JavaScript__Dependency* __this, uObject* value)
{
    __this->Expression(value);
}

// private void Fuse.Reactive.IListener.OnNewData(Fuse.Reactive.IExpression source, object data) :49
void JavaScript__Dependency__FuseReactiveIListenerOnNewData_fn(JavaScript__Dependency* __this, uObject* source, uObject* data)
{
    uStackFrame __("Fuse.Reactive.JavaScript.Dependency", "Fuse.Reactive.IListener.OnNewData(Fuse.Reactive.IExpression,object)");

    if (__this->_script == NULL)
        return;

    __this->Value = data;
    __this->HasValue = true;
    uPtr(__this->_script)->DispatchEvaluateIfDependenciesReady();
}

// internal generated string get_Name() :14
void JavaScript__Dependency__get_Name_fn(JavaScript__Dependency* __this, uString** __retval)
{
    *__retval = __this->Name();
}

// private generated void set_Name(string value) :14
void JavaScript__Dependency__set_Name_fn(JavaScript__Dependency* __this, uString* value)
{
    __this->Name(value);
}

// internal void Subscribe(Fuse.Reactive.JavaScript script) :27
void JavaScript__Dependency__Subscribe_fn(JavaScript__Dependency* __this, ::g::Fuse::Reactive::JavaScript* script)
{
    __this->Subscribe(script);
}

// internal void Unsubscribe() :34
void JavaScript__Dependency__Unsubscribe_fn(JavaScript__Dependency* __this)
{
    __this->Unsubscribe();
}

// internal generated Fuse.Reactive.IExpression get_Expression() [instance] :15
uObject* JavaScript__Dependency::Expression()
{
    return _Expression;
}

// private generated void set_Expression(Fuse.Reactive.IExpression value) [instance] :15
void JavaScript__Dependency::Expression(uObject* value)
{
    _Expression = value;
}

// internal generated string get_Name() [instance] :14
uString* JavaScript__Dependency::Name()
{
    return _Name;
}

// private generated void set_Name(string value) [instance] :14
void JavaScript__Dependency::Name(uString* value)
{
    _Name = value;
}

// internal void Subscribe(Fuse.Reactive.JavaScript script) [instance] :27
void JavaScript__Dependency::Subscribe(::g::Fuse::Reactive::JavaScript* script)
{
    uStackFrame __("Fuse.Reactive.JavaScript.Dependency", "Subscribe(Fuse.Reactive.JavaScript)");
    Unsubscribe();
    _script = script;
    _expSubscription = ::g::Fuse::Reactive::IExpression::Subscribe(uInterface(uPtr(Expression()), ::TYPES[35/*Fuse.Reactive.IExpression*/]), (uObject*)script, (uObject*)this);
}

// internal void Unsubscribe() [instance] :34
void JavaScript__Dependency::Unsubscribe()
{
    uStackFrame __("Fuse.Reactive.JavaScript.Dependency", "Unsubscribe()");

    if (_expSubscription != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_expSubscription), ::TYPES[2/*Uno.IDisposable*/]));
        _expSubscription = NULL;
    }

    Value = NULL;
    HasValue = false;
    _script = NULL;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.4.0/Operators.uno
// ---------------------------------------------------------------------------

// public sealed class Divide :55
// {
static void Divide_build(uType* type)
{
    ::STRINGS[46] = uString::Const("/");
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::InfixOperator_type, interface0));
    type->SetFields(2);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Divide__New1_fn, 0, true, type, 2, ::g::Fuse::Reactive::Expression_typeof(), ::g::Fuse::Reactive::Expression_typeof()));
}

::g::Fuse::Reactive::InfixOperator_type* Divide_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::InfixOperator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::InfixOperator_typeof();
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Divide);
    options.TypeSize = sizeof(::g::Fuse::Reactive::InfixOperator_type);
    type = (::g::Fuse::Reactive::InfixOperator_type*)uClassType::New("Fuse.Reactive.Divide", options);
    type->fp_build_ = Divide_build;
    type->fp_Compute = (void(*)(::g::Fuse::Reactive::BinaryOperator*, uObject*, uObject*, uObject**))Divide__Compute_fn;
    type->fp_get_Symbol = (void(*)(::g::Fuse::Reactive::InfixOperator*, uString**))Divide__get_Symbol_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::BinaryOperator__Subscribe_fn;
    return type;
}

// public Divide(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) :58
void Divide__ctor_3_fn(Divide* __this, ::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right)
{
    __this->ctor_3(left, right);
}

// protected override sealed object Compute(object left, object right) :59
void Divide__Compute_fn(Divide* __this, uObject* left, uObject* right, uObject** __retval)
{
    uStackFrame __("Fuse.Reactive.Divide", "Compute(object,object)");
    return *__retval = ::g::Fuse::Marshal::Divide(left, right), void();
}

// public Divide New(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) :58
void Divide__New1_fn(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right, Divide** __retval)
{
    *__retval = Divide::New1(left, right);
}

// public override sealed string get_Symbol() :64
void Divide__get_Symbol_fn(Divide* __this, uString** __retval)
{
    return *__retval = ::STRINGS[46/*"/"*/], void();
}

// public Divide(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) [instance] :58
void Divide::ctor_3(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right)
{
    ctor_2(left, right);
}

// public Divide New(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) [static] :58
Divide* Divide::New1(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right)
{
    Divide* obj1 = (Divide*)uNew(Divide_typeof());
    obj1->ctor_3(left, right);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Bindings/1.4.0/Each.uno
// -------------------------------------------------------------------

// public sealed class Each :94
// {
// static generated Each() :94
static void Each__cctor_1_fn(uType* __type)
{
    ::g::Fuse::Properties_typeof()->Init();
    Each::_eachHandle_ = ::g::Fuse::Properties::CreateHandle();
}

static void Each_build(uType* type)
{
    ::TYPES[36] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Reactive::Instantiator_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Reactive::Instantiator_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Reactive::Instantiator_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Reactive::Instantiator_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Reactive::Instantiator_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Reactive::Instantiator_type, interface5),
        ::g::Fuse::Reactive::IObserver_typeof(), offsetof(::g::Fuse::Reactive::Instantiator_type, interface6),
        ::g::Fuse::Node__ISubtreeDataProvider_typeof(), offsetof(::g::Fuse::Reactive::Instantiator_type, interface7),
        ::g::Fuse::IDeferred_typeof(), offsetof(::g::Fuse::Reactive::Instantiator_type, interface8));
    type->SetFields(44,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&Each::_eachHandle_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(13,
        new uFunction("get_Count", NULL, (void*)Each__get_Count1_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("set_Count", NULL, (void*)Each__set_Count1_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("GetItems", NULL, (void*)Each__GetItems1_fn, 0, true, uObject_typeof(), 1, ::g::Fuse::Visual_typeof()),
        new uFunction("GetMatchKey", NULL, (void*)Each__GetMatchKey_fn, 0, true, ::g::Uno::String_typeof(), 1, ::g::Fuse::Visual_typeof()),
        new uFunction("get_Items", NULL, (void*)Each__get_Items_fn, 0, false, uObject_typeof(), 0),
        new uFunction("set_Items", NULL, (void*)Each__set_Items_fn, 0, false, uVoid_typeof(), 1, uObject_typeof()),
        new uFunction("get_Limit", NULL, (void*)Each__get_Limit1_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("set_Limit", NULL, (void*)Each__set_Limit1_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction(".ctor", NULL, (void*)Each__New4_fn, 0, true, type, 0),
        new uFunction("get_Offset", NULL, (void*)Each__get_Offset1_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("set_Offset", NULL, (void*)Each__set_Offset1_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("SetItems", NULL, (void*)Each__SetItems1_fn, 0, true, uVoid_typeof(), 2, ::g::Fuse::Visual_typeof(), uObject_typeof()),
        new uFunction("SetMatchKey", NULL, (void*)Each__SetMatchKey_fn, 0, true, uVoid_typeof(), 2, ::g::Fuse::Visual_typeof(), ::g::Uno::String_typeof()));
}

::g::Fuse::Reactive::Instantiator_type* Each_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::Instantiator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::Instantiator_typeof();
    options.FieldCount = 45;
    options.InterfaceCount = 9;
    options.ObjectSize = sizeof(Each);
    options.TypeSize = sizeof(::g::Fuse::Reactive::Instantiator_type);
    type = (::g::Fuse::Reactive::Instantiator_type*)uClassType::New("Fuse.Reactive.Each", options);
    type->fp_build_ = Each_build;
    type->fp_ctor_ = (void*)Each__New4_fn;
    type->fp_cctor_ = Each__cctor_1_fn;
    type->interface7.fp_GetData = (void(*)(uObject*, ::g::Fuse::Node*, uObject**))::g::Fuse::Reactive::Instantiator__FuseNodeISubtreeDataProviderGetData_fn;
    type->interface6.fp_OnSet = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::Instantiator__FuseReactiveIObserverOnSet_fn;
    type->interface6.fp_OnFailed = (void(*)(uObject*, uString*))::g::Fuse::Reactive::Instantiator__FuseReactiveIObserverOnFailed_fn;
    type->interface6.fp_OnAdd = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::Instantiator__FuseReactiveIObserverOnAdd_fn;
    type->interface6.fp_OnRemoveAt = (void(*)(uObject*, int*))::g::Fuse::Reactive::Instantiator__FuseReactiveIObserverOnRemoveAt_fn;
    type->interface6.fp_OnInsertAt = (void(*)(uObject*, int*, uObject*))::g::Fuse::Reactive::Instantiator__FuseReactiveIObserverOnInsertAt_fn;
    type->interface6.fp_OnNewAt = (void(*)(uObject*, int*, uObject*))::g::Fuse::Reactive::Instantiator__FuseReactiveIObserverOnNewAt_fn;
    type->interface6.fp_OnNewAll = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::Instantiator__FuseReactiveIObserverOnNewAll_fn;
    type->interface6.fp_OnClear = (void(*)(uObject*))::g::Fuse::Reactive::Instantiator__FuseReactiveIObserverOnClear_fn;
    type->interface8.fp_Perform = (void(*)(uObject*, bool*))::g::Fuse::Reactive::Instantiator__FuseIDeferredPerform_fn;
    type->interface4.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface4.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface5.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface4.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface4.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public Each() :145
void Each__ctor_5_fn(Each* __this)
{
    __this->ctor_5();
}

// private Each(Uno.Collections.IList<Uno.UX.Template> templates) :144
void Each__ctor_6_fn(Each* __this, uObject* templates)
{
    __this->ctor_6(templates);
}

// public new int get_Count() :172
void Each__get_Count1_fn(Each* __this, int* __retval)
{
    *__retval = __this->Count1();
}

// public new void set_Count(int value) :173
void Each__set_Count1_fn(Each* __this, int* value)
{
    __this->Count1(*value);
}

// private static Fuse.Reactive.Each GetEach(Fuse.Visual container) :98
void Each__GetEach_fn(::g::Fuse::Visual* container, Each** __retval)
{
    *__retval = Each::GetEach(container);
}

// public static object GetItems(Fuse.Visual container) :126
void Each__GetItems1_fn(::g::Fuse::Visual* container, uObject** __retval)
{
    *__retval = Each::GetItems1(container);
}

// public static string GetMatchKey(Fuse.Visual container) :139
void Each__GetMatchKey_fn(::g::Fuse::Visual* container, uString** __retval)
{
    *__retval = Each::GetMatchKey(container);
}

// public object get_Items() :161
void Each__get_Items_fn(Each* __this, uObject** __retval)
{
    *__retval = __this->Items();
}

// public void set_Items(object value) :162
void Each__set_Items_fn(Each* __this, uObject* value)
{
    __this->Items(value);
}

// public new int get_Limit() :198
void Each__get_Limit1_fn(Each* __this, int* __retval)
{
    *__retval = __this->Limit1();
}

// public new void set_Limit(int value) :199
void Each__set_Limit1_fn(Each* __this, int* value)
{
    __this->Limit1(*value);
}

// public Each New() :145
void Each__New4_fn(Each** __retval)
{
    *__retval = Each::New4();
}

// private Each New(Uno.Collections.IList<Uno.UX.Template> templates) :144
void Each__New5_fn(uObject* templates, Each** __retval)
{
    *__retval = Each::New5(templates);
}

// public new int get_Offset() :185
void Each__get_Offset1_fn(Each* __this, int* __retval)
{
    *__retval = __this->Offset1();
}

// public new void set_Offset(int value) :186
void Each__set_Offset1_fn(Each* __this, int* value)
{
    __this->Offset1(*value);
}

// public static void SetItems(Fuse.Visual container, object items) :120
void Each__SetItems1_fn(::g::Fuse::Visual* container, uObject* items)
{
    Each::SetItems1(container, items);
}

// public static void SetMatchKey(Fuse.Visual container, string key) :133
void Each__SetMatchKey_fn(::g::Fuse::Visual* container, uString* key)
{
    Each::SetMatchKey(container, key);
}

uSStrong< ::g::Fuse::PropertyHandle*> Each::_eachHandle_;

// public Each() [instance] :145
void Each::ctor_5()
{
    ctor_3();
}

// private Each(Uno.Collections.IList<Uno.UX.Template> templates) [instance] :144
void Each::ctor_6(uObject* templates)
{
    ctor_4(templates);
}

// public new int get_Count() [instance] :172
int Each::Count1()
{
    return Count();
}

// public new void set_Count(int value) [instance] :173
void Each::Count1(int value)
{
    uStackFrame __("Fuse.Reactive.Each", "set_Count(int)");
    Count(value);
}

// public object get_Items() [instance] :161
uObject* Each::Items()
{
    return GetItems();
}

// public void set_Items(object value) [instance] :162
void Each::Items(uObject* value)
{
    if (GetItems() != value)
        SetItems(value);
}

// public new int get_Limit() [instance] :198
int Each::Limit1()
{
    return Limit();
}

// public new void set_Limit(int value) [instance] :199
void Each::Limit1(int value)
{
    Limit(value);
}

// public new int get_Offset() [instance] :185
int Each::Offset1()
{
    return Offset();
}

// public new void set_Offset(int value) [instance] :186
void Each::Offset1(int value)
{
    Offset(value);
}

// private static Fuse.Reactive.Each GetEach(Fuse.Visual container) [static] :98
Each* Each::GetEach(::g::Fuse::Visual* container)
{
    uStackFrame __("Fuse.Reactive.Each", "GetEach(Fuse.Visual)");
    Each* each = uAs<Each*>(uPtr(uPtr(container)->Properties())->Get(Each::_eachHandle_), Each_typeof());

    if (each == NULL)
    {
        each = Each::New5(uPtr(container)->Templates());
        uPtr(container->Properties())->Set(Each::_eachHandle_, each);
        ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(container->Children()), ::TYPES[36/*Uno.Collections.ICollection<Fuse.Node>*/]), each);
    }

    return each;
}

// public static object GetItems(Fuse.Visual container) [static] :126
uObject* Each::GetItems1(::g::Fuse::Visual* container)
{
    uStackFrame __("Fuse.Reactive.Each", "GetItems(Fuse.Visual)");
    return uPtr(Each::GetEach(container))->Items();
}

// public static string GetMatchKey(Fuse.Visual container) [static] :139
uString* Each::GetMatchKey(::g::Fuse::Visual* container)
{
    uStackFrame __("Fuse.Reactive.Each", "GetMatchKey(Fuse.Visual)");
    return uPtr(Each::GetEach(container))->MatchKey();
}

// public Each New() [static] :145
Each* Each::New4()
{
    Each* obj2 = (Each*)uNew(Each_typeof());
    obj2->ctor_5();
    return obj2;
}

// private Each New(Uno.Collections.IList<Uno.UX.Template> templates) [static] :144
Each* Each::New5(uObject* templates)
{
    Each* obj1 = (Each*)uNew(Each_typeof());
    obj1->ctor_6(templates);
    return obj1;
}

// public static void SetItems(Fuse.Visual container, object items) [static] :120
void Each::SetItems1(::g::Fuse::Visual* container, uObject* items)
{
    uStackFrame __("Fuse.Reactive.Each", "SetItems(Fuse.Visual,object)");
    uPtr(Each::GetEach(container))->Items(items);
}

// public static void SetMatchKey(Fuse.Visual container, string key) [static] :133
void Each::SetMatchKey(::g::Fuse::Visual* container, uString* key)
{
    uStackFrame __("Fuse.Reactive.Each", "SetMatchKey(Fuse.Visual,string)");
    uPtr(Each::GetEach(container))->MatchKey(key);
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.4.0/Operators.uno
// ---------------------------------------------------------------------------

// public sealed class Equal :154
// {
static void Equal_build(uType* type)
{
    ::STRINGS[47] = uString::Const("==");
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::InfixOperator_type, interface0));
    type->SetFields(2);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Equal__New1_fn, 0, true, type, 2, ::g::Fuse::Reactive::Expression_typeof(), ::g::Fuse::Reactive::Expression_typeof()));
}

::g::Fuse::Reactive::InfixOperator_type* Equal_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::InfixOperator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::InfixOperator_typeof();
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Equal);
    options.TypeSize = sizeof(::g::Fuse::Reactive::InfixOperator_type);
    type = (::g::Fuse::Reactive::InfixOperator_type*)uClassType::New("Fuse.Reactive.Equal", options);
    type->fp_build_ = Equal_build;
    type->fp_Compute = (void(*)(::g::Fuse::Reactive::BinaryOperator*, uObject*, uObject*, uObject**))Equal__Compute_fn;
    type->fp_get_Symbol = (void(*)(::g::Fuse::Reactive::InfixOperator*, uString**))Equal__get_Symbol_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::BinaryOperator__Subscribe_fn;
    return type;
}

// public Equal(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) :157
void Equal__ctor_3_fn(Equal* __this, ::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right)
{
    __this->ctor_3(left, right);
}

// protected override sealed object Compute(object left, object right) :158
void Equal__Compute_fn(Equal* __this, uObject* left, uObject* right, uObject** __retval)
{
    uStackFrame __("Fuse.Reactive.Equal", "Compute(object,object)");
    return *__retval = ::g::Fuse::Marshal::EqualTo(left, right), void();
}

// public Equal New(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) :157
void Equal__New1_fn(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right, Equal** __retval)
{
    *__retval = Equal::New1(left, right);
}

// public override sealed string get_Symbol() :163
void Equal__get_Symbol_fn(Equal* __this, uString** __retval)
{
    return *__retval = ::STRINGS[47/*"=="*/], void();
}

// public Equal(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) [instance] :157
void Equal::ctor_3(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right)
{
    ctor_2(left, right);
}

// public Equal New(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) [static] :157
Equal* Equal::New1(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right)
{
    Equal* obj1 = (Equal*)uNew(Equal_typeof());
    obj1->ctor_3(left, right);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.4.0/MathFunctions.uno
// -------------------------------------------------------------------------------

// public sealed class Even :56
// {
static void Even_build(uType* type)
{
    ::STRINGS[48] = uString::Const("even(");
    ::STRINGS[5] = uString::Const(")");
    ::TYPES[1] = ::g::Fuse::Marshal_typeof()->MakeMethod(1/*TryToType<float>*/, ::g::Uno::Float_typeof(), NULL);
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::UnaryOperator_type, interface0));
    type->SetFields(1);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Even__New1_fn, 0, true, type, 1, ::g::Fuse::Reactive::Expression_typeof()));
}

::g::Fuse::Reactive::UnaryOperator_type* Even_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::UnaryOperator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::UnaryOperator_typeof();
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Even);
    options.TypeSize = sizeof(::g::Fuse::Reactive::UnaryOperator_type);
    type = (::g::Fuse::Reactive::UnaryOperator_type*)uClassType::New("Fuse.Reactive.Even", options);
    type->fp_build_ = Even_build;
    type->fp_Compute = (void(*)(::g::Fuse::Reactive::UnaryOperator*, uObject*, uObject**))Even__Compute_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))Even__ToString_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::UnaryOperator__Subscribe_fn;
    return type;
}

// public Even(Fuse.Reactive.Expression operand) :59
void Even__ctor_2_fn(Even* __this, ::g::Fuse::Reactive::Expression* operand)
{
    __this->ctor_2(operand);
}

// protected override sealed object Compute(object operand) :60
void Even__Compute_fn(Even* __this, uObject* operand, uObject** __retval)
{
    uStackFrame __("Fuse.Reactive.Even", "Compute(object)");
    bool ret2;
    float v = 0.0f;

    if (!(::g::Fuse::Marshal__TryToType_fn(::TYPES[1/*Fuse.Marshal.TryToType<float>*/], operand, &v, &ret2), ret2))
        return *__retval = NULL, void();

    int q = (int)::g::Uno::Math::Round2(v);
    return *__retval = uBox(::TYPES[9/*bool*/], (q % 2) == 0), void();
}

// public Even New(Fuse.Reactive.Expression operand) :59
void Even__New1_fn(::g::Fuse::Reactive::Expression* operand, Even** __retval)
{
    *__retval = Even::New1(operand);
}

// public override sealed string ToString() :70
void Even__ToString_fn(Even* __this, uString** __retval)
{
    uStackFrame __("Fuse.Reactive.Even", "ToString()");
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[48/*"even("*/], __this->Operand()), ::STRINGS[5/*")"*/]), void();
}

// public Even(Fuse.Reactive.Expression operand) [instance] :59
void Even::ctor_2(::g::Fuse::Reactive::Expression* operand)
{
    ctor_1(operand);
}

// public Even New(Fuse.Reactive.Expression operand) [static] :59
Even* Even::New1(::g::Fuse::Reactive::Expression* operand)
{
    Even* obj1 = (Even*)uNew(Even_typeof());
    obj1->ctor_2(operand);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Bindings/1.4.0/EventBinding.uno
// ---------------------------------------------------------------------------

// public sealed class EventBinding :26
// {
static void EventBinding_build(uType* type)
{
    ::TYPES[37] = ::g::Fuse::Reactive::IEventHandler_typeof();
    ::TYPES[38] = ::g::Fuse::Scripting::IScriptEvent_typeof();
    ::TYPES[39] = ::g::Fuse::Node_typeof();
    ::TYPES[40] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Reactive::EventRecord_typeof(), NULL);
    type->SetInterfaces(
        ::g::Fuse::Reactive::IContext_typeof(), offsetof(::g::Fuse::Reactive::ExpressionBinding_type, interface0),
        ::g::Fuse::Reactive::IListener_typeof(), offsetof(::g::Fuse::Reactive::ExpressionBinding_type, interface1));
    type->SetFields(3,
        ::TYPES[37/*Fuse.Reactive.IEventHandler*/], offsetof(EventBinding, _eventHandler), 0,
        ::TYPES[40/*Uno.Collections.List<Fuse.Reactive.EventRecord>*/], offsetof(EventBinding, _queuedEvents), 0);
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)EventBinding__New1_fn, 0, true, type, 1, ::g::Fuse::Reactive::IExpression_typeof()),
        new uFunction("OnEvent", NULL, (void*)EventBinding__OnEvent_fn, 0, false, uVoid_typeof(), 2, uObject_typeof(), ::g::Uno::EventArgs_typeof()));
}

::g::Fuse::Reactive::ExpressionBinding_type* EventBinding_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::ExpressionBinding_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::ExpressionBinding_typeof();
    options.FieldCount = 5;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(EventBinding);
    options.TypeSize = sizeof(::g::Fuse::Reactive::ExpressionBinding_type);
    type = (::g::Fuse::Reactive::ExpressionBinding_type*)uClassType::New("Fuse.Reactive.EventBinding", options);
    type->fp_build_ = EventBinding_build;
    type->fp_NewValue = (void(*)(::g::Fuse::Reactive::ExpressionBinding*, uObject*))EventBinding__NewValue_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Binding*))EventBinding__OnUnrooted_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uString*, uObject*, uObject**))::g::Fuse::Reactive::ExpressionBinding__FuseReactiveIContextSubscribe_fn;
    type->interface1.fp_OnNewData = (void(*)(uObject*, uObject*, uObject*))::g::Fuse::Reactive::ExpressionBinding__FuseReactiveIListenerOnNewData_fn;
    type->interface0.fp_get_Node = (void(*)(uObject*, ::g::Fuse::Node**))::g::Fuse::Reactive::ExpressionBinding__FuseReactiveIContextget_Node_fn;
    type->interface0.fp_SubscribeResource = (void(*)(uObject*, uObject*, uString*, uObject*, uObject**))::g::Fuse::Reactive::ExpressionBinding__SubscribeResource_fn;
    return type;
}

// public EventBinding(Fuse.Reactive.IExpression key) :29
void EventBinding__ctor_2_fn(EventBinding* __this, uObject* key)
{
    __this->ctor_2(key);
}

// public EventBinding New(Fuse.Reactive.IExpression key) :29
void EventBinding__New1_fn(uObject* key, EventBinding** __retval)
{
    *__retval = EventBinding::New1(key);
}

// internal override sealed void NewValue(object obj) :49
void EventBinding__NewValue_fn(EventBinding* __this, uObject* obj)
{
    uStackFrame __("Fuse.Reactive.EventBinding", "NewValue(object)");
    __this->_eventHandler = uAs<uObject*>(obj, ::TYPES[37/*Fuse.Reactive.IEventHandler*/]);
    __this->ProcessQueuedEvents();
}

// public void OnEvent(object sender, Uno.EventArgs args) :62
void EventBinding__OnEvent_fn(EventBinding* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnEvent(sender, args);
}

// protected override sealed void OnUnrooted() :55
void EventBinding__OnUnrooted_fn(EventBinding* __this)
{
    uStackFrame __("Fuse.Reactive.EventBinding", "OnUnrooted()");
    ::g::Fuse::Reactive::ExpressionBinding__OnUnrooted_fn(__this);
    __this->_eventHandler = NULL;
    __this->_queuedEvents = NULL;
}

// private void ProcessQueuedEvents() :37
void EventBinding__ProcessQueuedEvents_fn(EventBinding* __this)
{
    __this->ProcessQueuedEvents();
}

// public EventBinding(Fuse.Reactive.IExpression key) [instance] :29
void EventBinding::ctor_2(uObject* key)
{
    ctor_1(key);
}

// public void OnEvent(object sender, Uno.EventArgs args) [instance] :62
void EventBinding::OnEvent(uObject* sender, ::g::Uno::EventArgs* args)
{
    uStackFrame __("Fuse.Reactive.EventBinding", "OnEvent(object,Uno.EventArgs)");

    if (Parent() == NULL)
        return;

    ::g::Fuse::Reactive::EventRecord* e = ::g::Fuse::Reactive::EventRecord::New1(uAs<uObject*>(args, ::TYPES[38/*Fuse.Scripting.IScriptEvent*/]), uAs< ::g::Fuse::Node*>(sender, ::TYPES[39/*Fuse.Node*/]));

    if (_eventHandler != NULL)
        ::g::Fuse::Reactive::IEventHandler::Dispatch(uInterface(uPtr(_eventHandler), ::TYPES[37/*Fuse.Reactive.IEventHandler*/]), (uObject*)e);
    else
    {
        if (_queuedEvents == NULL)
            _queuedEvents = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[40/*Uno.Collections.List<Fuse.Reactive.EventRecord>*/]));

        ::g::Uno::Collections::List__Add_fn(uPtr(_queuedEvents), e);
    }
}

// private void ProcessQueuedEvents() [instance] :37
void EventBinding::ProcessQueuedEvents()
{
    uStackFrame __("Fuse.Reactive.EventBinding", "ProcessQueuedEvents()");
    ::g::Fuse::Reactive::EventRecord* ret2;

    if ((_eventHandler != NULL) && (_queuedEvents != NULL))
    {
        ::g::Uno::Collections::List* events = _queuedEvents;
        _queuedEvents = NULL;

        for (int i = 0; i < uPtr(events)->Count(); i++)
            ::g::Fuse::Reactive::IEventHandler::Dispatch(uInterface(uPtr(_eventHandler), ::TYPES[37/*Fuse.Reactive.IEventHandler*/]), (uObject*)(::g::Uno::Collections::List__get_Item_fn(uPtr(events), uCRef<int>(i), &ret2), ret2));
    }
}

// public EventBinding New(Fuse.Reactive.IExpression key) [static] :29
EventBinding* EventBinding::New1(uObject* key)
{
    EventBinding* obj1 = (EventBinding*)uNew(EventBinding_typeof());
    obj1->ctor_2(key);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Bindings/1.4.0/EventRecord.uno
// --------------------------------------------------------------------------

// internal sealed class EventRecord :9
// {
static void EventRecord_build(uType* type)
{
    ::TYPES[39] = ::g::Fuse::Node_typeof();
    ::TYPES[38] = ::g::Fuse::Scripting::IScriptEvent_typeof();
    ::TYPES[4] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof(), NULL);
    type->SetDependencies(
        ::g::Uno::UX::Selector_typeof());
    type->SetInterfaces(
        ::g::Fuse::Reactive::IEventRecord_typeof(), offsetof(EventRecord_type, interface0),
        ::g::Fuse::Scripting::IEventSerializer_typeof(), offsetof(EventRecord_type, interface1));
    type->SetFields(0,
        ::TYPES[39/*Fuse.Node*/], offsetof(EventRecord, _node), 0,
        uObject_typeof(), offsetof(EventRecord, _data), 0,
        ::g::Uno::UX::Selector_typeof(), offsetof(EventRecord, _sender), 0,
        ::TYPES[4/*Uno.Collections.Dictionary<string, object>*/], offsetof(EventRecord, _args), 0);
}

EventRecord_type* EventRecord_typeof()
{
    static uSStrong<EventRecord_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.InterfaceCount = 2;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(EventRecord);
    options.TypeSize = sizeof(EventRecord_type);
    type = (EventRecord_type*)uClassType::New("Fuse.Reactive.EventRecord", options);
    type->fp_build_ = EventRecord_build;
    type->interface1.fp_AddObject = (void(*)(uObject*, uString*, uObject*))EventRecord__FuseScriptingIEventSerializerAddObject_fn;
    type->interface1.fp_AddString = (void(*)(uObject*, uString*, uString*))EventRecord__FuseScriptingIEventSerializerAddString_fn;
    type->interface1.fp_AddInt = (void(*)(uObject*, uString*, int*))EventRecord__FuseScriptingIEventSerializerAddInt_fn;
    type->interface1.fp_AddDouble = (void(*)(uObject*, uString*, double*))EventRecord__FuseScriptingIEventSerializerAddDouble_fn;
    type->interface1.fp_AddBool = (void(*)(uObject*, uString*, bool*))EventRecord__FuseScriptingIEventSerializerAddBool_fn;
    type->interface0.fp_get_Node = (void(*)(uObject*, ::g::Fuse::Node**))EventRecord__get_Node_fn;
    type->interface0.fp_get_Data = (void(*)(uObject*, uObject**))EventRecord__get_Data_fn;
    type->interface0.fp_get_Sender = (void(*)(uObject*, ::g::Uno::UX::Selector*))EventRecord__get_Sender_fn;
    type->interface0.fp_get_Args = (void(*)(uObject*, uObject**))EventRecord__get_Args_fn;
    return type;
}

// internal EventRecord(Fuse.Scripting.IScriptEvent args, object sender) :16
void EventRecord__ctor__fn(EventRecord* __this, uObject* args, uObject* sender)
{
    __this->ctor_(args, sender);
}

// private void AddObject(string key, object value) :36
void EventRecord__AddObject_fn(EventRecord* __this, uString* key, uObject* value)
{
    __this->AddObject(key, value);
}

// public Uno.Collections.IEnumerable<Uno.Collections.KeyValuePair<string, object>> get_Args() :34
void EventRecord__get_Args_fn(EventRecord* __this, uObject** __retval)
{
    *__retval = __this->Args();
}

// public object get_Data() :32
void EventRecord__get_Data_fn(EventRecord* __this, uObject** __retval)
{
    *__retval = __this->Data();
}

// private void Fuse.Scripting.IEventSerializer.AddBool(string key, bool value) :62
void EventRecord__FuseScriptingIEventSerializerAddBool_fn(EventRecord* __this, uString* key, bool* value)
{
    uStackFrame __("Fuse.Reactive.EventRecord", "Fuse.Scripting.IEventSerializer.AddBool(string,bool)");
    bool value_ = *value;
    __this->AddObject(key, uBox(::TYPES[9/*bool*/], value_));
}

// private void Fuse.Scripting.IEventSerializer.AddDouble(string key, double value) :57
void EventRecord__FuseScriptingIEventSerializerAddDouble_fn(EventRecord* __this, uString* key, double* value)
{
    uStackFrame __("Fuse.Reactive.EventRecord", "Fuse.Scripting.IEventSerializer.AddDouble(string,double)");
    double value_ = *value;
    __this->AddObject(key, uBox(::TYPES[11/*double*/], value_));
}

// private void Fuse.Scripting.IEventSerializer.AddInt(string key, int value) :52
void EventRecord__FuseScriptingIEventSerializerAddInt_fn(EventRecord* __this, uString* key, int* value)
{
    uStackFrame __("Fuse.Reactive.EventRecord", "Fuse.Scripting.IEventSerializer.AddInt(string,int)");
    int value_ = *value;
    __this->AddObject(key, uBox(::TYPES[11/*double*/], (double)value_));
}

// private void Fuse.Scripting.IEventSerializer.AddObject(string key, object value) :42
void EventRecord__FuseScriptingIEventSerializerAddObject_fn(EventRecord* __this, uString* key, uObject* value)
{
    uStackFrame __("Fuse.Reactive.EventRecord", "Fuse.Scripting.IEventSerializer.AddObject(string,object)");
    __this->AddObject(key, value);
}

// private void Fuse.Scripting.IEventSerializer.AddString(string key, string value) :47
void EventRecord__FuseScriptingIEventSerializerAddString_fn(EventRecord* __this, uString* key, uString* value)
{
    uStackFrame __("Fuse.Reactive.EventRecord", "Fuse.Scripting.IEventSerializer.AddString(string,string)");
    __this->AddObject(key, value);
}

// internal EventRecord New(Fuse.Scripting.IScriptEvent args, object sender) :16
void EventRecord__New1_fn(uObject* args, uObject* sender, EventRecord** __retval)
{
    *__retval = EventRecord::New1(args, sender);
}

// public Fuse.Node get_Node() :31
void EventRecord__get_Node_fn(EventRecord* __this, ::g::Fuse::Node** __retval)
{
    *__retval = __this->Node();
}

// public Uno.UX.Selector get_Sender() :33
void EventRecord__get_Sender_fn(EventRecord* __this, ::g::Uno::UX::Selector* __retval)
{
    *__retval = __this->Sender();
}

// internal EventRecord(Fuse.Scripting.IScriptEvent args, object sender) [instance] :16
void EventRecord::ctor_(uObject* args, uObject* sender)
{
    uStackFrame __("Fuse.Reactive.EventRecord", ".ctor(Fuse.Scripting.IScriptEvent,object)");
    _node = uAs< ::g::Fuse::Node*>(sender, ::TYPES[39/*Fuse.Node*/]);

    if (_node != NULL)
    {
        _data = uPtr(_node)->GetFirstData();

        if (::g::Uno::String::op_Inequality(::g::Uno::UX::Selector__op_Implicit1(uPtr(_node)->Name()), NULL))
            _sender = uPtr(_node)->Name();
    }

    if (args != NULL)
        ::g::Fuse::Scripting::IScriptEvent::Serialize(uInterface(uPtr(args), ::TYPES[38/*Fuse.Scripting.IScriptEvent*/]), (uObject*)this);
}

// private void AddObject(string key, object value) [instance] :36
void EventRecord::AddObject(uString* key, uObject* value)
{
    uStackFrame __("Fuse.Reactive.EventRecord", "AddObject(string,object)");

    if (_args == NULL)
        _args = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[4/*Uno.Collections.Dictionary<string, object>*/]));

    ::g::Uno::Collections::Dictionary__Add_fn(uPtr(_args), key, value);
}

// public Uno.Collections.IEnumerable<Uno.Collections.KeyValuePair<string, object>> get_Args() [instance] :34
uObject* EventRecord::Args()
{
    uStackFrame __("Fuse.Reactive.EventRecord", "get_Args()");
    return (uObject*)_args;
}

// public object get_Data() [instance] :32
uObject* EventRecord::Data()
{
    return _data;
}

// public Fuse.Node get_Node() [instance] :31
::g::Fuse::Node* EventRecord::Node()
{
    return _node;
}

// public Uno.UX.Selector get_Sender() [instance] :33
::g::Uno::UX::Selector EventRecord::Sender()
{
    return _sender;
}

// internal EventRecord New(Fuse.Scripting.IScriptEvent args, object sender) [static] :16
EventRecord* EventRecord::New1(uObject* args, uObject* sender)
{
    EventRecord* obj1 = (EventRecord*)uNew(EventRecord_typeof());
    obj1->ctor_(args, sender);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.4.0/MathFunctions.uno
// -------------------------------------------------------------------------------

// public sealed class Exp :327
// {
static void Exp_build(uType* type)
{
    ::STRINGS[49] = uString::Const("exp");
    ::TYPES[0] = ::g::Fuse::Reactive::UnaryFloatOperator__FloatOp_typeof();
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::UnaryOperator_type, interface0));
    type->SetFields(3);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Exp__New1_fn, 0, true, type, 1, ::g::Fuse::Reactive::Expression_typeof()));
}

::g::Fuse::Reactive::UnaryOperator_type* Exp_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::UnaryOperator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::UnaryFloatOperator_typeof();
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Exp);
    options.TypeSize = sizeof(::g::Fuse::Reactive::UnaryOperator_type);
    type = (::g::Fuse::Reactive::UnaryOperator_type*)uClassType::New("Fuse.Reactive.Exp", options);
    type->fp_build_ = Exp_build;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::UnaryOperator__Subscribe_fn;
    return type;
}

// public Exp(Fuse.Reactive.Expression operand) :330
void Exp__ctor_3_fn(Exp* __this, ::g::Fuse::Reactive::Expression* operand)
{
    __this->ctor_3(operand);
}

// public Exp New(Fuse.Reactive.Expression operand) :330
void Exp__New1_fn(::g::Fuse::Reactive::Expression* operand, Exp** __retval)
{
    *__retval = Exp::New1(operand);
}

// public Exp(Fuse.Reactive.Expression operand) [instance] :330
void Exp::ctor_3(::g::Fuse::Reactive::Expression* operand)
{
    ctor_2(operand, ::STRINGS[49/*"exp"*/], uDelegate::New(::TYPES[0/*Fuse.Reactive.UnaryFloatOperator.FloatOp*/], (void*)::g::Uno::Math__Exp_fn));
}

// public Exp New(Fuse.Reactive.Expression operand) [static] :330
Exp* Exp::New1(::g::Fuse::Reactive::Expression* operand)
{
    Exp* obj1 = (Exp*)uNew(Exp_typeof());
    obj1->ctor_3(operand);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.4.0/MathFunctions.uno
// -------------------------------------------------------------------------------

// public sealed class Exp2 :335
// {
static void Exp2_build(uType* type)
{
    ::STRINGS[50] = uString::Const("exp2");
    ::TYPES[0] = ::g::Fuse::Reactive::UnaryFloatOperator__FloatOp_typeof();
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::UnaryOperator_type, interface0));
    type->SetFields(3);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Exp2__New1_fn, 0, true, type, 1, ::g::Fuse::Reactive::Expression_typeof()));
}

::g::Fuse::Reactive::UnaryOperator_type* Exp2_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::UnaryOperator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::UnaryFloatOperator_typeof();
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Exp2);
    options.TypeSize = sizeof(::g::Fuse::Reactive::UnaryOperator_type);
    type = (::g::Fuse::Reactive::UnaryOperator_type*)uClassType::New("Fuse.Reactive.Exp2", options);
    type->fp_build_ = Exp2_build;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::UnaryOperator__Subscribe_fn;
    return type;
}

// public Exp2(Fuse.Reactive.Expression operand) :338
void Exp2__ctor_3_fn(Exp2* __this, ::g::Fuse::Reactive::Expression* operand)
{
    __this->ctor_3(operand);
}

// public Exp2 New(Fuse.Reactive.Expression operand) :338
void Exp2__New1_fn(::g::Fuse::Reactive::Expression* operand, Exp2** __retval)
{
    *__retval = Exp2::New1(operand);
}

// public Exp2(Fuse.Reactive.Expression operand) [instance] :338
void Exp2::ctor_3(::g::Fuse::Reactive::Expression* operand)
{
    ctor_2(operand, ::STRINGS[50/*"exp2"*/], uDelegate::New(::TYPES[0/*Fuse.Reactive.UnaryFloatOperator.FloatOp*/], (void*)::g::Uno::Math__Exp21_fn));
}

// public Exp2 New(Fuse.Reactive.Expression operand) [static] :338
Exp2* Exp2::New1(::g::Fuse::Reactive::Expression* operand)
{
    Exp2* obj1 = (Exp2*)uNew(Exp2_typeof());
    obj1->ctor_3(operand);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.4.0/Expression.uno
// ----------------------------------------------------------------------------

// public abstract class Expression :7
// {
static void Expression_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(Expression_type, interface0));
    type->Reflection.SetFunctions(1,
        new uFunction("Subscribe", NULL, NULL, offsetof(Expression_type, fp_Subscribe), false, ::g::Uno::IDisposable_typeof(), 2, ::g::Fuse::Reactive::IContext_typeof(), ::g::Fuse::Reactive::IListener_typeof()));
}

Expression_type* Expression_typeof()
{
    static uSStrong<Expression_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Expression);
    options.TypeSize = sizeof(Expression_type);
    type = (Expression_type*)uClassType::New("Fuse.Reactive.Expression", options);
    type->fp_build_ = Expression_build;
    return type;
}

// protected generated Expression() :7
void Expression__ctor__fn(Expression* __this)
{
    __this->ctor_();
}

// protected generated Expression() [instance] :7
void Expression::ctor_()
{
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Bindings/1.4.0/ExpressionBinding.uno
// --------------------------------------------------------------------------------

// public abstract class ExpressionBinding :6
// {
static void ExpressionBinding_build(uType* type)
{
    ::STRINGS[51] = uString::Const("The binding type does not support resource subscriptions");
    ::TYPES[35] = ::g::Fuse::Reactive::IExpression_typeof();
    ::TYPES[2] = ::g::Uno::IDisposable_typeof();
    ::TYPES[41] = ::g::Fuse::Reactive::IWriteable_typeof();
    type->SetInterfaces(
        ::g::Fuse::Reactive::IContext_typeof(), offsetof(ExpressionBinding_type, interface0),
        ::g::Fuse::Reactive::IListener_typeof(), offsetof(ExpressionBinding_type, interface1));
    type->SetFields(1,
        ::TYPES[2/*Uno.IDisposable*/], offsetof(ExpressionBinding, _expressionSub), 0,
        ::TYPES[35/*Fuse.Reactive.IExpression*/], offsetof(ExpressionBinding, _Key), 0);
    type->Reflection.SetFunctions(2,
        new uFunction("get_Key", NULL, (void*)ExpressionBinding__get_Key_fn, 0, false, ::TYPES[35/*Fuse.Reactive.IExpression*/], 0),
        new uFunction("SubscribeResource", NULL, NULL, offsetof(ExpressionBinding_type, fp_SubscribeResource), false, ::TYPES[2/*Uno.IDisposable*/], 3, ::TYPES[35/*Fuse.Reactive.IExpression*/], ::g::Uno::String_typeof(), ::g::Fuse::Reactive::IListener_typeof()));
}

ExpressionBinding_type* ExpressionBinding_typeof()
{
    static uSStrong<ExpressionBinding_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Binding_typeof();
    options.FieldCount = 3;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(ExpressionBinding);
    options.TypeSize = sizeof(ExpressionBinding_type);
    type = (ExpressionBinding_type*)uClassType::New("Fuse.Reactive.ExpressionBinding", options);
    type->fp_build_ = ExpressionBinding_build;
    type->fp_OnRooted = (void(*)(::g::Fuse::Binding*))ExpressionBinding__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Binding*))ExpressionBinding__OnUnrooted_fn;
    type->fp_SubscribeResource = ExpressionBinding__SubscribeResource_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uString*, uObject*, uObject**))ExpressionBinding__FuseReactiveIContextSubscribe_fn;
    type->interface1.fp_OnNewData = (void(*)(uObject*, uObject*, uObject*))ExpressionBinding__FuseReactiveIListenerOnNewData_fn;
    type->interface0.fp_get_Node = (void(*)(uObject*, ::g::Fuse::Node**))ExpressionBinding__FuseReactiveIContextget_Node_fn;
    type->interface0.fp_SubscribeResource = (void(*)(uObject*, uObject*, uString*, uObject*, uObject**))ExpressionBinding__SubscribeResource_fn;
    return type;
}

// protected ExpressionBinding(Fuse.Reactive.IExpression key) :10
void ExpressionBinding__ctor_1_fn(ExpressionBinding* __this, uObject* key)
{
    __this->ctor_1(key);
}

// protected internal bool get_CanWriteBack() :17
void ExpressionBinding__get_CanWriteBack_fn(ExpressionBinding* __this, bool* __retval)
{
    *__retval = __this->CanWriteBack();
}

// private Fuse.Node Fuse.Reactive.IContext.get_Node() :31
void ExpressionBinding__FuseReactiveIContextget_Node_fn(ExpressionBinding* __this, ::g::Fuse::Node** __retval)
{
    return *__retval = __this->Parent(), void();
}

// private Uno.IDisposable Fuse.Reactive.IContext.Subscribe(Fuse.Reactive.IExpression source, string key, Fuse.Reactive.IListener listener) :26
void ExpressionBinding__FuseReactiveIContextSubscribe_fn(ExpressionBinding* __this, uObject* source, uString* key, uObject* listener, uObject** __retval)
{
    uStackFrame __("Fuse.Reactive.ExpressionBinding", "Fuse.Reactive.IContext.Subscribe(Fuse.Reactive.IExpression,string,Fuse.Reactive.IListener)");
    return *__retval = (uObject*)::g::Fuse::Reactive::DataSubscription::New1(source, __this->Parent(), key, listener), void();
}

// private void Fuse.Reactive.IListener.OnNewData(Fuse.Reactive.IExpression source, object obj) :48
void ExpressionBinding__FuseReactiveIListenerOnNewData_fn(ExpressionBinding* __this, uObject* source, uObject* obj)
{
    uStackFrame __("Fuse.Reactive.ExpressionBinding", "Fuse.Reactive.IListener.OnNewData(Fuse.Reactive.IExpression,object)");
    __this->NewValue(obj);
}

// public generated Fuse.Reactive.IExpression get_Key() :8
void ExpressionBinding__get_Key_fn(ExpressionBinding* __this, uObject** __retval)
{
    *__retval = __this->Key();
}

// private generated void set_Key(Fuse.Reactive.IExpression value) :8
void ExpressionBinding__set_Key_fn(ExpressionBinding* __this, uObject* value)
{
    __this->Key(value);
}

// protected override void OnRooted() :20
void ExpressionBinding__OnRooted_fn(ExpressionBinding* __this)
{
    uStackFrame __("Fuse.Reactive.ExpressionBinding", "OnRooted()");
    ::g::Fuse::Binding__OnRooted_fn(__this);
    __this->_expressionSub = ::g::Fuse::Reactive::IExpression::Subscribe(uInterface(uPtr(__this->Key()), ::TYPES[35/*Fuse.Reactive.IExpression*/]), (uObject*)__this, (uObject*)__this);
}

// protected override void OnUnrooted() :38
void ExpressionBinding__OnUnrooted_fn(ExpressionBinding* __this)
{
    uStackFrame __("Fuse.Reactive.ExpressionBinding", "OnUnrooted()");

    if (__this->_expressionSub != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(__this->_expressionSub), ::TYPES[2/*Uno.IDisposable*/]));
        __this->_expressionSub = NULL;
    }

    ::g::Fuse::Binding__OnUnrooted_fn(__this);
}

// public virtual Uno.IDisposable SubscribeResource(Fuse.Reactive.IExpression source, string key, Fuse.Reactive.IListener listener) :33
void ExpressionBinding__SubscribeResource_fn(ExpressionBinding* __this, uObject* source, uString* key, uObject* listener, uObject** __retval)
{
    uStackFrame __("Fuse.Reactive.ExpressionBinding", "SubscribeResource(Fuse.Reactive.IExpression,string,Fuse.Reactive.IListener)");
    U_THROW(::g::Uno::Exception::New2(::STRINGS[51/*"The binding...*/]));
}

// protected internal void WriteBack(object value) :18
void ExpressionBinding__WriteBack_fn(ExpressionBinding* __this, uObject* value)
{
    __this->WriteBack(value);
}

// protected ExpressionBinding(Fuse.Reactive.IExpression key) [instance] :10
void ExpressionBinding::ctor_1(uObject* key)
{
    ctor_();
    Key(key);
}

// protected internal bool get_CanWriteBack() [instance] :17
bool ExpressionBinding::CanWriteBack()
{
    return uIs((uObject*)_expressionSub, ::TYPES[41/*Fuse.Reactive.IWriteable*/]);
}

// public generated Fuse.Reactive.IExpression get_Key() [instance] :8
uObject* ExpressionBinding::Key()
{
    return _Key;
}

// private generated void set_Key(Fuse.Reactive.IExpression value) [instance] :8
void ExpressionBinding::Key(uObject* value)
{
    _Key = value;
}

// protected internal void WriteBack(object value) [instance] :18
void ExpressionBinding::WriteBack(uObject* value)
{
    uStackFrame __("Fuse.Reactive.ExpressionBinding", "WriteBack(object)");
    ::g::Fuse::Reactive::IWriteable::TrySetExclusive(uInterface(uPtr(_expressionSub), ::TYPES[41/*Fuse.Reactive.IWriteable*/]), value);
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.4.0/MathFunctions.uno
// -------------------------------------------------------------------------------

// internal delegate double BinaryFloatOperator.FloatOp(double a, double b) :187
uDelegateType* BinaryFloatOperator__FloatOp_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Reactive.BinaryFloatOperator.FloatOp", 2, 0);
    type->SetSignature(::g::Uno::Double_typeof(),
        ::g::Uno::Double_typeof(),
        ::g::Uno::Double_typeof());
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.4.0/MathFunctions.uno
// -------------------------------------------------------------------------------

// internal delegate double UnaryFloatOperator.FloatOp(double value) :146
uDelegateType* UnaryFloatOperator__FloatOp_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Reactive.UnaryFloatOperator.FloatOp", 1, 0);
    type->SetSignature(::g::Uno::Double_typeof(),
        ::g::Uno::Double_typeof());
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.4.0/MathFunctions.uno
// -------------------------------------------------------------------------------

// public sealed class Floor :303
// {
static void Floor_build(uType* type)
{
    ::STRINGS[52] = uString::Const("floor");
    ::TYPES[0] = ::g::Fuse::Reactive::UnaryFloatOperator__FloatOp_typeof();
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::UnaryOperator_type, interface0));
    type->SetFields(3);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Floor__New1_fn, 0, true, type, 1, ::g::Fuse::Reactive::Expression_typeof()));
}

::g::Fuse::Reactive::UnaryOperator_type* Floor_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::UnaryOperator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::UnaryFloatOperator_typeof();
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Floor);
    options.TypeSize = sizeof(::g::Fuse::Reactive::UnaryOperator_type);
    type = (::g::Fuse::Reactive::UnaryOperator_type*)uClassType::New("Fuse.Reactive.Floor", options);
    type->fp_build_ = Floor_build;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::UnaryOperator__Subscribe_fn;
    return type;
}

// public Floor(Fuse.Reactive.Expression operand) :306
void Floor__ctor_3_fn(Floor* __this, ::g::Fuse::Reactive::Expression* operand)
{
    __this->ctor_3(operand);
}

// public Floor New(Fuse.Reactive.Expression operand) :306
void Floor__New1_fn(::g::Fuse::Reactive::Expression* operand, Floor** __retval)
{
    *__retval = Floor::New1(operand);
}

// public Floor(Fuse.Reactive.Expression operand) [instance] :306
void Floor::ctor_3(::g::Fuse::Reactive::Expression* operand)
{
    ctor_2(operand, ::STRINGS[52/*"floor"*/], uDelegate::New(::TYPES[0/*Fuse.Reactive.UnaryFloatOperator.FloatOp*/], (void*)::g::Uno::Math__Floor_fn));
}

// public Floor New(Fuse.Reactive.Expression operand) [static] :306
Floor* Floor::New1(::g::Fuse::Reactive::Expression* operand)
{
    Floor* obj1 = (Floor*)uNew(Floor_typeof());
    obj1->ctor_3(operand);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.4.0/MathFunctions.uno
// -------------------------------------------------------------------------------

// public sealed class Fract :343
// {
static void Fract_build(uType* type)
{
    ::STRINGS[53] = uString::Const("fract");
    ::TYPES[0] = ::g::Fuse::Reactive::UnaryFloatOperator__FloatOp_typeof();
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::UnaryOperator_type, interface0));
    type->SetFields(3);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Fract__New1_fn, 0, true, type, 1, ::g::Fuse::Reactive::Expression_typeof()));
}

::g::Fuse::Reactive::UnaryOperator_type* Fract_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::UnaryOperator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::UnaryFloatOperator_typeof();
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Fract);
    options.TypeSize = sizeof(::g::Fuse::Reactive::UnaryOperator_type);
    type = (::g::Fuse::Reactive::UnaryOperator_type*)uClassType::New("Fuse.Reactive.Fract", options);
    type->fp_build_ = Fract_build;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::UnaryOperator__Subscribe_fn;
    return type;
}

// public Fract(Fuse.Reactive.Expression operand) :346
void Fract__ctor_3_fn(Fract* __this, ::g::Fuse::Reactive::Expression* operand)
{
    __this->ctor_3(operand);
}

// public Fract New(Fuse.Reactive.Expression operand) :346
void Fract__New1_fn(::g::Fuse::Reactive::Expression* operand, Fract** __retval)
{
    *__retval = Fract::New1(operand);
}

// public Fract(Fuse.Reactive.Expression operand) [instance] :346
void Fract::ctor_3(::g::Fuse::Reactive::Expression* operand)
{
    ctor_2(operand, ::STRINGS[53/*"fract"*/], uDelegate::New(::TYPES[0/*Fuse.Reactive.UnaryFloatOperator.FloatOp*/], (void*)::g::Uno::Math__Fract_fn));
}

// public Fract New(Fuse.Reactive.Expression operand) [static] :346
Fract* Fract::New1(::g::Fuse::Reactive::Expression* operand)
{
    Fract* obj1 = (Fract*)uNew(Fract_typeof());
    obj1->ctor_3(operand);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.4.0/Operators.uno
// ---------------------------------------------------------------------------

// public sealed class GreaterOrEqual :128
// {
static void GreaterOrEqual_build(uType* type)
{
    ::STRINGS[54] = uString::Const(">=");
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::InfixOperator_type, interface0));
    type->SetFields(2);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)GreaterOrEqual__New1_fn, 0, true, type, 2, ::g::Fuse::Reactive::Expression_typeof(), ::g::Fuse::Reactive::Expression_typeof()));
}

::g::Fuse::Reactive::InfixOperator_type* GreaterOrEqual_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::InfixOperator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::InfixOperator_typeof();
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(GreaterOrEqual);
    options.TypeSize = sizeof(::g::Fuse::Reactive::InfixOperator_type);
    type = (::g::Fuse::Reactive::InfixOperator_type*)uClassType::New("Fuse.Reactive.GreaterOrEqual", options);
    type->fp_build_ = GreaterOrEqual_build;
    type->fp_Compute = (void(*)(::g::Fuse::Reactive::BinaryOperator*, uObject*, uObject*, uObject**))GreaterOrEqual__Compute_fn;
    type->fp_get_Symbol = (void(*)(::g::Fuse::Reactive::InfixOperator*, uString**))GreaterOrEqual__get_Symbol_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::BinaryOperator__Subscribe_fn;
    return type;
}

// public GreaterOrEqual(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) :131
void GreaterOrEqual__ctor_3_fn(GreaterOrEqual* __this, ::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right)
{
    __this->ctor_3(left, right);
}

// protected override sealed object Compute(object left, object right) :132
void GreaterOrEqual__Compute_fn(GreaterOrEqual* __this, uObject* left, uObject* right, uObject** __retval)
{
    uStackFrame __("Fuse.Reactive.GreaterOrEqual", "Compute(object,object)");

    if ((left == NULL) || (right == NULL))
        return *__retval = NULL, void();

    return *__retval = uBox(::TYPES[9/*bool*/], uUnbox<bool>(::TYPES[9/*bool*/], ::g::Fuse::Marshal::GreaterThan(left, right)) || uUnbox<bool>(::TYPES[9/*bool*/], ::g::Fuse::Marshal::EqualTo(left, right))), void();
}

// public GreaterOrEqual New(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) :131
void GreaterOrEqual__New1_fn(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right, GreaterOrEqual** __retval)
{
    *__retval = GreaterOrEqual::New1(left, right);
}

// public override sealed string get_Symbol() :138
void GreaterOrEqual__get_Symbol_fn(GreaterOrEqual* __this, uString** __retval)
{
    return *__retval = ::STRINGS[54/*">="*/], void();
}

// public GreaterOrEqual(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) [instance] :131
void GreaterOrEqual::ctor_3(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right)
{
    ctor_2(left, right);
}

// public GreaterOrEqual New(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) [static] :131
GreaterOrEqual* GreaterOrEqual::New1(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right)
{
    GreaterOrEqual* obj1 = (GreaterOrEqual*)uNew(GreaterOrEqual_typeof());
    obj1->ctor_3(left, right);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.4.0/Operators.uno
// ---------------------------------------------------------------------------

// public sealed class GreaterThan :116
// {
static void GreaterThan_build(uType* type)
{
    ::STRINGS[55] = uString::Const(">");
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::InfixOperator_type, interface0));
    type->SetFields(2);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)GreaterThan__New1_fn, 0, true, type, 2, ::g::Fuse::Reactive::Expression_typeof(), ::g::Fuse::Reactive::Expression_typeof()));
}

::g::Fuse::Reactive::InfixOperator_type* GreaterThan_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::InfixOperator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::InfixOperator_typeof();
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(GreaterThan);
    options.TypeSize = sizeof(::g::Fuse::Reactive::InfixOperator_type);
    type = (::g::Fuse::Reactive::InfixOperator_type*)uClassType::New("Fuse.Reactive.GreaterThan", options);
    type->fp_build_ = GreaterThan_build;
    type->fp_Compute = (void(*)(::g::Fuse::Reactive::BinaryOperator*, uObject*, uObject*, uObject**))GreaterThan__Compute_fn;
    type->fp_get_Symbol = (void(*)(::g::Fuse::Reactive::InfixOperator*, uString**))GreaterThan__get_Symbol_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::BinaryOperator__Subscribe_fn;
    return type;
}

// public GreaterThan(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) :119
void GreaterThan__ctor_3_fn(GreaterThan* __this, ::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right)
{
    __this->ctor_3(left, right);
}

// protected override sealed object Compute(object left, object right) :120
void GreaterThan__Compute_fn(GreaterThan* __this, uObject* left, uObject* right, uObject** __retval)
{
    uStackFrame __("Fuse.Reactive.GreaterThan", "Compute(object,object)");
    return *__retval = ::g::Fuse::Marshal::GreaterThan(left, right), void();
}

// public GreaterThan New(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) :119
void GreaterThan__New1_fn(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right, GreaterThan** __retval)
{
    *__retval = GreaterThan::New1(left, right);
}

// public override sealed string get_Symbol() :125
void GreaterThan__get_Symbol_fn(GreaterThan* __this, uString** __retval)
{
    return *__retval = ::STRINGS[55/*">"*/], void();
}

// public GreaterThan(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) [instance] :119
void GreaterThan::ctor_3(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right)
{
    ctor_2(left, right);
}

// public GreaterThan New(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) [static] :119
GreaterThan* GreaterThan::New1(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right)
{
    GreaterThan* obj1 = (GreaterThan*)uNew(GreaterThan_typeof());
    obj1->ctor_3(left, right);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/1.4.0/IExpression.uno
// -----------------------------------------------------------------

// public abstract interface IContext :13
// {
uInterfaceType* IContext_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Reactive.IContext", 0, 0);
    type->Reflection.SetFunctions(3,
        new uFunction("get_Node", NULL, NULL, offsetof(IContext, fp_get_Node), false, ::g::Fuse::Node_typeof(), 0),
        new uFunction("Subscribe", NULL, NULL, offsetof(IContext, fp_Subscribe), false, ::g::Uno::IDisposable_typeof(), 3, ::g::Fuse::Reactive::IExpression_typeof(), ::g::Uno::String_typeof(), ::g::Fuse::Reactive::IListener_typeof()),
        new uFunction("SubscribeResource", NULL, NULL, offsetof(IContext, fp_SubscribeResource), false, ::g::Uno::IDisposable_typeof(), 3, ::g::Fuse::Reactive::IExpression_typeof(), ::g::Uno::String_typeof(), ::g::Fuse::Reactive::IListener_typeof()));
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/1.4.0/IEventHandler.uno
// -------------------------------------------------------------------

// public abstract interface IEventHandler :16
// {
uInterfaceType* IEventHandler_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Reactive.IEventHandler", 0, 0);
    type->Reflection.SetFunctions(1,
        new uFunction("Dispatch", NULL, NULL, offsetof(IEventHandler, fp_Dispatch), false, uVoid_typeof(), 1, ::g::Fuse::Reactive::IEventRecord_typeof()));
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/1.4.0/IEventHandler.uno
// -------------------------------------------------------------------

// public abstract interface IEventRecord :8
// {
uInterfaceType* IEventRecord_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Reactive.IEventRecord", 0, 0);
    type->Reflection.SetFunctions(4,
        new uFunction("get_Args", NULL, NULL, offsetof(IEventRecord, fp_get_Args), false, ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::Collections::KeyValuePair_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof(), NULL), NULL), 0),
        new uFunction("get_Data", NULL, NULL, offsetof(IEventRecord, fp_get_Data), false, uObject_typeof(), 0),
        new uFunction("get_Node", NULL, NULL, offsetof(IEventRecord, fp_get_Node), false, ::g::Fuse::Node_typeof(), 0),
        new uFunction("get_Sender", NULL, NULL, offsetof(IEventRecord, fp_get_Sender), false, ::g::Uno::UX::Selector_typeof(), 0));
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/1.4.0/IExpression.uno
// -----------------------------------------------------------------

// public abstract interface IExpression :38
// {
uInterfaceType* IExpression_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Reactive.IExpression", 0, 0);
    type->Reflection.SetFunctions(1,
        new uFunction("Subscribe", NULL, NULL, offsetof(IExpression, fp_Subscribe), false, ::g::Uno::IDisposable_typeof(), 2, ::g::Fuse::Reactive::IContext_typeof(), ::g::Fuse::Reactive::IListener_typeof()));
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/1.4.0/IExpression.uno
// -----------------------------------------------------------------

// public abstract interface IListener :8
// {
uInterfaceType* IListener_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Reactive.IListener", 0, 0);
    type->Reflection.SetFunctions(1,
        new uFunction("OnNewData", NULL, NULL, offsetof(IListener, fp_OnNewData), false, uVoid_typeof(), 2, ::g::Fuse::Reactive::IExpression_typeof(), uObject_typeof()));
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Bindings/1.4.0/InstantiatorFunction.uno
// -----------------------------------------------------------------------------------

// public sealed class IndexFunction :156
// {
static void IndexFunction_build(uType* type)
{
    type->SetDependencies(
        ::g::Fuse::Reactive::InstantiatorFunction_typeof());
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::Expression_type, interface0));
    type->SetFields(2);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)IndexFunction__New1_fn, 0, true, type, 0));
}

::g::Fuse::Reactive::Expression_type* IndexFunction_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::Expression_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::InstantiatorFunction_typeof();
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(IndexFunction);
    options.TypeSize = sizeof(::g::Fuse::Reactive::Expression_type);
    type = (::g::Fuse::Reactive::Expression_type*)uClassType::New("Fuse.Reactive.IndexFunction", options);
    type->fp_build_ = IndexFunction_build;
    type->fp_ctor_ = (void*)IndexFunction__New1_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::InstantiatorFunction__Subscribe_fn;
    return type;
}

// public IndexFunction() :159
void IndexFunction__ctor_3_fn(IndexFunction* __this)
{
    __this->ctor_3();
}

// public IndexFunction New() :159
void IndexFunction__New1_fn(IndexFunction** __retval)
{
    *__retval = IndexFunction::New1();
}

// public IndexFunction() [instance] :159
void IndexFunction::ctor_3()
{
    ctor_2(::g::Fuse::Reactive::InstantiatorFunction::DataIndexName_);
}

// public IndexFunction New() [static] :159
IndexFunction* IndexFunction::New1()
{
    IndexFunction* obj1 = (IndexFunction*)uNew(IndexFunction_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.4.0/Operators.uno
// ---------------------------------------------------------------------------

// public abstract class InfixOperator :7
// {
static void InfixOperator_build(uType* type)
{
    ::STRINGS[6] = uString::Const("(");
    ::STRINGS[56] = uString::Const(" ");
    ::STRINGS[5] = uString::Const(")");
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(InfixOperator_type, interface0));
    type->SetFields(2);
    type->Reflection.SetFunctions(1,
        new uFunction("get_Symbol", NULL, NULL, offsetof(InfixOperator_type, fp_get_Symbol), false, ::g::Uno::String_typeof(), 0));
}

InfixOperator_type* InfixOperator_typeof()
{
    static uSStrong<InfixOperator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::BinaryOperator_typeof();
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(InfixOperator);
    options.TypeSize = sizeof(InfixOperator_type);
    type = (InfixOperator_type*)uClassType::New("Fuse.Reactive.InfixOperator", options);
    type->fp_build_ = InfixOperator_build;
    type->fp_ToString = (void(*)(uObject*, uString**))InfixOperator__ToString_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::BinaryOperator__Subscribe_fn;
    return type;
}

// protected InfixOperator(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) :9
void InfixOperator__ctor_2_fn(InfixOperator* __this, ::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right)
{
    __this->ctor_2(left, right);
}

// public override sealed string ToString() :13
void InfixOperator__ToString_fn(InfixOperator* __this, uString** __retval)
{
    uStackFrame __("Fuse.Reactive.InfixOperator", "ToString()");
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[6/*"("*/], __this->Left()), ::STRINGS[56/*" "*/]), __this->Symbol()), ::STRINGS[56/*" "*/]), __this->Right()), ::STRINGS[5/*")"*/]), void();
}

// protected InfixOperator(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) [instance] :9
void InfixOperator::ctor_2(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right)
{
    ctor_1(left, right);
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.4.0/Subscription.uno
// ------------------------------------------------------------------------------

// public abstract class InnerListener :14
// {
static void InnerListener_build(uType* type)
{
    type->SetDependencies(
        ::g::Fuse::Diagnostics_typeof());
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(InnerListener_type, interface0),
        ::g::Fuse::Reactive::IListener_typeof(), offsetof(InnerListener_type, interface1));
    type->SetFields(0,
        ::g::Uno::IDisposable_typeof(), offsetof(InnerListener, _diag), 0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Fuse::Reactive::IExpression_typeof(), InnerListener__ObservableSubscription_typeof(), NULL), offsetof(InnerListener, _obsSubs), 0);
    type->Reflection.SetFunctions(3,
        new uFunction("ClearDiagnostic", NULL, (void*)InnerListener__ClearDiagnostic_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("Dispose", NULL, NULL, offsetof(InnerListener_type, fp_Dispose), false, uVoid_typeof(), 0),
        new uFunction("SetDiagnostic", NULL, (void*)InnerListener__SetDiagnostic_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::String_typeof(), ::g::Fuse::Reactive::IExpression_typeof()));
}

InnerListener_type* InnerListener_typeof()
{
    static uSStrong<InnerListener_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.InterfaceCount = 2;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(InnerListener);
    options.TypeSize = sizeof(InnerListener_type);
    type = (InnerListener_type*)uClassType::New("Fuse.Reactive.InnerListener", options);
    type->fp_build_ = InnerListener_build;
    type->fp_Dispose = InnerListener__Dispose_fn;
    type->interface1.fp_OnNewData = (void(*)(uObject*, uObject*, uObject*))InnerListener__FuseReactiveIListenerOnNewData_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))InnerListener__Dispose_fn;
    return type;
}

// protected generated InnerListener() :14
void InnerListener__ctor__fn(InnerListener* __this)
{
    __this->ctor_();
}

// public void ClearDiagnostic() :26
void InnerListener__ClearDiagnostic_fn(InnerListener* __this)
{
    __this->ClearDiagnostic();
}

// public virtual void Dispose() :35
void InnerListener__Dispose_fn(InnerListener* __this)
{
    uStackFrame __("Fuse.Reactive.InnerListener", "Dispose()");
    ::g::Uno::Collections::Dictionary__ValueCollection__Enumerator<uStrong<InnerListener__ObservableSubscription*> > ret2;
    __this->ClearDiagnostic();

    if (__this->_obsSubs != NULL)
    {
        ::g::Uno::Collections::Dictionary__ValueCollection__Enumerator<uStrong<InnerListener__ObservableSubscription*> > enum1 = (::g::Uno::Collections::Dictionary__ValueCollection__GetEnumerator_fn(uPtr((::g::Uno::Collections::Dictionary__ValueCollection*)uPtr(__this->_obsSubs)->Values()), &ret2), ret2);

        try
        {
            {
                while (enum1.MoveNext(::g::Uno::Collections::Dictionary__ValueCollection__Enumerator_typeof()->MakeType(::TYPES[35/*Fuse.Reactive.IExpression*/], InnerListener__ObservableSubscription_typeof(), NULL)))
                {
                    InnerListener__ObservableSubscription* k = enum1.Current(::g::Uno::Collections::Dictionary__ValueCollection__Enumerator_typeof()->MakeType(::TYPES[35/*Fuse.Reactive.IExpression*/], InnerListener__ObservableSubscription_typeof(), NULL));
                    uPtr(k)->Dispose();
                }
            }
            {
                enum1.Dispose(::g::Uno::Collections::Dictionary__ValueCollection__Enumerator_typeof()->MakeType(::TYPES[35/*Fuse.Reactive.IExpression*/], InnerListener__ObservableSubscription_typeof(), NULL));
            }
        }

        catch (const uThrowable& __t)
        {
            {
                enum1.Dispose(::g::Uno::Collections::Dictionary__ValueCollection__Enumerator_typeof()->MakeType(::TYPES[35/*Fuse.Reactive.IExpression*/], InnerListener__ObservableSubscription_typeof(), NULL));
            }
                        throw __t;
        }

        uPtr(__this->_obsSubs)->Clear();
        __this->_obsSubs = NULL;
    }
}

// private void Fuse.Reactive.IListener.OnNewData(Fuse.Reactive.IExpression source, object value) :49
void InnerListener__FuseReactiveIListenerOnNewData_fn(InnerListener* __this, uObject* source, uObject* value)
{
    uStackFrame __("Fuse.Reactive.InnerListener", "Fuse.Reactive.IListener.OnNewData(Fuse.Reactive.IExpression,object)");
    bool ret3;
    bool ret4;
    InnerListener__ObservableSubscription* obsSub = NULL;

    if ((__this->_obsSubs != NULL) && (::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(__this->_obsSubs), source, (void**)(&obsSub), &ret3), ret3))
    {
        uPtr(obsSub)->Dispose();
        ::g::Uno::Collections::Dictionary__Remove_fn(uPtr(__this->_obsSubs), source, &ret4);
    }

    uObject* obs = uAs<uObject*>(value, ::TYPES[43/*Fuse.Reactive.IObservable*/]);

    if (obs != NULL)
    {
        if (__this->_obsSubs == NULL)
            __this->_obsSubs = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::g::Uno::Collections::Dictionary_typeof()->MakeType(::TYPES[35/*Fuse.Reactive.IExpression*/], InnerListener__ObservableSubscription_typeof(), NULL)));

        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(__this->_obsSubs), source, InnerListener__ObservableSubscription::New1(source, obs, __this));
    }
    else
        __this->OnNewData(source, value);
}

// public void SetDiagnostic(string message, Fuse.Reactive.IExpression source) :20
void InnerListener__SetDiagnostic_fn(InnerListener* __this, uString* message, uObject* source)
{
    __this->SetDiagnostic(message, source);
}

// protected generated InnerListener() [instance] :14
void InnerListener::ctor_()
{
}

// public void ClearDiagnostic() [instance] :26
void InnerListener::ClearDiagnostic()
{
    uStackFrame __("Fuse.Reactive.InnerListener", "ClearDiagnostic()");

    if (_diag != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_diag), ::TYPES[2/*Uno.IDisposable*/]));
        _diag = NULL;
    }
}

// public void SetDiagnostic(string message, Fuse.Reactive.IExpression source) [instance] :20
void InnerListener::SetDiagnostic(uString* message, uObject* source)
{
    uStackFrame __("Fuse.Reactive.InnerListener", "SetDiagnostic(string,Fuse.Reactive.IExpression)");
    ClearDiagnostic();
    _diag = ::g::Fuse::Diagnostics::ReportTemporalUserWarning(message, source);
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Bindings/1.4.0/Instance.uno
// -----------------------------------------------------------------------

// public sealed class Instance :169
// {
static void Instance_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Reactive::Instantiator_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Reactive::Instantiator_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Reactive::Instantiator_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Reactive::Instantiator_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Reactive::Instantiator_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Reactive::Instantiator_type, interface5),
        ::g::Fuse::Reactive::IObserver_typeof(), offsetof(::g::Fuse::Reactive::Instantiator_type, interface6),
        ::g::Fuse::Node__ISubtreeDataProvider_typeof(), offsetof(::g::Fuse::Reactive::Instantiator_type, interface7),
        ::g::Fuse::IDeferred_typeof(), offsetof(::g::Fuse::Reactive::Instantiator_type, interface8));
    type->SetFields(44);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Instance__New4_fn, 0, true, type, 0));
}

::g::Fuse::Reactive::Instantiator_type* Instance_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::Instantiator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::Instantiator_typeof();
    options.FieldCount = 44;
    options.InterfaceCount = 9;
    options.ObjectSize = sizeof(Instance);
    options.TypeSize = sizeof(::g::Fuse::Reactive::Instantiator_type);
    type = (::g::Fuse::Reactive::Instantiator_type*)uClassType::New("Fuse.Reactive.Instance", options);
    type->fp_build_ = Instance_build;
    type->fp_ctor_ = (void*)Instance__New4_fn;
    type->interface7.fp_GetData = (void(*)(uObject*, ::g::Fuse::Node*, uObject**))::g::Fuse::Reactive::Instantiator__FuseNodeISubtreeDataProviderGetData_fn;
    type->interface6.fp_OnSet = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::Instantiator__FuseReactiveIObserverOnSet_fn;
    type->interface6.fp_OnFailed = (void(*)(uObject*, uString*))::g::Fuse::Reactive::Instantiator__FuseReactiveIObserverOnFailed_fn;
    type->interface6.fp_OnAdd = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::Instantiator__FuseReactiveIObserverOnAdd_fn;
    type->interface6.fp_OnRemoveAt = (void(*)(uObject*, int*))::g::Fuse::Reactive::Instantiator__FuseReactiveIObserverOnRemoveAt_fn;
    type->interface6.fp_OnInsertAt = (void(*)(uObject*, int*, uObject*))::g::Fuse::Reactive::Instantiator__FuseReactiveIObserverOnInsertAt_fn;
    type->interface6.fp_OnNewAt = (void(*)(uObject*, int*, uObject*))::g::Fuse::Reactive::Instantiator__FuseReactiveIObserverOnNewAt_fn;
    type->interface6.fp_OnNewAll = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::Instantiator__FuseReactiveIObserverOnNewAll_fn;
    type->interface6.fp_OnClear = (void(*)(uObject*))::g::Fuse::Reactive::Instantiator__FuseReactiveIObserverOnClear_fn;
    type->interface8.fp_Perform = (void(*)(uObject*, bool*))::g::Fuse::Reactive::Instantiator__FuseIDeferredPerform_fn;
    type->interface4.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface4.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface5.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface4.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface4.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public Instance() :171
void Instance__ctor_5_fn(Instance* __this)
{
    __this->ctor_5();
}

// public Instance New() :171
void Instance__New4_fn(Instance** __retval)
{
    *__retval = Instance::New4();
}

// public Instance() [instance] :171
void Instance::ctor_5()
{
    uStackFrame __("Fuse.Reactive.Instance", ".ctor()");
    ctor_3();
    Count(1);
}

// public Instance New() [static] :171
Instance* Instance::New4()
{
    Instance* obj1 = (Instance*)uNew(Instance_typeof());
    obj1->ctor_5();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Bindings/1.4.0/Instance.API.uno
// ---------------------------------------------------------------------------

// public enum InstanceDefer :14
uEnumType* InstanceDefer_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Reactive.InstanceDefer", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Immediate", 0LL,
        "Frame", 1LL,
        "Deferred", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Reactive.Bindings/1.4.0/Instance.API.uno
// ---------------------------------------------------------------------------

// public enum InstanceIdentity :42
uEnumType* InstanceIdentity_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Reactive.InstanceIdentity", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "None", 0LL,
        "Key", 1LL,
        "Object", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Reactive.Bindings/1.4.0/Instance.API.uno
// ---------------------------------------------------------------------------

// public enum InstanceReuse :29
uEnumType* InstanceReuse_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Reactive.InstanceReuse", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "None", 0LL,
        "Frame", 1LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Reactive.Bindings/1.4.0/Instance.API.uno
// ---------------------------------------------------------------------------

// public partial class Instantiator :53
// {
static void Instantiator_build(uType* type)
{
    type->SetDependencies(
        ::g::Fuse::DeferredManager_typeof(),
        ::g::Fuse::Diagnostics_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(Instantiator_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(Instantiator_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(Instantiator_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(Instantiator_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(Instantiator_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(Instantiator_type, interface5),
        ::g::Fuse::Reactive::IObserver_typeof(), offsetof(Instantiator_type, interface6),
        ::g::Fuse::Node__ISubtreeDataProvider_typeof(), offsetof(Instantiator_type, interface7),
        ::g::Fuse::IDeferred_typeof(), offsetof(Instantiator_type, interface8));
    type->SetFields(16,
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL), offsetof(Instantiator, _templates), 0,
        ::g::Uno::Collections::RootableList_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL), offsetof(Instantiator, _rootTemplates), 0,
        ::g::Fuse::Reactive::InstanceDefer_typeof(), offsetof(Instantiator, _defer), 0,
        ::g::Fuse::Reactive::InstanceReuse_typeof(), offsetof(Instantiator, _reuse), 0,
        ::g::Fuse::Reactive::InstanceIdentity_typeof(), offsetof(Instantiator, _identity), 0,
        ::g::Uno::String_typeof(), offsetof(Instantiator, _identityKey), 0,
        ::g::Uno::Float_typeof(), offsetof(Instantiator, _deferredPriority), 0,
        ::g::Fuse::ITemplateSource_typeof(), offsetof(Instantiator, _weakTemplateSource), uFieldFlagsWeak,
        ::g::Fuse::ITemplateSource_typeof(), offsetof(Instantiator, _templateSource), 0,
        ::g::Uno::Int_typeof(), offsetof(Instantiator, _offset), 0,
        ::g::Uno::Int_typeof(), offsetof(Instantiator, _limit), 0,
        ::g::Uno::Bool_typeof(), offsetof(Instantiator, _hasLimit), 0,
        uObject_typeof(), offsetof(Instantiator, _items), 0,
        ::g::Uno::Int_typeof(), offsetof(Instantiator, _count), 0,
        ::g::Uno::String_typeof(), offsetof(Instantiator, _matchKey), 0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Fuse::Node_typeof(), Instantiator__WindowItem_typeof(), NULL), offsetof(Instantiator, _dataMap), 0,
        ::g::Uno::IDisposable_typeof(), offsetof(Instantiator, _itemsSubscription), 0,
        ::g::Uno::Bool_typeof(), offsetof(Instantiator, _isListeningItems), 0,
        ::g::Fuse::Triggers::BusyTask_typeof(), offsetof(Instantiator, _busyTask), 0,
        ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(Instantiator, _completedRemove), 0,
        ::g::Uno::Bool_typeof(), offsetof(Instantiator, _pendingNew), 0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(uObject_typeof(), Instantiator__WindowItem_typeof(), NULL), offsetof(Instantiator, _availableItemsById), 0,
        ::g::Fuse::Internal::ObjectList_typeof()->MakeType(Instantiator__WindowItem_typeof(), NULL), offsetof(Instantiator, _availableItems), 0,
        ::g::Uno::Bool_typeof(), offsetof(Instantiator, _pendingAvailableItems), 0,
        ::g::Fuse::Internal::ObjectList_typeof()->MakeType(Instantiator__WindowItem_typeof(), NULL), offsetof(Instantiator, _windowItems), 0,
        ::g::Uno::Bool_typeof(), offsetof(Instantiator, _pendingUpdateWindowItems), 0,
        ::g::Uno::String_typeof(), offsetof(Instantiator, _TemplateKey), 0,
        ::g::Uno::Action_typeof(), offsetof(Instantiator, UpdatedWindowItems1), 0);
    type->Reflection.SetFunctions(17,
        new uFunction("get_Defer", NULL, (void*)Instantiator__get_Defer_fn, 0, false, ::g::Fuse::Reactive::InstanceDefer_typeof(), 0),
        new uFunction("set_Defer", NULL, (void*)Instantiator__set_Defer_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Reactive::InstanceDefer_typeof()),
        new uFunction("get_DeferredPriority", NULL, (void*)Instantiator__get_DeferredPriority_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_DeferredPriority", NULL, (void*)Instantiator__set_DeferredPriority_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_Identity", NULL, (void*)Instantiator__get_Identity_fn, 0, false, ::g::Fuse::Reactive::InstanceIdentity_typeof(), 0),
        new uFunction("set_Identity", NULL, (void*)Instantiator__set_Identity_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Reactive::InstanceIdentity_typeof()),
        new uFunction("get_IdentityKey", NULL, (void*)Instantiator__get_IdentityKey_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_IdentityKey", NULL, (void*)Instantiator__set_IdentityKey_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("get_MatchKey", NULL, (void*)Instantiator__get_MatchKey_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_MatchKey", NULL, (void*)Instantiator__set_MatchKey_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("get_Reuse", NULL, (void*)Instantiator__get_Reuse_fn, 0, false, ::g::Fuse::Reactive::InstanceReuse_typeof(), 0),
        new uFunction("set_Reuse", NULL, (void*)Instantiator__set_Reuse_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Reactive::InstanceReuse_typeof()),
        new uFunction("get_TemplateKey", NULL, (void*)Instantiator__get_TemplateKey_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_TemplateKey", NULL, (void*)Instantiator__set_TemplateKey_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("get_Templates", NULL, (void*)Instantiator__get_Templates_fn, 0, false, ::g::Uno::Collections::IList_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL), 0),
        new uFunction("get_TemplateSource", NULL, (void*)Instantiator__get_TemplateSource_fn, 0, false, ::g::Fuse::ITemplateSource_typeof(), 0),
        new uFunction("set_TemplateSource", NULL, (void*)Instantiator__set_TemplateSource_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::ITemplateSource_typeof()));
}

Instantiator_type* Instantiator_typeof()
{
    static uSStrong<Instantiator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Behavior_typeof();
    options.FieldCount = 44;
    options.InterfaceCount = 9;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(Instantiator);
    options.TypeSize = sizeof(Instantiator_type);
    type = (Instantiator_type*)uClassType::New("Fuse.Reactive.Instantiator", options);
    type->fp_build_ = Instantiator_build;
    type->fp_ctor_ = (void*)Instantiator__New2_fn;
    type->fp_GetLastNodeInGroup = (void(*)(::g::Fuse::Node*, ::g::Fuse::Node**))Instantiator__GetLastNodeInGroup_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))Instantiator__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))Instantiator__OnUnrooted_fn;
    type->interface7.fp_GetData = (void(*)(uObject*, ::g::Fuse::Node*, uObject**))Instantiator__FuseNodeISubtreeDataProviderGetData_fn;
    type->interface6.fp_OnSet = (void(*)(uObject*, uObject*))Instantiator__FuseReactiveIObserverOnSet_fn;
    type->interface6.fp_OnFailed = (void(*)(uObject*, uString*))Instantiator__FuseReactiveIObserverOnFailed_fn;
    type->interface6.fp_OnAdd = (void(*)(uObject*, uObject*))Instantiator__FuseReactiveIObserverOnAdd_fn;
    type->interface6.fp_OnRemoveAt = (void(*)(uObject*, int*))Instantiator__FuseReactiveIObserverOnRemoveAt_fn;
    type->interface6.fp_OnInsertAt = (void(*)(uObject*, int*, uObject*))Instantiator__FuseReactiveIObserverOnInsertAt_fn;
    type->interface6.fp_OnNewAt = (void(*)(uObject*, int*, uObject*))Instantiator__FuseReactiveIObserverOnNewAt_fn;
    type->interface6.fp_OnNewAll = (void(*)(uObject*, uObject*))Instantiator__FuseReactiveIObserverOnNewAll_fn;
    type->interface6.fp_OnClear = (void(*)(uObject*))Instantiator__FuseReactiveIObserverOnClear_fn;
    type->interface8.fp_Perform = (void(*)(uObject*, bool*))Instantiator__FuseIDeferredPerform_fn;
    type->interface4.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface4.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface5.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface4.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface4.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// protected internal Instantiator() :74
void Instantiator__ctor_3_fn(Instantiator* __this)
{
    __this->ctor_3();
}

// protected internal Instantiator(Uno.Collections.IList<Uno.UX.Template> templates) :68
void Instantiator__ctor_4_fn(Instantiator* __this, uObject* templates)
{
    __this->ctor_4(templates);
}

// private bool AddMatchingTemplates(Fuse.Reactive.Instantiator.WindowItem item, Fuse.Reactive.Instantiator.TemplateMatch f) :224
void Instantiator__AddMatchingTemplates_fn(Instantiator* __this, Instantiator__WindowItem* item, Instantiator__TemplateMatch* f, bool* __retval)
{
    *__retval = __this->AddMatchingTemplates(item, *f);
}

// private void AddTemplate(Fuse.Reactive.Instantiator.WindowItem item, Uno.UX.Template f) :258
void Instantiator__AddTemplate_fn(Instantiator* __this, Instantiator__WindowItem* item, ::g::Uno::UX::Template* f)
{
    __this->AddTemplate(item, f);
}

// private void Append() :426
void Instantiator__Append_fn(Instantiator* __this)
{
    __this->Append();
}

// private int CalcOffsetLimitCountOf(int length) :127
void Instantiator__CalcOffsetLimitCountOf_fn(Instantiator* __this, int* length, int* __retval)
{
    *__retval = __this->CalcOffsetLimitCountOf(*length);
}

// private void CompleteActionGood() :10
void Instantiator__CompleteActionGood_fn(Instantiator* __this)
{
    __this->CompleteActionGood();
}

// private void CompletedRemove(Fuse.Node n) :155
void Instantiator__CompletedRemove_fn(Instantiator* __this, ::g::Fuse::Node* n)
{
    __this->CompletedRemove(n);
}

// private void CompleteNodeAction() :321
void Instantiator__CompleteNodeAction_fn(Instantiator* __this)
{
    __this->CompleteNodeAction();
}

// private void CompleteWindowItem(Fuse.Reactive.Instantiator.WindowItem wi, int windowIndex) :166
void Instantiator__CompleteWindowItem_fn(Instantiator* __this, Instantiator__WindowItem* wi, int* windowIndex)
{
    __this->CompleteWindowItem(wi, *windowIndex);
}

// private bool CompleteWindowItems(bool one) :87
void Instantiator__CompleteWindowItems_fn(Instantiator* __this, bool* one, bool* __retval)
{
    *__retval = __this->CompleteWindowItems(*one);
}

// private void CompleteWindowItemsAction() :81
void Instantiator__CompleteWindowItemsAction_fn(Instantiator* __this)
{
    __this->CompleteWindowItemsAction();
}

// protected internal int get_Count() :323
void Instantiator__get_Count_fn(Instantiator* __this, int* __retval)
{
    *__retval = __this->Count();
}

// protected internal void set_Count(int value) :324
void Instantiator__set_Count_fn(Instantiator* __this, int* value)
{
    __this->Count(*value);
}

// internal int get_DataCount() :54
void Instantiator__get_DataCount_fn(Instantiator* __this, int* __retval)
{
    *__retval = __this->DataCount();
}

// internal int DataIndexOfChild(Fuse.Node child) :14
void Instantiator__DataIndexOfChild_fn(Instantiator* __this, ::g::Fuse::Node* child, int* __retval)
{
    *__retval = __this->DataIndexOfChild(child);
}

// private int DataToWindowIndex(int dataIndex) :403
void Instantiator__DataToWindowIndex_fn(Instantiator* __this, int* dataIndex, int* __retval)
{
    *__retval = __this->DataToWindowIndex(*dataIndex);
}

// public Fuse.Reactive.InstanceDefer get_Defer() :85
void Instantiator__get_Defer_fn(Instantiator* __this, int* __retval)
{
    *__retval = __this->Defer();
}

// public void set_Defer(Fuse.Reactive.InstanceDefer value) :86
void Instantiator__set_Defer_fn(Instantiator* __this, int* value)
{
    __this->Defer(*value);
}

// public float get_DeferredPriority() :156
void Instantiator__get_DeferredPriority_fn(Instantiator* __this, float* __retval)
{
    *__retval = __this->DeferredPriority();
}

// public void set_DeferredPriority(float value) :157
void Instantiator__set_DeferredPriority_fn(Instantiator* __this, float* value)
{
    __this->DeferredPriority(*value);
}

// private void DisposeItemsSubscription() :95
void Instantiator__DisposeItemsSubscription_fn(Instantiator* __this)
{
    __this->DisposeItemsSubscription();
}

// private bool Fuse.IDeferred.Perform() :75
void Instantiator__FuseIDeferredPerform_fn(Instantiator* __this, bool* __retval)
{
    uStackFrame __("Fuse.Reactive.Instantiator", "Fuse.IDeferred.Perform()");
    __this->_pendingNew = __this->CompleteWindowItems(true);
    return *__retval = !__this->_pendingNew, void();
}

// private object Fuse.Node.ISubtreeDataProvider.GetData(Fuse.Node n) :56
void Instantiator__FuseNodeISubtreeDataProviderGetData_fn(Instantiator* __this, ::g::Fuse::Node* n, uObject** __retval)
{
    uStackFrame __("Fuse.Reactive.Instantiator", "Fuse.Node.ISubtreeDataProvider.GetData(Fuse.Node)");
    bool ret12;
    Instantiator__WindowItem* v;

    if ((::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(__this->_dataMap), n, (void**)(&v), &ret12), ret12))
    {
        if (uIs((uObject*)uPtr(v)->Data, Instantiator__CountItem_typeof()))
            return *__retval = NULL, void();

        return *__retval = uPtr(v)->CurrentData(), void();
    }

    return *__retval = NULL, void();
}

// private void Fuse.Reactive.IObserver.OnAdd(object addedValue) :35
void Instantiator__FuseReactiveIObserverOnAdd_fn(Instantiator* __this, uObject* addedValue)
{
    uStackFrame __("Fuse.Reactive.Instantiator", "Fuse.Reactive.IObserver.OnAdd(object)");

    if (!__this->IsListeningItems())
        return;

    __this->CompleteActionGood();
}

// private void Fuse.Reactive.IObserver.OnClear() :117
void Instantiator__FuseReactiveIObserverOnClear_fn(Instantiator* __this)
{
    uStackFrame __("Fuse.Reactive.Instantiator", "Fuse.Reactive.IObserver.OnClear()");

    if (!__this->IsListeningItems())
        return;

    __this->RemoveAll();
    __this->CompleteActionGood();
}

// private void Fuse.Reactive.IObserver.OnFailed(string message) :25
void Instantiator__FuseReactiveIObserverOnFailed_fn(Instantiator* __this, uString* message)
{
    uStackFrame __("Fuse.Reactive.Instantiator", "Fuse.Reactive.IObserver.OnFailed(string)");

    if (!__this->IsListeningItems())
        return;

    __this->RemoveAll();
    __this->SetFailed(message);
    __this->CompleteNodeAction();
}

// private void Fuse.Reactive.IObserver.OnInsertAt(int index, object value) :50
void Instantiator__FuseReactiveIObserverOnInsertAt_fn(Instantiator* __this, int* index, uObject* value)
{
    uStackFrame __("Fuse.Reactive.Instantiator", "Fuse.Reactive.IObserver.OnInsertAt(int,object)");
    int index_ = *index;

    if (!__this->IsListeningItems())
        return;

    __this->InsertNew(index_);
    __this->CompleteActionGood();
}

// private void Fuse.Reactive.IObserver.OnNewAll(Fuse.IArray values) :106
void Instantiator__FuseReactiveIObserverOnNewAll_fn(Instantiator* __this, uObject* values)
{
    uStackFrame __("Fuse.Reactive.Instantiator", "Fuse.Reactive.IObserver.OnNewAll(Fuse.IArray)");

    if (!__this->IsListeningItems())
        return;

    if (__this->Identity() != 0)
        __this->PatchTo(values);
    else
        __this->RemoveAll();

    __this->CompleteActionGood();
}

// private void Fuse.Reactive.IObserver.OnNewAt(int index, object value) :58
void Instantiator__FuseReactiveIObserverOnNewAt_fn(Instantiator* __this, int* index, uObject* value)
{
    uStackFrame __("Fuse.Reactive.Instantiator", "Fuse.Reactive.IObserver.OnNewAt(int,object)");
    int index_ = *index;

    if (!__this->IsListeningItems())
        return;

    if (!__this->TryUpdateAt(index_, value))
    {
        __this->RemoveAt(index_);
        __this->InsertNew(index_);
    }

    __this->CompleteActionGood();
}

// private void Fuse.Reactive.IObserver.OnRemoveAt(int index) :42
void Instantiator__FuseReactiveIObserverOnRemoveAt_fn(Instantiator* __this, int* index)
{
    uStackFrame __("Fuse.Reactive.Instantiator", "Fuse.Reactive.IObserver.OnRemoveAt(int)");
    int index_ = *index;

    if (!__this->IsListeningItems())
        return;

    __this->RemoveAt(index_);
    __this->CompleteActionGood();
}

// private void Fuse.Reactive.IObserver.OnSet(object newValue) :17
void Instantiator__FuseReactiveIObserverOnSet_fn(Instantiator* __this, uObject* newValue)
{
    uStackFrame __("Fuse.Reactive.Instantiator", "Fuse.Reactive.IObserver.OnSet(object)");

    if (!__this->IsListeningItems())
        return;

    __this->RemoveAll();
    __this->CompleteActionGood();
}

// private Fuse.Reactive.Instantiator.WindowItem GetAvailableNodes(Fuse.Reactive.Instantiator.TemplateMatch f, object id) :283
void Instantiator__GetAvailableNodes_fn(Instantiator* __this, Instantiator__TemplateMatch* f, uObject* id, Instantiator__WindowItem** __retval)
{
    *__retval = __this->GetAvailableNodes(*f, id);
}

// private object GetData(int dataIndex) :32
void Instantiator__GetData_fn(Instantiator* __this, int* dataIndex, uObject** __retval)
{
    *__retval = __this->GetData(*dataIndex);
}

// private int GetDataCount() :43
void Instantiator__GetDataCount_fn(Instantiator* __this, int* __retval)
{
    *__retval = __this->GetDataCount();
}

// private object GetDataId(object data) :113
void Instantiator__GetDataId_fn(Instantiator* __this, uObject* data, uObject** __retval)
{
    *__retval = __this->GetDataId(data);
}

// private object GetDataKey(object data, string key) :96
void Instantiator__GetDataKey_fn(Instantiator* __this, uObject* data, uString* key, uObject** __retval)
{
    *__retval = __this->GetDataKey(data, key);
}

// private Fuse.Reactive.Instantiator.TemplateMatch GetDataTemplate(object data) :127
void Instantiator__GetDataTemplate_fn(Instantiator* __this, uObject* data, Instantiator__TemplateMatch* __retval)
{
    *__retval = __this->GetDataTemplate(data);
}

// protected object GetItems() :301
void Instantiator__GetItems_fn(Instantiator* __this, uObject** __retval)
{
    *__retval = __this->GetItems();
}

// private Fuse.Node GetLastNodeFromIndex(int windowIndex) :13
void Instantiator__GetLastNodeFromIndex_fn(Instantiator* __this, int* windowIndex, ::g::Fuse::Node** __retval)
{
    *__retval = __this->GetLastNodeFromIndex(*windowIndex);
}

// internal override sealed Fuse.Node GetLastNodeInGroup() :161
void Instantiator__GetLastNodeInGroup_fn(Instantiator* __this, ::g::Fuse::Node** __retval)
{
    uStackFrame __("Fuse.Reactive.Instantiator", "GetLastNodeInGroup()");
    return *__retval = __this->GetLastNodeFromIndex(uPtr(__this->_windowItems)->Count() - 1), void();
}

// internal bool get_HasLimit() :297
void Instantiator__get_HasLimit_fn(Instantiator* __this, bool* __retval)
{
    *__retval = __this->HasLimit();
}

// public Fuse.Reactive.InstanceIdentity get_Identity() :121
void Instantiator__get_Identity_fn(Instantiator* __this, int* __retval)
{
    *__retval = __this->Identity();
}

// public void set_Identity(Fuse.Reactive.InstanceIdentity value) :122
void Instantiator__set_Identity_fn(Instantiator* __this, int* value)
{
    __this->Identity(*value);
}

// public string get_IdentityKey() :140
void Instantiator__get_IdentityKey_fn(Instantiator* __this, uString** __retval)
{
    *__retval = __this->IdentityKey();
}

// public void set_IdentityKey(string value) :141
void Instantiator__set_IdentityKey_fn(Instantiator* __this, uString* value)
{
    __this->IdentityKey(value);
}

// private void InsertNew(int dataIndex) :37
void Instantiator__InsertNew_fn(Instantiator* __this, int* dataIndex)
{
    __this->InsertNew(*dataIndex);
}

// private void InsertNewWindowItem(int windowIndex, object data) :54
void Instantiator__InsertNewWindowItem_fn(Instantiator* __this, int* windowIndex, uObject* data)
{
    __this->InsertNewWindowItem(*windowIndex, data);
}

// private bool get_IsListeningItems() :106
void Instantiator__get_IsListeningItems_fn(Instantiator* __this, bool* __retval)
{
    *__retval = __this->IsListeningItems();
}

// internal int get_Limit() :278
void Instantiator__get_Limit_fn(Instantiator* __this, int* __retval)
{
    *__retval = __this->Limit();
}

// internal void set_Limit(int value) :279
void Instantiator__set_Limit_fn(Instantiator* __this, int* value)
{
    __this->Limit(*value);
}

// public string get_MatchKey() :379
void Instantiator__get_MatchKey_fn(Instantiator* __this, uString** __retval)
{
    *__retval = __this->MatchKey();
}

// public void set_MatchKey(string value) :380
void Instantiator__set_MatchKey_fn(Instantiator* __this, uString* value)
{
    __this->MatchKey(value);
}

// protected internal Instantiator New() :74
void Instantiator__New2_fn(Instantiator** __retval)
{
    *__retval = Instantiator::New2();
}

// protected internal Instantiator New(Uno.Collections.IList<Uno.UX.Template> templates) :68
void Instantiator__New3_fn(uObject* templates, Instantiator** __retval)
{
    *__retval = Instantiator::New3(templates);
}

// internal int get_Offset() :230
void Instantiator__get_Offset_fn(Instantiator* __this, int* __retval)
{
    *__retval = __this->Offset();
}

// internal void set_Offset(int value) :231
void Instantiator__set_Offset_fn(Instantiator* __this, int* value)
{
    __this->Offset(*value);
}

// protected override sealed void OnRooted() :84
void Instantiator__OnRooted_fn(Instantiator* __this)
{
    uStackFrame __("Fuse.Reactive.Instantiator", "OnRooted()");
    ::g::Fuse::Node__OnRooted_fn(__this);
    __this->RefreshItems();

    if (__this->_rootTemplates != NULL)
        uPtr(__this->_rootTemplates)->Subscribe(uDelegate::New(::TYPES[8/*Uno.Action<Uno.UX.Template>*/], (void*)Instantiator__OnTemplatesChanged_fn, __this), uDelegate::New(::TYPES[8/*Uno.Action<Uno.UX.Template>*/], (void*)Instantiator__OnTemplatesChanged_fn, __this));

    __this->_templateSource = __this->_weakTemplateSource;
}

// private void OnTemplatesChanged(Uno.UX.Template factory) :78
void Instantiator__OnTemplatesChanged_fn(Instantiator* __this, ::g::Uno::UX::Template* factory)
{
    __this->OnTemplatesChanged(factory);
}

// protected override sealed void OnUnrooted() :112
void Instantiator__OnUnrooted_fn(Instantiator* __this)
{
    uStackFrame __("Fuse.Reactive.Instantiator", "OnUnrooted()");
    __this->DisposeItemsSubscription();
    __this->RemoveAll();
    __this->RemovePendingAvailableItems();

    if (__this->_rootTemplates != NULL)
        uPtr(__this->_rootTemplates)->Unsubscribe();

    __this->_templateSource = NULL;
    __this->_completedRemove = NULL;
    ::g::Fuse::Node__OnUnrooted_fn(__this);
}

// private void OnUpdatedWindowItems() :515
void Instantiator__OnUpdatedWindowItems_fn(Instantiator* __this)
{
    __this->OnUpdatedWindowItems();
}

// private void PatchTo(Fuse.IArray values) :71
void Instantiator__PatchTo_fn(Instantiator* __this, uObject* values)
{
    __this->PatchTo(values);
}

// private void PostUpdatedWindowItems() :525
void Instantiator__PostUpdatedWindowItems_fn(Instantiator* __this)
{
    __this->PostUpdatedWindowItems();
}

// private void RefreshItems() :337
void Instantiator__RefreshItems_fn(Instantiator* __this)
{
    __this->RefreshItems();
}

// private void RemoveAll() :432
void Instantiator__RemoveAll_fn(Instantiator* __this)
{
    __this->RemoveAll();
}

// private void RemoveAt(int dataIndex) :408
void Instantiator__RemoveAt_fn(Instantiator* __this, int* dataIndex)
{
    __this->RemoveAt(*dataIndex);
}

// private void RemoveFromParent(Fuse.Node n) :148
void Instantiator__RemoveFromParent_fn(Instantiator* __this, ::g::Fuse::Node* n)
{
    __this->RemoveFromParent(n);
}

// private void RemoveLastActive() :421
void Instantiator__RemoveLastActive_fn(Instantiator* __this)
{
    __this->RemoveLastActive();
}

// private void RemovePendingAvailableItems() :346
void Instantiator__RemovePendingAvailableItems_fn(Instantiator* __this)
{
    __this->RemovePendingAvailableItems();
}

// private void RemovePendingAvailableItemsAction() :338
void Instantiator__RemovePendingAvailableItemsAction_fn(Instantiator* __this)
{
    __this->RemovePendingAvailableItemsAction();
}

// private void RemoveWindowItem(Fuse.Reactive.Instantiator.WindowItem wi) :378
void Instantiator__RemoveWindowItem_fn(Instantiator* __this, Instantiator__WindowItem* wi)
{
    __this->RemoveWindowItem(wi);
}

// private void Repopulate() :445
void Instantiator__Repopulate_fn(Instantiator* __this)
{
    __this->Repopulate();
}

// public Fuse.Reactive.InstanceReuse get_Reuse() :105
void Instantiator__get_Reuse_fn(Instantiator* __this, int* __retval)
{
    *__retval = __this->Reuse();
}

// public void set_Reuse(Fuse.Reactive.InstanceReuse value) :106
void Instantiator__set_Reuse_fn(Instantiator* __this, int* value)
{
    __this->Reuse(*value);
}

// private void SetFailed(string message) :140
void Instantiator__SetFailed_fn(Instantiator* __this, uString* message)
{
    __this->SetFailed(message);
}

// protected void SetItems(object value) :303
void Instantiator__SetItems_fn(Instantiator* __this, uObject* value)
{
    __this->SetItems(value);
}

// private void SetValid() :134
void Instantiator__SetValid_fn(Instantiator* __this)
{
    __this->SetValid();
}

// private void StartListeningItems() :107
void Instantiator__StartListeningItems_fn(Instantiator* __this)
{
    __this->StartListeningItems();
}

// public generated string get_TemplateKey() :224
void Instantiator__get_TemplateKey_fn(Instantiator* __this, uString** __retval)
{
    *__retval = __this->TemplateKey();
}

// public generated void set_TemplateKey(string value) :224
void Instantiator__set_TemplateKey_fn(Instantiator* __this, uString* value)
{
    __this->TemplateKey(value);
}

// public Uno.Collections.IList<Uno.UX.Template> get_Templates() :65
void Instantiator__get_Templates_fn(Instantiator* __this, uObject** __retval)
{
    *__retval = __this->Templates();
}

// public Fuse.ITemplateSource get_TemplateSource() :199
void Instantiator__get_TemplateSource_fn(Instantiator* __this, uObject** __retval)
{
    *__retval = __this->TemplateSource();
}

// public void set_TemplateSource(Fuse.ITemplateSource value) :200
void Instantiator__set_TemplateSource_fn(Instantiator* __this, uObject* value)
{
    __this->TemplateSource(value);
}

// private void TrimAndPad() :538
void Instantiator__TrimAndPad_fn(Instantiator* __this)
{
    __this->TrimAndPad();
}

// private bool TryUpdateAt(int dataIndex, object newData) :195
void Instantiator__TryUpdateAt_fn(Instantiator* __this, int* dataIndex, uObject* newData, bool* __retval)
{
    *__retval = __this->TryUpdateAt(*dataIndex, newData);
}

// private void UpdateData(Fuse.Reactive.Instantiator.WindowItem item, object oldData) :72
void Instantiator__UpdateData_fn(Instantiator* __this, Instantiator__WindowItem* item, uObject* oldData)
{
    __this->UpdateData(item, oldData);
}

// internal generated void add_UpdatedWindowItems(Uno.Action value) :513
void Instantiator__add_UpdatedWindowItems_fn(Instantiator* __this, uDelegate* value)
{
    __this->add_UpdatedWindowItems(value);
}

// internal generated void remove_UpdatedWindowItems(Uno.Action value) :513
void Instantiator__remove_UpdatedWindowItems_fn(Instantiator* __this, uDelegate* value)
{
    __this->remove_UpdatedWindowItems(value);
}

// protected internal Instantiator() [instance] :74
void Instantiator::ctor_3()
{
    uStackFrame __("Fuse.Reactive.Instantiator", ".ctor()");
    _defer = 1;
    _deferredPriority = 0.0f;
    _dataMap = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::g::Uno::Collections::Dictionary_typeof()->MakeType(::TYPES[39/*Fuse.Node*/], Instantiator__WindowItem_typeof(), NULL)));
    _availableItemsById = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::g::Uno::Collections::Dictionary_typeof()->MakeType(uObject_typeof(), Instantiator__WindowItem_typeof(), NULL)));
    _availableItems = ((::g::Fuse::Internal::ObjectList*)::g::Fuse::Internal::ObjectList::New1(::g::Fuse::Internal::ObjectList_typeof()->MakeType(Instantiator__WindowItem_typeof(), NULL), 0));
    _windowItems = ((::g::Fuse::Internal::ObjectList*)::g::Fuse::Internal::ObjectList::New1(::g::Fuse::Internal::ObjectList_typeof()->MakeType(Instantiator__WindowItem_typeof(), NULL), 0));
    ctor_2();
}

// protected internal Instantiator(Uno.Collections.IList<Uno.UX.Template> templates) [instance] :68
void Instantiator::ctor_4(uObject* templates)
{
    uStackFrame __("Fuse.Reactive.Instantiator", ".ctor(Uno.Collections.IList<Uno.UX.Template>)");
    _defer = 1;
    _deferredPriority = 0.0f;
    _dataMap = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::g::Uno::Collections::Dictionary_typeof()->MakeType(::TYPES[39/*Fuse.Node*/], Instantiator__WindowItem_typeof(), NULL)));
    _availableItemsById = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::g::Uno::Collections::Dictionary_typeof()->MakeType(uObject_typeof(), Instantiator__WindowItem_typeof(), NULL)));
    _availableItems = ((::g::Fuse::Internal::ObjectList*)::g::Fuse::Internal::ObjectList::New1(::g::Fuse::Internal::ObjectList_typeof()->MakeType(Instantiator__WindowItem_typeof(), NULL), 0));
    _windowItems = ((::g::Fuse::Internal::ObjectList*)::g::Fuse::Internal::ObjectList::New1(::g::Fuse::Internal::ObjectList_typeof()->MakeType(Instantiator__WindowItem_typeof(), NULL), 0));
    ctor_2();
    _templates = templates;
}

// private bool AddMatchingTemplates(Fuse.Reactive.Instantiator.WindowItem item, Fuse.Reactive.Instantiator.TemplateMatch f) [instance] :224
bool Instantiator::AddMatchingTemplates(Instantiator__WindowItem* item, Instantiator__TemplateMatch f)
{
    uStackFrame __("Fuse.Reactive.Instantiator", "AddMatchingTemplates(Fuse.Reactive.Instantiator.WindowItem,Fuse.Reactive.Instantiator.TemplateMatch)");
    ::g::Uno::UX::Template* ret7;
    bool reuse = false;
    uObject* oldData = NULL;
    Instantiator__WindowItem* av = GetAvailableNodes(f, uPtr(item)->Id);

    if (av != NULL)
    {
        uPtr(item)->Nodes = uPtr(av)->Nodes;
        oldData = av->CurrentData();
        av->Nodes = NULL;
        reuse = true;
    }
    else if (f.All)
    {
        uPtr(item)->Nodes = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[46/*Uno.Collections.List<Fuse.Node>*/]));

        for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL))); ++i)
            AddTemplate(item, (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(Templates()), ::g::Uno::Collections::IList_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), uCRef<int>(i), &ret7), ret7));
    }
    else if (f.Template == NULL)
        uPtr(item)->Nodes = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[46/*Uno.Collections.List<Fuse.Node>*/]));
    else
    {
        uPtr(item)->Nodes = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[46/*Uno.Collections.List<Fuse.Node>*/]));
        AddTemplate(item, f.Template);
    }

    UpdateData(item, oldData);
    item->Template = f;
    return reuse;
}

// private void AddTemplate(Fuse.Reactive.Instantiator.WindowItem item, Uno.UX.Template f) [instance] :258
void Instantiator::AddTemplate(Instantiator__WindowItem* item, ::g::Uno::UX::Template* f)
{
    uStackFrame __("Fuse.Reactive.Instantiator", "AddTemplate(Fuse.Reactive.Instantiator.WindowItem,Uno.UX.Template)");
    ::g::Fuse::Node* elm = uAs< ::g::Fuse::Node*>(uPtr(f)->New1(), ::TYPES[39/*Fuse.Node*/]);

    if (elm == NULL)
    {
        ::g::Fuse::Diagnostics::InternalError(uString::Const("Template contains a non-Node"), this, uString::Const("/usr/local/share/uno/Packages/Fuse.Reactive.Bindings/1.4.0/Instance.WindowItems.uno"), 263, uString::Const("AddTemplate"));
        return;
    }

    ::g::Uno::Collections::List__Add_fn(uPtr(uPtr(item)->Nodes), elm);
}

// private void Append() [instance] :426
void Instantiator::Append()
{
    uStackFrame __("Fuse.Reactive.Instantiator", "Append()");
    InsertNew(Offset() + uPtr(_windowItems)->Count());
}

// private int CalcOffsetLimitCountOf(int length) [instance] :127
int Instantiator::CalcOffsetLimitCountOf(int length)
{
    int q = ::g::Uno::Math::Max8(0, length - Offset());
    return HasLimit() ? ::g::Uno::Math::Min8(Limit(), q) : q;
}

// private void CompleteActionGood() [instance] :10
void Instantiator::CompleteActionGood()
{
    uStackFrame __("Fuse.Reactive.Instantiator", "CompleteActionGood()");
    TrimAndPad();
    SetValid();
    CompleteNodeAction();
}

// private void CompletedRemove(Fuse.Node n) [instance] :155
void Instantiator::CompletedRemove(::g::Fuse::Node* n)
{
    uStackFrame __("Fuse.Reactive.Instantiator", "CompletedRemove(Fuse.Node)");
    bool ret8;
    uPtr(n)->OverrideContextParent = NULL;
    ::g::Uno::Collections::Dictionary__Remove_fn(uPtr(_dataMap), n, &ret8);
}

// private void CompleteNodeAction() [instance] :321
void Instantiator::CompleteNodeAction()
{
    uStackFrame __("Fuse.Reactive.Instantiator", "CompleteNodeAction()");

    if (Reuse() == 1)
    {
        if (!_pendingAvailableItems)
        {
            ::g::Fuse::UpdateManager::AddDeferredAction2(uDelegate::New(::TYPES[34/*Uno.Action*/], (void*)Instantiator__RemovePendingAvailableItemsAction_fn, this), -1, 2);
            _pendingAvailableItems = true;
        }
    }
    else if (!_pendingNew)
        RemovePendingAvailableItems();
}

// private void CompleteWindowItem(Fuse.Reactive.Instantiator.WindowItem wi, int windowIndex) [instance] :166
void Instantiator::CompleteWindowItem(Instantiator__WindowItem* wi, int windowIndex)
{
    uStackFrame __("Fuse.Reactive.Instantiator", "CompleteWindowItem(Fuse.Reactive.Instantiator.WindowItem,int)");
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Node*> > ret9;
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Node*> > ret10;
    uPtr(wi)->Id = GetDataId(uPtr(wi)->Data);
    Instantiator__TemplateMatch match = GetDataTemplate(wi->Data);
    bool reuse = AddMatchingTemplates(wi, match);

    if ((wi->Template.All && (::g::Uno::Collections::ICollection::Count(uInterface(uPtr(Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL))) != uPtr(wi->Nodes)->Count())) || ((wi->Template.Template != NULL) && (uPtr(wi->Nodes)->Count() != 1)))
        ::g::Fuse::Diagnostics::InternalError(uString::Const("inconsistent instance state"), this, uString::Const("/usr/local/share/uno/Packages/Fuse.Reactive.Bindings/1.4.0/Instance.WindowItems.uno"), 176, uString::Const("CompleteWindowItem"));

    ::g::Fuse::Node* lastNode = GetLastNodeFromIndex(windowIndex - 1);

    if (reuse)
        uPtr(Parent())->InsertOrMoveNodesAfter(lastNode, uBox(::TYPES[52/*Uno.Collections.List<Fuse.Node>.Enumerator*/], (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(uPtr(wi)->Nodes), &ret9), ret9)));
    else
        uPtr(Parent())->InsertNodesAfter(lastNode, uBox(::TYPES[52/*Uno.Collections.List<Fuse.Node>.Enumerator*/], (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(uPtr(wi)->Nodes), &ret10), ret10)));
}

// private bool CompleteWindowItems(bool one) [instance] :87
bool Instantiator::CompleteWindowItems(bool one)
{
    uStackFrame __("Fuse.Reactive.Instantiator", "CompleteWindowItems(bool)");

    if (!IsRootingStarted())
        return false;

    bool first = true;

    for (int i = 0; i < uPtr(_windowItems)->Count(); ++i)
    {
        Instantiator__WindowItem* wi = (Instantiator__WindowItem*)uPtr(_windowItems)->Item(i);

        if (uPtr(wi)->Nodes == NULL)
        {
            if (!first && one)
                return true;

            CompleteWindowItem(wi, i);
            first = false;
        }
    }

    RemovePendingAvailableItems();
    return false;
}

// private void CompleteWindowItemsAction() [instance] :81
void Instantiator::CompleteWindowItemsAction()
{
    uStackFrame __("Fuse.Reactive.Instantiator", "CompleteWindowItemsAction()");
    CompleteWindowItems(false);
    _pendingNew = false;
}

// protected internal int get_Count() [instance] :323
int Instantiator::Count()
{
    return _count;
}

// protected internal void set_Count(int value) [instance] :324
void Instantiator::Count(int value)
{
    uStackFrame __("Fuse.Reactive.Instantiator", "set_Count(int)");

    if (_count == value)
        return;

    _count = value;
    uArray* items = uArray::New(::TYPES[3/*object[]*/], _count);

    for (int i = 0; i < _count; ++i)
        uPtr(items)->Strong<uObject*>(i) = Instantiator__CountItem::New1();

    SetItems(items);
}

// internal int get_DataCount() [instance] :54
int Instantiator::DataCount()
{
    uStackFrame __("Fuse.Reactive.Instantiator", "get_DataCount()");
    return GetDataCount();
}

// internal int DataIndexOfChild(Fuse.Node child) [instance] :14
int Instantiator::DataIndexOfChild(::g::Fuse::Node* child)
{
    uStackFrame __("Fuse.Reactive.Instantiator", "DataIndexOfChild(Fuse.Node)");
    ::g::Fuse::Node* ret11;

    for (int i = 0; i < uPtr(_windowItems)->Count(); i++)
    {
        Instantiator__WindowItem* wi = (Instantiator__WindowItem*)uPtr(_windowItems)->Item(i);
        ::g::Uno::Collections::List* list = uPtr(wi)->Nodes;

        if (list == NULL)
            continue;

        for (int n = 0; n < uPtr(list)->Count(); n++)
            if ((::g::Uno::Collections::List__get_Item_fn(uPtr(list), uCRef<int>(n), &ret11), ret11) == child)
                return i + Offset();
    }

    return -1;
}

// private int DataToWindowIndex(int dataIndex) [instance] :403
int Instantiator::DataToWindowIndex(int dataIndex)
{
    return dataIndex - Offset();
}

// public Fuse.Reactive.InstanceDefer get_Defer() [instance] :85
int Instantiator::Defer()
{
    return _defer;
}

// public void set_Defer(Fuse.Reactive.InstanceDefer value) [instance] :86
void Instantiator::Defer(int value)
{
    _defer = value;
}

// public float get_DeferredPriority() [instance] :156
float Instantiator::DeferredPriority()
{
    return _deferredPriority;
}

// public void set_DeferredPriority(float value) [instance] :157
void Instantiator::DeferredPriority(float value)
{
    _deferredPriority = value;
}

// private void DisposeItemsSubscription() [instance] :95
void Instantiator::DisposeItemsSubscription()
{
    uStackFrame __("Fuse.Reactive.Instantiator", "DisposeItemsSubscription()");
    _isListeningItems = false;

    if (_itemsSubscription != NULL)
    {
        _isListeningItems = false;
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_itemsSubscription), ::TYPES[2/*Uno.IDisposable*/]));
        _itemsSubscription = NULL;
    }
}

// private Fuse.Reactive.Instantiator.WindowItem GetAvailableNodes(Fuse.Reactive.Instantiator.TemplateMatch f, object id) [instance] :283
Instantiator__WindowItem* Instantiator::GetAvailableNodes(Instantiator__TemplateMatch f, uObject* id)
{
    uStackFrame __("Fuse.Reactive.Instantiator", "GetAvailableNodes(Fuse.Reactive.Instantiator.TemplateMatch,object)");
    bool ret13;
    bool ret14;

    if ((id != NULL) && (_availableItemsById != NULL))
    {
        Instantiator__WindowItem* item;

        if ((::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(_availableItemsById), id, (void**)(&item), &ret13), ret13) && f.Matches(uPtr(item)->Template))
        {
            ::g::Uno::Collections::Dictionary__Remove_fn(uPtr(_availableItemsById), id, &ret14);
            return item;
        }
    }

    if ((Reuse() != 0) && (_availableItems != NULL))

        for (int i = 0; i < uPtr(_availableItems)->Count(); ++i)
        {
            Instantiator__WindowItem* av = (Instantiator__WindowItem*)uPtr(_availableItems)->Item(i);

            if (f.Matches(uPtr(av)->Template))
            {
                uPtr(_availableItems)->RemoveAt(i);
                return av;
            }
        }

    return NULL;
}

// private object GetData(int dataIndex) [instance] :32
uObject* Instantiator::GetData(int dataIndex)
{
    uStackFrame __("Fuse.Reactive.Instantiator", "GetData(int)");
    uArray* e = uAs<uArray*>(_items, ::TYPES[3/*object[]*/]);

    if (e != NULL)
        return uPtr(e)->Strong<uObject*>(dataIndex);

    uObject* a = uAs<uObject*>(_items, ::TYPES[25/*Fuse.IArray*/]);

    if (a != NULL)
        return ::g::Fuse::IArray::Item(uInterface(uPtr(a), ::TYPES[25/*Fuse.IArray*/]), dataIndex);

    return NULL;
}

// private int GetDataCount() [instance] :43
int Instantiator::GetDataCount()
{
    uStackFrame __("Fuse.Reactive.Instantiator", "GetDataCount()");
    uArray* e = uAs<uArray*>(_items, ::TYPES[3/*object[]*/]);

    if (e != NULL)
        return uPtr(e)->Length();

    uObject* a = uAs<uObject*>(_items, ::TYPES[25/*Fuse.IArray*/]);

    if (a != NULL)
        return ::g::Fuse::IArray::Length(uInterface(uPtr(a), ::TYPES[25/*Fuse.IArray*/]));

    return 0;
}

// private object GetDataId(object data) [instance] :113
uObject* Instantiator::GetDataId(uObject* data)
{
    uStackFrame __("Fuse.Reactive.Instantiator", "GetDataId(object)");

    switch (Identity())
    {
        case 0:
            return NULL;
        case 1:
            return GetDataKey(data, IdentityKey());
        case 2:
            return data;
    }

    return NULL;
}

// private object GetDataKey(object data, string key) [instance] :96
uObject* Instantiator::GetDataKey(uObject* data, uString* key)
{
    uStackFrame __("Fuse.Reactive.Instantiator", "GetDataKey(object,string)");
    uObject* so = uAs<uObject*>(data, ::TYPES[45/*Fuse.IObject*/]);

    if ((so != NULL) && ::g::Uno::String::op_Inequality(key, NULL))
    {
        if (::g::Fuse::IObject::ContainsKey(uInterface(uPtr(so), ::TYPES[45/*Fuse.IObject*/]), key))
            return ::g::Fuse::IObject::Item(uInterface(uPtr(so), ::TYPES[45/*Fuse.IObject*/]), key);
    }

    return NULL;
}

// private Fuse.Reactive.Instantiator.TemplateMatch GetDataTemplate(object data) [instance] :127
Instantiator__TemplateMatch Instantiator::GetDataTemplate(uObject* data)
{
    uStackFrame __("Fuse.Reactive.Instantiator", "GetDataTemplate(object)");
    Instantiator__TemplateMatch collection2;
    Instantiator__TemplateMatch collection3;
    ::g::Uno::UX::Template* ret15;
    ::g::Uno::UX::Template* useTemplate = NULL;
    ::g::Uno::UX::Template* defaultTemplate = NULL;

    if ((_templateSource != NULL) && ::g::Uno::String::op_Inequality(TemplateKey(), NULL))
    {
        ::g::Uno::UX::Template* t = ::g::Fuse::ITemplateSource::FindTemplate(uInterface(uPtr(_templateSource), ::g::Fuse::ITemplateSource_typeof()), TemplateKey());

        if (t != NULL)
            useTemplate = t;
    }

    if (useTemplate == NULL)
    {
        uString* key = uAs<uString*>(GetDataKey(data, MatchKey()), ::TYPES[12/*string*/]);

        for (int i = ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL))) - 1; i >= 0; --i)
        {
            ::g::Uno::UX::Template* f = (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(Templates()), ::g::Uno::Collections::IList_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), uCRef<int>(i), &ret15), ret15);

            if (uPtr(f)->IsDefault())
                defaultTemplate = f;

            if (::g::Uno::String::op_Inequality(key, NULL) && ::g::Uno::String::op_Equality(uPtr(f)->Key(), key))
                useTemplate = f;
        }
    }

    if (useTemplate == NULL)
    {
        if (::g::Uno::String::op_Inequality(MatchKey(), NULL) || (defaultTemplate != NULL))
            useTemplate = defaultTemplate;
        else
            return (collection2 = uDefault<Instantiator__TemplateMatch>(), collection2.All = true, collection2.Template = NULL, collection2);
    }

    collection3 = uDefault<Instantiator__TemplateMatch>();
    collection3.All = false;
    collection3.Template = useTemplate;
    return collection3;
}

// protected object GetItems() [instance] :301
uObject* Instantiator::GetItems()
{
    return _items;
}

// private Fuse.Node GetLastNodeFromIndex(int windowIndex) [instance] :13
::g::Fuse::Node* Instantiator::GetLastNodeFromIndex(int windowIndex)
{
    uStackFrame __("Fuse.Reactive.Instantiator", "GetLastNodeFromIndex(int)");
    ::g::Fuse::Node* ret16;

    if (windowIndex >= uPtr(_windowItems)->Count())
        windowIndex = uPtr(_windowItems)->Count() - 1;

    while (windowIndex >= 0)
    {
        ::g::Uno::Collections::List* lastList = uPtr((Instantiator__WindowItem*)uPtr(_windowItems)->Item(windowIndex))->Nodes;

        if ((lastList != NULL) && (uPtr(lastList)->Count() != 0))
            return uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(lastList), uCRef<int>(uPtr(lastList)->Count() - 1), &ret16), ret16))->GetLastNodeInGroup();

        windowIndex--;
    }

    return this;
}

// internal bool get_HasLimit() [instance] :297
bool Instantiator::HasLimit()
{
    return _hasLimit;
}

// public Fuse.Reactive.InstanceIdentity get_Identity() [instance] :121
int Instantiator::Identity()
{
    return _identity;
}

// public void set_Identity(Fuse.Reactive.InstanceIdentity value) [instance] :122
void Instantiator::Identity(int value)
{
    _identity = value;
}

// public string get_IdentityKey() [instance] :140
uString* Instantiator::IdentityKey()
{
    return _identityKey;
}

// public void set_IdentityKey(string value) [instance] :141
void Instantiator::IdentityKey(uString* value)
{
    _identityKey = value;
    Identity(1);
}

// private void InsertNew(int dataIndex) [instance] :37
void Instantiator::InsertNew(int dataIndex)
{
    uStackFrame __("Fuse.Reactive.Instantiator", "InsertNew(int)");

    if ((dataIndex < Offset()) || (HasLimit() && ((dataIndex - Offset()) >= Limit())))
        return;

    int windowIndex = DataToWindowIndex(dataIndex);

    if ((windowIndex > uPtr(_windowItems)->Count()) || (windowIndex < 0))
        return;

    uObject* data = GetData(dataIndex);
    InsertNewWindowItem(windowIndex, data);
}

// private void InsertNewWindowItem(int windowIndex, object data) [instance] :54
void Instantiator::InsertNewWindowItem(int windowIndex, uObject* data)
{
    uStackFrame __("Fuse.Reactive.Instantiator", "InsertNewWindowItem(int,object)");
    Instantiator__WindowItem* collection1;
    collection1 = Instantiator__WindowItem::New1();
    uPtr(collection1)->Data = data;
    Instantiator__WindowItem* wi = collection1;
    uPtr(_windowItems)->Insert(windowIndex, wi);

    if (Defer() == 0)
        CompleteWindowItem(wi, windowIndex);
    else if (!_pendingNew)
    {
        if (Defer() == 2)
            ::g::Fuse::DeferredManager::AddPending((uObject*)this, ::g::Uno::Float2__New2(DeferredPriority(), (float)NodeDepth()));
        else
            ::g::Fuse::UpdateManager::AddDeferredAction2(uDelegate::New(::TYPES[34/*Uno.Action*/], (void*)Instantiator__CompleteWindowItemsAction_fn, this), -1, 2);

        _pendingNew = true;
    }

    OnUpdatedWindowItems();
}

// private bool get_IsListeningItems() [instance] :106
bool Instantiator::IsListeningItems()
{
    return _isListeningItems;
}

// internal int get_Limit() [instance] :278
int Instantiator::Limit()
{
    return _limit;
}

// internal void set_Limit(int value) [instance] :279
void Instantiator::Limit(int value)
{
    uStackFrame __("Fuse.Reactive.Instantiator", "set_Limit(int)");

    if (_hasLimit && (_limit == value))
        return;

    if (value < 0)
    {
        ::g::Fuse::Diagnostics::UserError(uString::Const("Limit cannot be less than 0"), this, uString::Const("/usr/local/share/uno/Packages/Fuse.Reactive.Bindings/1.4.0/Instance.API.uno"), 286, uString::Const("set_Limit"), NULL);
        value = 0;
    }

    _hasLimit = true;
    _limit = value;

    if (IsRootingCompleted())
        TrimAndPad();
}

// public string get_MatchKey() [instance] :379
uString* Instantiator::MatchKey()
{
    return _matchKey;
}

// public void set_MatchKey(string value) [instance] :380
void Instantiator::MatchKey(uString* value)
{
    uStackFrame __("Fuse.Reactive.Instantiator", "set_MatchKey(string)");

    if (::g::Uno::String::op_Inequality(_matchKey, value))
    {
        _matchKey = value;

        if (IsRootingCompleted())
            RefreshItems();
    }
}

// internal int get_Offset() [instance] :230
int Instantiator::Offset()
{
    return _offset;
}

// internal void set_Offset(int value) [instance] :231
void Instantiator::Offset(int value)
{
    uStackFrame __("Fuse.Reactive.Instantiator", "set_Offset(int)");

    if (_offset == value)
        return;

    if (value < 0)
    {
        ::g::Fuse::Diagnostics::UserError(uString::Const("Offset cannot be less than 0"), this, uString::Const("/usr/local/share/uno/Packages/Fuse.Reactive.Bindings/1.4.0/Instance.API.uno"), 238, uString::Const("set_Offset"), NULL);
        value = 0;
    }

    if (!IsRootingCompleted())
    {
        _offset = value;
        return;
    }

    int dataCount = GetDataCount();

    while (_offset < value)
    {
        if (_offset < dataCount)
            RemoveAt(_offset);

        _offset++;
        int end = (_offset + Limit()) - 1;

        if (HasLimit() && (end < dataCount))
            InsertNew(end);
    }

    while (_offset > value)
    {
        int end1 = (_offset + Limit()) - 1;

        if (HasLimit() && (end1 < dataCount))
            RemoveAt((_offset + Limit()) - 1);

        _offset--;

        if (_offset < dataCount)
            InsertNew(_offset);
    }
}

// private void OnTemplatesChanged(Uno.UX.Template factory) [instance] :78
void Instantiator::OnTemplatesChanged(::g::Uno::UX::Template* factory)
{
    uStackFrame __("Fuse.Reactive.Instantiator", "OnTemplatesChanged(Uno.UX.Template)");

    if (!IsRootingCompleted())
        return;

    Repopulate();
}

// private void OnUpdatedWindowItems() [instance] :515
void Instantiator::OnUpdatedWindowItems()
{
    uStackFrame __("Fuse.Reactive.Instantiator", "OnUpdatedWindowItems()");

    if (::g::Uno::Delegate::op_Equality(UpdatedWindowItems1, NULL) || _pendingUpdateWindowItems)
        return;

    _pendingUpdateWindowItems = true;
    ::g::Fuse::UpdateManager::AddDeferredAction2(uDelegate::New(::TYPES[34/*Uno.Action*/], (void*)Instantiator__PostUpdatedWindowItems_fn, this), -1, 2);
}

// private void PatchTo(Fuse.IArray values) [instance] :71
void Instantiator::PatchTo(uObject* values)
{
    uStackFrame __("Fuse.Reactive.Instantiator", "PatchTo(Fuse.IArray)");
    ::g::Uno::Collections::List* ret17;
    ::g::Fuse::Reactive::Internal::PatchItem ret18;
    ::g::Uno::Collections::List* newIds = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[55/*Uno.Collections.List`1*/]->MakeType(uObject_typeof(), NULL));
    int limit = CalcOffsetLimitCountOf(::g::Fuse::IArray::Length(uInterface(uPtr(values), ::TYPES[25/*Fuse.IArray*/])));

    for (int i = 0; i < limit; ++i)
        ::g::Uno::Collections::List__Add_fn(uPtr(newIds), GetDataId(::g::Fuse::IArray::Item(uInterface(uPtr(values), ::TYPES[25/*Fuse.IArray*/]), i + Offset())));

    ::g::Uno::Collections::List* curIds = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[55/*Uno.Collections.List`1*/]->MakeType(uObject_typeof(), NULL));

    for (int i1 = 0; i1 < uPtr(_windowItems)->Count(); ++i1)
        ::g::Uno::Collections::List__Add_fn(uPtr(curIds), uPtr((Instantiator__WindowItem*)uPtr(_windowItems)->Item(i1))->Id);

    ::g::Uno::Collections::List* ops = (::g::Fuse::Reactive::Internal::PatchList__Patch_fn(::g::Fuse::Reactive::Internal::PatchList_typeof()->MakeMethod(0/*Patch<object>*/, uObject_typeof(), NULL), (uObject*)curIds, (uObject*)newIds, uCRef<int>(1), NULL, &ret17), ret17);

    for (int i2 = 0; i2 < uPtr(ops)->Count(); ++i2)
    {
        ::g::Fuse::Reactive::Internal::PatchItem op = (::g::Uno::Collections::List__get_Item_fn(uPtr(ops), uCRef<int>(i2), &ret18), ret18);

        switch (op.Op)
        {
            case 0:
            {
                RemoveAt(op.A + Offset());
                break;
            }
            case 1:
            {
                InsertNewWindowItem(DataToWindowIndex(op.A + Offset()), ::g::Fuse::IArray::Item(uInterface(uPtr(values), ::TYPES[25/*Fuse.IArray*/]), op.Data));
                break;
            }
            case 2:
            {
                if (!TryUpdateAt(op.A + Offset(), ::g::Fuse::IArray::Item(uInterface(uPtr(values), ::TYPES[25/*Fuse.IArray*/]), op.Data)))
                {
                    RemoveAt(op.A + Offset());
                    InsertNewWindowItem(DataToWindowIndex(op.A + Offset()), ::g::Fuse::IArray::Item(uInterface(uPtr(values), ::TYPES[25/*Fuse.IArray*/]), op.Data));
                }

                break;
            }
        }
    }
}

// private void PostUpdatedWindowItems() [instance] :525
void Instantiator::PostUpdatedWindowItems()
{
    uStackFrame __("Fuse.Reactive.Instantiator", "PostUpdatedWindowItems()");

    if (::g::Uno::Delegate::op_Inequality(UpdatedWindowItems1, NULL))
        uPtr(UpdatedWindowItems1)->InvokeVoid();

    _pendingUpdateWindowItems = false;
}

// private void RefreshItems() [instance] :337
void Instantiator::RefreshItems()
{
    uStackFrame __("Fuse.Reactive.Instantiator", "RefreshItems()");
    DisposeItemsSubscription();
    Repopulate();
    uObject* obs = uAs<uObject*>(_items, ::TYPES[27/*Fuse.Reactive.IObservableArray*/]);

    if (obs != NULL)
    {
        StartListeningItems();
        _itemsSubscription = ::g::Fuse::Reactive::IObservableArray::Subscribe(uInterface(uPtr(obs), ::TYPES[27/*Fuse.Reactive.IObservableArray*/]), (uObject*)this);
    }
}

// private void RemoveAll() [instance] :432
void Instantiator::RemoveAll()
{
    uStackFrame __("Fuse.Reactive.Instantiator", "RemoveAll()");

    if (uPtr(_windowItems)->Count() == 0)
        return;

    for (int i = 0; i < uPtr(_windowItems)->Count(); ++i)
    {
        Instantiator__WindowItem* wi = (Instantiator__WindowItem*)uPtr(_windowItems)->Item(i);
        RemoveWindowItem(wi);
    }

    uPtr(_windowItems)->Clear();
    OnUpdatedWindowItems();
}

// private void RemoveAt(int dataIndex) [instance] :408
void Instantiator::RemoveAt(int dataIndex)
{
    uStackFrame __("Fuse.Reactive.Instantiator", "RemoveAt(int)");
    int windowIndex = DataToWindowIndex(dataIndex);

    if ((windowIndex < 0) || (windowIndex >= uPtr(_windowItems)->Count()))
        return;

    RemoveWindowItem((Instantiator__WindowItem*)uPtr(_windowItems)->Item(windowIndex));
    uPtr(_windowItems)->RemoveAt(windowIndex);
    SetValid();
    OnUpdatedWindowItems();
}

// private void RemoveFromParent(Fuse.Node n) [instance] :148
void Instantiator::RemoveFromParent(::g::Fuse::Node* n)
{
    uStackFrame __("Fuse.Reactive.Instantiator", "RemoveFromParent(Fuse.Node)");

    if (::g::Uno::Delegate::op_Equality(_completedRemove, NULL))
        _completedRemove = uDelegate::New(::g::Uno::Action1_typeof()->MakeType(::TYPES[39/*Fuse.Node*/], NULL), (void*)Instantiator__CompletedRemove_fn, this);

    uPtr(Parent())->BeginRemoveChild(n, _completedRemove);
}

// private void RemoveLastActive() [instance] :421
void Instantiator::RemoveLastActive()
{
    uStackFrame __("Fuse.Reactive.Instantiator", "RemoveLastActive()");
    RemoveAt((Offset() + uPtr(_windowItems)->Count()) - 1);
}

// private void RemovePendingAvailableItems() [instance] :346
void Instantiator::RemovePendingAvailableItems()
{
    uStackFrame __("Fuse.Reactive.Instantiator", "RemovePendingAvailableItems()");
    ::g::Fuse::Node* ret19;
    ::g::Uno::Collections::Dictionary__Enumerator<uStrong<uObject*>, uStrong<Instantiator__WindowItem*> > ret20;
    ::g::Fuse::Node* ret21;

    if (_availableItems != NULL)
    {
        for (int i = 0; i < uPtr(_availableItems)->Count(); ++i)
        {
            Instantiator__WindowItem* av = (Instantiator__WindowItem*)uPtr(_availableItems)->Item(i);

            if (uPtr(av)->Nodes == NULL)
                continue;

            for (int n = 0; n < uPtr(uPtr(av)->Nodes)->Count(); ++n)
                RemoveFromParent((::g::Uno::Collections::List__get_Item_fn(uPtr(uPtr(av)->Nodes), uCRef<int>(n), &ret19), ret19));

            uPtr(av)->Unlink();
        }

        uPtr(_availableItems)->Clear();
    }

    if (_availableItemsById != NULL)
    {
        ::g::Uno::Collections::Dictionary__Enumerator<uStrong<uObject*>, uStrong<Instantiator__WindowItem*> > enum4 = (::g::Uno::Collections::Dictionary__GetEnumerator_fn(uPtr(_availableItemsById), &ret20), ret20);

        try
        {
            {
                while (enum4.MoveNext(::g::Uno::Collections::Dictionary__Enumerator_typeof()->MakeType(uObject_typeof(), Instantiator__WindowItem_typeof(), NULL)))
                {
                    ::g::Uno::Collections::KeyValuePair<uStrong<uObject*>, uStrong<Instantiator__WindowItem*> > kvp = enum4.Current(::g::Uno::Collections::Dictionary__Enumerator_typeof()->MakeType(uObject_typeof(), Instantiator__WindowItem_typeof(), NULL));

                    if (uPtr(kvp.Value(::g::Uno::Collections::KeyValuePair_typeof()->MakeType(uObject_typeof(), Instantiator__WindowItem_typeof(), NULL)))->Nodes == NULL)
                        continue;

                    for (int n1 = 0; n1 < uPtr(uPtr(kvp.Value(::g::Uno::Collections::KeyValuePair_typeof()->MakeType(uObject_typeof(), Instantiator__WindowItem_typeof(), NULL)))->Nodes)->Count(); ++n1)
                        RemoveFromParent((::g::Uno::Collections::List__get_Item_fn(uPtr(uPtr(kvp.Value(::g::Uno::Collections::KeyValuePair_typeof()->MakeType(uObject_typeof(), Instantiator__WindowItem_typeof(), NULL)))->Nodes), uCRef<int>(n1), &ret21), ret21));

                    uPtr(kvp.Value(::g::Uno::Collections::KeyValuePair_typeof()->MakeType(uObject_typeof(), Instantiator__WindowItem_typeof(), NULL)))->Unlink();
                }
            }
            {
                enum4.Dispose(::g::Uno::Collections::Dictionary__Enumerator_typeof()->MakeType(uObject_typeof(), Instantiator__WindowItem_typeof(), NULL));
            }
        }

        catch (const uThrowable& __t)
        {
            {
                enum4.Dispose(::g::Uno::Collections::Dictionary__Enumerator_typeof()->MakeType(uObject_typeof(), Instantiator__WindowItem_typeof(), NULL));
            }
                        throw __t;
        }

        uPtr(_availableItemsById)->Clear();
    }

    _pendingNew = false;
}

// private void RemovePendingAvailableItemsAction() [instance] :338
void Instantiator::RemovePendingAvailableItemsAction()
{
    uStackFrame __("Fuse.Reactive.Instantiator", "RemovePendingAvailableItemsAction()");

    if (!_pendingNew)
        RemovePendingAvailableItems();

    _pendingAvailableItems = false;
}

// private void RemoveWindowItem(Fuse.Reactive.Instantiator.WindowItem wi) [instance] :378
void Instantiator::RemoveWindowItem(Instantiator__WindowItem* wi)
{
    uStackFrame __("Fuse.Reactive.Instantiator", "RemoveWindowItem(Fuse.Reactive.Instantiator.WindowItem)");
    bool ret22;

    if ((uPtr(wi)->Nodes == NULL) || (uPtr(uPtr(wi)->Nodes)->Count() == 0))
        return;

    if (uPtr(wi)->Id != NULL)
    {
        if (_availableItemsById == NULL)
            _availableItemsById = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::g::Uno::Collections::Dictionary_typeof()->MakeType(uObject_typeof(), Instantiator__WindowItem_typeof(), NULL)));

        if ((::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(_availableItemsById), uPtr(wi)->Id, &ret22), ret22))
            uPtr(wi)->Id = NULL;
        else
            ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(_availableItemsById), uPtr(wi)->Id, wi);
    }

    if (uPtr(wi)->Id == NULL)
    {
        if (_availableItems == NULL)
            _availableItems = ((::g::Fuse::Internal::ObjectList*)::g::Fuse::Internal::ObjectList::New1(::g::Fuse::Internal::ObjectList_typeof()->MakeType(Instantiator__WindowItem_typeof(), NULL), 0));

        uPtr(_availableItems)->Add(wi);
    }
}

// private void Repopulate() [instance] :445
void Instantiator::Repopulate()
{
    uStackFrame __("Fuse.Reactive.Instantiator", "Repopulate()");
    RemoveAll();
    uArray* e = uAs<uArray*>(_items, ::TYPES[3/*object[]*/]);

    if (e != NULL)

        for (int i = 0; i < uPtr(e)->Length(); i++)
            InsertNew(i);
    else
    {
        uObject* a = uAs<uObject*>(_items, ::TYPES[25/*Fuse.IArray*/]);

        if (a != NULL)

            for (int i1 = 0; i1 < ::g::Fuse::IArray::Length(uInterface(uPtr(a), ::TYPES[25/*Fuse.IArray*/])); i1++)
                InsertNew(i1);
    }

    CompleteActionGood();
}

// public Fuse.Reactive.InstanceReuse get_Reuse() [instance] :105
int Instantiator::Reuse()
{
    return _reuse;
}

// public void set_Reuse(Fuse.Reactive.InstanceReuse value) [instance] :106
void Instantiator::Reuse(int value)
{
    _reuse = value;
}

// private void SetFailed(string message) [instance] :140
void Instantiator::SetFailed(uString* message)
{
    uStackFrame __("Fuse.Reactive.Instantiator", "SetFailed(string)");

    if (Parent() != NULL)
        ::g::Fuse::Triggers::BusyTask::SetBusy(Parent(), &_busyTask, 16, message);
}

// protected void SetItems(object value) [instance] :303
void Instantiator::SetItems(uObject* value)
{
    uStackFrame __("Fuse.Reactive.Instantiator", "SetItems(object)");
    _items = value;

    if (!IsRootingCompleted())
        return;

    RefreshItems();
}

// private void SetValid() [instance] :134
void Instantiator::SetValid()
{
    uStackFrame __("Fuse.Reactive.Instantiator", "SetValid()");

    if (Parent() != NULL)
        ::g::Fuse::Triggers::BusyTask::SetBusy(Parent(), &_busyTask, 0, ::STRINGS[21/*""*/]);
}

// private void StartListeningItems() [instance] :107
void Instantiator::StartListeningItems()
{
    _isListeningItems = true;
}

// public generated string get_TemplateKey() [instance] :224
uString* Instantiator::TemplateKey()
{
    return _TemplateKey;
}

// public generated void set_TemplateKey(string value) [instance] :224
void Instantiator::TemplateKey(uString* value)
{
    _TemplateKey = value;
}

// public Uno.Collections.IList<Uno.UX.Template> get_Templates() [instance] :65
uObject* Instantiator::Templates()
{
    uStackFrame __("Fuse.Reactive.Instantiator", "get_Templates()");

    if (_templates != NULL)
        return _templates;

    _rootTemplates = ((::g::Uno::Collections::RootableList*)::g::Uno::Collections::RootableList::New1(::TYPES[10/*Uno.Collections.RootableList<Uno.UX.Template>*/]));

    if (IsRootingCompleted())
        uPtr(_rootTemplates)->Subscribe(uDelegate::New(::TYPES[8/*Uno.Action<Uno.UX.Template>*/], (void*)Instantiator__OnTemplatesChanged_fn, this), uDelegate::New(::TYPES[8/*Uno.Action<Uno.UX.Template>*/], (void*)Instantiator__OnTemplatesChanged_fn, this));

    _templates = (uObject*)_rootTemplates;
    return _templates;
}

// public Fuse.ITemplateSource get_TemplateSource() [instance] :199
uObject* Instantiator::TemplateSource()
{
    return _weakTemplateSource;
}

// public void set_TemplateSource(Fuse.ITemplateSource value) [instance] :200
void Instantiator::TemplateSource(uObject* value)
{
    uStackFrame __("Fuse.Reactive.Instantiator", "set_TemplateSource(Fuse.ITemplateSource)");
    _weakTemplateSource = value;

    if (IsRootingCompleted())
    {
        _templateSource = _weakTemplateSource;
        Repopulate();
    }
}

// private void TrimAndPad() [instance] :538
void Instantiator::TrimAndPad()
{
    uStackFrame __("Fuse.Reactive.Instantiator", "TrimAndPad()");

    if (HasLimit())

        for (int i = uPtr(_windowItems)->Count() - _limit; i > 0; --i)
            RemoveLastActive();

    int dataCount = GetDataCount();
    int add = HasLimit() ? ::g::Uno::Math::Min8(_limit - uPtr(_windowItems)->Count(), dataCount - (Offset() + uPtr(_windowItems)->Count())) : dataCount - (Offset() + uPtr(_windowItems)->Count());

    for (int i1 = 0; i1 < add; ++i1)
        Append();
}

// private bool TryUpdateAt(int dataIndex, object newData) [instance] :195
bool Instantiator::TryUpdateAt(int dataIndex, uObject* newData)
{
    uStackFrame __("Fuse.Reactive.Instantiator", "TryUpdateAt(int,object)");

    if (Identity() == 0)
        return false;

    int windowIndex = DataToWindowIndex(dataIndex);

    if ((windowIndex < 0) || (windowIndex >= uPtr(_windowItems)->Count()))
        return false;

    Instantiator__WindowItem* wi = (Instantiator__WindowItem*)uPtr(_windowItems)->Item(windowIndex);
    uObject* newId = GetDataId(newData);

    if ((uPtr(wi)->Id == NULL) || !::g::Uno::Object::Equals1(uPtr(wi)->Id, newId))
        return false;

    Instantiator__TemplateMatch tpl = GetDataTemplate(newData);

    if (!uPtr(wi)->Template.Matches(tpl))
        return false;

    uObject* oldData = uPtr(wi)->CurrentData();
    wi->Data = newData;
    UpdateData(wi, oldData);
    return true;
}

// private void UpdateData(Fuse.Reactive.Instantiator.WindowItem item, object oldData) [instance] :72
void Instantiator::UpdateData(Instantiator__WindowItem* item, uObject* oldData)
{
    uStackFrame __("Fuse.Reactive.Instantiator", "UpdateData(Fuse.Reactive.Instantiator.WindowItem,object)");
    ::g::Fuse::Node* ret23;

    if (uPtr(item)->DataLink != NULL)
    {
        uPtr(uPtr(item)->DataLink)->Dispose();
        item->DataLink = NULL;
    }

    uObject* obs = uAs<uObject*>(uPtr(item)->Data, ::TYPES[43/*Fuse.Reactive.IObservable*/]);

    if (obs != NULL)
        uPtr(item)->DataLink = Instantiator__ObservableLink::New1(obs, item);

    uObject* nextData = item->CurrentData();

    for (int i = 0; i < uPtr(item->Nodes)->Count(); ++i)
    {
        ::g::Fuse::Node* n = (::g::Uno::Collections::List__get_Item_fn(uPtr(uPtr(item)->Nodes), uCRef<int>(i), &ret23), ret23);
        ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(_dataMap), n, item);
        uPtr(n)->OverrideContextParent = this;

        if (oldData != NULL)
            uPtr(n)->BroadcastDataChange(oldData, nextData);
    }
}

// internal generated void add_UpdatedWindowItems(Uno.Action value) [instance] :513
void Instantiator::add_UpdatedWindowItems(uDelegate* value)
{
    uStackFrame __("Fuse.Reactive.Instantiator", "add_UpdatedWindowItems(Uno.Action)");
    UpdatedWindowItems1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(UpdatedWindowItems1, value), ::TYPES[34/*Uno.Action*/]);
}

// internal generated void remove_UpdatedWindowItems(Uno.Action value) [instance] :513
void Instantiator::remove_UpdatedWindowItems(uDelegate* value)
{
    uStackFrame __("Fuse.Reactive.Instantiator", "remove_UpdatedWindowItems(Uno.Action)");
    UpdatedWindowItems1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(UpdatedWindowItems1, value), ::TYPES[34/*Uno.Action*/]);
}

// protected internal Instantiator New() [static] :74
Instantiator* Instantiator::New2()
{
    Instantiator* obj6 = (Instantiator*)uNew(Instantiator_typeof());
    obj6->ctor_3();
    return obj6;
}

// protected internal Instantiator New(Uno.Collections.IList<Uno.UX.Template> templates) [static] :68
Instantiator* Instantiator::New3(uObject* templates)
{
    Instantiator* obj5 = (Instantiator*)uNew(Instantiator_typeof());
    obj5->ctor_4(templates);
    return obj5;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Bindings/1.4.0/InstantiatorFunction.uno
// -----------------------------------------------------------------------------------

// public abstract class InstantiatorFunction :12
// {
// static generated InstantiatorFunction() :12
static void InstantiatorFunction__cctor__fn(uType* __type)
{
    ::TYPES[28/*Uno.UX.Selector*/]->Init();
    InstantiatorFunction::DataIndexName_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("index"));
    InstantiatorFunction::OffsetIndexName_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("offsetIndex"));
}

static void InstantiatorFunction_build(uType* type)
{
    type->SetDependencies(
        ::g::Fuse::Diagnostics_typeof(),
        ::g::Uno::UX::Selector_typeof());
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::Expression_type, interface0));
    type->SetFields(1,
        ::g::Uno::UX::Selector_typeof(), offsetof(InstantiatorFunction, _item), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&InstantiatorFunction::DataIndexName_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&InstantiatorFunction::OffsetIndexName_, uFieldFlagsStatic);
}

::g::Fuse::Reactive::Expression_type* InstantiatorFunction_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::Expression_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::VarArgFunction_typeof();
    options.FieldCount = 4;
    options.InterfaceCount = 1;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(InstantiatorFunction);
    options.TypeSize = sizeof(::g::Fuse::Reactive::Expression_type);
    type = (::g::Fuse::Reactive::Expression_type*)uClassType::New("Fuse.Reactive.InstantiatorFunction", options);
    type->fp_build_ = InstantiatorFunction_build;
    type->fp_cctor_ = InstantiatorFunction__cctor__fn;
    type->fp_Subscribe = (void(*)(::g::Fuse::Reactive::Expression*, uObject*, uObject*, uObject**))InstantiatorFunction__Subscribe_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))InstantiatorFunction__ToString_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))InstantiatorFunction__Subscribe_fn;
    return type;
}

// internal InstantiatorFunction(Uno.UX.Selector item) :19
void InstantiatorFunction__ctor_2_fn(InstantiatorFunction* __this, ::g::Uno::UX::Selector* item)
{
    __this->ctor_2(*item);
}

// public override sealed Uno.IDisposable Subscribe(Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :30
void InstantiatorFunction__Subscribe_fn(InstantiatorFunction* __this, uObject* context, uObject* listener, uObject** __retval)
{
    uStackFrame __("Fuse.Reactive.InstantiatorFunction", "Subscribe(Fuse.Reactive.IContext,Fuse.Reactive.IListener)");
    ::g::Fuse::Reactive::Expression* ret1;

    if (::g::Uno::Collections::ICollection::Count(uInterface(uPtr(__this->Arguments()), ::TYPES[61/*Uno.Collections.ICollection<Fuse.Reactive.Expression>*/])) > 1)
    {
        ::g::Fuse::Diagnostics::UserError(::g::Uno::String::op_Addition2(uString::Const("too many parameters for "), ::g::Uno::UX::Selector__op_Implicit1(__this->_item)), __this, ::STRINGS[58/*"/usr/local/...*/], 34, uString::Const("Subscribe"), NULL);
        return *__retval = NULL, void();
    }

    ::g::Fuse::Reactive::Expression* node = (::g::Uno::Collections::ICollection::Count(uInterface(uPtr(__this->Arguments()), ::TYPES[61/*Uno.Collections.ICollection<Fuse.Reactive.Expression>*/])) > 0) ? (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(__this->Arguments()), ::TYPES[62/*Uno.Collections.IList<Fuse.Reactive.Expression>*/]), uCRef<int>(0), &ret1), ret1) : NULL;
    return *__retval = (uObject*)InstantiatorFunction__InstantiatorSubscription::New1(__this, __this->_item, listener, context, (uObject*)node), void();
}

// public override sealed string ToString() :25
void InstantiatorFunction__ToString_fn(InstantiatorFunction* __this, uString** __retval)
{
    uStackFrame __("Fuse.Reactive.InstantiatorFunction", "ToString()");
    return *__retval = __this->FormatString(::g::Uno::UX::Selector__op_Implicit1(__this->_item)), void();
}

::g::Uno::UX::Selector InstantiatorFunction::DataIndexName_;
::g::Uno::UX::Selector InstantiatorFunction::OffsetIndexName_;

// internal InstantiatorFunction(Uno.UX.Selector item) [instance] :19
void InstantiatorFunction::ctor_2(::g::Uno::UX::Selector item)
{
    ctor_1();
    _item = item;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Bindings/1.4.0/InstantiatorFunction.uno
// -----------------------------------------------------------------------------------

// private sealed class InstantiatorFunction.InstantiatorSubscription :42
// {
static void InstantiatorFunction__InstantiatorSubscription_build(uType* type)
{
    ::STRINGS[57] = uString::Const("invalid search node for InstantiatorFunction");
    ::STRINGS[58] = uString::Const("/usr/local/share/uno/Packages/Fuse.Reactive.Bindings/1.4.0/InstantiatorFunction.uno");
    ::STRINGS[59] = uString::Const("OnNewNode");
    ::STRINGS[60] = uString::Const("Could not find an Instantiator");
    ::STRINGS[61] = uString::Const("Unable to resolve Instantiator node");
    ::TYPES[35] = ::g::Fuse::Reactive::IExpression_typeof();
    ::TYPES[34] = ::g::Uno::Action_typeof();
    ::TYPES[2] = ::g::Uno::IDisposable_typeof();
    ::TYPES[39] = ::g::Fuse::Node_typeof();
    ::TYPES[24] = ::g::Fuse::Reactive::IContext_typeof();
    ::TYPES[42] = ::TYPES[39/*Fuse.Node*/]->MakeMethod(0/*FindBehavior<Fuse.Reactive.Instantiator>*/, ::g::Fuse::Reactive::Instantiator_typeof(), NULL);
    ::TYPES[23] = ::g::Fuse::Reactive::IListener_typeof();
    type->SetDependencies(
        ::g::Fuse::Diagnostics_typeof(),
        ::g::Fuse::Reactive::InstantiatorFunction_typeof(),
        ::g::Uno::UX::Selector_typeof());
    type->SetInterfaces(
        ::TYPES[2/*Uno.IDisposable*/], offsetof(::g::Fuse::Reactive::InnerListener_type, interface0),
        ::TYPES[23/*Fuse.Reactive.IListener*/], offsetof(::g::Fuse::Reactive::InnerListener_type, interface1));
    type->SetFields(2,
        ::g::Fuse::Reactive::InstantiatorFunction_typeof(), offsetof(InstantiatorFunction__InstantiatorSubscription, _expr), 0,
        ::g::Uno::UX::Selector_typeof(), offsetof(InstantiatorFunction__InstantiatorSubscription, _item), 0,
        ::TYPES[23/*Fuse.Reactive.IListener*/], offsetof(InstantiatorFunction__InstantiatorSubscription, _listener), 0,
        ::TYPES[24/*Fuse.Reactive.IContext*/], offsetof(InstantiatorFunction__InstantiatorSubscription, _context), 0,
        ::TYPES[35/*Fuse.Reactive.IExpression*/], offsetof(InstantiatorFunction__InstantiatorSubscription, _node), 0,
        ::g::Fuse::Reactive::Instantiator_typeof(), offsetof(InstantiatorFunction__InstantiatorSubscription, _instantiator), 0,
        ::TYPES[39/*Fuse.Node*/], offsetof(InstantiatorFunction__InstantiatorSubscription, _instance), 0,
        ::TYPES[2/*Uno.IDisposable*/], offsetof(InstantiatorFunction__InstantiatorSubscription, _nodeSub), 0);
}

::g::Fuse::Reactive::InnerListener_type* InstantiatorFunction__InstantiatorSubscription_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::InnerListener_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::InnerListener_typeof();
    options.FieldCount = 10;
    options.InterfaceCount = 2;
    options.DependencyCount = 3;
    options.ObjectSize = sizeof(InstantiatorFunction__InstantiatorSubscription);
    options.TypeSize = sizeof(::g::Fuse::Reactive::InnerListener_type);
    type = (::g::Fuse::Reactive::InnerListener_type*)uClassType::New("Fuse.Reactive.InstantiatorFunction.InstantiatorSubscription", options);
    type->fp_build_ = InstantiatorFunction__InstantiatorSubscription_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Reactive::InnerListener*))InstantiatorFunction__InstantiatorSubscription__Dispose_fn;
    type->fp_OnNewData = (void(*)(::g::Fuse::Reactive::InnerListener*, uObject*, uObject*))InstantiatorFunction__InstantiatorSubscription__OnNewData_fn;
    type->interface1.fp_OnNewData = (void(*)(uObject*, uObject*, uObject*))::g::Fuse::Reactive::InnerListener__FuseReactiveIListenerOnNewData_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))InstantiatorFunction__InstantiatorSubscription__Dispose_fn;
    return type;
}

// public InstantiatorSubscription(Fuse.Reactive.InstantiatorFunction expr, Uno.UX.Selector item, Fuse.Reactive.IListener listener, Fuse.Reactive.IContext context, Fuse.Reactive.IExpression node) :57
void InstantiatorFunction__InstantiatorSubscription__ctor_1_fn(InstantiatorFunction__InstantiatorSubscription* __this, ::g::Fuse::Reactive::InstantiatorFunction* expr, ::g::Uno::UX::Selector* item, uObject* listener, uObject* context, uObject* node)
{
    __this->ctor_1(expr, *item, listener, context, node);
}

// public override sealed void Dispose() :122
void InstantiatorFunction__InstantiatorSubscription__Dispose_fn(InstantiatorFunction__InstantiatorSubscription* __this)
{
    uStackFrame __("Fuse.Reactive.InstantiatorFunction.InstantiatorSubscription", "Dispose()");
    ::g::Fuse::Reactive::InnerListener__Dispose_fn(__this);
    __this->_expr = NULL;
    __this->_listener = NULL;

    if (__this->_instantiator != NULL)
        uPtr(__this->_instantiator)->remove_UpdatedWindowItems(uDelegate::New(::TYPES[34/*Uno.Action*/], (void*)InstantiatorFunction__InstantiatorSubscription__OnUpdatedWindowItems_fn, __this));

    __this->_instantiator = NULL;

    if (__this->_nodeSub != NULL)
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(__this->_nodeSub), ::TYPES[2/*Uno.IDisposable*/]));

    __this->_nodeSub = NULL;
    __this->_node = NULL;
}

// public InstantiatorSubscription New(Fuse.Reactive.InstantiatorFunction expr, Uno.UX.Selector item, Fuse.Reactive.IListener listener, Fuse.Reactive.IContext context, Fuse.Reactive.IExpression node) :57
void InstantiatorFunction__InstantiatorSubscription__New1_fn(::g::Fuse::Reactive::InstantiatorFunction* expr, ::g::Uno::UX::Selector* item, uObject* listener, uObject* context, uObject* node, InstantiatorFunction__InstantiatorSubscription** __retval)
{
    *__retval = InstantiatorFunction__InstantiatorSubscription::New1(expr, *item, listener, context, node);
}

// protected override sealed void OnNewData(Fuse.Reactive.IExpression source, object value) :74
void InstantiatorFunction__InstantiatorSubscription__OnNewData_fn(InstantiatorFunction__InstantiatorSubscription* __this, uObject* source, uObject* value)
{
    uStackFrame __("Fuse.Reactive.InstantiatorFunction.InstantiatorSubscription", "OnNewData(Fuse.Reactive.IExpression,object)");

    if (source == __this->_node)
        __this->OnNewNode(value);
}

// private void OnNewNode(object obj) :80
void InstantiatorFunction__InstantiatorSubscription__OnNewNode_fn(InstantiatorFunction__InstantiatorSubscription* __this, uObject* obj)
{
    __this->OnNewNode(obj);
}

// private void OnUpdatedWindowItems() :148
void InstantiatorFunction__InstantiatorSubscription__OnUpdatedWindowItems_fn(InstantiatorFunction__InstantiatorSubscription* __this)
{
    __this->OnUpdatedWindowItems();
}

// private void PushValue() :136
void InstantiatorFunction__InstantiatorSubscription__PushValue_fn(InstantiatorFunction__InstantiatorSubscription* __this)
{
    __this->PushValue();
}

// public InstantiatorSubscription(Fuse.Reactive.InstantiatorFunction expr, Uno.UX.Selector item, Fuse.Reactive.IListener listener, Fuse.Reactive.IContext context, Fuse.Reactive.IExpression node) [instance] :57
void InstantiatorFunction__InstantiatorSubscription::ctor_1(::g::Fuse::Reactive::InstantiatorFunction* expr, ::g::Uno::UX::Selector item, uObject* listener, uObject* context, uObject* node)
{
    uStackFrame __("Fuse.Reactive.InstantiatorFunction.InstantiatorSubscription", ".ctor(Fuse.Reactive.InstantiatorFunction,Uno.UX.Selector,Fuse.Reactive.IListener,Fuse.Reactive.IContext,Fuse.Reactive.IExpression)");
    ctor_();
    _node = node;
    _expr = expr;
    _item = item;
    _listener = listener;
    _context = context;

    if (_node == NULL)
        OnNewNode(NULL);
    else
        _nodeSub = ::g::Fuse::Reactive::IExpression::Subscribe(uInterface(uPtr(_node), ::TYPES[35/*Fuse.Reactive.IExpression*/]), context, (uObject*)this);
}

// private void OnNewNode(object obj) [instance] :80
void InstantiatorFunction__InstantiatorSubscription::OnNewNode(uObject* obj)
{
    uStackFrame __("Fuse.Reactive.InstantiatorFunction.InstantiatorSubscription", "OnNewNode(object)");
    ::g::Fuse::Node* ind1;

    if (_instantiator != NULL)
    {
        uPtr(_instantiator)->remove_UpdatedWindowItems(uDelegate::New(::TYPES[34/*Uno.Action*/], (void*)InstantiatorFunction__InstantiatorSubscription__OnUpdatedWindowItems_fn, this));
        _instantiator = NULL;
        _instance = NULL;
    }

    ind1 = uAs< ::g::Fuse::Node*>(obj, ::TYPES[39/*Fuse.Node*/]);
    ::g::Fuse::Node* searchNode = (ind1 != NULL) ? ind1 : (::g::Fuse::Node*)::g::Fuse::Reactive::IContext::Node(uInterface(uPtr(_context), ::TYPES[24/*Fuse.Reactive.IContext*/]));

    if (searchNode == NULL)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[57/*"invalid sea...*/], this, ::STRINGS[58/*"/usr/local/...*/], 92, ::STRINGS[59/*"OnNewNode"*/], NULL);
        return;
    }

    _instantiator = ((::g::Fuse::Reactive::Instantiator*)uPtr(searchNode)->FindBehavior(::TYPES[42/*Fuse.Node.FindBehavior<Fuse.Reactive.Instantiator>*/]));

    if (_instantiator == NULL)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[60/*"Could not f...*/], this, ::STRINGS[58/*"/usr/local/...*/], 99, ::STRINGS[59/*"OnNewNode"*/], NULL);
        return;
    }

    ::g::Fuse::Node* p = ::g::Fuse::Reactive::IContext::Node(uInterface(uPtr(_context), ::TYPES[24/*Fuse.Reactive.IContext*/]));

    while ((p != NULL) && (uPtr(p)->ContextParent() != _instantiator))
        p = uPtr(p)->ContextParent();

    if (p == NULL)
    {
        ::g::Fuse::Diagnostics::InternalError(::STRINGS[61/*"Unable to r...*/], this, ::STRINGS[58/*"/usr/local/...*/], 110, ::STRINGS[59/*"OnNewNode"*/]);
        return;
    }

    if (_instantiator != NULL)
    {
        _instance = p;
        uPtr(_instantiator)->add_UpdatedWindowItems(uDelegate::New(::TYPES[34/*Uno.Action*/], (void*)InstantiatorFunction__InstantiatorSubscription__OnUpdatedWindowItems_fn, this));
        PushValue();
    }
}

// private void OnUpdatedWindowItems() [instance] :148
void InstantiatorFunction__InstantiatorSubscription::OnUpdatedWindowItems()
{
    uStackFrame __("Fuse.Reactive.InstantiatorFunction.InstantiatorSubscription", "OnUpdatedWindowItems()");
    PushValue();
}

// private void PushValue() [instance] :136
void InstantiatorFunction__InstantiatorSubscription::PushValue()
{
    uStackFrame __("Fuse.Reactive.InstantiatorFunction.InstantiatorSubscription", "PushValue()");
    int q = -1;

    if (::g::Uno::UX::Selector__op_Equality(_item, ::g::Fuse::Reactive::InstantiatorFunction::DataIndexName_))
        q = uPtr(_instantiator)->DataIndexOfChild(_instance);
    else if (::g::Uno::UX::Selector__op_Equality(_item, ::g::Fuse::Reactive::InstantiatorFunction::OffsetIndexName_))
        q = uPtr(_instantiator)->DataIndexOfChild(_instance) - uPtr(_instantiator)->Offset();

    if (q != -1)
        ::g::Fuse::Reactive::IListener::OnNewData(uInterface(uPtr(_listener), ::TYPES[23/*Fuse.Reactive.IListener*/]), (uObject*)_expr, uBox<int>(::TYPES[17/*int*/], q));
}

// public InstantiatorSubscription New(Fuse.Reactive.InstantiatorFunction expr, Uno.UX.Selector item, Fuse.Reactive.IListener listener, Fuse.Reactive.IContext context, Fuse.Reactive.IExpression node) [static] :57
InstantiatorFunction__InstantiatorSubscription* InstantiatorFunction__InstantiatorSubscription::New1(::g::Fuse::Reactive::InstantiatorFunction* expr, ::g::Uno::UX::Selector item, uObject* listener, uObject* context, uObject* node)
{
    InstantiatorFunction__InstantiatorSubscription* obj2 = (InstantiatorFunction__InstantiatorSubscription*)uNew(InstantiatorFunction__InstantiatorSubscription_typeof());
    obj2->ctor_1(expr, item, listener, context, node);
    return obj2;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/1.4.0/IObservable.uno
// -----------------------------------------------------------------

// internal abstract interface IObservable :125
// {
uInterfaceType* IObservable_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Reactive.IObservable", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/1.4.0/IObservable.uno
// -----------------------------------------------------------------

// internal abstract interface IObservableArray :54
// {
uInterfaceType* IObservableArray_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Reactive.IObservableArray", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/1.4.0/IObservable.uno
// -----------------------------------------------------------------

// internal abstract interface IObservableObject :16
// {
uInterfaceType* IObservableObject_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Reactive.IObservableObject", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/1.4.0/IObservable.uno
// -----------------------------------------------------------------

// internal abstract interface IObserver :142
// {
uInterfaceType* IObserver_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Reactive.IObserver", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/1.4.0/IObservable.uno
// -----------------------------------------------------------------

// internal abstract interface IPropertyObserver :28
// {
uInterfaceType* IPropertyObserver_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Reactive.IPropertyObserver", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/1.4.0/IObservable.uno
// -----------------------------------------------------------------

// internal abstract interface IPropertySubscription :22
// {
uInterfaceType* IPropertySubscription_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Reactive.IPropertySubscription", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/1.4.0/IObservable.uno
// -----------------------------------------------------------------

// internal abstract interface ISubscription :131
// {
uInterfaceType* ISubscription_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Reactive.ISubscription", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/1.4.0/ValueObserver.uno
// -------------------------------------------------------------------

// public abstract interface ValueForwarder.IValueListener :87
// {
uInterfaceType* ValueForwarder__IValueListener_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Reactive.ValueForwarder.IValueListener", 0, 0);
    type->Reflection.SetFunctions(1,
        new uFunction("NewValue", NULL, NULL, offsetof(ValueForwarder__IValueListener, fp_NewValue), false, uVoid_typeof(), 1, uObject_typeof()));
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/1.4.0/IExpression.uno
// -----------------------------------------------------------------

// public abstract interface IWriteable :30
// {
uInterfaceType* IWriteable_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Reactive.IWriteable", 0, 0);
    type->Reflection.SetFunctions(1,
        new uFunction("TrySetExclusive", NULL, NULL, offsetof(IWriteable, fp_TrySetExclusive), false, ::g::Uno::Bool_typeof(), 1, uObject_typeof()));
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Scripting.JavaScript/1.4.0/JavaScript.Dependencies.uno
// -----------------------------------------------------------------------------------------

// public partial class JavaScript :10
// {
static void JavaScript_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(JavaScript_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(JavaScript_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(JavaScript_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(JavaScript_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(JavaScript_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(JavaScript_type, interface5),
        ::g::Fuse::Scripting::IModuleProvider_typeof(), offsetof(JavaScript_type, interface6),
        ::g::Fuse::Reactive::ValueForwarder__IValueListener_typeof(), offsetof(JavaScript_type, interface7),
        ::g::Fuse::Node__ISiblingDataProvider_typeof(), offsetof(JavaScript_type, interface8),
        ::g::Fuse::Reactive::IContext_typeof(), offsetof(JavaScript_type, interface9));
    type->SetFields(16,
        ::g::Uno::Collections::List_typeof()->MakeType(JavaScript__Dependency_typeof(), NULL), offsetof(JavaScript, _dependencies), 0,
        ::g::Fuse::Scripting::ModuleInstance_typeof(), offsetof(JavaScript, _moduleInstance), 0,
        ::g::Uno::UX::NameTable_typeof(), offsetof(JavaScript, _nameTable), 0,
        ::g::Fuse::Scripting::RootableScriptModule_typeof(), offsetof(JavaScript, _scriptModule), 0,
        uObject_typeof(), offsetof(JavaScript, _currentDc), 0,
        ::g::Uno::IDisposable_typeof(), offsetof(JavaScript, _sub), 0,
        uObject_typeof(), offsetof(JavaScript, _siblingData), 0,
        ::g::Uno::Int_typeof(), (uintptr_t)&JavaScript::_javaScriptCounter_, uFieldFlagsStatic,
        ::g::Fuse::Scripting::ThreadWorker_typeof(), (uintptr_t)&JavaScript::_worker_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(10,
        new uFunction("get_Code", NULL, (void*)JavaScript__get_Code_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_Code", NULL, (void*)JavaScript__set_Code_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("get_Dependencies", NULL, (void*)JavaScript__get_Dependencies_fn, 0, false, ::g::Uno::Collections::IList_typeof()->MakeType(JavaScript__Dependency_typeof(), NULL), 0),
        new uFunction("get_File", NULL, (void*)JavaScript__get_File_fn, 0, false, ::g::Uno::UX::FileSource_typeof(), 0),
        new uFunction("set_File", NULL, (void*)JavaScript__set_File_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UX::FileSource_typeof()),
        new uFunction("get_FileName", NULL, (void*)JavaScript__get_FileName_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_FileName", NULL, (void*)JavaScript__set_FileName_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("get_LineNumber", NULL, (void*)JavaScript__get_LineNumber_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("set_LineNumber", NULL, (void*)JavaScript__set_LineNumber_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction(".ctor", NULL, (void*)JavaScript__New2_fn, 0, true, type, 1, ::g::Uno::UX::NameTable_typeof()));
}

JavaScript_type* JavaScript_typeof()
{
    static uSStrong<JavaScript_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Behavior_typeof();
    options.FieldCount = 25;
    options.InterfaceCount = 10;
    options.ObjectSize = sizeof(JavaScript);
    options.TypeSize = sizeof(JavaScript_type);
    type = (JavaScript_type*)uClassType::New("Fuse.Reactive.JavaScript", options);
    type->fp_build_ = JavaScript_build;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))JavaScript__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))JavaScript__OnUnrooted_fn;
    type->interface9.fp_Subscribe = (void(*)(uObject*, uObject*, uString*, uObject*, uObject**))JavaScript__FuseReactiveIContextSubscribe_fn;
    type->interface9.fp_SubscribeResource = (void(*)(uObject*, uObject*, uString*, uObject*, uObject**))JavaScript__FuseReactiveIContextSubscribeResource_fn;
    type->interface6.fp_GetModule = (void(*)(uObject*, ::g::Fuse::Scripting::Module**))JavaScript__FuseScriptingIModuleProviderGetModule_fn;
    type->interface7.fp_NewValue = (void(*)(uObject*, uObject*))JavaScript__FuseReactiveValueForwarderIValueListenerNewValue_fn;
    type->interface9.fp_get_Node = (void(*)(uObject*, ::g::Fuse::Node**))JavaScript__FuseReactiveIContextget_Node_fn;
    type->interface8.fp_get_Data = (void(*)(uObject*, uObject**))JavaScript__FuseNodeISiblingDataProviderget_Data_fn;
    type->interface4.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface4.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface5.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface4.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface4.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public JavaScript(Uno.UX.NameTable nameTable) :33
void JavaScript__ctor_3_fn(JavaScript* __this, ::g::Uno::UX::NameTable* nameTable)
{
    __this->ctor_3(nameTable);
}

// public string get_Code() :129
void JavaScript__get_Code_fn(JavaScript* __this, uString** __retval)
{
    *__retval = __this->Code();
}

// public void set_Code(string value) :130
void JavaScript__set_Code_fn(JavaScript* __this, uString* value)
{
    __this->Code(value);
}

// public Uno.Collections.IList<Fuse.Reactive.JavaScript.Dependency> get_Dependencies() :83
void JavaScript__get_Dependencies_fn(JavaScript* __this, uObject** __retval)
{
    *__retval = __this->Dependencies();
}

// internal void DispatchEvaluate() :124
void JavaScript__DispatchEvaluate_fn(JavaScript* __this)
{
    __this->DispatchEvaluate();
}

// private void DispatchEvaluateIfDependenciesReady() :108
void JavaScript__DispatchEvaluateIfDependenciesReady_fn(JavaScript* __this)
{
    __this->DispatchEvaluateIfDependenciesReady();
}

// private void DisposeDependencySubscriptions() :101
void JavaScript__DisposeDependencySubscriptions_fn(JavaScript* __this)
{
    __this->DisposeDependencySubscriptions();
}

// private void DisposeModuleInstance() :131
void JavaScript__DisposeModuleInstance_fn(JavaScript* __this)
{
    __this->DisposeModuleInstance();
}

// private void DisposeSubscription() :116
void JavaScript__DisposeSubscription_fn(JavaScript* __this)
{
    __this->DisposeSubscription();
}

// public Uno.UX.FileSource get_File() :150
void JavaScript__get_File_fn(JavaScript* __this, ::g::Uno::UX::FileSource** __retval)
{
    *__retval = __this->File();
}

// public void set_File(Uno.UX.FileSource value) :151
void JavaScript__set_File_fn(JavaScript* __this, ::g::Uno::UX::FileSource* value)
{
    __this->File(value);
}

// public string get_FileName() :158
void JavaScript__get_FileName_fn(JavaScript* __this, uString** __retval)
{
    *__retval = __this->FileName();
}

// public void set_FileName(string value) :159
void JavaScript__set_FileName_fn(JavaScript* __this, uString* value)
{
    __this->FileName(value);
}

// private object Fuse.Node.ISiblingDataProvider.get_Data() :113
void JavaScript__FuseNodeISiblingDataProviderget_Data_fn(JavaScript* __this, uObject** __retval)
{
    return *__retval = __this->_siblingData, void();
}

// private Fuse.Node Fuse.Reactive.IContext.get_Node() :145
void JavaScript__FuseReactiveIContextget_Node_fn(JavaScript* __this, ::g::Fuse::Node** __retval)
{
    return *__retval = __this, void();
}

// private Uno.IDisposable Fuse.Reactive.IContext.Subscribe(Fuse.Reactive.IExpression source, string key, Fuse.Reactive.IListener listener) :140
void JavaScript__FuseReactiveIContextSubscribe_fn(JavaScript* __this, uObject* source, uString* key, uObject* listener, uObject** __retval)
{
    uStackFrame __("Fuse.Reactive.JavaScript", "Fuse.Reactive.IContext.Subscribe(Fuse.Reactive.IExpression,string,Fuse.Reactive.IListener)");
    return *__retval = (uObject*)::g::Fuse::Reactive::DataSubscription::New1(source, __this, key, listener), void();
}

// private Uno.IDisposable Fuse.Reactive.IContext.SubscribeResource(Fuse.Reactive.IExpression source, string key, Fuse.Reactive.IListener listener) :147
void JavaScript__FuseReactiveIContextSubscribeResource_fn(JavaScript* __this, uObject* source, uString* key, uObject* listener, uObject** __retval)
{
    uStackFrame __("Fuse.Reactive.JavaScript", "Fuse.Reactive.IContext.SubscribeResource(Fuse.Reactive.IExpression,string,Fuse.Reactive.IListener)");
    return *__retval = (uObject*)::g::Fuse::Reactive::ResourceSubscription::New1(source, __this, key, listener, uObject_typeof()), void();
}

// private void Fuse.Reactive.ValueForwarder.IValueListener.NewValue(object data) :98
void JavaScript__FuseReactiveValueForwarderIValueListenerNewValue_fn(JavaScript* __this, uObject* data)
{
    uStackFrame __("Fuse.Reactive.JavaScript", "Fuse.Reactive.ValueForwarder.IValueListener.NewValue(object)");
    __this->SetSiblingData(data);
}

// private Fuse.Scripting.Module Fuse.Scripting.IModuleProvider.GetModule() :68
void JavaScript__FuseScriptingIModuleProviderGetModule_fn(JavaScript* __this, ::g::Fuse::Scripting::Module** __retval)
{
    uStackFrame __("Fuse.Reactive.JavaScript", "Fuse.Scripting.IModuleProvider.GetModule()");

    if (__this->IsRootingCompleted())
        U_THROW(::g::Uno::Exception::New2(uString::Const("Cannot require() a rooted module")));

    return *__retval = __this->_scriptModule, void();
}

// public int get_LineNumber() :143
void JavaScript__get_LineNumber_fn(JavaScript* __this, int* __retval)
{
    *__retval = __this->LineNumber();
}

// public void set_LineNumber(int value) :144
void JavaScript__set_LineNumber_fn(JavaScript* __this, int* value)
{
    __this->LineNumber(*value);
}

// public JavaScript New(Uno.UX.NameTable nameTable) :33
void JavaScript__New2_fn(::g::Uno::UX::NameTable* nameTable, JavaScript** __retval)
{
    *__retval = JavaScript::New2(nameTable);
}

// protected override sealed void OnRooted() :42
void JavaScript__OnRooted_fn(JavaScript* __this)
{
    uStackFrame __("Fuse.Reactive.JavaScript", "OnRooted()");
    ::g::Fuse::Node__OnRooted_fn(__this);
    JavaScript::_javaScriptCounter_++;
    __this->SubscribeToDependenciesAndDispatchEvaluate();
}

// protected override sealed void OnUnrooted() :49
void JavaScript__OnUnrooted_fn(JavaScript* __this)
{
    uStackFrame __("Fuse.Reactive.JavaScript", "OnUnrooted()");
    ::g::Fuse::Scripting::NativeModule* ret5;
    __this->DisposeDependencySubscriptions();
    __this->SetDataContext(NULL);
    __this->DisposeModuleInstance();

    if ((--JavaScript::_javaScriptCounter_) <= 0)
    {
        ::g::Fuse::Scripting::AppInitialized::Reset();
        uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr((uObject*)::g::Uno::UX::Resource::GetGlobalsOfType(::g::Uno::UX::Resource_typeof()->MakeMethod(0/*GetGlobalsOfType<Fuse.Scripting.NativeModule>*/, ::g::Fuse::Scripting::NativeModule_typeof(), NULL))), ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Scripting::NativeModule_typeof(), NULL)));

        try
        {
            {
                while (::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::TYPES[48/*Uno.Collections.IEnumerator*/])))
                {
                    ::g::Fuse::Scripting::NativeModule* nm = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Fuse::Scripting::NativeModule_typeof(), NULL)), &ret5), ret5);
                    uPtr(nm)->InternalReset();
                }
            }
            {
                ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum1), ::TYPES[2/*Uno.IDisposable*/]));
            }
        }

        catch (const uThrowable& __t)
        {
            {
                ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum1), ::TYPES[2/*Uno.IDisposable*/]));
            }
                        throw __t;
        }
    }

    ::g::Fuse::Node__OnUnrooted_fn(__this);
}

// internal Fuse.Scripting.RootableScriptModule get_ScriptModule() :30
void JavaScript__get_ScriptModule_fn(JavaScript* __this, ::g::Fuse::Scripting::RootableScriptModule** __retval)
{
    *__retval = __this->ScriptModule();
}

// internal void SetDataContext(object newDc) :77
void JavaScript__SetDataContext_fn(JavaScript* __this, uObject* newDc)
{
    __this->SetDataContext(newDc);
}

// private void SetSiblingData(object data) :104
void JavaScript__SetSiblingData_fn(JavaScript* __this, uObject* data)
{
    __this->SetSiblingData(data);
}

// private void SubscribeToDependenciesAndDispatchEvaluate() :92
void JavaScript__SubscribeToDependenciesAndDispatchEvaluate_fn(JavaScript* __this)
{
    __this->SubscribeToDependenciesAndDispatchEvaluate();
}

// internal static Fuse.Scripting.ThreadWorker get_Worker() :26
void JavaScript__get_Worker_fn(::g::Fuse::Scripting::ThreadWorker** __retval)
{
    *__retval = JavaScript::Worker();
}

int JavaScript::_javaScriptCounter_;
uSStrong< ::g::Fuse::Scripting::ThreadWorker*> JavaScript::_worker_;

// public JavaScript(Uno.UX.NameTable nameTable) [instance] :33
void JavaScript::ctor_3(::g::Uno::UX::NameTable* nameTable)
{
    uStackFrame __("Fuse.Reactive.JavaScript", ".ctor(Uno.UX.NameTable)");
    ctor_2();

    if (JavaScript::_worker_ == NULL)
        JavaScript::_worker_ = ::g::Fuse::Scripting::ThreadWorker::New1();

    _nameTable = nameTable;
    _scriptModule = ::g::Fuse::Scripting::RootableScriptModule::New2(JavaScript::_worker_, nameTable);
}

// public string get_Code() [instance] :129
uString* JavaScript::Code()
{
    uStackFrame __("Fuse.Reactive.JavaScript", "get_Code()");
    return uPtr(_scriptModule)->Code();
}

// public void set_Code(string value) [instance] :130
void JavaScript::Code(uString* value)
{
    uStackFrame __("Fuse.Reactive.JavaScript", "set_Code(string)");

    if (::g::Uno::String::op_Inequality(uPtr(_scriptModule)->Code(), value))
        uPtr(_scriptModule)->Code(value);
}

// public Uno.Collections.IList<Fuse.Reactive.JavaScript.Dependency> get_Dependencies() [instance] :83
uObject* JavaScript::Dependencies()
{
    uStackFrame __("Fuse.Reactive.JavaScript", "get_Dependencies()");

    if (_dependencies == NULL)
        _dependencies = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[55/*Uno.Collections.List`1*/]->MakeType(JavaScript__Dependency_typeof(), NULL)));

    return (uObject*)_dependencies;
}

// internal void DispatchEvaluate() [instance] :124
void JavaScript::DispatchEvaluate()
{
    uStackFrame __("Fuse.Reactive.JavaScript", "DispatchEvaluate()");

    if (!IsRootingStarted())
        return;

    DisposeModuleInstance();
    _moduleInstance = ::g::Fuse::Scripting::ModuleInstance::New2(JavaScript::Worker(), this);
}

// private void DispatchEvaluateIfDependenciesReady() [instance] :108
void JavaScript::DispatchEvaluateIfDependenciesReady()
{
    uStackFrame __("Fuse.Reactive.JavaScript", "DispatchEvaluateIfDependenciesReady()");
    JavaScript__Dependency* ret3;

    if (_dependencies != NULL)

        for (int i = 0; i < uPtr(_dependencies)->Count(); i++)
            if (!uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(_dependencies), uCRef<int>(i), &ret3), ret3))->HasValue)
                return;

    DispatchEvaluate();
}

// private void DisposeDependencySubscriptions() [instance] :101
void JavaScript::DisposeDependencySubscriptions()
{
    uStackFrame __("Fuse.Reactive.JavaScript", "DisposeDependencySubscriptions()");
    JavaScript__Dependency* ret4;

    if (_dependencies != NULL)

        for (int i = 0; i < uPtr(_dependencies)->Count(); i++)
            uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(_dependencies), uCRef<int>(i), &ret4), ret4))->Unsubscribe();
}

// private void DisposeModuleInstance() [instance] :131
void JavaScript::DisposeModuleInstance()
{
    uStackFrame __("Fuse.Reactive.JavaScript", "DisposeModuleInstance()");

    if (_moduleInstance != NULL)
    {
        uPtr(_moduleInstance)->Dispose();
        _moduleInstance = NULL;
    }
}

// private void DisposeSubscription() [instance] :116
void JavaScript::DisposeSubscription()
{
    uStackFrame __("Fuse.Reactive.JavaScript", "DisposeSubscription()");

    if (_sub != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_sub), ::TYPES[2/*Uno.IDisposable*/]));
        _sub = NULL;
    }
}

// public Uno.UX.FileSource get_File() [instance] :150
::g::Uno::UX::FileSource* JavaScript::File()
{
    uStackFrame __("Fuse.Reactive.JavaScript", "get_File()");
    return uPtr(_scriptModule)->File();
}

// public void set_File(Uno.UX.FileSource value) [instance] :151
void JavaScript::File(::g::Uno::UX::FileSource* value)
{
    uStackFrame __("Fuse.Reactive.JavaScript", "set_File(Uno.UX.FileSource)");
    uPtr(_scriptModule)->File(value);
}

// public string get_FileName() [instance] :158
uString* JavaScript::FileName()
{
    uStackFrame __("Fuse.Reactive.JavaScript", "get_FileName()");
    return uPtr(_scriptModule)->FileName();
}

// public void set_FileName(string value) [instance] :159
void JavaScript::FileName(uString* value)
{
    uStackFrame __("Fuse.Reactive.JavaScript", "set_FileName(string)");
    uPtr(_scriptModule)->FileName(value);
}

// public int get_LineNumber() [instance] :143
int JavaScript::LineNumber()
{
    uStackFrame __("Fuse.Reactive.JavaScript", "get_LineNumber()");
    return uPtr(_scriptModule)->LineNumberOffset();
}

// public void set_LineNumber(int value) [instance] :144
void JavaScript::LineNumber(int value)
{
    uStackFrame __("Fuse.Reactive.JavaScript", "set_LineNumber(int)");
    uPtr(_scriptModule)->LineNumberOffset(value);
}

// internal Fuse.Scripting.RootableScriptModule get_ScriptModule() [instance] :30
::g::Fuse::Scripting::RootableScriptModule* JavaScript::ScriptModule()
{
    return _scriptModule;
}

// internal void SetDataContext(object newDc) [instance] :77
void JavaScript::SetDataContext(uObject* newDc)
{
    uStackFrame __("Fuse.Reactive.JavaScript", "SetDataContext(object)");
    DisposeSubscription();
    uObject* oldDc = _currentDc;
    _currentDc = newDc;
    uObject* obs = uAs<uObject*>(newDc, ::TYPES[43/*Fuse.Reactive.IObservable*/]);

    if (obs != NULL)
    {
        SetSiblingData(NULL);
        _sub = (uObject*)::g::Fuse::Reactive::ValueForwarder::New1(obs, (uObject*)this);
    }
    else
        SetSiblingData(newDc);

    if (oldDc != NULL)
        ::g::Fuse::Scripting::ValueMirror::Unsubscribe1(oldDc);
}

// private void SetSiblingData(object data) [instance] :104
void JavaScript::SetSiblingData(uObject* data)
{
    uStackFrame __("Fuse.Reactive.JavaScript", "SetSiblingData(object)");
    uObject* oldSiblingData = _siblingData;
    _siblingData = data;

    if (Parent() != NULL)
        uPtr(Parent())->BroadcastDataChange(oldSiblingData, data);
}

// private void SubscribeToDependenciesAndDispatchEvaluate() [instance] :92
void JavaScript::SubscribeToDependenciesAndDispatchEvaluate()
{
    uStackFrame __("Fuse.Reactive.JavaScript", "SubscribeToDependenciesAndDispatchEvaluate()");
    JavaScript__Dependency* ret6;

    if (_dependencies != NULL)

        for (int i = 0; i < uPtr(_dependencies)->Count(); i++)
            uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(_dependencies), uCRef<int>(i), &ret6), ret6))->Subscribe(this);

    if ((_dependencies == NULL) || (uPtr(_dependencies)->Count() == 0))
        DispatchEvaluateIfDependenciesReady();
}

// public JavaScript New(Uno.UX.NameTable nameTable) [static] :33
JavaScript* JavaScript::New2(::g::Uno::UX::NameTable* nameTable)
{
    JavaScript* obj2 = (JavaScript*)uNew(JavaScript_typeof());
    obj2->ctor_3(nameTable);
    return obj2;
}

// internal static Fuse.Scripting.ThreadWorker get_Worker() [static] :26
::g::Fuse::Scripting::ThreadWorker* JavaScript::Worker()
{
    return JavaScript::_worker_;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.4.0/MathFunctions.uno
// -------------------------------------------------------------------------------

// public sealed class Lerp :415
// {
static void Lerp_build(uType* type)
{
    ::STRINGS[62] = uString::Const("lerp(");
    ::STRINGS[13] = uString::Const(",");
    ::STRINGS[5] = uString::Const(")");
    ::TYPES[1] = ::g::Fuse::Marshal_typeof()->MakeMethod(1/*TryToType<float>*/, ::g::Uno::Float_typeof(), NULL);
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::TernaryOperator_type, interface0));
    type->SetFields(3);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Lerp__New1_fn, 0, true, type, 3, ::g::Fuse::Reactive::Expression_typeof(), ::g::Fuse::Reactive::Expression_typeof(), ::g::Fuse::Reactive::Expression_typeof()));
}

::g::Fuse::Reactive::TernaryOperator_type* Lerp_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::TernaryOperator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::TernaryOperator_typeof();
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Lerp);
    options.TypeSize = sizeof(::g::Fuse::Reactive::TernaryOperator_type);
    type = (::g::Fuse::Reactive::TernaryOperator_type*)uClassType::New("Fuse.Reactive.Lerp", options);
    type->fp_build_ = Lerp_build;
    type->fp_Compute = (void(*)(::g::Fuse::Reactive::TernaryOperator*, uObject*, uObject*, uObject*, uObject**))Lerp__Compute_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))Lerp__ToString_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::TernaryOperator__Subscribe_fn;
    return type;
}

// public Lerp(Fuse.Reactive.Expression first, Fuse.Reactive.Expression second, Fuse.Reactive.Expression third) :418
void Lerp__ctor_2_fn(Lerp* __this, ::g::Fuse::Reactive::Expression* first, ::g::Fuse::Reactive::Expression* second, ::g::Fuse::Reactive::Expression* third)
{
    __this->ctor_2(first, second, third);
}

// protected override sealed object Compute(object a, object b, object t) :423
void Lerp__Compute_fn(Lerp* __this, uObject* a, uObject* b, uObject* t, uObject** __retval)
{
    uStackFrame __("Fuse.Reactive.Lerp", "Compute(object,object,object)");
    bool ret2;
    ::g::Uno::Float4 av = ::g::Uno::Float4__New1(0.0f), bv = ::g::Uno::Float4__New1(0.0f);
    int asize = 0, bsize = 0;
    float tv = 0.0f;

    if ((!::g::Fuse::Marshal::TryToZeroFloat4(a, &av, &asize) || !::g::Fuse::Marshal::TryToZeroFloat4(b, &bv, &bsize)) || !(::g::Fuse::Marshal__TryToType_fn(::TYPES[1/*Fuse.Marshal.TryToType<float>*/], t, &tv, &ret2), ret2))
        return *__retval = NULL, void();

    int size = ::g::Uno::Math::Max8(asize, bsize);

    switch (size)
    {
        case 1:
            return *__retval = uBox(::TYPES[18/*float*/], ::g::Uno::Math::Lerp1(av.X, bv.X, tv)), void();
        case 2:
            return *__retval = uBox(::g::Uno::Float2_typeof(), ::g::Uno::Math::Lerp2(::g::Uno::Float2__New2(av.X, av.Y), ::g::Uno::Float2__New2(bv.X, bv.Y), tv)), void();
        case 3:
            return *__retval = uBox(::g::Uno::Float3_typeof(), ::g::Uno::Math::Lerp4(::g::Uno::Float3__New2(av.X, av.Y, av.Z), ::g::Uno::Float3__New2(bv.X, bv.Y, bv.Z), tv)), void();
        case 4:
            return *__retval = uBox(::g::Uno::Float4_typeof(), ::g::Uno::Math::Lerp6(av, bv, tv)), void();
    }

    return *__retval = NULL, void();
}

// public Lerp New(Fuse.Reactive.Expression first, Fuse.Reactive.Expression second, Fuse.Reactive.Expression third) :418
void Lerp__New1_fn(::g::Fuse::Reactive::Expression* first, ::g::Fuse::Reactive::Expression* second, ::g::Fuse::Reactive::Expression* third, Lerp** __retval)
{
    *__retval = Lerp::New1(first, second, third);
}

// public override sealed string ToString() :448
void Lerp__ToString_fn(Lerp* __this, uString** __retval)
{
    uStackFrame __("Fuse.Reactive.Lerp", "ToString()");
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[62/*"lerp("*/], __this->First()), ::STRINGS[13/*","*/]), __this->Second()), ::STRINGS[13/*","*/]), __this->Third()), ::STRINGS[5/*")"*/]), void();
}

// public Lerp(Fuse.Reactive.Expression first, Fuse.Reactive.Expression second, Fuse.Reactive.Expression third) [instance] :418
void Lerp::ctor_2(::g::Fuse::Reactive::Expression* first, ::g::Fuse::Reactive::Expression* second, ::g::Fuse::Reactive::Expression* third)
{
    ctor_1(first, second, third);
}

// public Lerp New(Fuse.Reactive.Expression first, Fuse.Reactive.Expression second, Fuse.Reactive.Expression third) [static] :418
Lerp* Lerp::New1(::g::Fuse::Reactive::Expression* first, ::g::Fuse::Reactive::Expression* second, ::g::Fuse::Reactive::Expression* third)
{
    Lerp* obj1 = (Lerp*)uNew(Lerp_typeof());
    obj1->ctor_2(first, second, third);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.4.0/Operators.uno
// ---------------------------------------------------------------------------

// public sealed class LessOrEqual :141
// {
static void LessOrEqual_build(uType* type)
{
    ::STRINGS[63] = uString::Const("<=");
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::InfixOperator_type, interface0));
    type->SetFields(2);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)LessOrEqual__New1_fn, 0, true, type, 2, ::g::Fuse::Reactive::Expression_typeof(), ::g::Fuse::Reactive::Expression_typeof()));
}

::g::Fuse::Reactive::InfixOperator_type* LessOrEqual_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::InfixOperator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::InfixOperator_typeof();
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(LessOrEqual);
    options.TypeSize = sizeof(::g::Fuse::Reactive::InfixOperator_type);
    type = (::g::Fuse::Reactive::InfixOperator_type*)uClassType::New("Fuse.Reactive.LessOrEqual", options);
    type->fp_build_ = LessOrEqual_build;
    type->fp_Compute = (void(*)(::g::Fuse::Reactive::BinaryOperator*, uObject*, uObject*, uObject**))LessOrEqual__Compute_fn;
    type->fp_get_Symbol = (void(*)(::g::Fuse::Reactive::InfixOperator*, uString**))LessOrEqual__get_Symbol_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::BinaryOperator__Subscribe_fn;
    return type;
}

// public LessOrEqual(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) :144
void LessOrEqual__ctor_3_fn(LessOrEqual* __this, ::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right)
{
    __this->ctor_3(left, right);
}

// protected override sealed object Compute(object left, object right) :145
void LessOrEqual__Compute_fn(LessOrEqual* __this, uObject* left, uObject* right, uObject** __retval)
{
    uStackFrame __("Fuse.Reactive.LessOrEqual", "Compute(object,object)");

    if ((left == NULL) || (right == NULL))
        return *__retval = NULL, void();

    return *__retval = uBox(::TYPES[9/*bool*/], uUnbox<bool>(::TYPES[9/*bool*/], ::g::Fuse::Marshal::LessThan(left, right)) || uUnbox<bool>(::TYPES[9/*bool*/], ::g::Fuse::Marshal::EqualTo(left, right))), void();
}

// public LessOrEqual New(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) :144
void LessOrEqual__New1_fn(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right, LessOrEqual** __retval)
{
    *__retval = LessOrEqual::New1(left, right);
}

// public override sealed string get_Symbol() :151
void LessOrEqual__get_Symbol_fn(LessOrEqual* __this, uString** __retval)
{
    return *__retval = ::STRINGS[63/*"<="*/], void();
}

// public LessOrEqual(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) [instance] :144
void LessOrEqual::ctor_3(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right)
{
    ctor_2(left, right);
}

// public LessOrEqual New(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) [static] :144
LessOrEqual* LessOrEqual::New1(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right)
{
    LessOrEqual* obj1 = (LessOrEqual*)uNew(LessOrEqual_typeof());
    obj1->ctor_3(left, right);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.4.0/Operators.uno
// ---------------------------------------------------------------------------

// public sealed class LessThan :104
// {
static void LessThan_build(uType* type)
{
    ::STRINGS[64] = uString::Const("<");
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::InfixOperator_type, interface0));
    type->SetFields(2);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)LessThan__New1_fn, 0, true, type, 2, ::g::Fuse::Reactive::Expression_typeof(), ::g::Fuse::Reactive::Expression_typeof()));
}

::g::Fuse::Reactive::InfixOperator_type* LessThan_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::InfixOperator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::InfixOperator_typeof();
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(LessThan);
    options.TypeSize = sizeof(::g::Fuse::Reactive::InfixOperator_type);
    type = (::g::Fuse::Reactive::InfixOperator_type*)uClassType::New("Fuse.Reactive.LessThan", options);
    type->fp_build_ = LessThan_build;
    type->fp_Compute = (void(*)(::g::Fuse::Reactive::BinaryOperator*, uObject*, uObject*, uObject**))LessThan__Compute_fn;
    type->fp_get_Symbol = (void(*)(::g::Fuse::Reactive::InfixOperator*, uString**))LessThan__get_Symbol_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::BinaryOperator__Subscribe_fn;
    return type;
}

// public LessThan(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) :107
void LessThan__ctor_3_fn(LessThan* __this, ::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right)
{
    __this->ctor_3(left, right);
}

// protected override sealed object Compute(object left, object right) :108
void LessThan__Compute_fn(LessThan* __this, uObject* left, uObject* right, uObject** __retval)
{
    uStackFrame __("Fuse.Reactive.LessThan", "Compute(object,object)");
    return *__retval = ::g::Fuse::Marshal::LessThan(left, right), void();
}

// public LessThan New(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) :107
void LessThan__New1_fn(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right, LessThan** __retval)
{
    *__retval = LessThan::New1(left, right);
}

// public override sealed string get_Symbol() :113
void LessThan__get_Symbol_fn(LessThan* __this, uString** __retval)
{
    return *__retval = ::STRINGS[64/*"<"*/], void();
}

// public LessThan(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) [instance] :107
void LessThan::ctor_3(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right)
{
    ctor_2(left, right);
}

// public LessThan New(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) [static] :107
LessThan* LessThan::New1(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right)
{
    LessThan* obj1 = (LessThan*)uNew(LessThan_typeof());
    obj1->ctor_3(left, right);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.4.0/MathFunctions.uno
// -------------------------------------------------------------------------------

// public sealed class Log :351
// {
static void Log_build(uType* type)
{
    ::STRINGS[26] = uString::Const("log");
    ::TYPES[0] = ::g::Fuse::Reactive::UnaryFloatOperator__FloatOp_typeof();
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::UnaryOperator_type, interface0));
    type->SetFields(3);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Log__New1_fn, 0, true, type, 1, ::g::Fuse::Reactive::Expression_typeof()));
}

::g::Fuse::Reactive::UnaryOperator_type* Log_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::UnaryOperator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::UnaryFloatOperator_typeof();
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Log);
    options.TypeSize = sizeof(::g::Fuse::Reactive::UnaryOperator_type);
    type = (::g::Fuse::Reactive::UnaryOperator_type*)uClassType::New("Fuse.Reactive.Log", options);
    type->fp_build_ = Log_build;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::UnaryOperator__Subscribe_fn;
    return type;
}

// public Log(Fuse.Reactive.Expression operand) :354
void Log__ctor_3_fn(Log* __this, ::g::Fuse::Reactive::Expression* operand)
{
    __this->ctor_3(operand);
}

// public Log New(Fuse.Reactive.Expression operand) :354
void Log__New1_fn(::g::Fuse::Reactive::Expression* operand, Log** __retval)
{
    *__retval = Log::New1(operand);
}

// public Log(Fuse.Reactive.Expression operand) [instance] :354
void Log::ctor_3(::g::Fuse::Reactive::Expression* operand)
{
    ctor_2(operand, ::STRINGS[26/*"log"*/], uDelegate::New(::TYPES[0/*Fuse.Reactive.UnaryFloatOperator.FloatOp*/], (void*)::g::Uno::Math__Log_fn));
}

// public Log New(Fuse.Reactive.Expression operand) [static] :354
Log* Log::New1(::g::Fuse::Reactive::Expression* operand)
{
    Log* obj1 = (Log*)uNew(Log_typeof());
    obj1->ctor_3(operand);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.4.0/MathFunctions.uno
// -------------------------------------------------------------------------------

// public sealed class Log2 :359
// {
static void Log2_build(uType* type)
{
    ::STRINGS[65] = uString::Const("log2");
    ::TYPES[0] = ::g::Fuse::Reactive::UnaryFloatOperator__FloatOp_typeof();
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::UnaryOperator_type, interface0));
    type->SetFields(3);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Log2__New1_fn, 0, true, type, 1, ::g::Fuse::Reactive::Expression_typeof()));
}

::g::Fuse::Reactive::UnaryOperator_type* Log2_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::UnaryOperator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::UnaryFloatOperator_typeof();
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Log2);
    options.TypeSize = sizeof(::g::Fuse::Reactive::UnaryOperator_type);
    type = (::g::Fuse::Reactive::UnaryOperator_type*)uClassType::New("Fuse.Reactive.Log2", options);
    type->fp_build_ = Log2_build;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::UnaryOperator__Subscribe_fn;
    return type;
}

// public Log2(Fuse.Reactive.Expression operand) :362
void Log2__ctor_3_fn(Log2* __this, ::g::Fuse::Reactive::Expression* operand)
{
    __this->ctor_3(operand);
}

// public Log2 New(Fuse.Reactive.Expression operand) :362
void Log2__New1_fn(::g::Fuse::Reactive::Expression* operand, Log2** __retval)
{
    *__retval = Log2::New1(operand);
}

// public Log2(Fuse.Reactive.Expression operand) [instance] :362
void Log2::ctor_3(::g::Fuse::Reactive::Expression* operand)
{
    ctor_2(operand, ::STRINGS[65/*"log2"*/], uDelegate::New(::TYPES[0/*Fuse.Reactive.UnaryFloatOperator.FloatOp*/], (void*)::g::Uno::Math__Log21_fn));
}

// public Log2 New(Fuse.Reactive.Expression operand) [static] :362
Log2* Log2::New1(::g::Fuse::Reactive::Expression* operand)
{
    Log2* obj1 = (Log2*)uNew(Log2_typeof());
    obj1->ctor_3(operand);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.4.0/Operators.uno
// ---------------------------------------------------------------------------

// public sealed class LogicalAnd :179
// {
static void LogicalAnd_build(uType* type)
{
    ::STRINGS[66] = uString::Const("&&");
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::InfixOperator_type, interface0));
    type->SetFields(2);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)LogicalAnd__New1_fn, 0, true, type, 2, ::g::Fuse::Reactive::Expression_typeof(), ::g::Fuse::Reactive::Expression_typeof()));
}

::g::Fuse::Reactive::InfixOperator_type* LogicalAnd_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::InfixOperator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::InfixOperator_typeof();
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(LogicalAnd);
    options.TypeSize = sizeof(::g::Fuse::Reactive::InfixOperator_type);
    type = (::g::Fuse::Reactive::InfixOperator_type*)uClassType::New("Fuse.Reactive.LogicalAnd", options);
    type->fp_build_ = LogicalAnd_build;
    type->fp_Compute = (void(*)(::g::Fuse::Reactive::BinaryOperator*, uObject*, uObject*, uObject**))LogicalAnd__Compute_fn;
    type->fp_get_Symbol = (void(*)(::g::Fuse::Reactive::InfixOperator*, uString**))LogicalAnd__get_Symbol_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::BinaryOperator__Subscribe_fn;
    return type;
}

// public LogicalAnd(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) :182
void LogicalAnd__ctor_3_fn(LogicalAnd* __this, ::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right)
{
    __this->ctor_3(left, right);
}

// protected override sealed object Compute(object left, object right) :183
void LogicalAnd__Compute_fn(LogicalAnd* __this, uObject* left, uObject* right, uObject** __retval)
{
    uStackFrame __("Fuse.Reactive.LogicalAnd", "Compute(object,object)");

    if ((left == NULL) || (right == NULL))
        return *__retval = NULL, void();

    return *__retval = uBox(::TYPES[9/*bool*/], ::g::Fuse::Marshal::ToBool(left) && ::g::Fuse::Marshal::ToBool(right)), void();
}

// public LogicalAnd New(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) :182
void LogicalAnd__New1_fn(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right, LogicalAnd** __retval)
{
    *__retval = LogicalAnd::New1(left, right);
}

// public override sealed string get_Symbol() :189
void LogicalAnd__get_Symbol_fn(LogicalAnd* __this, uString** __retval)
{
    return *__retval = ::STRINGS[66/*"&&"*/], void();
}

// public LogicalAnd(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) [instance] :182
void LogicalAnd::ctor_3(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right)
{
    ctor_2(left, right);
}

// public LogicalAnd New(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) [static] :182
LogicalAnd* LogicalAnd::New1(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right)
{
    LogicalAnd* obj1 = (LogicalAnd*)uNew(LogicalAnd_typeof());
    obj1->ctor_3(left, right);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.4.0/Operators.uno
// ---------------------------------------------------------------------------

// public sealed class LogicalOr :192
// {
static void LogicalOr_build(uType* type)
{
    ::STRINGS[67] = uString::Const("||");
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::InfixOperator_type, interface0));
    type->SetFields(2);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)LogicalOr__New1_fn, 0, true, type, 2, ::g::Fuse::Reactive::Expression_typeof(), ::g::Fuse::Reactive::Expression_typeof()));
}

::g::Fuse::Reactive::InfixOperator_type* LogicalOr_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::InfixOperator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::InfixOperator_typeof();
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(LogicalOr);
    options.TypeSize = sizeof(::g::Fuse::Reactive::InfixOperator_type);
    type = (::g::Fuse::Reactive::InfixOperator_type*)uClassType::New("Fuse.Reactive.LogicalOr", options);
    type->fp_build_ = LogicalOr_build;
    type->fp_Compute = (void(*)(::g::Fuse::Reactive::BinaryOperator*, uObject*, uObject*, uObject**))LogicalOr__Compute_fn;
    type->fp_get_Symbol = (void(*)(::g::Fuse::Reactive::InfixOperator*, uString**))LogicalOr__get_Symbol_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::BinaryOperator__Subscribe_fn;
    return type;
}

// public LogicalOr(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) :195
void LogicalOr__ctor_3_fn(LogicalOr* __this, ::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right)
{
    __this->ctor_3(left, right);
}

// protected override sealed object Compute(object left, object right) :196
void LogicalOr__Compute_fn(LogicalOr* __this, uObject* left, uObject* right, uObject** __retval)
{
    uStackFrame __("Fuse.Reactive.LogicalOr", "Compute(object,object)");

    if ((left == NULL) || (right == NULL))
        return *__retval = NULL, void();

    return *__retval = uBox(::TYPES[9/*bool*/], ::g::Fuse::Marshal::ToBool(left) || ::g::Fuse::Marshal::ToBool(right)), void();
}

// public LogicalOr New(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) :195
void LogicalOr__New1_fn(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right, LogicalOr** __retval)
{
    *__retval = LogicalOr::New1(left, right);
}

// public override sealed string get_Symbol() :202
void LogicalOr__get_Symbol_fn(LogicalOr* __this, uString** __retval)
{
    return *__retval = ::STRINGS[67/*"||"*/], void();
}

// public LogicalOr(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) [instance] :195
void LogicalOr::ctor_3(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right)
{
    ctor_2(left, right);
}

// public LogicalOr New(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) [static] :195
LogicalOr* LogicalOr::New1(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right)
{
    LogicalOr* obj1 = (LogicalOr*)uNew(LogicalOr_typeof());
    obj1->ctor_3(left, right);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.4.0/LookUp.uno
// ------------------------------------------------------------------------

// public sealed class LookUp :17
// {
static void LookUp_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::Expression_type, interface0));
    type->SetFields(0,
        ::g::Fuse::Reactive::Expression_typeof(), offsetof(LookUp, _Collection), 0,
        ::g::Fuse::Reactive::Expression_typeof(), offsetof(LookUp, _Index), 0);
    type->Reflection.SetFunctions(3,
        new uFunction("get_Collection", NULL, (void*)LookUp__get_Collection_fn, 0, false, ::g::Fuse::Reactive::Expression_typeof(), 0),
        new uFunction("get_Index", NULL, (void*)LookUp__get_Index_fn, 0, false, ::g::Fuse::Reactive::Expression_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)LookUp__New1_fn, 0, true, type, 2, ::g::Fuse::Reactive::Expression_typeof(), ::g::Fuse::Reactive::Expression_typeof()));
}

::g::Fuse::Reactive::Expression_type* LookUp_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::Expression_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::Expression_typeof();
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(LookUp);
    options.TypeSize = sizeof(::g::Fuse::Reactive::Expression_type);
    type = (::g::Fuse::Reactive::Expression_type*)uClassType::New("Fuse.Reactive.LookUp", options);
    type->fp_build_ = LookUp_build;
    type->fp_Subscribe = (void(*)(::g::Fuse::Reactive::Expression*, uObject*, uObject*, uObject**))LookUp__Subscribe_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))LookUp__Subscribe_fn;
    return type;
}

// public LookUp(Fuse.Reactive.Expression collection, Fuse.Reactive.Expression index) :23
void LookUp__ctor_1_fn(LookUp* __this, ::g::Fuse::Reactive::Expression* collection, ::g::Fuse::Reactive::Expression* index)
{
    __this->ctor_1(collection, index);
}

// public generated Fuse.Reactive.Expression get_Collection() :19
void LookUp__get_Collection_fn(LookUp* __this, ::g::Fuse::Reactive::Expression** __retval)
{
    *__retval = __this->Collection();
}

// private generated void set_Collection(Fuse.Reactive.Expression value) :19
void LookUp__set_Collection_fn(LookUp* __this, ::g::Fuse::Reactive::Expression* value)
{
    __this->Collection(value);
}

// public generated Fuse.Reactive.Expression get_Index() :20
void LookUp__get_Index_fn(LookUp* __this, ::g::Fuse::Reactive::Expression** __retval)
{
    *__retval = __this->Index();
}

// private generated void set_Index(Fuse.Reactive.Expression value) :20
void LookUp__set_Index_fn(LookUp* __this, ::g::Fuse::Reactive::Expression* value)
{
    __this->Index(value);
}

// public LookUp New(Fuse.Reactive.Expression collection, Fuse.Reactive.Expression index) :23
void LookUp__New1_fn(::g::Fuse::Reactive::Expression* collection, ::g::Fuse::Reactive::Expression* index, LookUp** __retval)
{
    *__retval = LookUp::New1(collection, index);
}

// public override sealed Uno.IDisposable Subscribe(Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :29
void LookUp__Subscribe_fn(LookUp* __this, uObject* context, uObject* listener, uObject** __retval)
{
    uStackFrame __("Fuse.Reactive.LookUp", "Subscribe(Fuse.Reactive.IContext,Fuse.Reactive.IListener)");
    return *__retval = (uObject*)LookUp__LookUpSubscription::New1(__this, context, listener), void();
}

// public LookUp(Fuse.Reactive.Expression collection, Fuse.Reactive.Expression index) [instance] :23
void LookUp::ctor_1(::g::Fuse::Reactive::Expression* collection, ::g::Fuse::Reactive::Expression* index)
{
    ctor_();
    Collection(collection);
    Index(index);
}

// public generated Fuse.Reactive.Expression get_Collection() [instance] :19
::g::Fuse::Reactive::Expression* LookUp::Collection()
{
    return _Collection;
}

// private generated void set_Collection(Fuse.Reactive.Expression value) [instance] :19
void LookUp::Collection(::g::Fuse::Reactive::Expression* value)
{
    _Collection = value;
}

// public generated Fuse.Reactive.Expression get_Index() [instance] :20
::g::Fuse::Reactive::Expression* LookUp::Index()
{
    return _Index;
}

// private generated void set_Index(Fuse.Reactive.Expression value) [instance] :20
void LookUp::Index(::g::Fuse::Reactive::Expression* value)
{
    _Index = value;
}

// public LookUp New(Fuse.Reactive.Expression collection, Fuse.Reactive.Expression index) [static] :23
LookUp* LookUp::New1(::g::Fuse::Reactive::Expression* collection, ::g::Fuse::Reactive::Expression* index)
{
    LookUp* obj1 = (LookUp*)uNew(LookUp_typeof());
    obj1->ctor_1(collection, index);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.4.0/LookUp.uno
// ------------------------------------------------------------------------

// private sealed class LookUp.LookUpSubscription :34
// {
static void LookUp__LookUpSubscription_build(uType* type)
{
    ::STRINGS[68] = uString::Const("Index must be a number: ");
    ::STRINGS[69] = uString::Const("Index was outside the bounds of the array");
    ::STRINGS[70] = uString::Const("Object does not contain the given key '");
    ::STRINGS[29] = uString::Const("'");
    ::STRINGS[71] = uString::Const("Look-up operator not supported on collection type: ");
    ::TYPES[2] = ::g::Uno::IDisposable_typeof();
    ::TYPES[27] = ::g::Fuse::Reactive::IObservableArray_typeof();
    ::TYPES[43] = ::g::Fuse::Reactive::IObservable_typeof();
    ::TYPES[23] = ::g::Fuse::Reactive::IListener_typeof();
    ::TYPES[25] = ::g::Fuse::IArray_typeof();
    ::TYPES[44] = ::g::Fuse::MarshalException_typeof();
    ::TYPES[45] = ::g::Fuse::IObject_typeof();
    ::TYPES[33] = ::g::Fuse::Reactive::IObservableObject_typeof();
    type->SetDependencies(
        ::g::Fuse::Diagnostics_typeof());
    type->SetInterfaces(
        ::TYPES[2/*Uno.IDisposable*/], offsetof(LookUp__LookUpSubscription_type, interface0),
        ::g::Fuse::Reactive::IObserver_typeof(), offsetof(LookUp__LookUpSubscription_type, interface1),
        ::TYPES[23/*Fuse.Reactive.IListener*/], offsetof(LookUp__LookUpSubscription_type, interface2),
        ::g::Fuse::Reactive::ValueForwarder__IValueListener_typeof(), offsetof(LookUp__LookUpSubscription_type, interface3),
        ::g::Fuse::Reactive::IPropertyObserver_typeof(), offsetof(LookUp__LookUpSubscription_type, interface4));
    type->SetFields(0,
        ::TYPES[23/*Fuse.Reactive.IListener*/], offsetof(LookUp__LookUpSubscription, _listener), 0,
        ::g::Fuse::Reactive::LookUp_typeof(), offsetof(LookUp__LookUpSubscription, _lu), 0,
        ::TYPES[2/*Uno.IDisposable*/], offsetof(LookUp__LookUpSubscription, _colSub), 0,
        ::TYPES[2/*Uno.IDisposable*/], offsetof(LookUp__LookUpSubscription, _indexSub), 0,
        ::g::Uno::Bool_typeof(), offsetof(LookUp__LookUpSubscription, _hasCollection), 0,
        uObject_typeof(), offsetof(LookUp__LookUpSubscription, _collection), 0,
        ::g::Uno::Bool_typeof(), offsetof(LookUp__LookUpSubscription, _hasIndex), 0,
        uObject_typeof(), offsetof(LookUp__LookUpSubscription, _index), 0,
        ::TYPES[2/*Uno.IDisposable*/], offsetof(LookUp__LookUpSubscription, _indexForwarder), 0,
        ::TYPES[2/*Uno.IDisposable*/], offsetof(LookUp__LookUpSubscription, _diag), 0,
        ::TYPES[2/*Uno.IDisposable*/], offsetof(LookUp__LookUpSubscription, _colObsObjSub), 0,
        ::TYPES[2/*Uno.IDisposable*/], offsetof(LookUp__LookUpSubscription, _colObservableSub), 0);
}

LookUp__LookUpSubscription_type* LookUp__LookUpSubscription_typeof()
{
    static uSStrong<LookUp__LookUpSubscription_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 12;
    options.InterfaceCount = 5;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(LookUp__LookUpSubscription);
    options.TypeSize = sizeof(LookUp__LookUpSubscription_type);
    type = (LookUp__LookUpSubscription_type*)uClassType::New("Fuse.Reactive.LookUp.LookUpSubscription", options);
    type->fp_build_ = LookUp__LookUpSubscription_build;
    type->interface3.fp_NewValue = (void(*)(uObject*, uObject*))LookUp__LookUpSubscription__FuseReactiveValueForwarderIValueListenerNewValue_fn;
    type->interface4.fp_OnPropertyChanged = (void(*)(uObject*, uObject*, uString*, uObject*))LookUp__LookUpSubscription__FuseReactiveIPropertyObserverOnPropertyChanged_fn;
    type->interface1.fp_OnClear = (void(*)(uObject*))LookUp__LookUpSubscription__FuseReactiveIObserverOnClear_fn;
    type->interface1.fp_OnSet = (void(*)(uObject*, uObject*))LookUp__LookUpSubscription__FuseReactiveIObserverOnSet_fn;
    type->interface1.fp_OnAdd = (void(*)(uObject*, uObject*))LookUp__LookUpSubscription__FuseReactiveIObserverOnAdd_fn;
    type->interface1.fp_OnNewAt = (void(*)(uObject*, int*, uObject*))LookUp__LookUpSubscription__FuseReactiveIObserverOnNewAt_fn;
    type->interface1.fp_OnFailed = (void(*)(uObject*, uString*))LookUp__LookUpSubscription__FuseReactiveIObserverOnFailed_fn;
    type->interface1.fp_OnNewAll = (void(*)(uObject*, uObject*))LookUp__LookUpSubscription__FuseReactiveIObserverOnNewAll_fn;
    type->interface1.fp_OnRemoveAt = (void(*)(uObject*, int*))LookUp__LookUpSubscription__FuseReactiveIObserverOnRemoveAt_fn;
    type->interface1.fp_OnInsertAt = (void(*)(uObject*, int*, uObject*))LookUp__LookUpSubscription__FuseReactiveIObserverOnInsertAt_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))LookUp__LookUpSubscription__Dispose_fn;
    type->interface2.fp_OnNewData = (void(*)(uObject*, uObject*, uObject*))LookUp__LookUpSubscription__OnNewData_fn;
    return type;
}

// public LookUpSubscription(Fuse.Reactive.LookUp lu, Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :42
void LookUp__LookUpSubscription__ctor__fn(LookUp__LookUpSubscription* __this, ::g::Fuse::Reactive::LookUp* lu, uObject* context, uObject* listener)
{
    __this->ctor_(lu, context, listener);
}

// public void ClearDiagnostic() :89
void LookUp__LookUpSubscription__ClearDiagnostic_fn(LookUp__LookUpSubscription* __this)
{
    __this->ClearDiagnostic();
}

// public void Dispose() :220
void LookUp__LookUpSubscription__Dispose_fn(LookUp__LookUpSubscription* __this)
{
    __this->Dispose();
}

// private void DisposeCollectionObservableObjectSub() :114
void LookUp__LookUpSubscription__DisposeCollectionObservableObjectSub_fn(LookUp__LookUpSubscription* __this)
{
    __this->DisposeCollectionObservableObjectSub();
}

// private void DisposeCollectionObservableSub() :141
void LookUp__LookUpSubscription__DisposeCollectionObservableSub_fn(LookUp__LookUpSubscription* __this)
{
    __this->DisposeCollectionObservableSub();
}

// private void DisposeIndexSub() :105
void LookUp__LookUpSubscription__DisposeIndexSub_fn(LookUp__LookUpSubscription* __this)
{
    __this->DisposeIndexSub();
}

// private void Fuse.Reactive.IObserver.OnAdd(object addedValue) :243
void LookUp__LookUpSubscription__FuseReactiveIObserverOnAdd_fn(LookUp__LookUpSubscription* __this, uObject* addedValue)
{
    uStackFrame __("Fuse.Reactive.LookUp.LookUpSubscription", "Fuse.Reactive.IObserver.OnAdd(object)");
    __this->ResultChanged();
}

// private void Fuse.Reactive.IObserver.OnClear() :241
void LookUp__LookUpSubscription__FuseReactiveIObserverOnClear_fn(LookUp__LookUpSubscription* __this)
{
    uStackFrame __("Fuse.Reactive.LookUp.LookUpSubscription", "Fuse.Reactive.IObserver.OnClear()");
    __this->ResultChanged();
}

// private void Fuse.Reactive.IObserver.OnFailed(string message) :245
void LookUp__LookUpSubscription__FuseReactiveIObserverOnFailed_fn(LookUp__LookUpSubscription* __this, uString* message)
{
    uStackFrame __("Fuse.Reactive.LookUp.LookUpSubscription", "Fuse.Reactive.IObserver.OnFailed(string)");
    __this->ResultChanged();
}

// private void Fuse.Reactive.IObserver.OnInsertAt(int index, object value) :248
void LookUp__LookUpSubscription__FuseReactiveIObserverOnInsertAt_fn(LookUp__LookUpSubscription* __this, int* index, uObject* value)
{
    uStackFrame __("Fuse.Reactive.LookUp.LookUpSubscription", "Fuse.Reactive.IObserver.OnInsertAt(int,object)");
    __this->ResultChanged();
}

// private void Fuse.Reactive.IObserver.OnNewAll(Fuse.IArray values) :246
void LookUp__LookUpSubscription__FuseReactiveIObserverOnNewAll_fn(LookUp__LookUpSubscription* __this, uObject* values)
{
    uStackFrame __("Fuse.Reactive.LookUp.LookUpSubscription", "Fuse.Reactive.IObserver.OnNewAll(Fuse.IArray)");
    __this->ResultChanged();
}

// private void Fuse.Reactive.IObserver.OnNewAt(int index, object value) :244
void LookUp__LookUpSubscription__FuseReactiveIObserverOnNewAt_fn(LookUp__LookUpSubscription* __this, int* index, uObject* value)
{
    uStackFrame __("Fuse.Reactive.LookUp.LookUpSubscription", "Fuse.Reactive.IObserver.OnNewAt(int,object)");
    __this->ResultChanged();
}

// private void Fuse.Reactive.IObserver.OnRemoveAt(int index) :247
void LookUp__LookUpSubscription__FuseReactiveIObserverOnRemoveAt_fn(LookUp__LookUpSubscription* __this, int* index)
{
    uStackFrame __("Fuse.Reactive.LookUp.LookUpSubscription", "Fuse.Reactive.IObserver.OnRemoveAt(int)");
    __this->ResultChanged();
}

// private void Fuse.Reactive.IObserver.OnSet(object newValue) :242
void LookUp__LookUpSubscription__FuseReactiveIObserverOnSet_fn(LookUp__LookUpSubscription* __this, uObject* newValue)
{
    uStackFrame __("Fuse.Reactive.LookUp.LookUpSubscription", "Fuse.Reactive.IObserver.OnSet(object)");
    __this->ResultChanged();
}

// private void Fuse.Reactive.IPropertyObserver.OnPropertyChanged(Uno.IDisposable sub, string propertyName, object newValue) :208
void LookUp__LookUpSubscription__FuseReactiveIPropertyObserverOnPropertyChanged_fn(LookUp__LookUpSubscription* __this, uObject* sub, uString* propertyName, uObject* newValue)
{
    uStackFrame __("Fuse.Reactive.LookUp.LookUpSubscription", "Fuse.Reactive.IPropertyObserver.OnPropertyChanged(Uno.IDisposable,string,object)");

    if (sub != __this->_colObsObjSub)
        return;

    if (::g::Uno::String::op_Inequality(propertyName, ::g::Uno::Object::ToString(uPtr(__this->_index))))
        return;

    __this->PushNewData(newValue);
}

// private void Fuse.Reactive.ValueForwarder.IValueListener.NewValue(object value) :98
void LookUp__LookUpSubscription__FuseReactiveValueForwarderIValueListenerNewValue_fn(LookUp__LookUpSubscription* __this, uObject* value)
{
    uStackFrame __("Fuse.Reactive.LookUp.LookUpSubscription", "Fuse.Reactive.ValueForwarder.IValueListener.NewValue(object)");
    __this->_index = value;
    __this->_hasIndex = true;
    __this->ResultChanged();
}

// public LookUpSubscription New(Fuse.Reactive.LookUp lu, Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :42
void LookUp__LookUpSubscription__New1_fn(::g::Fuse::Reactive::LookUp* lu, uObject* context, uObject* listener, LookUp__LookUpSubscription** __retval)
{
    *__retval = LookUp__LookUpSubscription::New1(lu, context, listener);
}

// private void NewCollection(object col) :125
void LookUp__LookUpSubscription__NewCollection_fn(LookUp__LookUpSubscription* __this, uObject* col)
{
    __this->NewCollection(col);
}

// private void NewIndex(object ind) :63
void LookUp__LookUpSubscription__NewIndex_fn(LookUp__LookUpSubscription* __this, uObject* ind)
{
    __this->NewIndex(ind);
}

// public void OnNewData(Fuse.Reactive.IExpression source, object value) :55
void LookUp__LookUpSubscription__OnNewData_fn(LookUp__LookUpSubscription* __this, uObject* source, uObject* value)
{
    __this->OnNewData(source, value);
}

// private void PushNewData(object value) :215
void LookUp__LookUpSubscription__PushNewData_fn(LookUp__LookUpSubscription* __this, uObject* value)
{
    __this->PushNewData(value);
}

// private void ResultChanged() :152
void LookUp__LookUpSubscription__ResultChanged_fn(LookUp__LookUpSubscription* __this)
{
    __this->ResultChanged();
}

// public void SetDiagnostic(string message, Fuse.Reactive.IExpression source) :83
void LookUp__LookUpSubscription__SetDiagnostic_fn(LookUp__LookUpSubscription* __this, uString* message, uObject* source)
{
    __this->SetDiagnostic(message, source);
}

// public LookUpSubscription(Fuse.Reactive.LookUp lu, Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) [instance] :42
void LookUp__LookUpSubscription::ctor_(::g::Fuse::Reactive::LookUp* lu, uObject* context, uObject* listener)
{
    uStackFrame __("Fuse.Reactive.LookUp.LookUpSubscription", ".ctor(Fuse.Reactive.LookUp,Fuse.Reactive.IContext,Fuse.Reactive.IListener)");
    _listener = listener;
    _lu = lu;
    _colSub = uPtr(uPtr(_lu)->Collection())->Subscribe(context, (uObject*)this);
    _indexSub = uPtr(uPtr(_lu)->Index())->Subscribe(context, (uObject*)this);
}

// public void ClearDiagnostic() [instance] :89
void LookUp__LookUpSubscription::ClearDiagnostic()
{
    uStackFrame __("Fuse.Reactive.LookUp.LookUpSubscription", "ClearDiagnostic()");

    if (_diag != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_diag), ::TYPES[2/*Uno.IDisposable*/]));
        _diag = NULL;
    }
}

// public void Dispose() [instance] :220
void LookUp__LookUpSubscription::Dispose()
{
    uStackFrame __("Fuse.Reactive.LookUp.LookUpSubscription", "Dispose()");
    ClearDiagnostic();
    DisposeCollectionObservableObjectSub();
    DisposeCollectionObservableSub();
    DisposeIndexSub();

    if (_colSub != NULL)
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_colSub), ::TYPES[2/*Uno.IDisposable*/]));

    if (_indexSub != NULL)
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_indexSub), ::TYPES[2/*Uno.IDisposable*/]));

    _colSub = NULL;
    _indexSub = NULL;
    _collection = NULL;
    _listener = NULL;
    _index = NULL;
    _lu = NULL;
}

// private void DisposeCollectionObservableObjectSub() [instance] :114
void LookUp__LookUpSubscription::DisposeCollectionObservableObjectSub()
{
    uStackFrame __("Fuse.Reactive.LookUp.LookUpSubscription", "DisposeCollectionObservableObjectSub()");

    if (_colObsObjSub != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_colObsObjSub), ::TYPES[2/*Uno.IDisposable*/]));
        _colObsObjSub = NULL;
    }
}

// private void DisposeCollectionObservableSub() [instance] :141
void LookUp__LookUpSubscription::DisposeCollectionObservableSub()
{
    uStackFrame __("Fuse.Reactive.LookUp.LookUpSubscription", "DisposeCollectionObservableSub()");

    if (_colObservableSub != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_colObservableSub), ::TYPES[2/*Uno.IDisposable*/]));
        _colObservableSub = NULL;
    }
}

// private void DisposeIndexSub() [instance] :105
void LookUp__LookUpSubscription::DisposeIndexSub()
{
    uStackFrame __("Fuse.Reactive.LookUp.LookUpSubscription", "DisposeIndexSub()");

    if (_indexForwarder != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_indexForwarder), ::TYPES[2/*Uno.IDisposable*/]));
        _indexForwarder = NULL;
    }
}

// private void NewCollection(object col) [instance] :125
void LookUp__LookUpSubscription::NewCollection(uObject* col)
{
    uStackFrame __("Fuse.Reactive.LookUp.LookUpSubscription", "NewCollection(object)");
    _collection = col;
    _hasCollection = true;
    DisposeCollectionObservableObjectSub();
    DisposeCollectionObservableSub();
    uObject* obs = uAs<uObject*>(col, ::TYPES[27/*Fuse.Reactive.IObservableArray*/]);

    if (obs != NULL)
        _colObservableSub = ::g::Fuse::Reactive::IObservableArray::Subscribe(uInterface(uPtr(obs), ::TYPES[27/*Fuse.Reactive.IObservableArray*/]), (uObject*)this);

    ResultChanged();
}

// private void NewIndex(object ind) [instance] :63
void LookUp__LookUpSubscription::NewIndex(uObject* ind)
{
    uStackFrame __("Fuse.Reactive.LookUp.LookUpSubscription", "NewIndex(object)");
    DisposeIndexSub();
    uObject* obs = uAs<uObject*>(ind, ::TYPES[43/*Fuse.Reactive.IObservable*/]);

    if (obs != NULL)
        _indexForwarder = (uObject*)::g::Fuse::Reactive::ValueForwarder::New1(obs, (uObject*)this);
    else
    {
        _index = ind;
        _hasIndex = true;
        ResultChanged();
    }
}

// public void OnNewData(Fuse.Reactive.IExpression source, object value) [instance] :55
void LookUp__LookUpSubscription::OnNewData(uObject* source, uObject* value)
{
    uStackFrame __("Fuse.Reactive.LookUp.LookUpSubscription", "OnNewData(Fuse.Reactive.IExpression,object)");

    if (_lu == NULL)
        return;

    if (source == uPtr(_lu)->Index())
        NewIndex(value);

    if (source == uPtr(_lu)->Collection())
        NewCollection(value);
}

// private void PushNewData(object value) [instance] :215
void LookUp__LookUpSubscription::PushNewData(uObject* value)
{
    uStackFrame __("Fuse.Reactive.LookUp.LookUpSubscription", "PushNewData(object)");
    ::g::Fuse::Reactive::IListener::OnNewData(uInterface(uPtr(_listener), ::TYPES[23/*Fuse.Reactive.IListener*/]), (uObject*)_lu, value);
}

// private void ResultChanged() [instance] :152
void LookUp__LookUpSubscription::ResultChanged()
{
    uStackFrame __("Fuse.Reactive.LookUp.LookUpSubscription", "ResultChanged()");

    if (_listener == NULL)
        return;

    ClearDiagnostic();

    if (!_hasIndex)
        return;

    if (!_hasCollection)
        return;

    if ((_index == NULL) || (_collection == NULL))
        PushNewData(NULL);

    uObject* arr = uAs<uObject*>(_collection, ::TYPES[25/*Fuse.IArray*/]);

    if (arr != NULL)
    {
        int index = 0;

        try
        {
            {
                index = ::g::Fuse::Marshal::ToInt(_index);
            }
        }

        catch (const uThrowable& __t)
        {
            if (uIs(__t.Exception, ::TYPES[44/*Fuse.MarshalException*/]))
            {
                ::g::Fuse::MarshalException* me = (::g::Fuse::MarshalException*)__t.Exception;
                SetDiagnostic(::g::Uno::String::op_Addition2(::STRINGS[68/*"Index must ...*/], uPtr(me)->Message()), (uObject*)uPtr(_lu)->Index());
                return;
            }
            else             throw __t;
        }

        if ((index >= 0) && (index < ::g::Fuse::IArray::Length(uInterface(uPtr(arr), ::TYPES[25/*Fuse.IArray*/]))))
            PushNewData(::g::Fuse::IArray::Item(uInterface(uPtr(arr), ::TYPES[25/*Fuse.IArray*/]), index));
        else
            SetDiagnostic(::STRINGS[69/*"Index was o...*/], (uObject*)uPtr(_lu)->Index());

        return;
    }

    uObject* obj = uAs<uObject*>(_collection, ::TYPES[45/*Fuse.IObject*/]);

    if (obj != NULL)
    {
        uObject* obsObj = uAs<uObject*>(obj, ::TYPES[33/*Fuse.Reactive.IObservableObject*/]);

        if (obsObj != NULL)
            _colObsObjSub = ::g::Fuse::Reactive::IObservableObject::Subscribe(uInterface(uPtr(obsObj), ::TYPES[33/*Fuse.Reactive.IObservableObject*/]), (uObject*)this);

        uString* key = ::g::Uno::Object::ToString(uPtr(_index));

        if (::g::Fuse::IObject::ContainsKey(uInterface(uPtr(obj), ::TYPES[45/*Fuse.IObject*/]), key))
            PushNewData(::g::Fuse::IObject::Item(uInterface(uPtr(obj), ::TYPES[45/*Fuse.IObject*/]), key));
        else
            SetDiagnostic(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[70/*"Object does...*/], key), ::STRINGS[29/*"'"*/]), (uObject*)uPtr(_lu)->Index());

        return;
    }

    SetDiagnostic(::g::Uno::String::op_Addition1(::STRINGS[71/*"Look-up ope...*/], _collection), (uObject*)uPtr(_lu)->Collection());
}

// public void SetDiagnostic(string message, Fuse.Reactive.IExpression source) [instance] :83
void LookUp__LookUpSubscription::SetDiagnostic(uString* message, uObject* source)
{
    uStackFrame __("Fuse.Reactive.LookUp.LookUpSubscription", "SetDiagnostic(string,Fuse.Reactive.IExpression)");
    ClearDiagnostic();
    _diag = ::g::Fuse::Diagnostics::ReportTemporalUserWarning(message, source);
}

// public LookUpSubscription New(Fuse.Reactive.LookUp lu, Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) [static] :42
LookUp__LookUpSubscription* LookUp__LookUpSubscription::New1(::g::Fuse::Reactive::LookUp* lu, uObject* context, uObject* listener)
{
    LookUp__LookUpSubscription* obj1 = (LookUp__LookUpSubscription*)uNew(LookUp__LookUpSubscription_typeof());
    obj1->ctor_(lu, context, listener);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Bindings/1.4.0/MatchCase.uno
// ------------------------------------------------------------------------

// public sealed class Match :29
// {
static void Match_build(uType* type)
{
    ::STRINGS[72] = uString::Const("Not handled: OnAdd");
    ::STRINGS[73] = uString::Const("Not handled: InsertAt");
    ::STRINGS[74] = uString::Const("<Match> can not be used on lists (received OnNewAll)");
    ::STRINGS[75] = uString::Const("Not handled: OnNewAt");
    ::STRINGS[76] = uString::Const("<Match> can not be used on lists (received OnRemoveAt)");
    ::TYPES[46] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[47] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL);
    ::TYPES[48] = ::g::Uno::Collections::IEnumerator_typeof();
    ::TYPES[49] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL);
    ::TYPES[39] = ::g::Fuse::Node_typeof();
    ::TYPES[2] = ::g::Uno::IDisposable_typeof();
    ::TYPES[50] = ::g::Fuse::Reactive::IObserver_typeof();
    ::TYPES[25] = ::g::Fuse::IArray_typeof();
    ::TYPES[51] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Reactive::Case_typeof(), NULL);
    ::TYPES[52] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::TYPES[39/*Fuse.Node*/], NULL);
    ::TYPES[53] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Fuse::Reactive::Case_typeof(), NULL);
    ::TYPES[9] = ::g::Uno::Bool_typeof();
    ::TYPES[54] = ::g::Uno::Collections::RootableList_typeof()->MakeType(::g::Fuse::Reactive::Case_typeof(), NULL);
    ::TYPES[17] = ::g::Uno::Int_typeof();
    ::TYPES[11] = ::g::Uno::Double_typeof();
    ::TYPES[12] = ::g::Uno::String_typeof();
    ::TYPES[43] = ::g::Fuse::Reactive::IObservable_typeof();
    ::TYPES[27] = ::g::Fuse::Reactive::IObservableArray_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(Match_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(Match_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(Match_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(Match_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(Match_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(Match_type, interface5),
        ::TYPES[50/*Fuse.Reactive.IObserver*/], offsetof(Match_type, interface6));
    type->SetFields(16,
        ::TYPES[54/*Uno.Collections.RootableList<Fuse.Reactive.Case>*/], offsetof(Match, _cases), 0,
        ::TYPES[2/*Uno.IDisposable*/], offsetof(Match, _subscription), 0,
        uObject_typeof(), offsetof(Match, _realValue), 0,
        uObject_typeof(), offsetof(Match, _value), 0,
        ::TYPES[46/*Uno.Collections.List<Fuse.Node>*/], offsetof(Match, _elements), 0,
        ::g::Fuse::Reactive::Case_typeof(), offsetof(Match, _oldCase), 0);
    type->Reflection.SetFunctions(12,
        new uFunction("get_Bool", NULL, (void*)Match__get_Bool_fn, 0, false, ::TYPES[9/*bool*/], 0),
        new uFunction("set_Bool", NULL, (void*)Match__set_Bool_fn, 0, false, uVoid_typeof(), 1, ::TYPES[9/*bool*/]),
        new uFunction("get_Cases", NULL, (void*)Match__get_Cases_fn, 0, false, ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Reactive::Case_typeof(), NULL), 0),
        new uFunction("get_Integer", NULL, (void*)Match__get_Integer_fn, 0, false, ::TYPES[17/*int*/], 0),
        new uFunction("set_Integer", NULL, (void*)Match__set_Integer_fn, 0, false, uVoid_typeof(), 1, ::TYPES[17/*int*/]),
        new uFunction(".ctor", NULL, (void*)Match__New2_fn, 0, true, type, 0),
        new uFunction("get_Number", NULL, (void*)Match__get_Number_fn, 0, false, ::TYPES[11/*double*/], 0),
        new uFunction("set_Number", NULL, (void*)Match__set_Number_fn, 0, false, uVoid_typeof(), 1, ::TYPES[11/*double*/]),
        new uFunction("get_String", NULL, (void*)Match__get_String_fn, 0, false, ::TYPES[12/*string*/], 0),
        new uFunction("set_String", NULL, (void*)Match__set_String_fn, 0, false, uVoid_typeof(), 1, ::TYPES[12/*string*/]),
        new uFunction("get_Value", NULL, (void*)Match__get_Value_fn, 0, false, uObject_typeof(), 0),
        new uFunction("set_Value", NULL, (void*)Match__set_Value_fn, 0, false, uVoid_typeof(), 1, uObject_typeof()));
}

Match_type* Match_typeof()
{
    static uSStrong<Match_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Behavior_typeof();
    options.FieldCount = 22;
    options.InterfaceCount = 7;
    options.ObjectSize = sizeof(Match);
    options.TypeSize = sizeof(Match_type);
    type = (Match_type*)uClassType::New("Fuse.Reactive.Match", options);
    type->fp_build_ = Match_build;
    type->fp_ctor_ = (void*)Match__New2_fn;
    type->fp_GetLastNodeInGroup = (void(*)(::g::Fuse::Node*, ::g::Fuse::Node**))Match__GetLastNodeInGroup_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))Match__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))Match__OnUnrooted_fn;
    type->interface6.fp_OnSet = (void(*)(uObject*, uObject*))Match__FuseReactiveIObserverOnSet_fn;
    type->interface6.fp_OnClear = (void(*)(uObject*))Match__FuseReactiveIObserverOnClear_fn;
    type->interface6.fp_OnAdd = (void(*)(uObject*, uObject*))Match__FuseReactiveIObserverOnAdd_fn;
    type->interface6.fp_OnNewAt = (void(*)(uObject*, int*, uObject*))Match__FuseReactiveIObserverOnNewAt_fn;
    type->interface6.fp_OnInsertAt = (void(*)(uObject*, int*, uObject*))Match__FuseReactiveIObserverOnInsertAt_fn;
    type->interface6.fp_OnFailed = (void(*)(uObject*, uString*))Match__FuseReactiveIObserverOnFailed_fn;
    type->interface6.fp_OnNewAll = (void(*)(uObject*, uObject*))Match__FuseReactiveIObserverOnNewAll_fn;
    type->interface6.fp_OnRemoveAt = (void(*)(uObject*, int*))Match__FuseReactiveIObserverOnRemoveAt_fn;
    type->interface4.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface4.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface5.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface4.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface4.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public generated Match() :29
void Match__ctor_3_fn(Match* __this)
{
    __this->ctor_3();
}

// private void AddElements(Fuse.Reactive.Case c) :241
void Match__AddElements_fn(Match* __this, ::g::Fuse::Reactive::Case* c)
{
    __this->AddElements(c);
}

// public bool get_Bool() :178
void Match__get_Bool_fn(Match* __this, bool* __retval)
{
    *__retval = __this->Bool();
}

// public void set_Bool(bool value) :179
void Match__set_Bool_fn(Match* __this, bool* value)
{
    __this->Bool(*value);
}

// public Uno.Collections.IList<Fuse.Reactive.Case> get_Cases() :38
void Match__get_Cases_fn(Match* __this, uObject** __retval)
{
    *__retval = __this->Cases();
}

// private void Fuse.Reactive.IObserver.OnAdd(object addedValue) :73
void Match__FuseReactiveIObserverOnAdd_fn(Match* __this, uObject* addedValue)
{
    uStackFrame __("Fuse.Reactive.Match", "Fuse.Reactive.IObserver.OnAdd(object)");
    U_THROW(::g::Uno::Exception::New2(::STRINGS[72/*"Not handled...*/]));
}

// private void Fuse.Reactive.IObserver.OnClear() :68
void Match__FuseReactiveIObserverOnClear_fn(Match* __this)
{
}

// private void Fuse.Reactive.IObserver.OnFailed(string message) :88
void Match__FuseReactiveIObserverOnFailed_fn(Match* __this, uString* message)
{
    uStackFrame __("Fuse.Reactive.Match", "Fuse.Reactive.IObserver.OnFailed(string)");
    ::g::Fuse::Reactive::IObserver::OnClear(uInterface(uPtr(uAs<uObject*>(__this, ::TYPES[50/*Fuse.Reactive.IObserver*/])), ::TYPES[50/*Fuse.Reactive.IObserver*/]));
}

// private void Fuse.Reactive.IObserver.OnInsertAt(int index, object value) :83
void Match__FuseReactiveIObserverOnInsertAt_fn(Match* __this, int* index, uObject* value)
{
    uStackFrame __("Fuse.Reactive.Match", "Fuse.Reactive.IObserver.OnInsertAt(int,object)");
    U_THROW(::g::Uno::Exception::New2(::STRINGS[73/*"Not handled...*/]));
}

// private void Fuse.Reactive.IObserver.OnNewAll(Fuse.IArray values) :94
void Match__FuseReactiveIObserverOnNewAll_fn(Match* __this, uObject* values)
{
    uStackFrame __("Fuse.Reactive.Match", "Fuse.Reactive.IObserver.OnNewAll(Fuse.IArray)");

    if (::g::Fuse::IArray::Length(uInterface(uPtr(values), ::TYPES[25/*Fuse.IArray*/])) == 0)
    {
        __this->_realValue = NULL;
        __this->Invalidate();
        return;
    }

    U_THROW(::g::Uno::Exception::New2(::STRINGS[74/*"<Match> can...*/]));
}

// private void Fuse.Reactive.IObserver.OnNewAt(int index, object value) :78
void Match__FuseReactiveIObserverOnNewAt_fn(Match* __this, int* index, uObject* value)
{
    uStackFrame __("Fuse.Reactive.Match", "Fuse.Reactive.IObserver.OnNewAt(int,object)");
    U_THROW(::g::Uno::Exception::New2(::STRINGS[75/*"Not handled...*/]));
}

// private void Fuse.Reactive.IObserver.OnRemoveAt(int index) :106
void Match__FuseReactiveIObserverOnRemoveAt_fn(Match* __this, int* index)
{
    uStackFrame __("Fuse.Reactive.Match", "Fuse.Reactive.IObserver.OnRemoveAt(int)");
    U_THROW(::g::Uno::Exception::New2(::STRINGS[76/*"<Match> can...*/]));
}

// private void Fuse.Reactive.IObserver.OnSet(object newValue) :62
void Match__FuseReactiveIObserverOnSet_fn(Match* __this, uObject* newValue)
{
    __this->_realValue = newValue;
    __this->Invalidate();
}

// internal override sealed Fuse.Node GetLastNodeInGroup() :261
void Match__GetLastNodeInGroup_fn(Match* __this, ::g::Fuse::Node** __retval)
{
    uStackFrame __("Fuse.Reactive.Match", "GetLastNodeInGroup()");
    ::g::Fuse::Node* ret8;

    if (uPtr(__this->_elements)->Count() == 0)
        return *__retval = __this, void();

    return *__retval = (::g::Uno::Collections::List__get_Item_fn(uPtr(__this->_elements), uCRef<int>(uPtr(__this->_elements)->Count() - 1), &ret8), ret8), void();
}

// public int get_Integer() :170
void Match__get_Integer_fn(Match* __this, int* __retval)
{
    *__retval = __this->Integer();
}

// public void set_Integer(int value) :171
void Match__set_Integer_fn(Match* __this, int* value)
{
    __this->Integer(*value);
}

// internal void Invalidate() :200
void Match__Invalidate_fn(Match* __this)
{
    __this->Invalidate();
}

// public generated Match New() :29
void Match__New2_fn(Match** __retval)
{
    *__retval = Match::New2();
}

// public double get_Number() :162
void Match__get_Number_fn(Match* __this, double* __retval)
{
    *__retval = __this->Number();
}

// public void set_Number(double value) :163
void Match__set_Number_fn(Match* __this, double* value)
{
    __this->Number(*value);
}

// private void OnCaseAdded(Fuse.Reactive.Case c) :50
void Match__OnCaseAdded_fn(Match* __this, ::g::Fuse::Reactive::Case* c)
{
    __this->OnCaseAdded(c);
}

// private void OnCaseRemoved(Fuse.Reactive.Case c) :56
void Match__OnCaseRemoved_fn(Match* __this, ::g::Fuse::Reactive::Case* c)
{
    __this->OnCaseRemoved(c);
}

// protected override sealed void OnRooted() :182
void Match__OnRooted_fn(Match* __this)
{
    uStackFrame __("Fuse.Reactive.Match", "OnRooted()");
    ::g::Fuse::Node__OnRooted_fn(__this);
    uPtr(__this->_cases)->RootSubscribe(uDelegate::New(::TYPES[51/*Uno.Action<Fuse.Reactive.Case>*/], (void*)Match__OnCaseAdded_fn, __this), uDelegate::New(::TYPES[51/*Uno.Action<Fuse.Reactive.Case>*/], (void*)Match__OnCaseRemoved_fn, __this));
    __this->Update();
}

// protected override sealed void OnUnrooted() :189
void Match__OnUnrooted_fn(Match* __this)
{
    uStackFrame __("Fuse.Reactive.Match", "OnUnrooted()");
    __this->RemoveElements();
    uPtr(__this->_cases)->RootUnsubscribe();
    ::g::Fuse::Node__OnUnrooted_fn(__this);
}

// private void RemoveElements() :229
void Match__RemoveElements_fn(Match* __this)
{
    __this->RemoveElements();
}

// private Fuse.Reactive.Case SelectCase() :218
void Match__SelectCase_fn(Match* __this, ::g::Fuse::Reactive::Case** __retval)
{
    *__retval = __this->SelectCase();
}

// public string get_String() :154
void Match__get_String_fn(Match* __this, uString** __retval)
{
    *__retval = __this->String();
}

// public void set_String(string value) :155
void Match__set_String_fn(Match* __this, uString* value)
{
    __this->String(value);
}

// private void Update() :207
void Match__Update_fn(Match* __this)
{
    __this->Update();
}

// public object get_Value() :119
void Match__get_Value_fn(Match* __this, uObject** __retval)
{
    *__retval = __this->Value();
}

// public void set_Value(object value) :120
void Match__set_Value_fn(Match* __this, uObject* value)
{
    __this->Value(value);
}

// public generated Match() [instance] :29
void Match::ctor_3()
{
    _elements = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[46/*Uno.Collections.List<Fuse.Node>*/]));
    ctor_2();
}

// private void AddElements(Fuse.Reactive.Case c) [instance] :241
void Match::AddElements(::g::Fuse::Reactive::Case* c)
{
    uStackFrame __("Fuse.Reactive.Match", "AddElements(Fuse.Reactive.Case)");
    ::g::Fuse::Node* ind4;
    ::g::Uno::UX::Template* ret6;
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Node*> > ret7;

    if (c != NULL)
    {
        uObject* enum3 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(uPtr(c)->Factories()), ::TYPES[47/*Uno.Collections.IEnumerable<Uno.UX.Template>*/]));

        try
        {
            {
                while (::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum3), ::TYPES[48/*Uno.Collections.IEnumerator*/])))
                {
                    ::g::Uno::UX::Template* f = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum3), ::TYPES[49/*Uno.Collections.IEnumerator<Uno.UX.Template>*/]), &ret6), ret6);
                    ::g::Fuse::Node* elm = uAs< ::g::Fuse::Node*>(uPtr(f)->New1(), ::TYPES[39/*Fuse.Node*/]);

                    if (elm != NULL)
                    {
                        uPtr(elm)->OverrideContextParent = (ind4 = uPtr(elm)->OverrideContextParent, ((ind4 != NULL) ? ind4 : this));
                        ::g::Uno::Collections::List__Add_fn(uPtr(_elements), elm);
                    }
                }
            }
            {
                ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum3), ::TYPES[2/*Uno.IDisposable*/]));
            }
        }

        catch (const uThrowable& __t)
        {
            {
                ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum3), ::TYPES[2/*Uno.IDisposable*/]));
            }
                        throw __t;
        }

        uPtr(Parent())->InsertNodesAfter(this, uBox(::TYPES[52/*Uno.Collections.List<Fuse.Node>.Enumerator*/], (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(_elements), &ret7), ret7)));
    }

    _oldCase = c;
}

// public bool get_Bool() [instance] :178
bool Match::Bool()
{
    uStackFrame __("Fuse.Reactive.Match", "get_Bool()");
    return uIs((uObject*)Value(), ::TYPES[9/*bool*/]) ? uUnbox<bool>(::TYPES[9/*bool*/], Value()) : false;
}

// public void set_Bool(bool value) [instance] :179
void Match::Bool(bool value)
{
    uStackFrame __("Fuse.Reactive.Match", "set_Bool(bool)");
    Value(uBox(::TYPES[9/*bool*/], value));
}

// public Uno.Collections.IList<Fuse.Reactive.Case> get_Cases() [instance] :38
uObject* Match::Cases()
{
    uStackFrame __("Fuse.Reactive.Match", "get_Cases()");

    if (_cases == NULL)
    {
        _cases = ((::g::Uno::Collections::RootableList*)::g::Uno::Collections::RootableList::New1(::TYPES[54/*Uno.Collections.RootableList<Fuse.Reactive.Case>*/]));

        if (IsRootingCompleted())
            uPtr(_cases)->Subscribe(uDelegate::New(::TYPES[51/*Uno.Action<Fuse.Reactive.Case>*/], (void*)Match__OnCaseAdded_fn, this), uDelegate::New(::TYPES[51/*Uno.Action<Fuse.Reactive.Case>*/], (void*)Match__OnCaseRemoved_fn, this));
    }

    return (uObject*)_cases;
}

// public int get_Integer() [instance] :170
int Match::Integer()
{
    uStackFrame __("Fuse.Reactive.Match", "get_Integer()");
    return uIs((uObject*)Value(), ::TYPES[17/*int*/]) ? uUnbox<int>(::TYPES[17/*int*/], Value()) : 0;
}

// public void set_Integer(int value) [instance] :171
void Match::Integer(int value)
{
    uStackFrame __("Fuse.Reactive.Match", "set_Integer(int)");
    Value(uBox<int>(::TYPES[17/*int*/], value));
}

// internal void Invalidate() [instance] :200
void Match::Invalidate()
{
    if (!IsRootingCompleted())
        return;

    Update();
}

// public double get_Number() [instance] :162
double Match::Number()
{
    uStackFrame __("Fuse.Reactive.Match", "get_Number()");
    return uIs((uObject*)Value(), ::TYPES[11/*double*/]) ? uUnbox<double>(::TYPES[11/*double*/], Value()) : 0.0;
}

// public void set_Number(double value) [instance] :163
void Match::Number(double value)
{
    uStackFrame __("Fuse.Reactive.Match", "set_Number(double)");
    Value(uBox(::TYPES[11/*double*/], value));
}

// private void OnCaseAdded(Fuse.Reactive.Case c) [instance] :50
void Match::OnCaseAdded(::g::Fuse::Reactive::Case* c)
{
    uStackFrame __("Fuse.Reactive.Match", "OnCaseAdded(Fuse.Reactive.Case)");
    uPtr(c)->Root(this);
    Invalidate();
}

// private void OnCaseRemoved(Fuse.Reactive.Case c) [instance] :56
void Match::OnCaseRemoved(::g::Fuse::Reactive::Case* c)
{
    uStackFrame __("Fuse.Reactive.Match", "OnCaseRemoved(Fuse.Reactive.Case)");
    uPtr(c)->Unroot();
    Invalidate();
}

// private void RemoveElements() [instance] :229
void Match::RemoveElements()
{
    uStackFrame __("Fuse.Reactive.Match", "RemoveElements()");
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Node*> > ret9;
    _oldCase = NULL;
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Fuse::Node*> > enum2 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(_elements), &ret9), ret9);

    try
    {
        {
            while (enum2.MoveNext(::TYPES[52/*Uno.Collections.List<Fuse.Node>.Enumerator*/]))
            {
                ::g::Fuse::Node* e = enum2.Current(::TYPES[52/*Uno.Collections.List<Fuse.Node>.Enumerator*/]);

                if (uPtr(e)->OverrideContextParent == this)
                    uPtr(e)->OverrideContextParent = NULL;

                uPtr(Parent())->BeginRemoveChild(e, NULL);
            }
        }
        {
            enum2.Dispose(::TYPES[52/*Uno.Collections.List<Fuse.Node>.Enumerator*/]);
        }
    }

    catch (const uThrowable& __t)
    {
        {
            enum2.Dispose(::TYPES[52/*Uno.Collections.List<Fuse.Node>.Enumerator*/]);
        }
                throw __t;
    }

    uPtr(_elements)->Clear();
}

// private Fuse.Reactive.Case SelectCase() [instance] :218
::g::Fuse::Reactive::Case* Match::SelectCase()
{
    uStackFrame __("Fuse.Reactive.Match", "SelectCase()");
    ::g::Fuse::Reactive::Case* ret10;
    ::g::Fuse::Reactive::Case* def = NULL;
    uObject* enum1 = (uObject*)uPtr(_cases)->GetEnumerator();

    try
    {
        {
            while (::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::TYPES[48/*Uno.Collections.IEnumerator*/])))
            {
                ::g::Fuse::Reactive::Case* c = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[53/*Uno.Collections.IEnumerator<Fuse.Reactive.Case>*/]), &ret10), ret10);

                if ((uPtr(c)->Value() != NULL) && ::g::Uno::Object::Equals(uPtr(uPtr(c)->Value()), _realValue))
                {
                    ::g::Fuse::Reactive::Case* __uno_retval = c;
                    ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum1), ::TYPES[2/*Uno.IDisposable*/]));
                    return __uno_retval;
                }

                if (uPtr(c)->IsDefault())
                    def = c;
            }
        }
        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum1), ::TYPES[2/*Uno.IDisposable*/]));
        }
    }

    catch (const uThrowable& __t)
    {
        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum1), ::TYPES[2/*Uno.IDisposable*/]));
        }
                throw __t;
    }

    return def;
}

// public string get_String() [instance] :154
uString* Match::String()
{
    return uAs<uString*>(Value(), ::TYPES[12/*string*/]);
}

// public void set_String(string value) [instance] :155
void Match::String(uString* value)
{
    uStackFrame __("Fuse.Reactive.Match", "set_String(string)");
    Value(value);
}

// private void Update() [instance] :207
void Match::Update()
{
    uStackFrame __("Fuse.Reactive.Match", "Update()");
    ::g::Fuse::Reactive::Case* newCase = SelectCase();

    if (newCase != _oldCase)
    {
        RemoveElements();

        if (newCase != NULL)
            AddElements(newCase);
    }
}

// public object get_Value() [instance] :119
uObject* Match::Value()
{
    return _value;
}

// public void set_Value(object value) [instance] :120
void Match::Value(uObject* value)
{
    uStackFrame __("Fuse.Reactive.Match", "set_Value(object)");

    if (_value != value)
    {
        _value = value;

        if (_subscription != NULL)
        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_subscription), ::TYPES[2/*Uno.IDisposable*/]));
            _subscription = NULL;
        }

        if (uIs((uObject*)_value, ::TYPES[43/*Fuse.Reactive.IObservable*/]))
        {
            uObject* obs = (uObject*)_value;

            if (::g::Fuse::IArray::Length(uInterface(uPtr(obs), ::TYPES[25/*Fuse.IArray*/])) > 0)
                _realValue = ::g::Fuse::IArray::Item(uInterface(uPtr(obs), ::TYPES[25/*Fuse.IArray*/]), 0);

            _subscription = ::g::Fuse::Reactive::IObservableArray::Subscribe(uInterface(uPtr(obs), ::TYPES[27/*Fuse.Reactive.IObservableArray*/]), (uObject*)this);
        }
        else
            _realValue = _value;

        Invalidate();
    }
}

// public generated Match New() [static] :29
Match* Match::New2()
{
    Match* obj5 = (Match*)uNew(Match_typeof());
    obj5->ctor_3();
    return obj5;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.4.0/MathFunctions.uno
// -------------------------------------------------------------------------------

// public sealed class Max :23
// {
static void Max_build(uType* type)
{
    ::STRINGS[77] = uString::Const("max(");
    ::STRINGS[4] = uString::Const(", ");
    ::STRINGS[5] = uString::Const(")");
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::BinaryOperator_type, interface0));
    type->SetFields(2);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Max__New1_fn, 0, true, type, 2, ::g::Fuse::Reactive::Expression_typeof(), ::g::Fuse::Reactive::Expression_typeof()));
}

::g::Fuse::Reactive::BinaryOperator_type* Max_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::BinaryOperator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::BinaryOperator_typeof();
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Max);
    options.TypeSize = sizeof(::g::Fuse::Reactive::BinaryOperator_type);
    type = (::g::Fuse::Reactive::BinaryOperator_type*)uClassType::New("Fuse.Reactive.Max", options);
    type->fp_build_ = Max_build;
    type->fp_Compute = (void(*)(::g::Fuse::Reactive::BinaryOperator*, uObject*, uObject*, uObject**))Max__Compute_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))Max__ToString_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::BinaryOperator__Subscribe_fn;
    return type;
}

// public Max(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) :26
void Max__ctor_2_fn(Max* __this, ::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right)
{
    __this->ctor_2(left, right);
}

// protected override sealed object Compute(object left, object right) :27
void Max__Compute_fn(Max* __this, uObject* left, uObject* right, uObject** __retval)
{
    uStackFrame __("Fuse.Reactive.Max", "Compute(object,object)");
    return *__retval = ::g::Fuse::Marshal::Max(left, right), void();
}

// public Max New(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) :26
void Max__New1_fn(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right, Max** __retval)
{
    *__retval = Max::New1(left, right);
}

// public override sealed string ToString() :32
void Max__ToString_fn(Max* __this, uString** __retval)
{
    uStackFrame __("Fuse.Reactive.Max", "ToString()");
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[77/*"max("*/], __this->Left()), ::STRINGS[4/*", "*/]), __this->Right()), ::STRINGS[5/*")"*/]), void();
}

// public Max(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) [instance] :26
void Max::ctor_2(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right)
{
    ctor_1(left, right);
}

// public Max New(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) [static] :26
Max* Max::New1(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right)
{
    Max* obj1 = (Max*)uNew(Max_typeof());
    obj1->ctor_2(left, right);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.4.0/Member.uno
// ------------------------------------------------------------------------

// public sealed class Member :8
// {
static void Member_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::UnaryOperator_type, interface0));
    type->SetFields(1,
        ::g::Uno::String_typeof(), offsetof(Member, _Name), 0);
    type->Reflection.SetFunctions(2,
        new uFunction("get_Name", NULL, (void*)Member__get_Name_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)Member__New1_fn, 0, true, type, 2, ::g::Fuse::Reactive::Expression_typeof(), ::g::Uno::String_typeof()));
}

::g::Fuse::Reactive::UnaryOperator_type* Member_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::UnaryOperator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::UnaryOperator_typeof();
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Member);
    options.TypeSize = sizeof(::g::Fuse::Reactive::UnaryOperator_type);
    type = (::g::Fuse::Reactive::UnaryOperator_type*)uClassType::New("Fuse.Reactive.Member", options);
    type->fp_build_ = Member_build;
    type->fp_Subscribe = (void(*)(::g::Fuse::Reactive::Expression*, uObject*, uObject*, uObject**))Member__Subscribe_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))Member__ToString_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))Member__Subscribe_fn;
    return type;
}

// public Member(Fuse.Reactive.Expression obj, string name) :12
void Member__ctor_2_fn(Member* __this, ::g::Fuse::Reactive::Expression* obj, uString* name)
{
    __this->ctor_2(obj, name);
}

// public generated string get_Name() :10
void Member__get_Name_fn(Member* __this, uString** __retval)
{
    *__retval = __this->Name();
}

// private generated void set_Name(string value) :10
void Member__set_Name_fn(Member* __this, uString* value)
{
    __this->Name(value);
}

// public Member New(Fuse.Reactive.Expression obj, string name) :12
void Member__New1_fn(::g::Fuse::Reactive::Expression* obj, uString* name, Member** __retval)
{
    *__retval = Member::New1(obj, name);
}

// public override sealed Uno.IDisposable Subscribe(Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :22
void Member__Subscribe_fn(Member* __this, uObject* context, uObject* listener, uObject** __retval)
{
    uStackFrame __("Fuse.Reactive.Member", "Subscribe(Fuse.Reactive.IContext,Fuse.Reactive.IListener)");
    return *__retval = (uObject*)Member__MemberSubscription::New2(__this, context, listener), void();
}

// public override sealed string ToString() :17
void Member__ToString_fn(Member* __this, uString** __retval)
{
    uStackFrame __("Fuse.Reactive.Member", "ToString()");
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::Object::ToString(uPtr(__this->Operand())), ::STRINGS[36/*"."*/]), __this->Name()), void();
}

// public Member(Fuse.Reactive.Expression obj, string name) [instance] :12
void Member::ctor_2(::g::Fuse::Reactive::Expression* obj, uString* name)
{
    ctor_1(obj);
    Name(name);
}

// public generated string get_Name() [instance] :10
uString* Member::Name()
{
    return _Name;
}

// private generated void set_Name(string value) [instance] :10
void Member::Name(uString* value)
{
    _Name = value;
}

// public Member New(Fuse.Reactive.Expression obj, string name) [static] :12
Member* Member::New1(::g::Fuse::Reactive::Expression* obj, uString* name)
{
    Member* obj1 = (Member*)uNew(Member_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.4.0/Member.uno
// ------------------------------------------------------------------------

// private sealed class Member.MemberSubscription :27
// {
static void Member__MemberSubscription_build(uType* type)
{
    ::STRINGS[29] = uString::Const("'");
    ::STRINGS[78] = uString::Const("' does not contain property '");
    ::TYPES[2] = ::g::Uno::IDisposable_typeof();
    ::TYPES[32] = ::g::Fuse::Reactive::IPropertySubscription_typeof();
    ::TYPES[45] = ::g::Fuse::IObject_typeof();
    ::TYPES[33] = ::g::Fuse::Reactive::IObservableObject_typeof();
    type->SetInterfaces(
        ::TYPES[2/*Uno.IDisposable*/], offsetof(Member__MemberSubscription_type, interface0),
        ::g::Fuse::Reactive::IListener_typeof(), offsetof(Member__MemberSubscription_type, interface1),
        ::g::Fuse::Reactive::IPropertyObserver_typeof(), offsetof(Member__MemberSubscription_type, interface2),
        ::g::Fuse::Reactive::IWriteable_typeof(), offsetof(Member__MemberSubscription_type, interface3));
    type->SetFields(5,
        ::g::Fuse::Reactive::Member_typeof(), offsetof(Member__MemberSubscription, _member), 0,
        ::TYPES[32/*Fuse.Reactive.IPropertySubscription*/], offsetof(Member__MemberSubscription, _obsObjSub), 0);
}

Member__MemberSubscription_type* Member__MemberSubscription_typeof()
{
    static uSStrong<Member__MemberSubscription_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::UnaryOperator__Subscription_typeof();
    options.FieldCount = 7;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(Member__MemberSubscription);
    options.TypeSize = sizeof(Member__MemberSubscription_type);
    type = (Member__MemberSubscription_type*)uClassType::New("Fuse.Reactive.Member.MemberSubscription", options);
    type->fp_build_ = Member__MemberSubscription_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Reactive::InnerListener*))Member__MemberSubscription__Dispose_fn;
    type->fp_OnNewOperand = (void(*)(::g::Fuse::Reactive::UnaryOperator__Subscription*, uObject*))Member__MemberSubscription__OnNewOperand_fn;
    type->interface2.fp_OnPropertyChanged = (void(*)(uObject*, uObject*, uString*, uObject*))Member__MemberSubscription__FuseReactiveIPropertyObserverOnPropertyChanged_fn;
    type->interface3.fp_TrySetExclusive = (void(*)(uObject*, uObject*, bool*))Member__MemberSubscription__FuseReactiveIWriteableTrySetExclusive_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))Member__MemberSubscription__Dispose_fn;
    type->interface1.fp_OnNewData = (void(*)(uObject*, uObject*, uObject*))::g::Fuse::Reactive::InnerListener__FuseReactiveIListenerOnNewData_fn;
    return type;
}

// public MemberSubscription(Fuse.Reactive.Member member, Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :30
void Member__MemberSubscription__ctor_2_fn(Member__MemberSubscription* __this, ::g::Fuse::Reactive::Member* member, uObject* context, uObject* listener)
{
    __this->ctor_2(member, context, listener);
}

// public override sealed void Dispose() :81
void Member__MemberSubscription__Dispose_fn(Member__MemberSubscription* __this)
{
    uStackFrame __("Fuse.Reactive.Member.MemberSubscription", "Dispose()");
    __this->DisposeObservableObjectSubscription();
    ::g::Fuse::Reactive::UnaryOperator__Subscription__Dispose_fn(__this);
}

// private void DisposeObservableObjectSubscription() :37
void Member__MemberSubscription__DisposeObservableObjectSubscription_fn(Member__MemberSubscription* __this)
{
    __this->DisposeObservableObjectSubscription();
}

// private void Fuse.Reactive.IPropertyObserver.OnPropertyChanged(Uno.IDisposable sub, string propName, object newValue) :67
void Member__MemberSubscription__FuseReactiveIPropertyObserverOnPropertyChanged_fn(Member__MemberSubscription* __this, uObject* sub, uString* propName, uObject* newValue)
{
    uStackFrame __("Fuse.Reactive.Member.MemberSubscription", "Fuse.Reactive.IPropertyObserver.OnPropertyChanged(Uno.IDisposable,string,object)");

    if (__this->_obsObjSub != sub)
        return;

    if (::g::Uno::String::op_Inequality(propName, uPtr(__this->_member)->Name()))
        return;

    __this->PushNewData(newValue);
}

// private bool Fuse.Reactive.IWriteable.TrySetExclusive(object newObj) :74
void Member__MemberSubscription__FuseReactiveIWriteableTrySetExclusive_fn(Member__MemberSubscription* __this, uObject* newObj, bool* __retval)
{
    uStackFrame __("Fuse.Reactive.Member.MemberSubscription", "Fuse.Reactive.IWriteable.TrySetExclusive(object)");

    if (__this->_obsObjSub != NULL)
        return *__retval = ::g::Fuse::Reactive::IPropertySubscription::TrySetExclusive(uInterface(uPtr(__this->_obsObjSub), ::TYPES[32/*Fuse.Reactive.IPropertySubscription*/]), uPtr(__this->_member)->Name(), newObj), void();

    return *__retval = false, void();
}

// public MemberSubscription New(Fuse.Reactive.Member member, Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :30
void Member__MemberSubscription__New2_fn(::g::Fuse::Reactive::Member* member, uObject* context, uObject* listener, Member__MemberSubscription** __retval)
{
    *__retval = Member__MemberSubscription::New2(member, context, listener);
}

// protected override sealed void OnNewOperand(object obj) :46
void Member__MemberSubscription__OnNewOperand_fn(Member__MemberSubscription* __this, uObject* obj)
{
    uStackFrame __("Fuse.Reactive.Member.MemberSubscription", "OnNewOperand(object)");
    __this->DisposeObservableObjectSubscription();
    __this->ClearDiagnostic();
    uObject* io = uAs<uObject*>(obj, ::TYPES[45/*Fuse.IObject*/]);

    if ((io != NULL) && ::g::Fuse::IObject::ContainsKey(uInterface(uPtr(io), ::TYPES[45/*Fuse.IObject*/]), uPtr(__this->_member)->Name()))
    {
        uObject* obsObj = uAs<uObject*>(io, ::TYPES[33/*Fuse.Reactive.IObservableObject*/]);

        if (obsObj != NULL)
            __this->_obsObjSub = ::g::Fuse::Reactive::IObservableObject::Subscribe(uInterface(uPtr(obsObj), ::TYPES[33/*Fuse.Reactive.IObservableObject*/]), (uObject*)__this);

        __this->PushNewData(::g::Fuse::IObject::Item(uInterface(uPtr(io), ::TYPES[45/*Fuse.IObject*/]), uPtr(__this->_member)->Name()));
    }
    else
        __this->SetDiagnostic(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[29/*"'"*/], ::g::Uno::Object::ToString(uPtr(uPtr(__this->_member)->Operand()))), ::STRINGS[78/*"' does not ...*/]), uPtr(__this->_member)->Name()), ::STRINGS[29/*"'"*/]), (uObject*)__this->_member);
}

// public MemberSubscription(Fuse.Reactive.Member member, Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) [instance] :30
void Member__MemberSubscription::ctor_2(::g::Fuse::Reactive::Member* member, uObject* context, uObject* listener)
{
    uStackFrame __("Fuse.Reactive.Member.MemberSubscription", ".ctor(Fuse.Reactive.Member,Fuse.Reactive.IContext,Fuse.Reactive.IListener)");
    ctor_1(member, listener);
    _member = member;
    Init(context);
}

// private void DisposeObservableObjectSubscription() [instance] :37
void Member__MemberSubscription::DisposeObservableObjectSubscription()
{
    uStackFrame __("Fuse.Reactive.Member.MemberSubscription", "DisposeObservableObjectSubscription()");

    if (_obsObjSub != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_obsObjSub), ::TYPES[2/*Uno.IDisposable*/]));
        _obsObjSub = NULL;
    }
}

// public MemberSubscription New(Fuse.Reactive.Member member, Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) [static] :30
Member__MemberSubscription* Member__MemberSubscription::New2(::g::Fuse::Reactive::Member* member, uObject* context, uObject* listener)
{
    Member__MemberSubscription* obj1 = (Member__MemberSubscription*)uNew(Member__MemberSubscription_typeof());
    obj1->ctor_2(member, context, listener);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.4.0/MathFunctions.uno
// -------------------------------------------------------------------------------

// public sealed class Min :7
// {
static void Min_build(uType* type)
{
    ::STRINGS[79] = uString::Const("min(");
    ::STRINGS[4] = uString::Const(", ");
    ::STRINGS[5] = uString::Const(")");
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::BinaryOperator_type, interface0));
    type->SetFields(2);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Min__New1_fn, 0, true, type, 2, ::g::Fuse::Reactive::Expression_typeof(), ::g::Fuse::Reactive::Expression_typeof()));
}

::g::Fuse::Reactive::BinaryOperator_type* Min_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::BinaryOperator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::BinaryOperator_typeof();
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Min);
    options.TypeSize = sizeof(::g::Fuse::Reactive::BinaryOperator_type);
    type = (::g::Fuse::Reactive::BinaryOperator_type*)uClassType::New("Fuse.Reactive.Min", options);
    type->fp_build_ = Min_build;
    type->fp_Compute = (void(*)(::g::Fuse::Reactive::BinaryOperator*, uObject*, uObject*, uObject**))Min__Compute_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))Min__ToString_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::BinaryOperator__Subscribe_fn;
    return type;
}

// public Min(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) :10
void Min__ctor_2_fn(Min* __this, ::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right)
{
    __this->ctor_2(left, right);
}

// protected override sealed object Compute(object left, object right) :11
void Min__Compute_fn(Min* __this, uObject* left, uObject* right, uObject** __retval)
{
    uStackFrame __("Fuse.Reactive.Min", "Compute(object,object)");
    return *__retval = ::g::Fuse::Marshal::Min(left, right), void();
}

// public Min New(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) :10
void Min__New1_fn(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right, Min** __retval)
{
    *__retval = Min::New1(left, right);
}

// public override sealed string ToString() :16
void Min__ToString_fn(Min* __this, uString** __retval)
{
    uStackFrame __("Fuse.Reactive.Min", "ToString()");
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[79/*"min("*/], __this->Left()), ::STRINGS[4/*", "*/]), __this->Right()), ::STRINGS[5/*")"*/]), void();
}

// public Min(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) [instance] :10
void Min::ctor_2(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right)
{
    ctor_1(left, right);
}

// public Min New(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) [static] :10
Min* Min::New1(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right)
{
    Min* obj1 = (Min*)uNew(Min_typeof());
    obj1->ctor_2(left, right);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.4.0/MathFunctions.uno
// -------------------------------------------------------------------------------

// public sealed class Mod :39
// {
static void Mod_build(uType* type)
{
    ::STRINGS[80] = uString::Const("mod(");
    ::STRINGS[4] = uString::Const(", ");
    ::STRINGS[5] = uString::Const(")");
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::BinaryOperator_type, interface0));
    type->SetFields(2);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Mod__New1_fn, 0, true, type, 2, ::g::Fuse::Reactive::Expression_typeof(), ::g::Fuse::Reactive::Expression_typeof()));
}

::g::Fuse::Reactive::BinaryOperator_type* Mod_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::BinaryOperator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::BinaryOperator_typeof();
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Mod);
    options.TypeSize = sizeof(::g::Fuse::Reactive::BinaryOperator_type);
    type = (::g::Fuse::Reactive::BinaryOperator_type*)uClassType::New("Fuse.Reactive.Mod", options);
    type->fp_build_ = Mod_build;
    type->fp_Compute = (void(*)(::g::Fuse::Reactive::BinaryOperator*, uObject*, uObject*, uObject**))Mod__Compute_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))Mod__ToString_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::BinaryOperator__Subscribe_fn;
    return type;
}

// public Mod(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) :42
void Mod__ctor_2_fn(Mod* __this, ::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right)
{
    __this->ctor_2(left, right);
}

// protected override sealed object Compute(object left, object right) :43
void Mod__Compute_fn(Mod* __this, uObject* left, uObject* right, uObject** __retval)
{
    uStackFrame __("Fuse.Reactive.Mod", "Compute(object,object)");
    return *__retval = uBox(::TYPES[18/*float*/], ::g::Uno::Math::Mod1(::g::Fuse::Marshal::ToFloat(left), ::g::Fuse::Marshal::ToFloat(right))), void();
}

// public Mod New(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) :42
void Mod__New1_fn(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right, Mod** __retval)
{
    *__retval = Mod::New1(left, right);
}

// public override sealed string ToString() :48
void Mod__ToString_fn(Mod* __this, uString** __retval)
{
    uStackFrame __("Fuse.Reactive.Mod", "ToString()");
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[80/*"mod("*/], __this->Left()), ::STRINGS[4/*", "*/]), __this->Right()), ::STRINGS[5/*")"*/]), void();
}

// public Mod(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) [instance] :42
void Mod::ctor_2(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right)
{
    ctor_1(left, right);
}

// public Mod New(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) [static] :42
Mod* Mod::New1(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right)
{
    Mod* obj1 = (Mod*)uNew(Mod_typeof());
    obj1->ctor_2(left, right);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.4.0/Operators.uno
// ---------------------------------------------------------------------------

// public sealed class Multiply :43
// {
static void Multiply_build(uType* type)
{
    ::STRINGS[81] = uString::Const("*");
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::InfixOperator_type, interface0));
    type->SetFields(2);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Multiply__New1_fn, 0, true, type, 2, ::g::Fuse::Reactive::Expression_typeof(), ::g::Fuse::Reactive::Expression_typeof()));
}

::g::Fuse::Reactive::InfixOperator_type* Multiply_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::InfixOperator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::InfixOperator_typeof();
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Multiply);
    options.TypeSize = sizeof(::g::Fuse::Reactive::InfixOperator_type);
    type = (::g::Fuse::Reactive::InfixOperator_type*)uClassType::New("Fuse.Reactive.Multiply", options);
    type->fp_build_ = Multiply_build;
    type->fp_Compute = (void(*)(::g::Fuse::Reactive::BinaryOperator*, uObject*, uObject*, uObject**))Multiply__Compute_fn;
    type->fp_get_Symbol = (void(*)(::g::Fuse::Reactive::InfixOperator*, uString**))Multiply__get_Symbol_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::BinaryOperator__Subscribe_fn;
    return type;
}

// public Multiply(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) :46
void Multiply__ctor_3_fn(Multiply* __this, ::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right)
{
    __this->ctor_3(left, right);
}

// protected override sealed object Compute(object left, object right) :47
void Multiply__Compute_fn(Multiply* __this, uObject* left, uObject* right, uObject** __retval)
{
    uStackFrame __("Fuse.Reactive.Multiply", "Compute(object,object)");
    return *__retval = ::g::Fuse::Marshal::Multiply(left, right), void();
}

// public Multiply New(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) :46
void Multiply__New1_fn(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right, Multiply** __retval)
{
    *__retval = Multiply::New1(left, right);
}

// public override sealed string get_Symbol() :52
void Multiply__get_Symbol_fn(Multiply* __this, uString** __retval)
{
    return *__retval = ::STRINGS[81/*"*"*/], void();
}

// public Multiply(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) [instance] :46
void Multiply::ctor_3(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right)
{
    ctor_2(left, right);
}

// public Multiply New(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) [static] :46
Multiply* Multiply::New1(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right)
{
    Multiply* obj1 = (Multiply*)uNew(Multiply_typeof());
    obj1->ctor_3(left, right);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.4.0/NameValuePair.uno
// -------------------------------------------------------------------------------

// public sealed class NameValuePair :6
// {
static void NameValuePair_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::BinaryOperator_type, interface0));
    type->SetFields(2);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)NameValuePair__New1_fn, 0, true, type, 2, ::g::Fuse::Reactive::Expression_typeof(), ::g::Fuse::Reactive::Expression_typeof()));
}

::g::Fuse::Reactive::BinaryOperator_type* NameValuePair_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::BinaryOperator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::BinaryOperator_typeof();
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(NameValuePair);
    options.TypeSize = sizeof(::g::Fuse::Reactive::BinaryOperator_type);
    type = (::g::Fuse::Reactive::BinaryOperator_type*)uClassType::New("Fuse.Reactive.NameValuePair", options);
    type->fp_build_ = NameValuePair_build;
    type->fp_Compute = (void(*)(::g::Fuse::Reactive::BinaryOperator*, uObject*, uObject*, uObject**))NameValuePair__Compute_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::BinaryOperator__Subscribe_fn;
    return type;
}

// public NameValuePair(Fuse.Reactive.Expression name, Fuse.Reactive.Expression value) :9
void NameValuePair__ctor_2_fn(NameValuePair* __this, ::g::Fuse::Reactive::Expression* name, ::g::Fuse::Reactive::Expression* value)
{
    __this->ctor_2(name, value);
}

// protected override sealed object Compute(object name, object value) :13
void NameValuePair__Compute_fn(NameValuePair* __this, uObject* name, uObject* value, uObject** __retval)
{
    uStackFrame __("Fuse.Reactive.NameValuePair", "Compute(object,object)");
    return *__retval = ::g::Fuse::NameValuePair::New1(::g::Uno::Object::ToString(uPtr(name)), value), void();
}

// public NameValuePair New(Fuse.Reactive.Expression name, Fuse.Reactive.Expression value) :9
void NameValuePair__New1_fn(::g::Fuse::Reactive::Expression* name, ::g::Fuse::Reactive::Expression* value, NameValuePair** __retval)
{
    *__retval = NameValuePair::New1(name, value);
}

// public NameValuePair(Fuse.Reactive.Expression name, Fuse.Reactive.Expression value) [instance] :9
void NameValuePair::ctor_2(::g::Fuse::Reactive::Expression* name, ::g::Fuse::Reactive::Expression* value)
{
    ctor_1(name, value);
}

// public NameValuePair New(Fuse.Reactive.Expression name, Fuse.Reactive.Expression value) [static] :9
NameValuePair* NameValuePair::New1(::g::Fuse::Reactive::Expression* name, ::g::Fuse::Reactive::Expression* value)
{
    NameValuePair* obj1 = (NameValuePair*)uNew(NameValuePair_typeof());
    obj1->ctor_2(name, value);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.4.0/UnaryOperator.uno
// -------------------------------------------------------------------------------

// public sealed class Negate :90
// {
static void Negate_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::UnaryOperator_type, interface0));
    type->SetFields(1);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Negate__New1_fn, 0, true, type, 1, ::g::Fuse::Reactive::Expression_typeof()));
}

::g::Fuse::Reactive::UnaryOperator_type* Negate_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::UnaryOperator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::UnaryOperator_typeof();
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Negate);
    options.TypeSize = sizeof(::g::Fuse::Reactive::UnaryOperator_type);
    type = (::g::Fuse::Reactive::UnaryOperator_type*)uClassType::New("Fuse.Reactive.Negate", options);
    type->fp_build_ = Negate_build;
    type->fp_Compute = (void(*)(::g::Fuse::Reactive::UnaryOperator*, uObject*, uObject**))Negate__Compute_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::UnaryOperator__Subscribe_fn;
    return type;
}

// public Negate(Fuse.Reactive.Expression operand) :92
void Negate__ctor_2_fn(Negate* __this, ::g::Fuse::Reactive::Expression* operand)
{
    __this->ctor_2(operand);
}

// protected override sealed object Compute(object operand) :93
void Negate__Compute_fn(Negate* __this, uObject* operand, uObject** __retval)
{
    uStackFrame __("Fuse.Reactive.Negate", "Compute(object)");
    return *__retval = ::g::Fuse::Marshal::Multiply(operand, uBox<int>(::TYPES[17/*int*/], -1)), void();
}

// public Negate New(Fuse.Reactive.Expression operand) :92
void Negate__New1_fn(::g::Fuse::Reactive::Expression* operand, Negate** __retval)
{
    *__retval = Negate::New1(operand);
}

// public Negate(Fuse.Reactive.Expression operand) [instance] :92
void Negate::ctor_2(::g::Fuse::Reactive::Expression* operand)
{
    ctor_1(operand);
}

// public Negate New(Fuse.Reactive.Expression operand) [static] :92
Negate* Negate::New1(::g::Fuse::Reactive::Expression* operand)
{
    Negate* obj1 = (Negate*)uNew(Negate_typeof());
    obj1->ctor_2(operand);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Bindings/1.4.0/NodeExpressionBinding.uno
// ------------------------------------------------------------------------------------

// internal sealed class NodeExpressionBinding :9
// {
static void NodeExpressionBinding_build(uType* type)
{
    ::STRINGS[82] = uString::Const("Invalid params");
    ::STRINGS[51] = uString::Const("The binding type does not support resource subscriptions");
    ::TYPES[34] = ::g::Uno::Action_typeof();
    ::TYPES[35] = ::g::Fuse::Reactive::IExpression_typeof();
    ::TYPES[2] = ::g::Uno::IDisposable_typeof();
    type->SetInterfaces(
        ::g::Fuse::Reactive::IContext_typeof(), offsetof(NodeExpressionBinding_type, interface0),
        ::TYPES[2/*Uno.IDisposable*/], offsetof(NodeExpressionBinding_type, interface1));
    type->SetFields(0,
        ::TYPES[35/*Fuse.Reactive.IExpression*/], offsetof(NodeExpressionBinding, _expr), 0,
        ::g::Fuse::Reactive::IListener_typeof(), offsetof(NodeExpressionBinding, _listener), 0,
        ::TYPES[2/*Uno.IDisposable*/], offsetof(NodeExpressionBinding, _sub), 0,
        ::g::Fuse::Node_typeof(), offsetof(NodeExpressionBinding, _node), 0);
}

NodeExpressionBinding_type* NodeExpressionBinding_typeof()
{
    static uSStrong<NodeExpressionBinding_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(NodeExpressionBinding);
    options.TypeSize = sizeof(NodeExpressionBinding_type);
    type = (NodeExpressionBinding_type*)uClassType::New("Fuse.Reactive.NodeExpressionBinding", options);
    type->fp_build_ = NodeExpressionBinding_build;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uString*, uObject*, uObject**))NodeExpressionBinding__FuseReactiveIContextSubscribe_fn;
    type->interface0.fp_get_Node = (void(*)(uObject*, ::g::Fuse::Node**))NodeExpressionBinding__FuseReactiveIContextget_Node_fn;
    type->interface0.fp_SubscribeResource = (void(*)(uObject*, uObject*, uString*, uObject*, uObject**))NodeExpressionBinding__SubscribeResource_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))NodeExpressionBinding__Dispose_fn;
    return type;
}

// public NodeExpressionBinding(Fuse.Reactive.IExpression expr, Fuse.Node node, Fuse.Reactive.IListener listener) :16
void NodeExpressionBinding__ctor__fn(NodeExpressionBinding* __this, uObject* expr, ::g::Fuse::Node* node, uObject* listener)
{
    __this->ctor_(expr, node, listener);
}

// private void CompleteInit() :28
void NodeExpressionBinding__CompleteInit_fn(NodeExpressionBinding* __this)
{
    __this->CompleteInit();
}

// public void Dispose() :48
void NodeExpressionBinding__Dispose_fn(NodeExpressionBinding* __this)
{
    __this->Dispose();
}

// private Fuse.Node Fuse.Reactive.IContext.get_Node() :41
void NodeExpressionBinding__FuseReactiveIContextget_Node_fn(NodeExpressionBinding* __this, ::g::Fuse::Node** __retval)
{
    return *__retval = __this->_node, void();
}

// private Uno.IDisposable Fuse.Reactive.IContext.Subscribe(Fuse.Reactive.IExpression source, string key, Fuse.Reactive.IListener listener) :36
void NodeExpressionBinding__FuseReactiveIContextSubscribe_fn(NodeExpressionBinding* __this, uObject* source, uString* key, uObject* listener, uObject** __retval)
{
    uStackFrame __("Fuse.Reactive.NodeExpressionBinding", "Fuse.Reactive.IContext.Subscribe(Fuse.Reactive.IExpression,string,Fuse.Reactive.IListener)");
    return *__retval = (uObject*)::g::Fuse::Reactive::DataSubscription::New1(source, __this->_node, key, listener), void();
}

// public NodeExpressionBinding New(Fuse.Reactive.IExpression expr, Fuse.Node node, Fuse.Reactive.IListener listener) :16
void NodeExpressionBinding__New1_fn(uObject* expr, ::g::Fuse::Node* node, uObject* listener, NodeExpressionBinding** __retval)
{
    *__retval = NodeExpressionBinding::New1(expr, node, listener);
}

// public Uno.IDisposable SubscribeResource(Fuse.Reactive.IExpression source, string key, Fuse.Reactive.IListener listener) :43
void NodeExpressionBinding__SubscribeResource_fn(NodeExpressionBinding* __this, uObject* source, uString* key, uObject* listener, uObject** __retval)
{
    *__retval = __this->SubscribeResource(source, key, listener);
}

// public NodeExpressionBinding(Fuse.Reactive.IExpression expr, Fuse.Node node, Fuse.Reactive.IListener listener) [instance] :16
void NodeExpressionBinding::ctor_(uObject* expr, ::g::Fuse::Node* node, uObject* listener)
{
    uStackFrame __("Fuse.Reactive.NodeExpressionBinding", ".ctor(Fuse.Reactive.IExpression,Fuse.Node,Fuse.Reactive.IListener)");

    if (((expr == NULL) || (node == NULL)) || (listener == NULL))
        U_THROW(::g::Uno::Exception::New2(::STRINGS[82/*"Invalid par...*/]));

    _expr = expr;
    _listener = listener;
    _node = node;
    ::g::Fuse::UpdateManager::AddDeferredAction2(uDelegate::New(::TYPES[34/*Uno.Action*/], (void*)NodeExpressionBinding__CompleteInit_fn, this), -1, 2);
}

// private void CompleteInit() [instance] :28
void NodeExpressionBinding::CompleteInit()
{
    uStackFrame __("Fuse.Reactive.NodeExpressionBinding", "CompleteInit()");

    if (_expr == NULL)
        return;

    _sub = ::g::Fuse::Reactive::IExpression::Subscribe(uInterface(uPtr(_expr), ::TYPES[35/*Fuse.Reactive.IExpression*/]), (uObject*)this, _listener);
}

// public void Dispose() [instance] :48
void NodeExpressionBinding::Dispose()
{
    uStackFrame __("Fuse.Reactive.NodeExpressionBinding", "Dispose()");

    if (_sub != NULL)
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_sub), ::TYPES[2/*Uno.IDisposable*/]));

    _expr = NULL;
    _listener = NULL;
    _node = NULL;
}

// public Uno.IDisposable SubscribeResource(Fuse.Reactive.IExpression source, string key, Fuse.Reactive.IListener listener) [instance] :43
uObject* NodeExpressionBinding::SubscribeResource(uObject* source, uString* key, uObject* listener)
{
    uStackFrame __("Fuse.Reactive.NodeExpressionBinding", "SubscribeResource(Fuse.Reactive.IExpression,string,Fuse.Reactive.IListener)");
    U_THROW(::g::Uno::Exception::New2(::STRINGS[51/*"The binding...*/]));
}

// public NodeExpressionBinding New(Fuse.Reactive.IExpression expr, Fuse.Node node, Fuse.Reactive.IListener listener) [static] :16
NodeExpressionBinding* NodeExpressionBinding::New1(uObject* expr, ::g::Fuse::Node* node, uObject* listener)
{
    NodeExpressionBinding* obj1 = (NodeExpressionBinding*)uNew(NodeExpressionBinding_typeof());
    obj1->ctor_(expr, node, listener);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.4.0/Operators.uno
// ---------------------------------------------------------------------------

// public sealed class NotEqual :166
// {
static void NotEqual_build(uType* type)
{
    ::STRINGS[83] = uString::Const("!=");
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::InfixOperator_type, interface0));
    type->SetFields(2);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)NotEqual__New1_fn, 0, true, type, 2, ::g::Fuse::Reactive::Expression_typeof(), ::g::Fuse::Reactive::Expression_typeof()));
}

::g::Fuse::Reactive::InfixOperator_type* NotEqual_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::InfixOperator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::InfixOperator_typeof();
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(NotEqual);
    options.TypeSize = sizeof(::g::Fuse::Reactive::InfixOperator_type);
    type = (::g::Fuse::Reactive::InfixOperator_type*)uClassType::New("Fuse.Reactive.NotEqual", options);
    type->fp_build_ = NotEqual_build;
    type->fp_Compute = (void(*)(::g::Fuse::Reactive::BinaryOperator*, uObject*, uObject*, uObject**))NotEqual__Compute_fn;
    type->fp_get_Symbol = (void(*)(::g::Fuse::Reactive::InfixOperator*, uString**))NotEqual__get_Symbol_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::BinaryOperator__Subscribe_fn;
    return type;
}

// public NotEqual(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) :169
void NotEqual__ctor_3_fn(NotEqual* __this, ::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right)
{
    __this->ctor_3(left, right);
}

// protected override sealed object Compute(object left, object right) :170
void NotEqual__Compute_fn(NotEqual* __this, uObject* left, uObject* right, uObject** __retval)
{
    uStackFrame __("Fuse.Reactive.NotEqual", "Compute(object,object)");

    if ((left == NULL) || (right == NULL))
        return *__retval = NULL, void();

    return *__retval = uBox(::TYPES[9/*bool*/], !uUnbox<bool>(::TYPES[9/*bool*/], ::g::Fuse::Marshal::EqualTo(left, right))), void();
}

// public NotEqual New(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) :169
void NotEqual__New1_fn(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right, NotEqual** __retval)
{
    *__retval = NotEqual::New1(left, right);
}

// public override sealed string get_Symbol() :176
void NotEqual__get_Symbol_fn(NotEqual* __this, uString** __retval)
{
    return *__retval = ::STRINGS[83/*"!="*/], void();
}

// public NotEqual(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) [instance] :169
void NotEqual::ctor_3(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right)
{
    ctor_2(left, right);
}

// public NotEqual New(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) [static] :169
NotEqual* NotEqual::New1(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right)
{
    NotEqual* obj1 = (NotEqual*)uNew(NotEqual_typeof());
    obj1->ctor_3(left, right);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.4.0/Operators.uno
// ---------------------------------------------------------------------------

// public sealed class NullCoalesce :67
// {
static void NullCoalesce_build(uType* type)
{
    ::STRINGS[84] = uString::Const("??");
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::InfixOperator_type, interface0));
    type->SetFields(2);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)NullCoalesce__New1_fn, 0, true, type, 2, ::g::Fuse::Reactive::Expression_typeof(), ::g::Fuse::Reactive::Expression_typeof()));
}

::g::Fuse::Reactive::InfixOperator_type* NullCoalesce_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::InfixOperator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::InfixOperator_typeof();
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(NullCoalesce);
    options.TypeSize = sizeof(::g::Fuse::Reactive::InfixOperator_type);
    type = (::g::Fuse::Reactive::InfixOperator_type*)uClassType::New("Fuse.Reactive.NullCoalesce", options);
    type->fp_build_ = NullCoalesce_build;
    type->fp_Compute = (void(*)(::g::Fuse::Reactive::BinaryOperator*, uObject*, uObject*, uObject**))NullCoalesce__Compute_fn;
    type->fp_get_IsLeftOptional = (void(*)(::g::Fuse::Reactive::BinaryOperator*, bool*))NullCoalesce__get_IsLeftOptional_fn;
    type->fp_get_Symbol = (void(*)(::g::Fuse::Reactive::InfixOperator*, uString**))NullCoalesce__get_Symbol_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::BinaryOperator__Subscribe_fn;
    return type;
}

// public NullCoalesce(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) :70
void NullCoalesce__ctor_3_fn(NullCoalesce* __this, ::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right)
{
    __this->ctor_3(left, right);
}

// protected override sealed object Compute(object left, object right) :74
void NullCoalesce__Compute_fn(NullCoalesce* __this, uObject* left, uObject* right, uObject** __retval)
{
    if (left != NULL)
        return *__retval = left, void();
    else
        return *__retval = right, void();
}

// protected override sealed bool get_IsLeftOptional() :72
void NullCoalesce__get_IsLeftOptional_fn(NullCoalesce* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public NullCoalesce New(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) :70
void NullCoalesce__New1_fn(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right, NullCoalesce** __retval)
{
    *__retval = NullCoalesce::New1(left, right);
}

// public override sealed string get_Symbol() :80
void NullCoalesce__get_Symbol_fn(NullCoalesce* __this, uString** __retval)
{
    return *__retval = ::STRINGS[84/*"??"*/], void();
}

// public NullCoalesce(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) [instance] :70
void NullCoalesce::ctor_3(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right)
{
    ctor_2(left, right);
}

// public NullCoalesce New(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) [static] :70
NullCoalesce* NullCoalesce::New1(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right)
{
    NullCoalesce* obj1 = (NullCoalesce*)uNew(NullCoalesce_typeof());
    obj1->ctor_3(left, right);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.4.0/Object.uno
// ------------------------------------------------------------------------

// public sealed class Object :16
// {
static void Object_build(uType* type)
{
    ::TYPES[23] = ::g::Fuse::Reactive::IListener_typeof();
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::SimpleVarArgFunction_type, interface0));
    type->SetFields(1);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Object__New1_fn, 0, true, type, 0));
}

::g::Fuse::Reactive::SimpleVarArgFunction_type* Object_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::SimpleVarArgFunction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::SimpleVarArgFunction_typeof();
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Object);
    options.TypeSize = sizeof(::g::Fuse::Reactive::SimpleVarArgFunction_type);
    type = (::g::Fuse::Reactive::SimpleVarArgFunction_type*)uClassType::New("Fuse.Reactive.Object", options);
    type->fp_build_ = Object_build;
    type->fp_ctor_ = (void*)Object__New1_fn;
    type->fp_OnNewArguments = (void(*)(::g::Fuse::Reactive::SimpleVarArgFunction*, uArray*, uObject*))Object__OnNewArguments_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::SimpleVarArgFunction__Subscribe_fn;
    return type;
}

// public generated Object() :16
void Object__ctor_3_fn(Object* __this)
{
    __this->ctor_3();
}

// public generated Object New() :16
void Object__New1_fn(Object** __retval)
{
    *__retval = Object::New1();
}

// protected override sealed void OnNewArguments(Fuse.Reactive.VarArgFunction.Argument[] args, Fuse.Reactive.IListener listener) :18
void Object__OnNewArguments_fn(Object* __this, uArray* args, uObject* listener)
{
    uStackFrame __("Fuse.Reactive.Object", "OnNewArguments(Fuse.Reactive.VarArgFunction.Argument[],Fuse.Reactive.IListener)");
    ::g::Fuse::Reactive::IListener::OnNewData(uInterface(uPtr(listener), ::TYPES[23/*Fuse.Reactive.IListener*/]), (uObject*)__this, ::g::Fuse::Reactive::ArrayObject::New2(args));
}

// public generated Object() [instance] :16
void Object::ctor_3()
{
    ctor_2();
}

// public generated Object New() [static] :16
Object* Object::New1()
{
    Object* obj1 = (Object*)uNew(Object_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Bindings/1.4.0/Instance.Data.uno
// ----------------------------------------------------------------------------

// private sealed class Instantiator.ObservableLink :134
// {
static void Instantiator__ObservableLink_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Reactive::ValueObserver_type, interface0),
        ::g::Fuse::Reactive::IObserver_typeof(), offsetof(::g::Fuse::Reactive::ValueObserver_type, interface1));
    type->SetFields(2,
        ::g::Fuse::Reactive::Instantiator__WindowItem_typeof(), offsetof(Instantiator__ObservableLink, _target), 0,
        uObject_typeof(), offsetof(Instantiator__ObservableLink, _currentData), 0);
}

::g::Fuse::Reactive::ValueObserver_type* Instantiator__ObservableLink_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::ValueObserver_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::ValueObserver_typeof();
    options.FieldCount = 4;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Instantiator__ObservableLink);
    options.TypeSize = sizeof(::g::Fuse::Reactive::ValueObserver_type);
    type = (::g::Fuse::Reactive::ValueObserver_type*)uClassType::New("Fuse.Reactive.Instantiator.ObservableLink", options);
    type->fp_build_ = Instantiator__ObservableLink_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Reactive::ValueObserver*))Instantiator__ObservableLink__Dispose_fn;
    type->fp_PushData = (void(*)(::g::Fuse::Reactive::ValueObserver*, uObject*))Instantiator__ObservableLink__PushData_fn;
    type->interface1.fp_OnClear = (void(*)(uObject*))::g::Fuse::Reactive::ValueObserver__FuseReactiveIObserverOnClear_fn;
    type->interface1.fp_OnSet = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::ValueObserver__FuseReactiveIObserverOnSet_fn;
    type->interface1.fp_OnAdd = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::ValueObserver__FuseReactiveIObserverOnAdd_fn;
    type->interface1.fp_OnNewAt = (void(*)(uObject*, int*, uObject*))::g::Fuse::Reactive::ValueObserver__FuseReactiveIObserverOnNewAt_fn;
    type->interface1.fp_OnFailed = (void(*)(uObject*, uString*))::g::Fuse::Reactive::ValueObserver__FuseReactiveIObserverOnFailed_fn;
    type->interface1.fp_OnNewAll = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::ValueObserver__FuseReactiveIObserverOnNewAll_fn;
    type->interface1.fp_OnRemoveAt = (void(*)(uObject*, int*))::g::Fuse::Reactive::ValueObserver__FuseReactiveIObserverOnRemoveAt_fn;
    type->interface1.fp_OnInsertAt = (void(*)(uObject*, int*, uObject*))::g::Fuse::Reactive::ValueObserver__FuseReactiveIObserverOnInsertAt_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))Instantiator__ObservableLink__Dispose_fn;
    return type;
}

// public ObservableLink(Fuse.Reactive.IObservable obs, Fuse.Reactive.Instantiator.WindowItem target) :138
void Instantiator__ObservableLink__ctor_1_fn(Instantiator__ObservableLink* __this, uObject* obs, ::g::Fuse::Reactive::Instantiator__WindowItem* target)
{
    __this->ctor_1(obs, target);
}

// public object get_Data() :152
void Instantiator__ObservableLink__get_Data_fn(Instantiator__ObservableLink* __this, uObject** __retval)
{
    *__retval = __this->Data();
}

// public override sealed void Dispose() :144
void Instantiator__ObservableLink__Dispose_fn(Instantiator__ObservableLink* __this)
{
    ::g::Fuse::Reactive::ValueObserver__Dispose_fn(__this);
    __this->_target = NULL;
    __this->_currentData = NULL;
}

// public ObservableLink New(Fuse.Reactive.IObservable obs, Fuse.Reactive.Instantiator.WindowItem target) :138
void Instantiator__ObservableLink__New1_fn(uObject* obs, ::g::Fuse::Reactive::Instantiator__WindowItem* target, Instantiator__ObservableLink** __retval)
{
    *__retval = Instantiator__ObservableLink::New1(obs, target);
}

// protected override sealed void PushData(object newData) :154
void Instantiator__ObservableLink__PushData_fn(Instantiator__ObservableLink* __this, uObject* newData)
{
    uStackFrame __("Fuse.Reactive.Instantiator.ObservableLink", "PushData(object)");
    ::g::Fuse::Node* ret2;

    if (__this->_target == NULL)
        return;

    uObject* oldData = __this->_currentData;
    __this->_currentData = newData;

    for (int i = 0; i < uPtr(uPtr(__this->_target)->Nodes)->Count(); ++i)
        uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(uPtr(__this->_target)->Nodes), uCRef<int>(i), &ret2), ret2))->BroadcastDataChange(oldData, newData);
}

// public ObservableLink(Fuse.Reactive.IObservable obs, Fuse.Reactive.Instantiator.WindowItem target) [instance] :138
void Instantiator__ObservableLink::ctor_1(uObject* obs, ::g::Fuse::Reactive::Instantiator__WindowItem* target)
{
    uStackFrame __("Fuse.Reactive.Instantiator.ObservableLink", ".ctor(Fuse.Reactive.IObservable,Fuse.Reactive.Instantiator.WindowItem)");
    ctor_();
    _target = target;
    Subscribe(obs);
}

// public object get_Data() [instance] :152
uObject* Instantiator__ObservableLink::Data()
{
    return _currentData;
}

// public ObservableLink New(Fuse.Reactive.IObservable obs, Fuse.Reactive.Instantiator.WindowItem target) [static] :138
Instantiator__ObservableLink* Instantiator__ObservableLink::New1(uObject* obs, ::g::Fuse::Reactive::Instantiator__WindowItem* target)
{
    Instantiator__ObservableLink* obj1 = (Instantiator__ObservableLink*)uNew(Instantiator__ObservableLink_typeof());
    obj1->ctor_1(obs, target);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.4.0/Subscription.uno
// ------------------------------------------------------------------------------

// private sealed class InnerListener.ObservableSubscription :71
// {
static void InnerListener__ObservableSubscription_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Reactive::ValueObserver_type, interface0),
        ::g::Fuse::Reactive::IObserver_typeof(), offsetof(::g::Fuse::Reactive::ValueObserver_type, interface1));
    type->SetFields(2,
        ::g::Fuse::Reactive::InnerListener_typeof(), offsetof(InnerListener__ObservableSubscription, _listener), 0,
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(InnerListener__ObservableSubscription, _source), 0);
}

::g::Fuse::Reactive::ValueObserver_type* InnerListener__ObservableSubscription_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::ValueObserver_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::ValueObserver_typeof();
    options.FieldCount = 4;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(InnerListener__ObservableSubscription);
    options.TypeSize = sizeof(::g::Fuse::Reactive::ValueObserver_type);
    type = (::g::Fuse::Reactive::ValueObserver_type*)uClassType::New("Fuse.Reactive.InnerListener.ObservableSubscription", options);
    type->fp_build_ = InnerListener__ObservableSubscription_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Reactive::ValueObserver*))InnerListener__ObservableSubscription__Dispose_fn;
    type->fp_PushData = (void(*)(::g::Fuse::Reactive::ValueObserver*, uObject*))InnerListener__ObservableSubscription__PushData_fn;
    type->interface1.fp_OnClear = (void(*)(uObject*))::g::Fuse::Reactive::ValueObserver__FuseReactiveIObserverOnClear_fn;
    type->interface1.fp_OnSet = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::ValueObserver__FuseReactiveIObserverOnSet_fn;
    type->interface1.fp_OnAdd = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::ValueObserver__FuseReactiveIObserverOnAdd_fn;
    type->interface1.fp_OnNewAt = (void(*)(uObject*, int*, uObject*))::g::Fuse::Reactive::ValueObserver__FuseReactiveIObserverOnNewAt_fn;
    type->interface1.fp_OnFailed = (void(*)(uObject*, uString*))::g::Fuse::Reactive::ValueObserver__FuseReactiveIObserverOnFailed_fn;
    type->interface1.fp_OnNewAll = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::ValueObserver__FuseReactiveIObserverOnNewAll_fn;
    type->interface1.fp_OnRemoveAt = (void(*)(uObject*, int*))::g::Fuse::Reactive::ValueObserver__FuseReactiveIObserverOnRemoveAt_fn;
    type->interface1.fp_OnInsertAt = (void(*)(uObject*, int*, uObject*))::g::Fuse::Reactive::ValueObserver__FuseReactiveIObserverOnInsertAt_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))InnerListener__ObservableSubscription__Dispose_fn;
    return type;
}

// public ObservableSubscription(Fuse.Reactive.IExpression source, Fuse.Reactive.IObservable obs, Fuse.Reactive.InnerListener listener) :76
void InnerListener__ObservableSubscription__ctor_1_fn(InnerListener__ObservableSubscription* __this, uObject* source, uObject* obs, ::g::Fuse::Reactive::InnerListener* listener)
{
    __this->ctor_1(source, obs, listener);
}

// public override sealed void Dispose() :83
void InnerListener__ObservableSubscription__Dispose_fn(InnerListener__ObservableSubscription* __this)
{
    ::g::Fuse::Reactive::ValueObserver__Dispose_fn(__this);
    __this->_source = NULL;
    __this->_listener = NULL;
}

// public ObservableSubscription New(Fuse.Reactive.IExpression source, Fuse.Reactive.IObservable obs, Fuse.Reactive.InnerListener listener) :76
void InnerListener__ObservableSubscription__New1_fn(uObject* source, uObject* obs, ::g::Fuse::Reactive::InnerListener* listener, InnerListener__ObservableSubscription** __retval)
{
    *__retval = InnerListener__ObservableSubscription::New1(source, obs, listener);
}

// protected override sealed void PushData(object newValue) :90
void InnerListener__ObservableSubscription__PushData_fn(InnerListener__ObservableSubscription* __this, uObject* newValue)
{
    uStackFrame __("Fuse.Reactive.InnerListener.ObservableSubscription", "PushData(object)");
    uPtr(__this->_listener)->OnNewData(__this->_source, newValue);
}

// public ObservableSubscription(Fuse.Reactive.IExpression source, Fuse.Reactive.IObservable obs, Fuse.Reactive.InnerListener listener) [instance] :76
void InnerListener__ObservableSubscription::ctor_1(uObject* source, uObject* obs, ::g::Fuse::Reactive::InnerListener* listener)
{
    uStackFrame __("Fuse.Reactive.InnerListener.ObservableSubscription", ".ctor(Fuse.Reactive.IExpression,Fuse.Reactive.IObservable,Fuse.Reactive.InnerListener)");
    ctor_();
    _listener = listener;
    _source = source;
    Subscribe(obs);
}

// public ObservableSubscription New(Fuse.Reactive.IExpression source, Fuse.Reactive.IObservable obs, Fuse.Reactive.InnerListener listener) [static] :76
InnerListener__ObservableSubscription* InnerListener__ObservableSubscription::New1(uObject* source, uObject* obs, ::g::Fuse::Reactive::InnerListener* listener)
{
    InnerListener__ObservableSubscription* obj1 = (InnerListener__ObservableSubscription*)uNew(InnerListener__ObservableSubscription_typeof());
    obj1->ctor_1(source, obs, listener);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/1.4.0/ObserverMap.uno
// -----------------------------------------------------------------

// internal abstract class ObserverMap<T> :23
// {
static void ObserverMap_build(uType* type)
{
    ::STRINGS[85] = uString::Const("An observable with write-back is expected");
    ::STRINGS[86] = uString::Const("/usr/local/share/uno/Packages/Fuse.Reactive/1.4.0/ObserverMap.uno");
    ::STRINGS[87] = uString::Const("Attach");
    ::TYPES[55] = ::g::Uno::Collections::List_typeof();
    ::TYPES[27] = ::g::Fuse::Reactive::IObservableArray_typeof();
    ::TYPES[31] = ::g::Fuse::Reactive::ISubscription_typeof();
    ::TYPES[50] = ::g::Fuse::Reactive::IObserver_typeof();
    ::TYPES[2] = ::g::Uno::IDisposable_typeof();
    ::TYPES[25] = ::g::Fuse::IArray_typeof();
    ::TYPES[56] = ::g::Fuse::Reactive::UnmappedView_typeof();
    type->SetDependencies(
        ::g::Fuse::Diagnostics_typeof());
    type->SetPrecalc(
        ::g::Uno::Collections::List_typeof()->MakeType(type->T(0), NULL),
        ::g::Fuse::Reactive::UnmappedView_typeof()->MakeType(type->T(0), NULL));
    type->SetInterfaces(
        ::TYPES[50/*Fuse.Reactive.IObserver*/], offsetof(ObserverMap_type, interface0));
    type->SetFields(0,
        ::TYPES[55/*Uno.Collections.List`1*/]->MakeType(type->T(0), NULL), offsetof(ObserverMap, _list), 0,
        ::TYPES[27/*Fuse.Reactive.IObservableArray*/], offsetof(ObserverMap, _observable), 0,
        ::TYPES[25/*Fuse.IArray*/], offsetof(ObserverMap, _source), 0,
        ::TYPES[50/*Fuse.Reactive.IObserver*/], offsetof(ObserverMap, _slave), 0,
        ::TYPES[31/*Fuse.Reactive.ISubscription*/], offsetof(ObserverMap, _subscription), 0,
        ::TYPES[2/*Uno.IDisposable*/], offsetof(ObserverMap, _disposable), 0);
}

ObserverMap_type* ObserverMap_typeof()
{
    static uSStrong<ObserverMap_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.GenericCount = 1;
    options.InterfaceCount = 1;
    options.DependencyCount = 1;
    options.PrecalcCount = 2;
    options.ObjectSize = sizeof(ObserverMap);
    options.TypeSize = sizeof(ObserverMap_type);
    type = (ObserverMap_type*)uClassType::New("Fuse.Reactive.ObserverMap`1", options);
    type->fp_build_ = ObserverMap_build;
    type->fp_OnUpdated = ObserverMap__OnUpdated_fn;
    type->interface0.fp_OnClear = (void(*)(uObject*))ObserverMap__FuseReactiveIObserverOnClear_fn;
    type->interface0.fp_OnNewAll = (void(*)(uObject*, uObject*))ObserverMap__FuseReactiveIObserverOnNewAll_fn;
    type->interface0.fp_OnNewAt = (void(*)(uObject*, int*, uObject*))ObserverMap__FuseReactiveIObserverOnNewAt_fn;
    type->interface0.fp_OnSet = (void(*)(uObject*, uObject*))ObserverMap__FuseReactiveIObserverOnSet_fn;
    type->interface0.fp_OnAdd = (void(*)(uObject*, uObject*))ObserverMap__FuseReactiveIObserverOnAdd_fn;
    type->interface0.fp_OnRemoveAt = (void(*)(uObject*, int*))ObserverMap__FuseReactiveIObserverOnRemoveAt_fn;
    type->interface0.fp_OnInsertAt = (void(*)(uObject*, int*, uObject*))ObserverMap__FuseReactiveIObserverOnInsertAt_fn;
    type->interface0.fp_OnFailed = (void(*)(uObject*, uString*))ObserverMap__FuseReactiveIObserverOnFailed_fn;
    return type;
}

// protected generated ObserverMap() :23
void ObserverMap__ctor__fn(ObserverMap* __this)
{
    __this->ctor_();
}

// public void Add(T value) :91
void ObserverMap__Add_fn(ObserverMap* __this, uObject* value)
{
    __this->Add(value);
}

// public void Attach(Fuse.IArray src, [Fuse.Reactive.IObserver slave]) :54
void ObserverMap__Attach_fn(ObserverMap* __this, uObject* src, uObject* slave)
{
    __this->Attach(src, slave);
}

// public void Clear() :109
void ObserverMap__Clear_fn(ObserverMap* __this)
{
    __this->Clear();
}

// public int get_Count() :33
void ObserverMap__get_Count_fn(ObserverMap* __this, int* __retval)
{
    *__retval = __this->Count();
}

// public void Detach() :78
void ObserverMap__Detach_fn(ObserverMap* __this)
{
    __this->Detach();
}

// private void Fuse.Reactive.IObserver.OnAdd(object addedValue) :171
void ObserverMap__FuseReactiveIObserverOnAdd_fn(ObserverMap* __this, uObject* addedValue)
{
    uStackFrame __("Fuse.Reactive.ObserverMap`1", "Fuse.Reactive.IObserver.OnAdd(object)");

    if (__this->_subscription == NULL)
        return;

    ::g::Uno::Collections::List__Add_fn(uPtr(__this->_list), __this->Map(addedValue));
    __this->OnUpdated();

    if (__this->_slave != NULL)
        ::g::Fuse::Reactive::IObserver::OnAdd(uInterface(uPtr(__this->_slave), ::TYPES[50/*Fuse.Reactive.IObserver*/]), addedValue);
}

// private void Fuse.Reactive.IObserver.OnClear() :124
void ObserverMap__FuseReactiveIObserverOnClear_fn(ObserverMap* __this)
{
    uStackFrame __("Fuse.Reactive.ObserverMap`1", "Fuse.Reactive.IObserver.OnClear()");

    if (__this->_subscription == NULL)
        return;

    uPtr(__this->_list)->Clear();
    __this->OnUpdated();

    if (__this->_slave != NULL)
        ::g::Fuse::Reactive::IObserver::OnClear(uInterface(uPtr(__this->_slave), ::TYPES[50/*Fuse.Reactive.IObserver*/]));
}

// private void Fuse.Reactive.IObserver.OnFailed(string message) :204
void ObserverMap__FuseReactiveIObserverOnFailed_fn(ObserverMap* __this, uString* message)
{
    uStackFrame __("Fuse.Reactive.ObserverMap`1", "Fuse.Reactive.IObserver.OnFailed(string)");

    if (__this->_subscription == NULL)
        return;

    uPtr(__this->_list)->Clear();
    __this->OnUpdated();

    if (__this->_slave != NULL)
        ::g::Fuse::Reactive::IObserver::OnFailed(uInterface(uPtr(__this->_slave), ::TYPES[50/*Fuse.Reactive.IObserver*/]), message);
}

// private void Fuse.Reactive.IObserver.OnInsertAt(int index, object value) :193
void ObserverMap__FuseReactiveIObserverOnInsertAt_fn(ObserverMap* __this, int* index, uObject* value)
{
    uStackFrame __("Fuse.Reactive.ObserverMap`1", "Fuse.Reactive.IObserver.OnInsertAt(int,object)");
    int index_ = *index;

    if (__this->_subscription == NULL)
        return;

    ::g::Uno::Collections::List__Insert_fn(uPtr(__this->_list), uCRef<int>(index_), __this->Map(value));
    __this->OnUpdated();

    if (__this->_slave != NULL)
        ::g::Fuse::Reactive::IObserver::OnInsertAt(uInterface(uPtr(__this->_slave), ::TYPES[50/*Fuse.Reactive.IObserver*/]), index_, value);
}

// private void Fuse.Reactive.IObserver.OnNewAll(Fuse.IArray values) :135
void ObserverMap__FuseReactiveIObserverOnNewAll_fn(ObserverMap* __this, uObject* values)
{
    uStackFrame __("Fuse.Reactive.ObserverMap`1", "Fuse.Reactive.IObserver.OnNewAll(Fuse.IArray)");

    if (__this->_subscription == NULL)
        return;

    uPtr(__this->_list)->Clear();

    for (int i = 0; i < ::g::Fuse::IArray::Length(uInterface(uPtr(values), ::TYPES[25/*Fuse.IArray*/])); ++i)
        ::g::Uno::Collections::List__Add_fn(uPtr(__this->_list), __this->Map(::g::Fuse::IArray::Item(uInterface(uPtr(values), ::TYPES[25/*Fuse.IArray*/]), i)));

    __this->OnUpdated();

    if (__this->_slave != NULL)
        ::g::Fuse::Reactive::IObserver::OnNewAll(uInterface(uPtr(__this->_slave), ::TYPES[50/*Fuse.Reactive.IObserver*/]), values);
}

// private void Fuse.Reactive.IObserver.OnNewAt(int index, object newValue) :148
void ObserverMap__FuseReactiveIObserverOnNewAt_fn(ObserverMap* __this, int* index, uObject* newValue)
{
    uStackFrame __("Fuse.Reactive.ObserverMap`1", "Fuse.Reactive.IObserver.OnNewAt(int,object)");
    int index_ = *index;

    if (__this->_subscription == NULL)
        return;

    ::g::Uno::Collections::List__set_Item_fn(uPtr(__this->_list), uCRef<int>(index_), __this->Map(newValue));
    __this->OnUpdated();

    if (__this->_slave != NULL)
        ::g::Fuse::Reactive::IObserver::OnNewAt(uInterface(uPtr(__this->_slave), ::TYPES[50/*Fuse.Reactive.IObserver*/]), index_, newValue);
}

// private void Fuse.Reactive.IObserver.OnRemoveAt(int index) :182
void ObserverMap__FuseReactiveIObserverOnRemoveAt_fn(ObserverMap* __this, int* index)
{
    uStackFrame __("Fuse.Reactive.ObserverMap`1", "Fuse.Reactive.IObserver.OnRemoveAt(int)");
    int index_ = *index;

    if (__this->_subscription == NULL)
        return;

    uPtr(__this->_list)->RemoveAt(index_);
    __this->OnUpdated();

    if (__this->_slave != NULL)
        ::g::Fuse::Reactive::IObserver::OnRemoveAt(uInterface(uPtr(__this->_slave), ::TYPES[50/*Fuse.Reactive.IObserver*/]), index_);
}

// private void Fuse.Reactive.IObserver.OnSet(object newValue) :159
void ObserverMap__FuseReactiveIObserverOnSet_fn(ObserverMap* __this, uObject* newValue)
{
    uStackFrame __("Fuse.Reactive.ObserverMap`1", "Fuse.Reactive.IObserver.OnSet(object)");

    if (__this->_subscription == NULL)
        return;

    uPtr(__this->_list)->Clear();
    ::g::Uno::Collections::List__Add_fn(uPtr(__this->_list), __this->Map(newValue));
    __this->OnUpdated();

    if (__this->_slave != NULL)
        ::g::Fuse::Reactive::IObserver::OnSet(uInterface(uPtr(__this->_slave), ::TYPES[50/*Fuse.Reactive.IObserver*/]), newValue);
}

// public void Insert(int index, T value) :103
void ObserverMap__Insert_fn(ObserverMap* __this, int* index, uObject* value)
{
    __this->Insert(*index, value);
}

// public T get_Item(int index) :36
void ObserverMap__get_Item_fn(ObserverMap* __this, int* index, uObject** __retval)
{
    *__retval = __this->Item(*index);
}

// public void set_Item(int index, T value) :37
void ObserverMap__set_Item_fn(ObserverMap* __this, int* index, uObject* value)
{
    __this->Item(*index, value);
}

// protected virtual void OnUpdated() :29
void ObserverMap__OnUpdated_fn(ObserverMap* __this)
{
}

// public void RemoveAt(int index) :97
void ObserverMap__RemoveAt_fn(ObserverMap* __this, int* index)
{
    __this->RemoveAt(*index);
}

// private void UpdateBacking() :115
void ObserverMap__UpdateBacking_fn(ObserverMap* __this)
{
    __this->UpdateBacking();
}

// internal object UVUnmap(T mv) :31
void ObserverMap__UVUnmap_fn(ObserverMap* __this, uObject* mv, uObject** __retval)
{
    *__retval = __this->UVUnmap(mv);
}

// protected generated ObserverMap() [instance] :23
void ObserverMap::ctor_()
{
    uType* __types[] = {
        __type->GetBase(ObserverMap_typeof())->Precalced(0/*Uno.Collections.List<T>*/),
    };
    _list = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(__types[0]));
}

// public void Add(T value) [instance] :91
void ObserverMap::Add(uObject* value)
{
    uStackFrame __("Fuse.Reactive.ObserverMap`1", "Add(T)");
    ::g::Uno::Collections::List__Add_fn(uPtr(_list), value);
    UpdateBacking();
}

// public void Attach(Fuse.IArray src, [Fuse.Reactive.IObserver slave]) [instance] :54
void ObserverMap::Attach(uObject* src, uObject* slave)
{
    uStackFrame __("Fuse.Reactive.ObserverMap`1", "Attach(Fuse.IArray,[Fuse.Reactive.IObserver])");
    Detach();
    _source = src;
    _observable = uAs<uObject*>(src, ::TYPES[27/*Fuse.Reactive.IObservableArray*/]);

    if (_observable != NULL)
    {
        _disposable = ::g::Fuse::Reactive::IObservableArray::Subscribe(uInterface(uPtr(_observable), ::TYPES[27/*Fuse.Reactive.IObservableArray*/]), (uObject*)this);
        _subscription = uAs<uObject*>(_disposable, ::TYPES[31/*Fuse.Reactive.ISubscription*/]);

        if (_subscription == NULL)
            ::g::Fuse::Diagnostics::InternalError(::STRINGS[85/*"An observab...*/], this, ::STRINGS[86/*"/usr/local/...*/], 68, ::STRINGS[87/*"Attach"*/]);
    }

    ::g::Fuse::Reactive::IObserver::OnNewAll(uInterface((uObject*)this, ::TYPES[50/*Fuse.Reactive.IObserver*/]), src);
    _slave = slave;
}

// public void Clear() [instance] :109
void ObserverMap::Clear()
{
    uStackFrame __("Fuse.Reactive.ObserverMap`1", "Clear()");
    uPtr(_list)->Clear();
    UpdateBacking();
}

// public int get_Count() [instance] :33
int ObserverMap::Count()
{
    uStackFrame __("Fuse.Reactive.ObserverMap`1", "get_Count()");
    return uPtr(_list)->Count();
}

// public void Detach() [instance] :78
void ObserverMap::Detach()
{
    uStackFrame __("Fuse.Reactive.ObserverMap`1", "Detach()");

    if (_disposable != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_disposable), ::TYPES[2/*Uno.IDisposable*/]));
        _disposable = NULL;
    }

    _subscription = NULL;
    _observable = NULL;
    _source = NULL;
    _slave = NULL;
}

// public void Insert(int index, T value) [instance] :103
void ObserverMap::Insert(int index, uObject* value)
{
    uStackFrame __("Fuse.Reactive.ObserverMap`1", "Insert(int,T)");
    ::g::Uno::Collections::List__Insert_fn(uPtr(_list), uCRef<int>(index), value);
    UpdateBacking();
}

// public T get_Item(int index) [instance] :36
uObject* ObserverMap::Item(int index)
{
    uStackFrame __("Fuse.Reactive.ObserverMap`1", "get_Item(int)");
    uObject* ret1;
    return (::g::Uno::Collections::List__get_Item_fn(uPtr(_list), uCRef<int>(index), &ret1), ret1);
}

// public void set_Item(int index, T value) [instance] :37
void ObserverMap::Item(int index, uObject* value)
{
    uStackFrame __("Fuse.Reactive.ObserverMap`1", "set_Item(int,T)");
    ::g::Uno::Collections::List__set_Item_fn(uPtr(_list), uCRef<int>(index), value);
}

// public void RemoveAt(int index) [instance] :97
void ObserverMap::RemoveAt(int index)
{
    uStackFrame __("Fuse.Reactive.ObserverMap`1", "RemoveAt(int)");
    uPtr(_list)->RemoveAt(index);
    UpdateBacking();
}

// private void UpdateBacking() [instance] :115
void ObserverMap::UpdateBacking()
{
    uType* __types[] = {
        __type->GetBase(ObserverMap_typeof())->Precalced(1/*Fuse.Reactive.UnmappedView<T>*/),
    };
    uStackFrame __("Fuse.Reactive.ObserverMap`1", "UpdateBacking()");

    if (_subscription == NULL)
        return;

    uObject* uv = (uObject*)((::g::Fuse::Reactive::UnmappedView*)::g::Fuse::Reactive::UnmappedView::New1(__types[0], this));
    ::g::Fuse::Reactive::ISubscription::ReplaceAllExclusive(uInterface(uPtr(_subscription), ::TYPES[31/*Fuse.Reactive.ISubscription*/]), uv);
}

// internal object UVUnmap(T mv) [instance] :31
uObject* ObserverMap::UVUnmap(uObject* mv)
{
    uStackFrame __("Fuse.Reactive.ObserverMap`1", "UVUnmap(T)");
    return Unmap(mv);
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.4.0/MathFunctions.uno
// -------------------------------------------------------------------------------

// public sealed class Odd :78
// {
static void Odd_build(uType* type)
{
    ::STRINGS[88] = uString::Const("odd(");
    ::STRINGS[5] = uString::Const(")");
    ::TYPES[1] = ::g::Fuse::Marshal_typeof()->MakeMethod(1/*TryToType<float>*/, ::g::Uno::Float_typeof(), NULL);
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::UnaryOperator_type, interface0));
    type->SetFields(1);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Odd__New1_fn, 0, true, type, 1, ::g::Fuse::Reactive::Expression_typeof()));
}

::g::Fuse::Reactive::UnaryOperator_type* Odd_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::UnaryOperator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::UnaryOperator_typeof();
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Odd);
    options.TypeSize = sizeof(::g::Fuse::Reactive::UnaryOperator_type);
    type = (::g::Fuse::Reactive::UnaryOperator_type*)uClassType::New("Fuse.Reactive.Odd", options);
    type->fp_build_ = Odd_build;
    type->fp_Compute = (void(*)(::g::Fuse::Reactive::UnaryOperator*, uObject*, uObject**))Odd__Compute_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))Odd__ToString_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::UnaryOperator__Subscribe_fn;
    return type;
}

// public Odd(Fuse.Reactive.Expression operand) :81
void Odd__ctor_2_fn(Odd* __this, ::g::Fuse::Reactive::Expression* operand)
{
    __this->ctor_2(operand);
}

// protected override sealed object Compute(object operand) :82
void Odd__Compute_fn(Odd* __this, uObject* operand, uObject** __retval)
{
    uStackFrame __("Fuse.Reactive.Odd", "Compute(object)");
    bool ret2;
    float v = 0.0f;

    if (!(::g::Fuse::Marshal__TryToType_fn(::TYPES[1/*Fuse.Marshal.TryToType<float>*/], operand, &v, &ret2), ret2))
        return *__retval = NULL, void();

    int q = (int)::g::Uno::Math::Round2(v);
    return *__retval = uBox(::TYPES[9/*bool*/], (q % 2) != 0), void();
}

// public Odd New(Fuse.Reactive.Expression operand) :81
void Odd__New1_fn(::g::Fuse::Reactive::Expression* operand, Odd** __retval)
{
    *__retval = Odd::New1(operand);
}

// public override sealed string ToString() :92
void Odd__ToString_fn(Odd* __this, uString** __retval)
{
    uStackFrame __("Fuse.Reactive.Odd", "ToString()");
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[88/*"odd("*/], __this->Operand()), ::STRINGS[5/*")"*/]), void();
}

// public Odd(Fuse.Reactive.Expression operand) [instance] :81
void Odd::ctor_2(::g::Fuse::Reactive::Expression* operand)
{
    ctor_1(operand);
}

// public Odd New(Fuse.Reactive.Expression operand) [static] :81
Odd* Odd::New1(::g::Fuse::Reactive::Expression* operand)
{
    Odd* obj1 = (Odd*)uNew(Odd_typeof());
    obj1->ctor_2(operand);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Bindings/1.4.0/InstantiatorFunction.uno
// -----------------------------------------------------------------------------------

// public sealed class OffsetIndexFunction :166
// {
static void OffsetIndexFunction_build(uType* type)
{
    type->SetDependencies(
        ::g::Fuse::Reactive::InstantiatorFunction_typeof());
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::Expression_type, interface0));
    type->SetFields(2);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)OffsetIndexFunction__New1_fn, 0, true, type, 0));
}

::g::Fuse::Reactive::Expression_type* OffsetIndexFunction_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::Expression_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::InstantiatorFunction_typeof();
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(OffsetIndexFunction);
    options.TypeSize = sizeof(::g::Fuse::Reactive::Expression_type);
    type = (::g::Fuse::Reactive::Expression_type*)uClassType::New("Fuse.Reactive.OffsetIndexFunction", options);
    type->fp_build_ = OffsetIndexFunction_build;
    type->fp_ctor_ = (void*)OffsetIndexFunction__New1_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::InstantiatorFunction__Subscribe_fn;
    return type;
}

// public OffsetIndexFunction() :169
void OffsetIndexFunction__ctor_3_fn(OffsetIndexFunction* __this)
{
    __this->ctor_3();
}

// public OffsetIndexFunction New() :169
void OffsetIndexFunction__New1_fn(OffsetIndexFunction** __retval)
{
    *__retval = OffsetIndexFunction::New1();
}

// public OffsetIndexFunction() [instance] :169
void OffsetIndexFunction::ctor_3()
{
    ctor_2(::g::Fuse::Reactive::InstantiatorFunction::OffsetIndexName_);
}

// public OffsetIndexFunction New() [static] :169
OffsetIndexFunction* OffsetIndexFunction::New1()
{
    OffsetIndexFunction* obj1 = (OffsetIndexFunction*)uNew(OffsetIndexFunction_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.4.0/Parameter.uno
// ---------------------------------------------------------------------------

// public sealed class Parameter :16
// {
static void Parameter_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::UnaryOperator_type, interface0));
    type->SetFields(1);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Parameter__New1_fn, 0, true, type, 1, ::g::Fuse::Reactive::Expression_typeof()));
}

::g::Fuse::Reactive::UnaryOperator_type* Parameter_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::UnaryOperator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::UnaryOperator_typeof();
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Parameter);
    options.TypeSize = sizeof(::g::Fuse::Reactive::UnaryOperator_type);
    type = (::g::Fuse::Reactive::UnaryOperator_type*)uClassType::New("Fuse.Reactive.Parameter", options);
    type->fp_build_ = Parameter_build;
    type->fp_Subscribe = (void(*)(::g::Fuse::Reactive::Expression*, uObject*, uObject*, uObject**))Parameter__Subscribe_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))Parameter__Subscribe_fn;
    return type;
}

// public Parameter(Fuse.Reactive.Expression visual) :19
void Parameter__ctor_2_fn(Parameter* __this, ::g::Fuse::Reactive::Expression* visual)
{
    __this->ctor_2(visual);
}

// public Parameter New(Fuse.Reactive.Expression visual) :19
void Parameter__New1_fn(::g::Fuse::Reactive::Expression* visual, Parameter** __retval)
{
    *__retval = Parameter::New1(visual);
}

// public override sealed Uno.IDisposable Subscribe(Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :21
void Parameter__Subscribe_fn(Parameter* __this, uObject* context, uObject* listener, uObject** __retval)
{
    uStackFrame __("Fuse.Reactive.Parameter", "Subscribe(Fuse.Reactive.IContext,Fuse.Reactive.IListener)");
    return *__retval = (uObject*)Parameter__ParameterSubscription::New2(__this, context, listener), void();
}

// public Parameter(Fuse.Reactive.Expression visual) [instance] :19
void Parameter::ctor_2(::g::Fuse::Reactive::Expression* visual)
{
    ctor_1(visual);
}

// public Parameter New(Fuse.Reactive.Expression visual) [static] :19
Parameter* Parameter::New1(::g::Fuse::Reactive::Expression* visual)
{
    Parameter* obj1 = (Parameter*)uNew(Parameter_typeof());
    obj1->ctor_2(visual);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.4.0/Parameter.uno
// ---------------------------------------------------------------------------

// private sealed class Parameter.ParameterSubscription :26
// {
static void Parameter__ParameterSubscription_build(uType* type)
{
    ::STRINGS[89] = uString::Const("Failed to fetch parameter: ");
    ::STRINGS[90] = uString::Const("Failed to parse parameter: ");
    ::TYPES[29] = ::g::Uno::Exception_typeof();
    ::TYPES[57] = ::g::Fuse::Visual_typeof();
    ::TYPES[58] = ::g::Uno::EventHandler_typeof();
    type->SetDependencies(
        ::g::Fuse::Json_typeof());
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Reactive::UnaryOperator__Subscription_type, interface0),
        ::g::Fuse::Reactive::IListener_typeof(), offsetof(::g::Fuse::Reactive::UnaryOperator__Subscription_type, interface1));
    type->SetFields(5,
        ::g::Fuse::Reactive::Parameter_typeof(), offsetof(Parameter__ParameterSubscription, _parameter), 0,
        ::TYPES[57/*Fuse.Visual*/], offsetof(Parameter__ParameterSubscription, _visual), 0);
}

::g::Fuse::Reactive::UnaryOperator__Subscription_type* Parameter__ParameterSubscription_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::UnaryOperator__Subscription_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::UnaryOperator__Subscription_typeof();
    options.FieldCount = 7;
    options.InterfaceCount = 2;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(Parameter__ParameterSubscription);
    options.TypeSize = sizeof(::g::Fuse::Reactive::UnaryOperator__Subscription_type);
    type = (::g::Fuse::Reactive::UnaryOperator__Subscription_type*)uClassType::New("Fuse.Reactive.Parameter.ParameterSubscription", options);
    type->fp_build_ = Parameter__ParameterSubscription_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Reactive::InnerListener*))Parameter__ParameterSubscription__Dispose_fn;
    type->fp_OnNewOperand = (void(*)(::g::Fuse::Reactive::UnaryOperator__Subscription*, uObject*))Parameter__ParameterSubscription__OnNewOperand_fn;
    type->interface1.fp_OnNewData = (void(*)(uObject*, uObject*, uObject*))::g::Fuse::Reactive::InnerListener__FuseReactiveIListenerOnNewData_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))Parameter__ParameterSubscription__Dispose_fn;
    return type;
}

// public ParameterSubscription(Fuse.Reactive.Parameter parameter, Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :29
void Parameter__ParameterSubscription__ctor_2_fn(Parameter__ParameterSubscription* __this, ::g::Fuse::Reactive::Parameter* parameter, uObject* context, uObject* listener)
{
    __this->ctor_2(parameter, context, listener);
}

// public override sealed void Dispose() :35
void Parameter__ParameterSubscription__Dispose_fn(Parameter__ParameterSubscription* __this)
{
    uStackFrame __("Fuse.Reactive.Parameter.ParameterSubscription", "Dispose()");
    __this->UnsubscribeVisual();
    ::g::Fuse::Reactive::UnaryOperator__Subscription__Dispose_fn(__this);
}

// public ParameterSubscription New(Fuse.Reactive.Parameter parameter, Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :29
void Parameter__ParameterSubscription__New2_fn(::g::Fuse::Reactive::Parameter* parameter, uObject* context, uObject* listener, Parameter__ParameterSubscription** __retval)
{
    *__retval = Parameter__ParameterSubscription::New2(parameter, context, listener);
}

// protected override sealed void OnNewOperand(object obj) :52
void Parameter__ParameterSubscription__OnNewOperand_fn(Parameter__ParameterSubscription* __this, uObject* obj)
{
    uStackFrame __("Fuse.Reactive.Parameter.ParameterSubscription", "OnNewOperand(object)");
    __this->ClearDiagnostic();
    __this->UnsubscribeVisual();

    try
    {
        {
            __this->_visual = uCast< ::g::Fuse::Visual*>(obj, ::TYPES[57/*Fuse.Visual*/]);
            uPtr(__this->_visual)->add_ParameterChanged(uDelegate::New(::TYPES[58/*Uno.EventHandler*/], (void*)Parameter__ParameterSubscription__OnParameterChanged_fn, __this));
        }
    }

    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        __this->SetDiagnostic(::g::Uno::String::op_Addition2(::STRINGS[89/*"Failed to f...*/], uPtr(e)->Message()), (uObject*)__this->_parameter);
        return;
    }

    __this->OnParameterChanged(NULL, NULL);
}

// private void OnParameterChanged(object sender, Uno.EventArgs args) :72
void Parameter__ParameterSubscription__OnParameterChanged_fn(Parameter__ParameterSubscription* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnParameterChanged(sender, args);
}

// private void UnsubscribeVisual() :41
void Parameter__ParameterSubscription__UnsubscribeVisual_fn(Parameter__ParameterSubscription* __this)
{
    __this->UnsubscribeVisual();
}

// public ParameterSubscription(Fuse.Reactive.Parameter parameter, Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) [instance] :29
void Parameter__ParameterSubscription::ctor_2(::g::Fuse::Reactive::Parameter* parameter, uObject* context, uObject* listener)
{
    uStackFrame __("Fuse.Reactive.Parameter.ParameterSubscription", ".ctor(Fuse.Reactive.Parameter,Fuse.Reactive.IContext,Fuse.Reactive.IListener)");
    ctor_1(parameter, listener);
    _parameter = parameter;
    Init(context);
}

// private void OnParameterChanged(object sender, Uno.EventArgs args) [instance] :72
void Parameter__ParameterSubscription::OnParameterChanged(uObject* sender, ::g::Uno::EventArgs* args)
{
    uStackFrame __("Fuse.Reactive.Parameter.ParameterSubscription", "OnParameterChanged(object,Uno.EventArgs)");

    if (_visual == NULL)
        return;

    if (::g::Uno::String::op_Equality(uPtr(_visual)->Parameter(), NULL))
        return;

    ClearDiagnostic();
    uObject* data = NULL;

    try
    {
        {
            data = ::g::Fuse::Json::Parse(uPtr(_visual)->Parameter());
        }
    }

    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        SetDiagnostic(::g::Uno::String::op_Addition2(::STRINGS[90/*"Failed to p...*/], uPtr(e)->Message()), (uObject*)_parameter);
        return;
    }

    PushNewData(data);
}

// private void UnsubscribeVisual() [instance] :41
void Parameter__ParameterSubscription::UnsubscribeVisual()
{
    uStackFrame __("Fuse.Reactive.Parameter.ParameterSubscription", "UnsubscribeVisual()");

    if (_visual != NULL)
    {
        uPtr(_visual)->remove_ParameterChanged(uDelegate::New(::TYPES[58/*Uno.EventHandler*/], (void*)Parameter__ParameterSubscription__OnParameterChanged_fn, this));
        _visual = NULL;
    }
}

// public ParameterSubscription New(Fuse.Reactive.Parameter parameter, Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) [static] :29
Parameter__ParameterSubscription* Parameter__ParameterSubscription::New2(::g::Fuse::Reactive::Parameter* parameter, uObject* context, uObject* listener)
{
    Parameter__ParameterSubscription* obj1 = (Parameter__ParameterSubscription*)uNew(Parameter__ParameterSubscription_typeof());
    obj1->ctor_2(parameter, context, listener);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.4.0/MathFunctions.uno
// -------------------------------------------------------------------------------

// public sealed class Pow :375
// {
static void Pow_build(uType* type)
{
    ::STRINGS[91] = uString::Const("pow");
    ::TYPES[7] = ::g::Fuse::Reactive::BinaryFloatOperator__FloatOp_typeof();
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::BinaryOperator_type, interface0));
    type->SetFields(4);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Pow__New1_fn, 0, true, type, 2, ::g::Fuse::Reactive::Expression_typeof(), ::g::Fuse::Reactive::Expression_typeof()));
}

::g::Fuse::Reactive::BinaryOperator_type* Pow_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::BinaryOperator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::BinaryFloatOperator_typeof();
    options.FieldCount = 4;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Pow);
    options.TypeSize = sizeof(::g::Fuse::Reactive::BinaryOperator_type);
    type = (::g::Fuse::Reactive::BinaryOperator_type*)uClassType::New("Fuse.Reactive.Pow", options);
    type->fp_build_ = Pow_build;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::BinaryOperator__Subscribe_fn;
    return type;
}

// public Pow(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) :378
void Pow__ctor_3_fn(Pow* __this, ::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right)
{
    __this->ctor_3(left, right);
}

// public Pow New(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) :378
void Pow__New1_fn(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right, Pow** __retval)
{
    *__retval = Pow::New1(left, right);
}

// public Pow(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) [instance] :378
void Pow::ctor_3(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right)
{
    ctor_2(left, right, ::STRINGS[91/*"pow"*/], uDelegate::New(::TYPES[7/*Fuse.Reactive.BinaryFloatOperator.FloatOp*/], (void*)::g::Uno::Math__Pow_fn));
}

// public Pow New(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) [static] :378
Pow* Pow::New1(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right)
{
    Pow* obj1 = (Pow*)uNew(Pow_typeof());
    obj1->ctor_3(left, right);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.4.0/Property.uno
// --------------------------------------------------------------------------

// public sealed class Property :8
// {
static void Property_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::Expression_type, interface0));
    type->SetFields(0,
        ::g::Uno::UX::PropertyAccessor_typeof(), offsetof(Property, _Accessor), 0,
        ::g::Fuse::Reactive::ConstantExpression_typeof(), offsetof(Property, _Object), 0);
    type->Reflection.SetFunctions(3,
        new uFunction("get_Accessor", NULL, (void*)Property__get_Accessor_fn, 0, false, ::g::Uno::UX::PropertyAccessor_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)Property__New1_fn, 0, true, type, 2, ::g::Fuse::Reactive::ConstantExpression_typeof(), ::g::Uno::UX::PropertyAccessor_typeof()),
        new uFunction("get_Object", NULL, (void*)Property__get_Object_fn, 0, false, ::g::Fuse::Reactive::ConstantExpression_typeof(), 0));
}

::g::Fuse::Reactive::Expression_type* Property_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::Expression_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::Expression_typeof();
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Property);
    options.TypeSize = sizeof(::g::Fuse::Reactive::Expression_type);
    type = (::g::Fuse::Reactive::Expression_type*)uClassType::New("Fuse.Reactive.Property", options);
    type->fp_build_ = Property_build;
    type->fp_Subscribe = (void(*)(::g::Fuse::Reactive::Expression*, uObject*, uObject*, uObject**))Property__Subscribe_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))Property__Subscribe_fn;
    return type;
}

// public Property(Fuse.Reactive.ConstantExpression obj, Uno.UX.PropertyAccessor accessor) :14
void Property__ctor_1_fn(Property* __this, ::g::Fuse::Reactive::ConstantExpression* obj, ::g::Uno::UX::PropertyAccessor* accessor)
{
    __this->ctor_1(obj, accessor);
}

// public generated Uno.UX.PropertyAccessor get_Accessor() :11
void Property__get_Accessor_fn(Property* __this, ::g::Uno::UX::PropertyAccessor** __retval)
{
    *__retval = __this->Accessor();
}

// private generated void set_Accessor(Uno.UX.PropertyAccessor value) :11
void Property__set_Accessor_fn(Property* __this, ::g::Uno::UX::PropertyAccessor* value)
{
    __this->Accessor(value);
}

// public Property New(Fuse.Reactive.ConstantExpression obj, Uno.UX.PropertyAccessor accessor) :14
void Property__New1_fn(::g::Fuse::Reactive::ConstantExpression* obj, ::g::Uno::UX::PropertyAccessor* accessor, Property** __retval)
{
    *__retval = Property::New1(obj, accessor);
}

// public generated Fuse.Reactive.ConstantExpression get_Object() :10
void Property__get_Object_fn(Property* __this, ::g::Fuse::Reactive::ConstantExpression** __retval)
{
    *__retval = __this->Object();
}

// private generated void set_Object(Fuse.Reactive.ConstantExpression value) :10
void Property__set_Object_fn(Property* __this, ::g::Fuse::Reactive::ConstantExpression* value)
{
    __this->Object(value);
}

// public override sealed Uno.IDisposable Subscribe(Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :19
void Property__Subscribe_fn(Property* __this, uObject* context, uObject* listener, uObject** __retval)
{
    uStackFrame __("Fuse.Reactive.Property", "Subscribe(Fuse.Reactive.IContext,Fuse.Reactive.IListener)");
    ::g::Uno::UX::PropertyObject* obj = uCast< ::g::Uno::UX::PropertyObject*>(uPtr(__this->Object())->GetValue(context), ::g::Uno::UX::PropertyObject_typeof());
    return *__retval = (uObject*)Property__Subscription::New1(__this, obj, __this->Accessor(), listener), void();
}

// public Property(Fuse.Reactive.ConstantExpression obj, Uno.UX.PropertyAccessor accessor) [instance] :14
void Property::ctor_1(::g::Fuse::Reactive::ConstantExpression* obj, ::g::Uno::UX::PropertyAccessor* accessor)
{
    ctor_();
    Object(obj);
    Accessor(accessor);
}

// public generated Uno.UX.PropertyAccessor get_Accessor() [instance] :11
::g::Uno::UX::PropertyAccessor* Property::Accessor()
{
    return _Accessor;
}

// private generated void set_Accessor(Uno.UX.PropertyAccessor value) [instance] :11
void Property::Accessor(::g::Uno::UX::PropertyAccessor* value)
{
    _Accessor = value;
}

// public generated Fuse.Reactive.ConstantExpression get_Object() [instance] :10
::g::Fuse::Reactive::ConstantExpression* Property::Object()
{
    return _Object;
}

// private generated void set_Object(Fuse.Reactive.ConstantExpression value) [instance] :10
void Property::Object(::g::Fuse::Reactive::ConstantExpression* value)
{
    _Object = value;
}

// public Property New(Fuse.Reactive.ConstantExpression obj, Uno.UX.PropertyAccessor accessor) [static] :14
Property* Property::New1(::g::Fuse::Reactive::ConstantExpression* obj, ::g::Uno::UX::PropertyAccessor* accessor)
{
    Property* obj1 = (Property*)uNew(Property_typeof());
    obj1->ctor_1(obj, accessor);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Bindings/1.4.0/DataBinding.uno
// --------------------------------------------------------------------------

// public sealed class PropertyBinding :323
// {
static void PropertyBinding_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Reactive::IContext_typeof(), offsetof(::g::Fuse::Reactive::DataBinding_type, interface0),
        ::g::Fuse::Reactive::IListener_typeof(), offsetof(::g::Fuse::Reactive::DataBinding_type, interface1),
        ::g::Fuse::Reactive::IObserver_typeof(), offsetof(::g::Fuse::Reactive::DataBinding_type, interface2),
        ::g::Fuse::INameListener_typeof(), offsetof(::g::Fuse::Reactive::DataBinding_type, interface3),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Reactive::DataBinding_type, interface4));
    type->SetFields(9);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)PropertyBinding__New2_fn, 0, true, type, 2, ::g::Uno::UX::Property_typeof(), ::g::Uno::UX::Property_typeof()));
}

::g::Fuse::Reactive::DataBinding_type* PropertyBinding_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::DataBinding_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::DataBinding_typeof();
    options.FieldCount = 9;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(PropertyBinding);
    options.TypeSize = sizeof(::g::Fuse::Reactive::DataBinding_type);
    type = (::g::Fuse::Reactive::DataBinding_type*)uClassType::New("Fuse.Reactive.PropertyBinding", options);
    type->fp_build_ = PropertyBinding_build;
    type->interface2.fp_OnClear = (void(*)(uObject*))::g::Fuse::Reactive::DataBinding__FuseReactiveIObserverOnClear_fn;
    type->interface2.fp_OnSet = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::DataBinding__FuseReactiveIObserverOnSet_fn;
    type->interface2.fp_OnAdd = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::DataBinding__FuseReactiveIObserverOnAdd_fn;
    type->interface2.fp_OnNewAt = (void(*)(uObject*, int*, uObject*))::g::Fuse::Reactive::DataBinding__FuseReactiveIObserverOnNewAt_fn;
    type->interface2.fp_OnFailed = (void(*)(uObject*, uString*))::g::Fuse::Reactive::DataBinding__FuseReactiveIObserverOnFailed_fn;
    type->interface2.fp_OnNewAll = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::DataBinding__FuseReactiveIObserverOnNewAll_fn;
    type->interface2.fp_OnRemoveAt = (void(*)(uObject*, int*))::g::Fuse::Reactive::DataBinding__FuseReactiveIObserverOnRemoveAt_fn;
    type->interface2.fp_OnInsertAt = (void(*)(uObject*, int*, uObject*))::g::Fuse::Reactive::DataBinding__FuseReactiveIObserverOnInsertAt_fn;
    type->interface3.fp_OnNameChanged = (void(*)(uObject*, ::g::Fuse::Node*, ::g::Uno::UX::Selector*))::g::Fuse::Reactive::DataBinding__FuseINameListenerOnNameChanged_fn;
    type->interface4.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))::g::Fuse::Reactive::DataBinding__UnoUXIPropertyListenerOnPropertyChanged_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uString*, uObject*, uObject**))::g::Fuse::Reactive::ExpressionBinding__FuseReactiveIContextSubscribe_fn;
    type->interface1.fp_OnNewData = (void(*)(uObject*, uObject*, uObject*))::g::Fuse::Reactive::ExpressionBinding__FuseReactiveIListenerOnNewData_fn;
    type->interface0.fp_get_Node = (void(*)(uObject*, ::g::Fuse::Node**))::g::Fuse::Reactive::ExpressionBinding__FuseReactiveIContextget_Node_fn;
    type->interface0.fp_SubscribeResource = (void(*)(uObject*, uObject*, uString*, uObject*, uObject**))::g::Fuse::Reactive::DataBinding__SubscribeResource_fn;
    return type;
}

// public PropertyBinding(Uno.UX.Property target, Uno.UX.Property source) :326
void PropertyBinding__ctor_3_fn(PropertyBinding* __this, ::g::Uno::UX::Property* target, ::g::Uno::UX::Property* source)
{
    __this->ctor_3(target, source);
}

// public PropertyBinding New(Uno.UX.Property target, Uno.UX.Property source) :326
void PropertyBinding__New2_fn(::g::Uno::UX::Property* target, ::g::Uno::UX::Property* source, PropertyBinding** __retval)
{
    *__retval = PropertyBinding::New2(target, source);
}

// public PropertyBinding(Uno.UX.Property target, Uno.UX.Property source) [instance] :326
void PropertyBinding::ctor_3(::g::Uno::UX::Property* target, ::g::Uno::UX::Property* source)
{
    uStackFrame __("Fuse.Reactive.PropertyBinding", ".ctor(Uno.UX.Property,Uno.UX.Property)");
    ctor_2(target, (uObject*)::g::Fuse::Reactive::Property::New1(::g::Fuse::Reactive::Constant::New1(uPtr(source)->Object()), source), 3);
}

// public PropertyBinding New(Uno.UX.Property target, Uno.UX.Property source) [static] :326
PropertyBinding* PropertyBinding::New2(::g::Uno::UX::Property* target, ::g::Uno::UX::Property* source)
{
    PropertyBinding* obj1 = (PropertyBinding*)uNew(PropertyBinding_typeof());
    obj1->ctor_3(target, source);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.4.0/QuaternaryOperator.uno
// ------------------------------------------------------------------------------------

// public abstract class QuaternaryOperator :8
// {
static void QuaternaryOperator_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(QuaternaryOperator_type, interface0));
    type->SetFields(0,
        ::g::Fuse::Reactive::Expression_typeof(), offsetof(QuaternaryOperator, _First), 0,
        ::g::Fuse::Reactive::Expression_typeof(), offsetof(QuaternaryOperator, _Fourth), 0,
        ::g::Fuse::Reactive::Expression_typeof(), offsetof(QuaternaryOperator, _Second), 0,
        ::g::Fuse::Reactive::Expression_typeof(), offsetof(QuaternaryOperator, _Third), 0);
    type->Reflection.SetFunctions(4,
        new uFunction("get_First", NULL, (void*)QuaternaryOperator__get_First_fn, 0, false, ::g::Fuse::Reactive::Expression_typeof(), 0),
        new uFunction("get_Fourth", NULL, (void*)QuaternaryOperator__get_Fourth_fn, 0, false, ::g::Fuse::Reactive::Expression_typeof(), 0),
        new uFunction("get_Second", NULL, (void*)QuaternaryOperator__get_Second_fn, 0, false, ::g::Fuse::Reactive::Expression_typeof(), 0),
        new uFunction("get_Third", NULL, (void*)QuaternaryOperator__get_Third_fn, 0, false, ::g::Fuse::Reactive::Expression_typeof(), 0));
}

QuaternaryOperator_type* QuaternaryOperator_typeof()
{
    static uSStrong<QuaternaryOperator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::Expression_typeof();
    options.FieldCount = 4;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(QuaternaryOperator);
    options.TypeSize = sizeof(QuaternaryOperator_type);
    type = (QuaternaryOperator_type*)uClassType::New("Fuse.Reactive.QuaternaryOperator", options);
    type->fp_build_ = QuaternaryOperator_build;
    type->fp_Subscribe = (void(*)(::g::Fuse::Reactive::Expression*, uObject*, uObject*, uObject**))QuaternaryOperator__Subscribe_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))QuaternaryOperator__Subscribe_fn;
    return type;
}

// protected QuaternaryOperator(Fuse.Reactive.Expression first, Fuse.Reactive.Expression second, Fuse.Reactive.Expression third, Fuse.Reactive.Expression fourth) :15
void QuaternaryOperator__ctor_1_fn(QuaternaryOperator* __this, ::g::Fuse::Reactive::Expression* first, ::g::Fuse::Reactive::Expression* second, ::g::Fuse::Reactive::Expression* third, ::g::Fuse::Reactive::Expression* fourth)
{
    __this->ctor_1(first, second, third, fourth);
}

// public generated Fuse.Reactive.Expression get_First() :10
void QuaternaryOperator__get_First_fn(QuaternaryOperator* __this, ::g::Fuse::Reactive::Expression** __retval)
{
    *__retval = __this->First();
}

// private generated void set_First(Fuse.Reactive.Expression value) :10
void QuaternaryOperator__set_First_fn(QuaternaryOperator* __this, ::g::Fuse::Reactive::Expression* value)
{
    __this->First(value);
}

// public generated Fuse.Reactive.Expression get_Fourth() :13
void QuaternaryOperator__get_Fourth_fn(QuaternaryOperator* __this, ::g::Fuse::Reactive::Expression** __retval)
{
    *__retval = __this->Fourth();
}

// private generated void set_Fourth(Fuse.Reactive.Expression value) :13
void QuaternaryOperator__set_Fourth_fn(QuaternaryOperator* __this, ::g::Fuse::Reactive::Expression* value)
{
    __this->Fourth(value);
}

// protected bool get_IsFirstOptional() :28
void QuaternaryOperator__get_IsFirstOptional_fn(QuaternaryOperator* __this, bool* __retval)
{
    *__retval = __this->IsFirstOptional();
}

// protected bool get_IsFourthOptional() :31
void QuaternaryOperator__get_IsFourthOptional_fn(QuaternaryOperator* __this, bool* __retval)
{
    *__retval = __this->IsFourthOptional();
}

// protected bool get_IsSecondOptional() :29
void QuaternaryOperator__get_IsSecondOptional_fn(QuaternaryOperator* __this, bool* __retval)
{
    *__retval = __this->IsSecondOptional();
}

// protected bool get_IsThirdOptional() :30
void QuaternaryOperator__get_IsThirdOptional_fn(QuaternaryOperator* __this, bool* __retval)
{
    *__retval = __this->IsThirdOptional();
}

// public generated Fuse.Reactive.Expression get_Second() :11
void QuaternaryOperator__get_Second_fn(QuaternaryOperator* __this, ::g::Fuse::Reactive::Expression** __retval)
{
    *__retval = __this->Second();
}

// private generated void set_Second(Fuse.Reactive.Expression value) :11
void QuaternaryOperator__set_Second_fn(QuaternaryOperator* __this, ::g::Fuse::Reactive::Expression* value)
{
    __this->Second(value);
}

// public override sealed Uno.IDisposable Subscribe(Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :23
void QuaternaryOperator__Subscribe_fn(QuaternaryOperator* __this, uObject* context, uObject* listener, uObject** __retval)
{
    uStackFrame __("Fuse.Reactive.QuaternaryOperator", "Subscribe(Fuse.Reactive.IContext,Fuse.Reactive.IListener)");
    return *__retval = (uObject*)QuaternaryOperator__Subscription::Create(__this, context, listener), void();
}

// public generated Fuse.Reactive.Expression get_Third() :12
void QuaternaryOperator__get_Third_fn(QuaternaryOperator* __this, ::g::Fuse::Reactive::Expression** __retval)
{
    *__retval = __this->Third();
}

// private generated void set_Third(Fuse.Reactive.Expression value) :12
void QuaternaryOperator__set_Third_fn(QuaternaryOperator* __this, ::g::Fuse::Reactive::Expression* value)
{
    __this->Third(value);
}

// protected QuaternaryOperator(Fuse.Reactive.Expression first, Fuse.Reactive.Expression second, Fuse.Reactive.Expression third, Fuse.Reactive.Expression fourth) [instance] :15
void QuaternaryOperator::ctor_1(::g::Fuse::Reactive::Expression* first, ::g::Fuse::Reactive::Expression* second, ::g::Fuse::Reactive::Expression* third, ::g::Fuse::Reactive::Expression* fourth)
{
    ctor_();
    First(first);
    Second(second);
    Third(third);
    Fourth(fourth);
}

// public generated Fuse.Reactive.Expression get_First() [instance] :10
::g::Fuse::Reactive::Expression* QuaternaryOperator::First()
{
    return _First;
}

// private generated void set_First(Fuse.Reactive.Expression value) [instance] :10
void QuaternaryOperator::First(::g::Fuse::Reactive::Expression* value)
{
    _First = value;
}

// public generated Fuse.Reactive.Expression get_Fourth() [instance] :13
::g::Fuse::Reactive::Expression* QuaternaryOperator::Fourth()
{
    return _Fourth;
}

// private generated void set_Fourth(Fuse.Reactive.Expression value) [instance] :13
void QuaternaryOperator::Fourth(::g::Fuse::Reactive::Expression* value)
{
    _Fourth = value;
}

// protected bool get_IsFirstOptional() [instance] :28
bool QuaternaryOperator::IsFirstOptional()
{
    return false;
}

// protected bool get_IsFourthOptional() [instance] :31
bool QuaternaryOperator::IsFourthOptional()
{
    return false;
}

// protected bool get_IsSecondOptional() [instance] :29
bool QuaternaryOperator::IsSecondOptional()
{
    return false;
}

// protected bool get_IsThirdOptional() [instance] :30
bool QuaternaryOperator::IsThirdOptional()
{
    return false;
}

// public generated Fuse.Reactive.Expression get_Second() [instance] :11
::g::Fuse::Reactive::Expression* QuaternaryOperator::Second()
{
    return _Second;
}

// private generated void set_Second(Fuse.Reactive.Expression value) [instance] :11
void QuaternaryOperator::Second(::g::Fuse::Reactive::Expression* value)
{
    _Second = value;
}

// public generated Fuse.Reactive.Expression get_Third() [instance] :12
::g::Fuse::Reactive::Expression* QuaternaryOperator::Third()
{
    return _Third;
}

// private generated void set_Third(Fuse.Reactive.Expression value) [instance] :12
void QuaternaryOperator::Third(::g::Fuse::Reactive::Expression* value)
{
    _Third = value;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.4.0/MathFunctions.uno
// -------------------------------------------------------------------------------

// public sealed class RadiansToDegrees :319
// {
static void RadiansToDegrees_build(uType* type)
{
    ::STRINGS[92] = uString::Const("radiansToDegrees");
    ::TYPES[0] = ::g::Fuse::Reactive::UnaryFloatOperator__FloatOp_typeof();
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::UnaryOperator_type, interface0));
    type->SetFields(3);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)RadiansToDegrees__New1_fn, 0, true, type, 1, ::g::Fuse::Reactive::Expression_typeof()));
}

::g::Fuse::Reactive::UnaryOperator_type* RadiansToDegrees_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::UnaryOperator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::UnaryFloatOperator_typeof();
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(RadiansToDegrees);
    options.TypeSize = sizeof(::g::Fuse::Reactive::UnaryOperator_type);
    type = (::g::Fuse::Reactive::UnaryOperator_type*)uClassType::New("Fuse.Reactive.RadiansToDegrees", options);
    type->fp_build_ = RadiansToDegrees_build;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::UnaryOperator__Subscribe_fn;
    return type;
}

// public RadiansToDegrees(Fuse.Reactive.Expression operand) :322
void RadiansToDegrees__ctor_3_fn(RadiansToDegrees* __this, ::g::Fuse::Reactive::Expression* operand)
{
    __this->ctor_3(operand);
}

// public RadiansToDegrees New(Fuse.Reactive.Expression operand) :322
void RadiansToDegrees__New1_fn(::g::Fuse::Reactive::Expression* operand, RadiansToDegrees** __retval)
{
    *__retval = RadiansToDegrees::New1(operand);
}

// public RadiansToDegrees(Fuse.Reactive.Expression operand) [instance] :322
void RadiansToDegrees::ctor_3(::g::Fuse::Reactive::Expression* operand)
{
    ctor_2(operand, ::STRINGS[92/*"radiansToDe...*/], uDelegate::New(::TYPES[0/*Fuse.Reactive.UnaryFloatOperator.FloatOp*/], (void*)::g::Uno::Math__RadiansToDegrees_fn));
}

// public RadiansToDegrees New(Fuse.Reactive.Expression operand) [static] :322
RadiansToDegrees* RadiansToDegrees::New1(::g::Fuse::Reactive::Expression* operand)
{
    RadiansToDegrees* obj1 = (RadiansToDegrees*)uNew(RadiansToDegrees_typeof());
    obj1->ctor_3(operand);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Bindings/1.4.0/WhileCount.uno
// -------------------------------------------------------------------------

// private enum WhileCount.Range :145
uEnumType* WhileCount__Range_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Reactive.WhileCount.Range", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Open", 0LL,
        "Exclusive", 1LL,
        "Inclusive", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.4.0/Resource.uno
// --------------------------------------------------------------------------

// public sealed class Resource :8
// {
static void Resource_build(uType* type)
{
    ::TYPES[24] = ::g::Fuse::Reactive::IContext_typeof();
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::Expression_type, interface0));
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(Resource, _Key), 0);
    type->Reflection.SetFunctions(2,
        new uFunction("get_Key", NULL, (void*)Resource__get_Key_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)Resource__New1_fn, 0, true, type, 1, ::g::Uno::String_typeof()));
}

::g::Fuse::Reactive::Expression_type* Resource_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::Expression_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::Expression_typeof();
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Resource);
    options.TypeSize = sizeof(::g::Fuse::Reactive::Expression_type);
    type = (::g::Fuse::Reactive::Expression_type*)uClassType::New("Fuse.Reactive.Resource", options);
    type->fp_build_ = Resource_build;
    type->fp_Subscribe = (void(*)(::g::Fuse::Reactive::Expression*, uObject*, uObject*, uObject**))Resource__Subscribe_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))Resource__Subscribe_fn;
    return type;
}

// public Resource(string key) :12
void Resource__ctor_1_fn(Resource* __this, uString* key)
{
    __this->ctor_1(key);
}

// public generated string get_Key() :10
void Resource__get_Key_fn(Resource* __this, uString** __retval)
{
    *__retval = __this->Key();
}

// private generated void set_Key(string value) :10
void Resource__set_Key_fn(Resource* __this, uString* value)
{
    __this->Key(value);
}

// public Resource New(string key) :12
void Resource__New1_fn(uString* key, Resource** __retval)
{
    *__retval = Resource::New1(key);
}

// public override sealed Uno.IDisposable Subscribe(Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :16
void Resource__Subscribe_fn(Resource* __this, uObject* context, uObject* listener, uObject** __retval)
{
    uStackFrame __("Fuse.Reactive.Resource", "Subscribe(Fuse.Reactive.IContext,Fuse.Reactive.IListener)");
    return *__retval = ::g::Fuse::Reactive::IContext::SubscribeResource(uInterface(uPtr(context), ::TYPES[24/*Fuse.Reactive.IContext*/]), (uObject*)__this, __this->Key(), listener), void();
}

// public Resource(string key) [instance] :12
void Resource::ctor_1(uString* key)
{
    ctor_();
    Key(key);
}

// public generated string get_Key() [instance] :10
uString* Resource::Key()
{
    return _Key;
}

// private generated void set_Key(string value) [instance] :10
void Resource::Key(uString* value)
{
    _Key = value;
}

// public Resource New(string key) [static] :12
Resource* Resource::New1(uString* key)
{
    Resource* obj1 = (Resource*)uNew(Resource_typeof());
    obj1->ctor_1(key);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Bindings/1.4.0/DataBinding.uno
// --------------------------------------------------------------------------

// public sealed class ResourceBinding :330
// {
static void ResourceBinding_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Reactive::IContext_typeof(), offsetof(::g::Fuse::Reactive::DataBinding_type, interface0),
        ::g::Fuse::Reactive::IListener_typeof(), offsetof(::g::Fuse::Reactive::DataBinding_type, interface1),
        ::g::Fuse::Reactive::IObserver_typeof(), offsetof(::g::Fuse::Reactive::DataBinding_type, interface2),
        ::g::Fuse::INameListener_typeof(), offsetof(::g::Fuse::Reactive::DataBinding_type, interface3),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Reactive::DataBinding_type, interface4));
    type->SetFields(9);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)ResourceBinding__New2_fn, 0, true, type, 2, ::g::Uno::UX::Property_typeof(), ::g::Uno::String_typeof()));
}

::g::Fuse::Reactive::DataBinding_type* ResourceBinding_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::DataBinding_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::DataBinding_typeof();
    options.FieldCount = 9;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(ResourceBinding);
    options.TypeSize = sizeof(::g::Fuse::Reactive::DataBinding_type);
    type = (::g::Fuse::Reactive::DataBinding_type*)uClassType::New("Fuse.Reactive.ResourceBinding", options);
    type->fp_build_ = ResourceBinding_build;
    type->interface2.fp_OnClear = (void(*)(uObject*))::g::Fuse::Reactive::DataBinding__FuseReactiveIObserverOnClear_fn;
    type->interface2.fp_OnSet = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::DataBinding__FuseReactiveIObserverOnSet_fn;
    type->interface2.fp_OnAdd = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::DataBinding__FuseReactiveIObserverOnAdd_fn;
    type->interface2.fp_OnNewAt = (void(*)(uObject*, int*, uObject*))::g::Fuse::Reactive::DataBinding__FuseReactiveIObserverOnNewAt_fn;
    type->interface2.fp_OnFailed = (void(*)(uObject*, uString*))::g::Fuse::Reactive::DataBinding__FuseReactiveIObserverOnFailed_fn;
    type->interface2.fp_OnNewAll = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::DataBinding__FuseReactiveIObserverOnNewAll_fn;
    type->interface2.fp_OnRemoveAt = (void(*)(uObject*, int*))::g::Fuse::Reactive::DataBinding__FuseReactiveIObserverOnRemoveAt_fn;
    type->interface2.fp_OnInsertAt = (void(*)(uObject*, int*, uObject*))::g::Fuse::Reactive::DataBinding__FuseReactiveIObserverOnInsertAt_fn;
    type->interface3.fp_OnNameChanged = (void(*)(uObject*, ::g::Fuse::Node*, ::g::Uno::UX::Selector*))::g::Fuse::Reactive::DataBinding__FuseINameListenerOnNameChanged_fn;
    type->interface4.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))::g::Fuse::Reactive::DataBinding__UnoUXIPropertyListenerOnPropertyChanged_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uString*, uObject*, uObject**))::g::Fuse::Reactive::ExpressionBinding__FuseReactiveIContextSubscribe_fn;
    type->interface1.fp_OnNewData = (void(*)(uObject*, uObject*, uObject*))::g::Fuse::Reactive::ExpressionBinding__FuseReactiveIListenerOnNewData_fn;
    type->interface0.fp_get_Node = (void(*)(uObject*, ::g::Fuse::Node**))::g::Fuse::Reactive::ExpressionBinding__FuseReactiveIContextget_Node_fn;
    type->interface0.fp_SubscribeResource = (void(*)(uObject*, uObject*, uString*, uObject*, uObject**))::g::Fuse::Reactive::DataBinding__SubscribeResource_fn;
    return type;
}

// public ResourceBinding(Uno.UX.Property target, string key) :333
void ResourceBinding__ctor_3_fn(ResourceBinding* __this, ::g::Uno::UX::Property* target, uString* key)
{
    __this->ctor_3(target, key);
}

// public ResourceBinding New(Uno.UX.Property target, string key) :333
void ResourceBinding__New2_fn(::g::Uno::UX::Property* target, uString* key, ResourceBinding** __retval)
{
    *__retval = ResourceBinding::New2(target, key);
}

// public ResourceBinding(Uno.UX.Property target, string key) [instance] :333
void ResourceBinding::ctor_3(::g::Uno::UX::Property* target, uString* key)
{
    uStackFrame __("Fuse.Reactive.ResourceBinding", ".ctor(Uno.UX.Property,string)");
    ctor_2(target, (uObject*)::g::Fuse::Reactive::Resource::New1(key), 3);
}

// public ResourceBinding New(Uno.UX.Property target, string key) [static] :333
ResourceBinding* ResourceBinding::New2(::g::Uno::UX::Property* target, uString* key)
{
    ResourceBinding* obj1 = (ResourceBinding*)uNew(ResourceBinding_typeof());
    obj1->ctor_3(target, key);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Bindings/1.4.0/Subscription/ResourceSubscription.uno
// ------------------------------------------------------------------------------------------------

// internal sealed class ResourceSubscription :7
// {
static void ResourceSubscription_build(uType* type)
{
    ::STRINGS[93] = uString::Const("{Resource ");
    ::STRINGS[43] = uString::Const("} not found in data context");
    ::TYPES[34] = ::g::Uno::Action_typeof();
    ::TYPES[2] = ::g::Uno::IDisposable_typeof();
    ::TYPES[59] = ::g::Uno::Predicate_typeof()->MakeType(uObject_typeof(), NULL);
    ::TYPES[23] = ::g::Fuse::Reactive::IListener_typeof();
    type->SetDependencies(
        ::g::Fuse::Diagnostics_typeof(),
        ::g::Fuse::Resources::ResourceRegistry_typeof());
    type->SetInterfaces(
        ::TYPES[2/*Uno.IDisposable*/], offsetof(ResourceSubscription_type, interface0));
    type->SetFields(0,
        ::g::Fuse::Node_typeof(), offsetof(ResourceSubscription, _origin), 0,
        ::g::Uno::String_typeof(), offsetof(ResourceSubscription, _key), 0,
        ::g::Uno::Type_typeof(), offsetof(ResourceSubscription, _type), 0,
        ::TYPES[23/*Fuse.Reactive.IListener*/], offsetof(ResourceSubscription, _listener), 0,
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(ResourceSubscription, _source), 0,
        ::TYPES[2/*Uno.IDisposable*/], offsetof(ResourceSubscription, _diag), 0);
}

ResourceSubscription_type* ResourceSubscription_typeof()
{
    static uSStrong<ResourceSubscription_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.InterfaceCount = 1;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(ResourceSubscription);
    options.TypeSize = sizeof(ResourceSubscription_type);
    type = (ResourceSubscription_type*)uClassType::New("Fuse.Reactive.ResourceSubscription", options);
    type->fp_build_ = ResourceSubscription_build;
    type->interface0.fp_Dispose = (void(*)(uObject*))ResourceSubscription__Dispose_fn;
    return type;
}

// public ResourceSubscription(Fuse.Reactive.IExpression source, Fuse.Node origin, string key, Fuse.Reactive.IListener listener, Uno.Type type) :16
void ResourceSubscription__ctor__fn(ResourceSubscription* __this, uObject* source, ::g::Fuse::Node* origin, uString* key, uObject* listener, uType* type)
{
    __this->ctor_(source, origin, key, listener, type);
}

// private bool Accept(object o) :60
void ResourceSubscription__Accept_fn(ResourceSubscription* __this, uObject* o, bool* __retval)
{
    *__retval = __this->Accept(o);
}

// private void ClearDiagnostic() :36
void ResourceSubscription__ClearDiagnostic_fn(ResourceSubscription* __this)
{
    __this->ClearDiagnostic();
}

// public void Dispose() :28
void ResourceSubscription__Dispose_fn(ResourceSubscription* __this)
{
    __this->Dispose();
}

// public ResourceSubscription New(Fuse.Reactive.IExpression source, Fuse.Node origin, string key, Fuse.Reactive.IListener listener, Uno.Type type) :16
void ResourceSubscription__New1_fn(uObject* source, ::g::Fuse::Node* origin, uString* key, uObject* listener, uType* type, ResourceSubscription** __retval)
{
    *__retval = ResourceSubscription::New1(source, origin, key, listener, type);
}

// private void OnChanged() :45
void ResourceSubscription__OnChanged_fn(ResourceSubscription* __this)
{
    __this->OnChanged();
}

// public ResourceSubscription(Fuse.Reactive.IExpression source, Fuse.Node origin, string key, Fuse.Reactive.IListener listener, Uno.Type type) [instance] :16
void ResourceSubscription::ctor_(uObject* source, ::g::Fuse::Node* origin, uString* key, uObject* listener, uType* type)
{
    uStackFrame __("Fuse.Reactive.ResourceSubscription", ".ctor(Fuse.Reactive.IExpression,Fuse.Node,string,Fuse.Reactive.IListener,Uno.Type)");
    _source = source;
    _origin = origin;
    _key = key;
    _type = type;
    _listener = listener;
    ::g::Fuse::Resources::ResourceRegistry::AddResourceChangedHandler(_key, uDelegate::New(::TYPES[34/*Uno.Action*/], (void*)ResourceSubscription__OnChanged_fn, this));
    OnChanged();
}

// private bool Accept(object o) [instance] :60
bool ResourceSubscription::Accept(uObject* o)
{
    uStackFrame __("Fuse.Reactive.ResourceSubscription", "Accept(object)");
    return ::g::Fuse::Marshal::Is(o, _type);
}

// private void ClearDiagnostic() [instance] :36
void ResourceSubscription::ClearDiagnostic()
{
    uStackFrame __("Fuse.Reactive.ResourceSubscription", "ClearDiagnostic()");

    if (_diag != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_diag), ::TYPES[2/*Uno.IDisposable*/]));
        _diag = NULL;
    }
}

// public void Dispose() [instance] :28
void ResourceSubscription::Dispose()
{
    uStackFrame __("Fuse.Reactive.ResourceSubscription", "Dispose()");
    ClearDiagnostic();
    ::g::Fuse::Resources::ResourceRegistry::RemoveResourceChangedHandler(_key, uDelegate::New(::TYPES[34/*Uno.Action*/], (void*)ResourceSubscription__OnChanged_fn, this));
    _listener = NULL;
    _origin = NULL;
}

// private void OnChanged() [instance] :45
void ResourceSubscription::OnChanged()
{
    uStackFrame __("Fuse.Reactive.ResourceSubscription", "OnChanged()");
    ClearDiagnostic();
    uObject* resource;

    if (uPtr(_origin)->TryGetResource(_key, uDelegate::New(::TYPES[59/*Uno.Predicate<object>*/], (void*)ResourceSubscription__Accept_fn, this), &resource))
        ::g::Fuse::Reactive::IListener::OnNewData(uInterface(uPtr(_listener), ::TYPES[23/*Fuse.Reactive.IListener*/]), _source, resource);
    else
        _diag = ::g::Fuse::Diagnostics::ReportTemporalUserWarning(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[93/*"{Resource "*/], _key), ::STRINGS[43/*"} not found...*/]), _origin);
}

// public ResourceSubscription New(Fuse.Reactive.IExpression source, Fuse.Node origin, string key, Fuse.Reactive.IListener listener, Uno.Type type) [static] :16
ResourceSubscription* ResourceSubscription::New1(uObject* source, ::g::Fuse::Node* origin, uString* key, uObject* listener, uType* type)
{
    ResourceSubscription* obj1 = (ResourceSubscription*)uNew(ResourceSubscription_typeof());
    obj1->ctor_(source, origin, key, listener, type);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.4.0/MathFunctions.uno
// -------------------------------------------------------------------------------

// public sealed class Round :383
// {
static void Round_build(uType* type)
{
    ::STRINGS[94] = uString::Const("operand");
    ::TYPES[0] = ::g::Fuse::Reactive::UnaryFloatOperator__FloatOp_typeof();
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::UnaryOperator_type, interface0));
    type->SetFields(3);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Round__New1_fn, 0, true, type, 1, ::g::Fuse::Reactive::Expression_typeof()));
}

::g::Fuse::Reactive::UnaryOperator_type* Round_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::UnaryOperator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::UnaryFloatOperator_typeof();
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Round);
    options.TypeSize = sizeof(::g::Fuse::Reactive::UnaryOperator_type);
    type = (::g::Fuse::Reactive::UnaryOperator_type*)uClassType::New("Fuse.Reactive.Round", options);
    type->fp_build_ = Round_build;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::UnaryOperator__Subscribe_fn;
    return type;
}

// public Round(Fuse.Reactive.Expression operand) :386
void Round__ctor_3_fn(Round* __this, ::g::Fuse::Reactive::Expression* operand)
{
    __this->ctor_3(operand);
}

// public Round New(Fuse.Reactive.Expression operand) :386
void Round__New1_fn(::g::Fuse::Reactive::Expression* operand, Round** __retval)
{
    *__retval = Round::New1(operand);
}

// public Round(Fuse.Reactive.Expression operand) [instance] :386
void Round::ctor_3(::g::Fuse::Reactive::Expression* operand)
{
    ctor_2(operand, ::STRINGS[94/*"operand"*/], uDelegate::New(::TYPES[0/*Fuse.Reactive.UnaryFloatOperator.FloatOp*/], (void*)::g::Uno::Math__Round_fn));
}

// public Round New(Fuse.Reactive.Expression operand) [static] :386
Round* Round::New1(::g::Fuse::Reactive::Expression* operand)
{
    Round* obj1 = (Round*)uNew(Round_typeof());
    obj1->ctor_3(operand);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Bindings/1.4.0/With.uno
// -------------------------------------------------------------------

// public sealed class Select :92
// {
static void Select_build(uType* type)
{
    ::STRINGS[95] = uString::Const("'Select' is deprecated, use 'With' instead (works the same way). ");
    ::STRINGS[96] = uString::Const("/usr/local/share/uno/Packages/Fuse.Reactive.Bindings/1.4.0/With.uno");
    ::STRINGS[97] = uString::Const(".ctor");
    type->SetDependencies(
        ::g::Fuse::Diagnostics_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Reactive::With_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Reactive::With_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Reactive::With_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Reactive::With_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Reactive::With_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Reactive::With_type, interface5),
        ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof(), offsetof(::g::Fuse::Reactive::With_type, interface6),
        ::g::Fuse::Animations::IBasePlayerFeedback_typeof(), offsetof(::g::Fuse::Reactive::With_type, interface7),
        ::g::Fuse::Node__ISubtreeDataProvider_typeof(), offsetof(::g::Fuse::Reactive::With_type, interface8),
        ::g::Fuse::Reactive::ValueForwarder__IValueListener_typeof(), offsetof(::g::Fuse::Reactive::With_type, interface9));
    type->SetFields(40);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Select__New3_fn, 0, true, type, 0));
}

::g::Fuse::Reactive::With_type* Select_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::With_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::With_typeof();
    options.FieldCount = 40;
    options.InterfaceCount = 10;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(Select);
    options.TypeSize = sizeof(::g::Fuse::Reactive::With_type);
    type = (::g::Fuse::Reactive::With_type*)uClassType::New("Fuse.Reactive.Select", options);
    type->fp_build_ = Select_build;
    type->fp_ctor_ = (void*)Select__New3_fn;
    type->interface8.fp_GetData = (void(*)(uObject*, ::g::Fuse::Node*, uObject**))::g::Fuse::Reactive::With__FuseNodeISubtreeDataProviderGetData_fn;
    type->interface9.fp_NewValue = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::With__FuseReactiveValueForwarderIValueListenerNewValue_fn;
    type->interface7.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnPlaybackDone_fn;
    type->interface7.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnStable_fn;
    type->interface6.fp_OnProgressUpdated = (void(*)(uObject*, uObject*, double*, double*, int*))::g::Fuse::Triggers::Trigger__FuseAnimationsIUnwrappedPlayerFeedbackOnProgressUpdated_fn;
    type->interface4.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface4.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface5.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface4.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface4.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public Select() :94
void Select__ctor_6_fn(Select* __this)
{
    __this->ctor_6();
}

// public Select New() :94
void Select__New3_fn(Select** __retval)
{
    *__retval = Select::New3();
}

// public Select() [instance] :94
void Select::ctor_6()
{
    ctor_5();
    ::g::Fuse::Diagnostics::Deprecated(::STRINGS[95/*"'Select' is...*/], this, ::STRINGS[96/*"/usr/local/...*/], 96, ::STRINGS[97/*".ctor"*/]);
}

// public Select New() [static] :94
Select* Select::New3()
{
    Select* obj1 = (Select*)uNew(Select_typeof());
    obj1->ctor_6();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.4.0/MathFunctions.uno
// -------------------------------------------------------------------------------

// public sealed class Sign :367
// {
static void Sign_build(uType* type)
{
    ::STRINGS[98] = uString::Const("sign");
    ::TYPES[0] = ::g::Fuse::Reactive::UnaryFloatOperator__FloatOp_typeof();
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::UnaryOperator_type, interface0));
    type->SetFields(3);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Sign__New1_fn, 0, true, type, 1, ::g::Fuse::Reactive::Expression_typeof()));
}

::g::Fuse::Reactive::UnaryOperator_type* Sign_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::UnaryOperator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::UnaryFloatOperator_typeof();
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Sign);
    options.TypeSize = sizeof(::g::Fuse::Reactive::UnaryOperator_type);
    type = (::g::Fuse::Reactive::UnaryOperator_type*)uClassType::New("Fuse.Reactive.Sign", options);
    type->fp_build_ = Sign_build;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::UnaryOperator__Subscribe_fn;
    return type;
}

// public Sign(Fuse.Reactive.Expression operand) :370
void Sign__ctor_3_fn(Sign* __this, ::g::Fuse::Reactive::Expression* operand)
{
    __this->ctor_3(operand);
}

// public Sign New(Fuse.Reactive.Expression operand) :370
void Sign__New1_fn(::g::Fuse::Reactive::Expression* operand, Sign** __retval)
{
    *__retval = Sign::New1(operand);
}

// public Sign(Fuse.Reactive.Expression operand) [instance] :370
void Sign::ctor_3(::g::Fuse::Reactive::Expression* operand)
{
    ctor_2(operand, ::STRINGS[98/*"sign"*/], uDelegate::New(::TYPES[0/*Fuse.Reactive.UnaryFloatOperator.FloatOp*/], (void*)::g::Uno::Math__Sign_fn));
}

// public Sign New(Fuse.Reactive.Expression operand) [static] :370
Sign* Sign::New1(::g::Fuse::Reactive::Expression* operand)
{
    Sign* obj1 = (Sign*)uNew(Sign_typeof());
    obj1->ctor_3(operand);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.4.0/VarArgFunction.uno
// --------------------------------------------------------------------------------

// private sealed class SimpleVarArgFunction.SimpleSubscription :175
// {
static void SimpleVarArgFunction__SimpleSubscription_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Reactive::VarArgFunction__Subscription_type, interface0),
        ::g::Fuse::Reactive::IListener_typeof(), offsetof(::g::Fuse::Reactive::VarArgFunction__Subscription_type, interface1));
    type->SetFields(5,
        ::g::Fuse::Reactive::IListener_typeof(), offsetof(SimpleVarArgFunction__SimpleSubscription, _listener), 0,
        ::g::Fuse::Reactive::SimpleVarArgFunction_typeof(), offsetof(SimpleVarArgFunction__SimpleSubscription, _func1), 0);
}

::g::Fuse::Reactive::VarArgFunction__Subscription_type* SimpleVarArgFunction__SimpleSubscription_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::VarArgFunction__Subscription_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::VarArgFunction__Subscription_typeof();
    options.FieldCount = 7;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(SimpleVarArgFunction__SimpleSubscription);
    options.TypeSize = sizeof(::g::Fuse::Reactive::VarArgFunction__Subscription_type);
    type = (::g::Fuse::Reactive::VarArgFunction__Subscription_type*)uClassType::New("Fuse.Reactive.SimpleVarArgFunction.SimpleSubscription", options);
    type->fp_build_ = SimpleVarArgFunction__SimpleSubscription_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Reactive::InnerListener*))SimpleVarArgFunction__SimpleSubscription__Dispose_fn;
    type->fp_OnNewArguments = (void(*)(::g::Fuse::Reactive::VarArgFunction__Subscription*, uArray*))SimpleVarArgFunction__SimpleSubscription__OnNewArguments_fn;
    type->fp_OnNewPartialArguments = (void(*)(::g::Fuse::Reactive::VarArgFunction__Subscription*, uArray*))SimpleVarArgFunction__SimpleSubscription__OnNewPartialArguments_fn;
    type->interface1.fp_OnNewData = (void(*)(uObject*, uObject*, uObject*))::g::Fuse::Reactive::InnerListener__FuseReactiveIListenerOnNewData_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))SimpleVarArgFunction__SimpleSubscription__Dispose_fn;
    return type;
}

// public SimpleSubscription(Fuse.Reactive.SimpleVarArgFunction func, Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :180
void SimpleVarArgFunction__SimpleSubscription__ctor_2_fn(SimpleVarArgFunction__SimpleSubscription* __this, ::g::Fuse::Reactive::SimpleVarArgFunction* func, uObject* context, uObject* listener)
{
    __this->ctor_2(func, context, listener);
}

// public override sealed void Dispose() :198
void SimpleVarArgFunction__SimpleSubscription__Dispose_fn(SimpleVarArgFunction__SimpleSubscription* __this)
{
    uStackFrame __("Fuse.Reactive.SimpleVarArgFunction.SimpleSubscription", "Dispose()");
    __this->_listener = NULL;
    __this->_func1 = NULL;
    ::g::Fuse::Reactive::VarArgFunction__Subscription__Dispose_fn(__this);
}

// public SimpleSubscription New(Fuse.Reactive.SimpleVarArgFunction func, Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :180
void SimpleVarArgFunction__SimpleSubscription__New1_fn(::g::Fuse::Reactive::SimpleVarArgFunction* func, uObject* context, uObject* listener, SimpleVarArgFunction__SimpleSubscription** __retval)
{
    *__retval = SimpleVarArgFunction__SimpleSubscription::New1(func, context, listener);
}

// protected override sealed void OnNewArguments(Fuse.Reactive.VarArgFunction.Argument[] args) :193
void SimpleVarArgFunction__SimpleSubscription__OnNewArguments_fn(SimpleVarArgFunction__SimpleSubscription* __this, uArray* args)
{
    uStackFrame __("Fuse.Reactive.SimpleVarArgFunction.SimpleSubscription", "OnNewArguments(Fuse.Reactive.VarArgFunction.Argument[])");
    uPtr(__this->_func1)->OnNewArguments(args, __this->_listener);
}

// protected override sealed void OnNewPartialArguments(Fuse.Reactive.VarArgFunction.Argument[] args) :188
void SimpleVarArgFunction__SimpleSubscription__OnNewPartialArguments_fn(SimpleVarArgFunction__SimpleSubscription* __this, uArray* args)
{
    uStackFrame __("Fuse.Reactive.SimpleVarArgFunction.SimpleSubscription", "OnNewPartialArguments(Fuse.Reactive.VarArgFunction.Argument[])");
    uPtr(__this->_func1)->OnNewPartialArguments(args, __this->_listener);
}

// public SimpleSubscription(Fuse.Reactive.SimpleVarArgFunction func, Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) [instance] :180
void SimpleVarArgFunction__SimpleSubscription::ctor_2(::g::Fuse::Reactive::SimpleVarArgFunction* func, uObject* context, uObject* listener)
{
    uStackFrame __("Fuse.Reactive.SimpleVarArgFunction.SimpleSubscription", ".ctor(Fuse.Reactive.SimpleVarArgFunction,Fuse.Reactive.IContext,Fuse.Reactive.IListener)");
    ctor_1(func, context);
    _func1 = func;
    _listener = listener;
    Init();
}

// public SimpleSubscription New(Fuse.Reactive.SimpleVarArgFunction func, Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) [static] :180
SimpleVarArgFunction__SimpleSubscription* SimpleVarArgFunction__SimpleSubscription::New1(::g::Fuse::Reactive::SimpleVarArgFunction* func, uObject* context, uObject* listener)
{
    SimpleVarArgFunction__SimpleSubscription* obj1 = (SimpleVarArgFunction__SimpleSubscription*)uNew(SimpleVarArgFunction__SimpleSubscription_typeof());
    obj1->ctor_2(func, context, listener);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.4.0/VarArgFunction.uno
// --------------------------------------------------------------------------------

// public abstract class SimpleVarArgFunction :138
// {
static void SimpleVarArgFunction_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(SimpleVarArgFunction_type, interface0));
    type->SetFields(1);
}

SimpleVarArgFunction_type* SimpleVarArgFunction_typeof()
{
    static uSStrong<SimpleVarArgFunction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::VarArgFunction_typeof();
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(SimpleVarArgFunction);
    options.TypeSize = sizeof(SimpleVarArgFunction_type);
    type = (SimpleVarArgFunction_type*)uClassType::New("Fuse.Reactive.SimpleVarArgFunction", options);
    type->fp_build_ = SimpleVarArgFunction_build;
    type->fp_OnNewArguments = SimpleVarArgFunction__OnNewArguments_fn;
    type->fp_Subscribe = (void(*)(::g::Fuse::Reactive::Expression*, uObject*, uObject*, uObject**))SimpleVarArgFunction__Subscribe_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))SimpleVarArgFunction__Subscribe_fn;
    return type;
}

// protected generated SimpleVarArgFunction() :138
void SimpleVarArgFunction__ctor_2_fn(SimpleVarArgFunction* __this)
{
    __this->ctor_2();
}

// protected virtual void OnNewArguments(Fuse.Reactive.VarArgFunction.Argument[] args, Fuse.Reactive.IListener listener) :170
void SimpleVarArgFunction__OnNewArguments_fn(SimpleVarArgFunction* __this, uArray* args, uObject* listener)
{
}

// protected void OnNewPartialArguments(Fuse.Reactive.VarArgFunction.Argument[] args, Fuse.Reactive.IListener listener) :155
void SimpleVarArgFunction__OnNewPartialArguments_fn(SimpleVarArgFunction* __this, uArray* args, uObject* listener)
{
    __this->OnNewPartialArguments(args, listener);
}

// public override sealed Uno.IDisposable Subscribe(Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :140
void SimpleVarArgFunction__Subscribe_fn(SimpleVarArgFunction* __this, uObject* context, uObject* listener, uObject** __retval)
{
    uStackFrame __("Fuse.Reactive.SimpleVarArgFunction", "Subscribe(Fuse.Reactive.IContext,Fuse.Reactive.IListener)");
    return *__retval = (uObject*)SimpleVarArgFunction__SimpleSubscription::New1(__this, context, listener), void();
}

// protected generated SimpleVarArgFunction() [instance] :138
void SimpleVarArgFunction::ctor_2()
{
    ctor_1();
}

// protected void OnNewPartialArguments(Fuse.Reactive.VarArgFunction.Argument[] args, Fuse.Reactive.IListener listener) [instance] :155
void SimpleVarArgFunction::OnNewPartialArguments(uArray* args, uObject* listener)
{
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.4.0/MathFunctions.uno
// -------------------------------------------------------------------------------

// public sealed class Sin :213
// {
static void Sin_build(uType* type)
{
    ::STRINGS[99] = uString::Const("sin");
    ::TYPES[0] = ::g::Fuse::Reactive::UnaryFloatOperator__FloatOp_typeof();
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::UnaryOperator_type, interface0));
    type->SetFields(3);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Sin__New1_fn, 0, true, type, 1, ::g::Fuse::Reactive::Expression_typeof()));
}

::g::Fuse::Reactive::UnaryOperator_type* Sin_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::UnaryOperator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::UnaryFloatOperator_typeof();
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Sin);
    options.TypeSize = sizeof(::g::Fuse::Reactive::UnaryOperator_type);
    type = (::g::Fuse::Reactive::UnaryOperator_type*)uClassType::New("Fuse.Reactive.Sin", options);
    type->fp_build_ = Sin_build;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::UnaryOperator__Subscribe_fn;
    return type;
}

// public Sin(Fuse.Reactive.Expression operand) :216
void Sin__ctor_3_fn(Sin* __this, ::g::Fuse::Reactive::Expression* operand)
{
    __this->ctor_3(operand);
}

// public Sin New(Fuse.Reactive.Expression operand) :216
void Sin__New1_fn(::g::Fuse::Reactive::Expression* operand, Sin** __retval)
{
    *__retval = Sin::New1(operand);
}

// public Sin(Fuse.Reactive.Expression operand) [instance] :216
void Sin::ctor_3(::g::Fuse::Reactive::Expression* operand)
{
    ctor_2(operand, ::STRINGS[99/*"sin"*/], uDelegate::New(::TYPES[0/*Fuse.Reactive.UnaryFloatOperator.FloatOp*/], (void*)::g::Uno::Math__Sin_fn));
}

// public Sin New(Fuse.Reactive.Expression operand) [static] :216
Sin* Sin::New1(::g::Fuse::Reactive::Expression* operand)
{
    Sin* obj1 = (Sin*)uNew(Sin_typeof());
    obj1->ctor_3(operand);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.4.0/Snapshot.uno
// --------------------------------------------------------------------------

// public sealed class Snapshot :8
// {
static void Snapshot_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::Expression_type, interface0));
    type->SetFields(0,
        ::g::Fuse::Reactive::Expression_typeof(), offsetof(Snapshot, _Source), 0);
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)Snapshot__New1_fn, 0, true, type, 1, ::g::Fuse::Reactive::Expression_typeof()),
        new uFunction("get_Source", NULL, (void*)Snapshot__get_Source_fn, 0, false, ::g::Fuse::Reactive::Expression_typeof(), 0));
}

::g::Fuse::Reactive::Expression_type* Snapshot_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::Expression_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::Expression_typeof();
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Snapshot);
    options.TypeSize = sizeof(::g::Fuse::Reactive::Expression_type);
    type = (::g::Fuse::Reactive::Expression_type*)uClassType::New("Fuse.Reactive.Snapshot", options);
    type->fp_build_ = Snapshot_build;
    type->fp_Subscribe = (void(*)(::g::Fuse::Reactive::Expression*, uObject*, uObject*, uObject**))Snapshot__Subscribe_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))Snapshot__Subscribe_fn;
    return type;
}

// public Snapshot(Fuse.Reactive.Expression source) :13
void Snapshot__ctor_1_fn(Snapshot* __this, ::g::Fuse::Reactive::Expression* source)
{
    __this->ctor_1(source);
}

// public Snapshot New(Fuse.Reactive.Expression source) :13
void Snapshot__New1_fn(::g::Fuse::Reactive::Expression* source, Snapshot** __retval)
{
    *__retval = Snapshot::New1(source);
}

// public generated Fuse.Reactive.Expression get_Source() :10
void Snapshot__get_Source_fn(Snapshot* __this, ::g::Fuse::Reactive::Expression** __retval)
{
    *__retval = __this->Source();
}

// private generated void set_Source(Fuse.Reactive.Expression value) :10
void Snapshot__set_Source_fn(Snapshot* __this, ::g::Fuse::Reactive::Expression* value)
{
    __this->Source(value);
}

// public override sealed Uno.IDisposable Subscribe(Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :18
void Snapshot__Subscribe_fn(Snapshot* __this, uObject* context, uObject* listener, uObject** __retval)
{
    uStackFrame __("Fuse.Reactive.Snapshot", "Subscribe(Fuse.Reactive.IContext,Fuse.Reactive.IListener)");
    return *__retval = (uObject*)Snapshot__Subscription::New1(__this, context, listener), void();
}

// public Snapshot(Fuse.Reactive.Expression source) [instance] :13
void Snapshot::ctor_1(::g::Fuse::Reactive::Expression* source)
{
    ctor_();
    Source(source);
}

// public generated Fuse.Reactive.Expression get_Source() [instance] :10
::g::Fuse::Reactive::Expression* Snapshot::Source()
{
    return _Source;
}

// private generated void set_Source(Fuse.Reactive.Expression value) [instance] :10
void Snapshot::Source(::g::Fuse::Reactive::Expression* value)
{
    _Source = value;
}

// public Snapshot New(Fuse.Reactive.Expression source) [static] :13
Snapshot* Snapshot::New1(::g::Fuse::Reactive::Expression* source)
{
    Snapshot* obj1 = (Snapshot*)uNew(Snapshot_typeof());
    obj1->ctor_1(source);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.4.0/MathFunctions.uno
// -------------------------------------------------------------------------------

// public sealed class Sqrt :287
// {
static void Sqrt_build(uType* type)
{
    ::STRINGS[100] = uString::Const("sqrt");
    ::TYPES[0] = ::g::Fuse::Reactive::UnaryFloatOperator__FloatOp_typeof();
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::UnaryOperator_type, interface0));
    type->SetFields(3);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Sqrt__New1_fn, 0, true, type, 1, ::g::Fuse::Reactive::Expression_typeof()));
}

::g::Fuse::Reactive::UnaryOperator_type* Sqrt_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::UnaryOperator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::UnaryFloatOperator_typeof();
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Sqrt);
    options.TypeSize = sizeof(::g::Fuse::Reactive::UnaryOperator_type);
    type = (::g::Fuse::Reactive::UnaryOperator_type*)uClassType::New("Fuse.Reactive.Sqrt", options);
    type->fp_build_ = Sqrt_build;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::UnaryOperator__Subscribe_fn;
    return type;
}

// public Sqrt(Fuse.Reactive.Expression operand) :290
void Sqrt__ctor_3_fn(Sqrt* __this, ::g::Fuse::Reactive::Expression* operand)
{
    __this->ctor_3(operand);
}

// public Sqrt New(Fuse.Reactive.Expression operand) :290
void Sqrt__New1_fn(::g::Fuse::Reactive::Expression* operand, Sqrt** __retval)
{
    *__retval = Sqrt::New1(operand);
}

// public Sqrt(Fuse.Reactive.Expression operand) [instance] :290
void Sqrt::ctor_3(::g::Fuse::Reactive::Expression* operand)
{
    ctor_2(operand, ::STRINGS[100/*"sqrt"*/], uDelegate::New(::TYPES[0/*Fuse.Reactive.UnaryFloatOperator.FloatOp*/], (void*)::g::Uno::Math__Sqrt_fn));
}

// public Sqrt New(Fuse.Reactive.Expression operand) [static] :290
Sqrt* Sqrt::New1(::g::Fuse::Reactive::Expression* operand)
{
    Sqrt* obj1 = (Sqrt*)uNew(Sqrt_typeof());
    obj1->ctor_3(operand);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.4.0/BinaryOperator.uno
// --------------------------------------------------------------------------------

// private sealed class BinaryOperator.Subscription :40
// {
static void BinaryOperator__Subscription_build(uType* type)
{
    ::TYPES[2] = ::g::Uno::IDisposable_typeof();
    ::TYPES[44] = ::g::Fuse::MarshalException_typeof();
    type->SetInterfaces(
        ::TYPES[2/*Uno.IDisposable*/], offsetof(::g::Fuse::Reactive::InnerListener_type, interface0),
        ::g::Fuse::Reactive::IListener_typeof(), offsetof(::g::Fuse::Reactive::InnerListener_type, interface1));
    type->SetFields(2,
        ::g::Fuse::Reactive::BinaryOperator_typeof(), offsetof(BinaryOperator__Subscription, _bo), 0,
        uObject_typeof(), offsetof(BinaryOperator__Subscription, _left), 0,
        uObject_typeof(), offsetof(BinaryOperator__Subscription, _right), 0,
        ::TYPES[2/*Uno.IDisposable*/], offsetof(BinaryOperator__Subscription, _leftSub), 0,
        ::TYPES[2/*Uno.IDisposable*/], offsetof(BinaryOperator__Subscription, _rightSub), 0,
        ::g::Fuse::Reactive::IListener_typeof(), offsetof(BinaryOperator__Subscription, _listener), 0,
        ::g::Uno::Bool_typeof(), offsetof(BinaryOperator__Subscription, _hasLeft), 0,
        ::g::Uno::Bool_typeof(), offsetof(BinaryOperator__Subscription, _hasRight), 0);
}

::g::Fuse::Reactive::InnerListener_type* BinaryOperator__Subscription_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::InnerListener_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::InnerListener_typeof();
    options.FieldCount = 10;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(BinaryOperator__Subscription);
    options.TypeSize = sizeof(::g::Fuse::Reactive::InnerListener_type);
    type = (::g::Fuse::Reactive::InnerListener_type*)uClassType::New("Fuse.Reactive.BinaryOperator.Subscription", options);
    type->fp_build_ = BinaryOperator__Subscription_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Reactive::InnerListener*))BinaryOperator__Subscription__Dispose_fn;
    type->fp_OnNewData = (void(*)(::g::Fuse::Reactive::InnerListener*, uObject*, uObject*))BinaryOperator__Subscription__OnNewData_fn;
    type->interface1.fp_OnNewData = (void(*)(uObject*, uObject*, uObject*))::g::Fuse::Reactive::InnerListener__FuseReactiveIListenerOnNewData_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))BinaryOperator__Subscription__Dispose_fn;
    return type;
}

// protected Subscription(Fuse.Reactive.BinaryOperator bo, Fuse.Reactive.IListener listener) :52
void BinaryOperator__Subscription__ctor_1_fn(BinaryOperator__Subscription* __this, ::g::Fuse::Reactive::BinaryOperator* bo, uObject* listener)
{
    __this->ctor_1(bo, listener);
}

// public static Fuse.Reactive.BinaryOperator.Subscription Create(Fuse.Reactive.BinaryOperator bo, Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :58
void BinaryOperator__Subscription__Create_fn(::g::Fuse::Reactive::BinaryOperator* bo, uObject* context, uObject* listener, BinaryOperator__Subscription** __retval)
{
    *__retval = BinaryOperator__Subscription::Create(bo, context, listener);
}

// public override sealed void Dispose() :96
void BinaryOperator__Subscription__Dispose_fn(BinaryOperator__Subscription* __this)
{
    uStackFrame __("Fuse.Reactive.BinaryOperator.Subscription", "Dispose()");
    ::g::Fuse::Reactive::InnerListener__Dispose_fn(__this);

    if (__this->_leftSub != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(__this->_leftSub), ::TYPES[2/*Uno.IDisposable*/]));
        __this->_leftSub = NULL;
    }

    if (__this->_rightSub != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(__this->_rightSub), ::TYPES[2/*Uno.IDisposable*/]));
        __this->_rightSub = NULL;
    }

    __this->_listener = NULL;
}

// protected void Init(Fuse.Reactive.IContext context) :67
void BinaryOperator__Subscription__Init_fn(BinaryOperator__Subscription* __this, uObject* context)
{
    __this->Init(context);
}

// protected Subscription New(Fuse.Reactive.BinaryOperator bo, Fuse.Reactive.IListener listener) :52
void BinaryOperator__Subscription__New1_fn(::g::Fuse::Reactive::BinaryOperator* bo, uObject* listener, BinaryOperator__Subscription** __retval)
{
    *__retval = BinaryOperator__Subscription::New1(bo, listener);
}

// protected override sealed void OnNewData(Fuse.Reactive.IExpression source, object value) :73
void BinaryOperator__Subscription__OnNewData_fn(BinaryOperator__Subscription* __this, uObject* source, uObject* value)
{
    uStackFrame __("Fuse.Reactive.BinaryOperator.Subscription", "OnNewData(Fuse.Reactive.IExpression,object)");

    if (source == uPtr(__this->_bo)->Left())
    {
        __this->_hasLeft = true;
        __this->_left = value;
    }

    if (source == uPtr(__this->_bo)->Right())
    {
        __this->_hasRight = true;
        __this->_right = value;
    }

    if ((__this->_hasLeft || uPtr(__this->_bo)->IsLeftOptional()) && (__this->_hasRight || uPtr(__this->_bo)->IsRightOptional()))
        __this->OnNewOperands(__this->_left, __this->_right);
}

// protected void OnNewOperands(object left, object right) :82
void BinaryOperator__Subscription__OnNewOperands_fn(BinaryOperator__Subscription* __this, uObject* left, uObject* right)
{
    __this->OnNewOperands(left, right);
}

// protected Subscription(Fuse.Reactive.BinaryOperator bo, Fuse.Reactive.IListener listener) [instance] :52
void BinaryOperator__Subscription::ctor_1(::g::Fuse::Reactive::BinaryOperator* bo, uObject* listener)
{
    ctor_();
    _bo = bo;
    _listener = listener;
}

// protected void Init(Fuse.Reactive.IContext context) [instance] :67
void BinaryOperator__Subscription::Init(uObject* context)
{
    uStackFrame __("Fuse.Reactive.BinaryOperator.Subscription", "Init(Fuse.Reactive.IContext)");
    _leftSub = uPtr(uPtr(_bo)->Left())->Subscribe(context, (uObject*)this);
    _rightSub = uPtr(uPtr(_bo)->Right())->Subscribe(context, (uObject*)this);
}

// protected void OnNewOperands(object left, object right) [instance] :82
void BinaryOperator__Subscription::OnNewOperands(uObject* left, uObject* right)
{
    uStackFrame __("Fuse.Reactive.BinaryOperator.Subscription", "OnNewOperands(object,object)");
    ClearDiagnostic();

    try
    {
        {
            uPtr(_bo)->OnNewOperands(_listener, left, right);
        }
    }

    catch (const uThrowable& __t)
    {
        if (uIs(__t.Exception, ::TYPES[44/*Fuse.MarshalException*/]))
        {
            ::g::Fuse::MarshalException* me = (::g::Fuse::MarshalException*)__t.Exception;
            SetDiagnostic(uPtr(me)->Message(), (uObject*)_bo);
        }
        else         throw __t;
    }
}

// public static Fuse.Reactive.BinaryOperator.Subscription Create(Fuse.Reactive.BinaryOperator bo, Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) [static] :58
BinaryOperator__Subscription* BinaryOperator__Subscription::Create(::g::Fuse::Reactive::BinaryOperator* bo, uObject* context, uObject* listener)
{
    uStackFrame __("Fuse.Reactive.BinaryOperator.Subscription", "Create(Fuse.Reactive.BinaryOperator,Fuse.Reactive.IContext,Fuse.Reactive.IListener)");
    BinaryOperator__Subscription* res = BinaryOperator__Subscription::New1(bo, listener);
    res->Init(context);
    return res;
}

// protected Subscription New(Fuse.Reactive.BinaryOperator bo, Fuse.Reactive.IListener listener) [static] :52
BinaryOperator__Subscription* BinaryOperator__Subscription::New1(::g::Fuse::Reactive::BinaryOperator* bo, uObject* listener)
{
    BinaryOperator__Subscription* obj1 = (BinaryOperator__Subscription*)uNew(BinaryOperator__Subscription_typeof());
    obj1->ctor_1(bo, listener);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.4.0/UnaryOperator.uno
// -------------------------------------------------------------------------------

// protected class UnaryOperator.Subscription :31
// {
static void UnaryOperator__Subscription_build(uType* type)
{
    ::TYPES[2] = ::g::Uno::IDisposable_typeof();
    ::TYPES[44] = ::g::Fuse::MarshalException_typeof();
    ::TYPES[23] = ::g::Fuse::Reactive::IListener_typeof();
    type->SetInterfaces(
        ::TYPES[2/*Uno.IDisposable*/], offsetof(UnaryOperator__Subscription_type, interface0),
        ::TYPES[23/*Fuse.Reactive.IListener*/], offsetof(UnaryOperator__Subscription_type, interface1));
    type->SetFields(2,
        ::g::Fuse::Reactive::UnaryOperator_typeof(), offsetof(UnaryOperator__Subscription, _uo), 0,
        ::TYPES[23/*Fuse.Reactive.IListener*/], offsetof(UnaryOperator__Subscription, _listener), 0,
        ::TYPES[2/*Uno.IDisposable*/], offsetof(UnaryOperator__Subscription, _operandSub), 0);
}

UnaryOperator__Subscription_type* UnaryOperator__Subscription_typeof()
{
    static uSStrong<UnaryOperator__Subscription_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::InnerListener_typeof();
    options.FieldCount = 5;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(UnaryOperator__Subscription);
    options.TypeSize = sizeof(UnaryOperator__Subscription_type);
    type = (UnaryOperator__Subscription_type*)uClassType::New("Fuse.Reactive.UnaryOperator.Subscription", options);
    type->fp_build_ = UnaryOperator__Subscription_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Reactive::InnerListener*))UnaryOperator__Subscription__Dispose_fn;
    type->fp_OnNewData = (void(*)(::g::Fuse::Reactive::InnerListener*, uObject*, uObject*))UnaryOperator__Subscription__OnNewData_fn;
    type->fp_OnNewOperand = UnaryOperator__Subscription__OnNewOperand_fn;
    type->interface1.fp_OnNewData = (void(*)(uObject*, uObject*, uObject*))::g::Fuse::Reactive::InnerListener__FuseReactiveIListenerOnNewData_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))UnaryOperator__Subscription__Dispose_fn;
    return type;
}

// protected Subscription(Fuse.Reactive.UnaryOperator uo, Fuse.Reactive.IListener listener) :37
void UnaryOperator__Subscription__ctor_1_fn(UnaryOperator__Subscription* __this, ::g::Fuse::Reactive::UnaryOperator* uo, uObject* listener)
{
    __this->ctor_1(uo, listener);
}

// public static Fuse.Reactive.UnaryOperator.Subscription Create(Fuse.Reactive.UnaryOperator uo, Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :43
void UnaryOperator__Subscription__Create_fn(::g::Fuse::Reactive::UnaryOperator* uo, uObject* context, uObject* listener, UnaryOperator__Subscription** __retval)
{
    *__retval = UnaryOperator__Subscription::Create(uo, context, listener);
}

// public override void Dispose() :57
void UnaryOperator__Subscription__Dispose_fn(UnaryOperator__Subscription* __this)
{
    uStackFrame __("Fuse.Reactive.UnaryOperator.Subscription", "Dispose()");
    ::g::Fuse::Reactive::InnerListener__Dispose_fn(__this);

    if (__this->_operandSub != NULL)
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(__this->_operandSub), ::TYPES[2/*Uno.IDisposable*/]));

    __this->_operandSub = NULL;
}

// protected void Init(Fuse.Reactive.IContext context) :52
void UnaryOperator__Subscription__Init_fn(UnaryOperator__Subscription* __this, uObject* context)
{
    __this->Init(context);
}

// protected Subscription New(Fuse.Reactive.UnaryOperator uo, Fuse.Reactive.IListener listener) :37
void UnaryOperator__Subscription__New1_fn(::g::Fuse::Reactive::UnaryOperator* uo, uObject* listener, UnaryOperator__Subscription** __retval)
{
    *__retval = UnaryOperator__Subscription::New1(uo, listener);
}

// protected override void OnNewData(Fuse.Reactive.IExpression source, object value) :64
void UnaryOperator__Subscription__OnNewData_fn(UnaryOperator__Subscription* __this, uObject* source, uObject* value)
{
    uStackFrame __("Fuse.Reactive.UnaryOperator.Subscription", "OnNewData(Fuse.Reactive.IExpression,object)");
    __this->OnNewOperand(value);
}

// protected virtual void OnNewOperand(object value) :69
void UnaryOperator__Subscription__OnNewOperand_fn(UnaryOperator__Subscription* __this, uObject* value)
{
    uStackFrame __("Fuse.Reactive.UnaryOperator.Subscription", "OnNewOperand(object)");
    __this->ClearDiagnostic();

    try
    {
        {
            uPtr(__this->_uo)->OnNewOperand(__this->_listener, value);
        }
    }

    catch (const uThrowable& __t)
    {
        if (uIs(__t.Exception, ::TYPES[44/*Fuse.MarshalException*/]))
        {
            ::g::Fuse::MarshalException* me = (::g::Fuse::MarshalException*)__t.Exception;
            __this->SetDiagnostic(uPtr(me)->Message(), (uObject*)__this->_uo);
        }
        else         throw __t;
    }
}

// protected void PushNewData(object value) :83
void UnaryOperator__Subscription__PushNewData_fn(UnaryOperator__Subscription* __this, uObject* value)
{
    __this->PushNewData(value);
}

// protected Subscription(Fuse.Reactive.UnaryOperator uo, Fuse.Reactive.IListener listener) [instance] :37
void UnaryOperator__Subscription::ctor_1(::g::Fuse::Reactive::UnaryOperator* uo, uObject* listener)
{
    ctor_();
    _uo = uo;
    _listener = listener;
}

// protected void Init(Fuse.Reactive.IContext context) [instance] :52
void UnaryOperator__Subscription::Init(uObject* context)
{
    uStackFrame __("Fuse.Reactive.UnaryOperator.Subscription", "Init(Fuse.Reactive.IContext)");
    _operandSub = uPtr(uPtr(_uo)->Operand())->Subscribe(context, (uObject*)this);
}

// protected void PushNewData(object value) [instance] :83
void UnaryOperator__Subscription::PushNewData(uObject* value)
{
    uStackFrame __("Fuse.Reactive.UnaryOperator.Subscription", "PushNewData(object)");
    ::g::Fuse::Reactive::IListener::OnNewData(uInterface(uPtr(_listener), ::TYPES[23/*Fuse.Reactive.IListener*/]), (uObject*)_uo, value);
}

// public static Fuse.Reactive.UnaryOperator.Subscription Create(Fuse.Reactive.UnaryOperator uo, Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) [static] :43
UnaryOperator__Subscription* UnaryOperator__Subscription::Create(::g::Fuse::Reactive::UnaryOperator* uo, uObject* context, uObject* listener)
{
    uStackFrame __("Fuse.Reactive.UnaryOperator.Subscription", "Create(Fuse.Reactive.UnaryOperator,Fuse.Reactive.IContext,Fuse.Reactive.IListener)");
    UnaryOperator__Subscription* sub = UnaryOperator__Subscription::New1(uo, listener);
    sub->Init(context);
    return sub;
}

// protected Subscription New(Fuse.Reactive.UnaryOperator uo, Fuse.Reactive.IListener listener) [static] :37
UnaryOperator__Subscription* UnaryOperator__Subscription::New1(::g::Fuse::Reactive::UnaryOperator* uo, uObject* listener)
{
    UnaryOperator__Subscription* obj1 = (UnaryOperator__Subscription*)uNew(UnaryOperator__Subscription_typeof());
    obj1->ctor_1(uo, listener);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.4.0/VarArgFunction.uno
// --------------------------------------------------------------------------------

// protected abstract class VarArgFunction.Subscription :58
// {
static void VarArgFunction__Subscription_build(uType* type)
{
    ::TYPES[60] = ::g::Fuse::Reactive::VarArgFunction__Argument_typeof()->Array();
    ::TYPES[61] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Reactive::Expression_typeof(), NULL);
    ::TYPES[62] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Reactive::Expression_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(VarArgFunction__Subscription_type, interface0),
        ::g::Fuse::Reactive::IListener_typeof(), offsetof(VarArgFunction__Subscription_type, interface1));
    type->SetFields(2,
        ::g::Fuse::Reactive::VarArgFunction_typeof(), offsetof(VarArgFunction__Subscription, _func), 0,
        ::TYPES[60/*Fuse.Reactive.VarArgFunction.Argument[]*/], offsetof(VarArgFunction__Subscription, _arguments), 0,
        ::g::Fuse::Reactive::IContext_typeof(), offsetof(VarArgFunction__Subscription, _context), 0);
}

VarArgFunction__Subscription_type* VarArgFunction__Subscription_typeof()
{
    static uSStrong<VarArgFunction__Subscription_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::InnerListener_typeof();
    options.FieldCount = 5;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(VarArgFunction__Subscription);
    options.TypeSize = sizeof(VarArgFunction__Subscription_type);
    type = (VarArgFunction__Subscription_type*)uClassType::New("Fuse.Reactive.VarArgFunction.Subscription", options);
    type->fp_build_ = VarArgFunction__Subscription_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Reactive::InnerListener*))VarArgFunction__Subscription__Dispose_fn;
    type->fp_OnNewArguments = VarArgFunction__Subscription__OnNewArguments_fn;
    type->fp_OnNewData = (void(*)(::g::Fuse::Reactive::InnerListener*, uObject*, uObject*))VarArgFunction__Subscription__OnNewData_fn;
    type->fp_OnNewPartialArguments = VarArgFunction__Subscription__OnNewPartialArguments_fn;
    type->interface1.fp_OnNewData = (void(*)(uObject*, uObject*, uObject*))::g::Fuse::Reactive::InnerListener__FuseReactiveIListenerOnNewData_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))VarArgFunction__Subscription__Dispose_fn;
    return type;
}

// protected Subscription(Fuse.Reactive.VarArgFunction func, Fuse.Reactive.IContext context) :65
void VarArgFunction__Subscription__ctor_1_fn(VarArgFunction__Subscription* __this, ::g::Fuse::Reactive::VarArgFunction* func, uObject* context)
{
    __this->ctor_1(func, context);
}

// public override void Dispose() :118
void VarArgFunction__Subscription__Dispose_fn(VarArgFunction__Subscription* __this)
{
    uStackFrame __("Fuse.Reactive.VarArgFunction.Subscription", "Dispose()");
    ::g::Fuse::Reactive::InnerListener__Dispose_fn(__this);

    for (int i = 0; i < uPtr(__this->_arguments)->Length(); i++)
        uPtr(uPtr(__this->_arguments)->Strong< ::g::Fuse::Reactive::VarArgFunction__Argument*>(i))->Dispose();

    __this->_func = NULL;
    __this->_arguments = NULL;
}

// protected void Init() :75
void VarArgFunction__Subscription__Init_fn(VarArgFunction__Subscription* __this)
{
    __this->Init();
}

// protected virtual void OnNewArguments(Fuse.Reactive.VarArgFunction.Argument[] args) :130
void VarArgFunction__Subscription__OnNewArguments_fn(VarArgFunction__Subscription* __this, uArray* args)
{
}

// protected override sealed void OnNewData(Fuse.Reactive.IExpression source, object value) :87
void VarArgFunction__Subscription__OnNewData_fn(VarArgFunction__Subscription* __this, uObject* source, uObject* value)
{
    uStackFrame __("Fuse.Reactive.VarArgFunction.Subscription", "OnNewData(Fuse.Reactive.IExpression,object)");
    ::g::Fuse::Reactive::Expression* ret2;

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(uPtr(__this->_func)->Arguments()), ::TYPES[61/*Uno.Collections.ICollection<Fuse.Reactive.Expression>*/])); i++)
        if ((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(uPtr(__this->_func)->Arguments()), ::TYPES[62/*Uno.Collections.IList<Fuse.Reactive.Expression>*/]), uCRef<int>(i), &ret2), ret2) == source)
        {
            uPtr(uPtr(__this->_arguments)->Strong< ::g::Fuse::Reactive::VarArgFunction__Argument*>(i))->Value(value);
            uPtr(uPtr(__this->_arguments)->Strong< ::g::Fuse::Reactive::VarArgFunction__Argument*>(i))->HasValue(true);
        }

    __this->PushData();
}

// protected virtual void OnNewPartialArguments(Fuse.Reactive.VarArgFunction.Argument[] args) :129
void VarArgFunction__Subscription__OnNewPartialArguments_fn(VarArgFunction__Subscription* __this, uArray* args)
{
}

// private void PushData() :101
void VarArgFunction__Subscription__PushData_fn(VarArgFunction__Subscription* __this)
{
    __this->PushData();
}

// protected Subscription(Fuse.Reactive.VarArgFunction func, Fuse.Reactive.IContext context) [instance] :65
void VarArgFunction__Subscription::ctor_1(::g::Fuse::Reactive::VarArgFunction* func, uObject* context)
{
    uStackFrame __("Fuse.Reactive.VarArgFunction.Subscription", ".ctor(Fuse.Reactive.VarArgFunction,Fuse.Reactive.IContext)");
    ctor_();
    _func = func;
    _arguments = uArray::New(::TYPES[60/*Fuse.Reactive.VarArgFunction.Argument[]*/], ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(uPtr(func)->Arguments()), ::TYPES[61/*Uno.Collections.ICollection<Fuse.Reactive.Expression>*/])));
    _context = context;

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(func->Arguments()), ::TYPES[61/*Uno.Collections.ICollection<Fuse.Reactive.Expression>*/])); i++)
        uPtr(_arguments)->Strong< ::g::Fuse::Reactive::VarArgFunction__Argument*>(i) = ::g::Fuse::Reactive::VarArgFunction__Argument::New1();
}

// protected void Init() [instance] :75
void VarArgFunction__Subscription::Init()
{
    uStackFrame __("Fuse.Reactive.VarArgFunction.Subscription", "Init()");
    ::g::Fuse::Reactive::Expression* ret1;

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(uPtr(_func)->Arguments()), ::TYPES[61/*Uno.Collections.ICollection<Fuse.Reactive.Expression>*/])); i++)
        uPtr(uPtr(_arguments)->Strong< ::g::Fuse::Reactive::VarArgFunction__Argument*>(i))->Subscription = uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(uPtr(_func)->Arguments()), ::TYPES[62/*Uno.Collections.IList<Fuse.Reactive.Expression>*/]), uCRef<int>(i), &ret1), ret1))->Subscribe(_context, (uObject*)this);

    PushData();
}

// private void PushData() [instance] :101
void VarArgFunction__Subscription::PushData()
{
    uStackFrame __("Fuse.Reactive.VarArgFunction.Subscription", "PushData()");
    bool all = true;

    for (int i = 0; i < uPtr(_arguments)->Length(); i++)
        if (!uPtr(uPtr(_arguments)->Strong< ::g::Fuse::Reactive::VarArgFunction__Argument*>(i))->HasValue())
        {
            all = false;
            break;
        }

    OnNewPartialArguments(_arguments);

    if (all)
        OnNewArguments(_arguments);
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.4.0/TernaryOperator.uno
// ---------------------------------------------------------------------------------

// private sealed class TernaryOperator.Subscription :32
// {
static void TernaryOperator__Subscription_build(uType* type)
{
    ::TYPES[2] = ::g::Uno::IDisposable_typeof();
    ::TYPES[44] = ::g::Fuse::MarshalException_typeof();
    ::TYPES[23] = ::g::Fuse::Reactive::IListener_typeof();
    type->SetInterfaces(
        ::TYPES[2/*Uno.IDisposable*/], offsetof(::g::Fuse::Reactive::InnerListener_type, interface0),
        ::TYPES[23/*Fuse.Reactive.IListener*/], offsetof(::g::Fuse::Reactive::InnerListener_type, interface1));
    type->SetFields(2,
        ::g::Fuse::Reactive::TernaryOperator_typeof(), offsetof(TernaryOperator__Subscription, _to), 0,
        uObject_typeof(), offsetof(TernaryOperator__Subscription, _first), 0,
        uObject_typeof(), offsetof(TernaryOperator__Subscription, _second), 0,
        uObject_typeof(), offsetof(TernaryOperator__Subscription, _third), 0,
        ::g::Uno::Bool_typeof(), offsetof(TernaryOperator__Subscription, _hasFirst), 0,
        ::g::Uno::Bool_typeof(), offsetof(TernaryOperator__Subscription, _hasSecond), 0,
        ::g::Uno::Bool_typeof(), offsetof(TernaryOperator__Subscription, _hasThird), 0,
        ::TYPES[2/*Uno.IDisposable*/], offsetof(TernaryOperator__Subscription, _firstSub), 0,
        ::TYPES[2/*Uno.IDisposable*/], offsetof(TernaryOperator__Subscription, _secondSub), 0,
        ::TYPES[2/*Uno.IDisposable*/], offsetof(TernaryOperator__Subscription, _thirdSub), 0,
        ::TYPES[23/*Fuse.Reactive.IListener*/], offsetof(TernaryOperator__Subscription, _listener), 0);
}

::g::Fuse::Reactive::InnerListener_type* TernaryOperator__Subscription_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::InnerListener_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::InnerListener_typeof();
    options.FieldCount = 13;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(TernaryOperator__Subscription);
    options.TypeSize = sizeof(::g::Fuse::Reactive::InnerListener_type);
    type = (::g::Fuse::Reactive::InnerListener_type*)uClassType::New("Fuse.Reactive.TernaryOperator.Subscription", options);
    type->fp_build_ = TernaryOperator__Subscription_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Reactive::InnerListener*))TernaryOperator__Subscription__Dispose_fn;
    type->fp_OnNewData = (void(*)(::g::Fuse::Reactive::InnerListener*, uObject*, uObject*))TernaryOperator__Subscription__OnNewData_fn;
    type->interface1.fp_OnNewData = (void(*)(uObject*, uObject*, uObject*))::g::Fuse::Reactive::InnerListener__FuseReactiveIListenerOnNewData_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))TernaryOperator__Subscription__Dispose_fn;
    return type;
}

// protected Subscription(Fuse.Reactive.TernaryOperator to, Fuse.Reactive.IListener listener) :44
void TernaryOperator__Subscription__ctor_1_fn(TernaryOperator__Subscription* __this, ::g::Fuse::Reactive::TernaryOperator* to, uObject* listener)
{
    __this->ctor_1(to, listener);
}

// public static Fuse.Reactive.TernaryOperator.Subscription Create(Fuse.Reactive.TernaryOperator to, Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :50
void TernaryOperator__Subscription__Create_fn(::g::Fuse::Reactive::TernaryOperator* to, uObject* context, uObject* listener, TernaryOperator__Subscription** __retval)
{
    *__retval = TernaryOperator__Subscription::Create(to, context, listener);
}

// public override sealed void Dispose() :90
void TernaryOperator__Subscription__Dispose_fn(TernaryOperator__Subscription* __this)
{
    uStackFrame __("Fuse.Reactive.TernaryOperator.Subscription", "Dispose()");
    ::g::Fuse::Reactive::InnerListener__Dispose_fn(__this);

    if (__this->_firstSub != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(__this->_firstSub), ::TYPES[2/*Uno.IDisposable*/]));
        __this->_firstSub = NULL;
    }

    if (__this->_secondSub != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(__this->_secondSub), ::TYPES[2/*Uno.IDisposable*/]));
        __this->_secondSub = NULL;
    }

    if (__this->_thirdSub != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(__this->_thirdSub), ::TYPES[2/*Uno.IDisposable*/]));
        __this->_thirdSub = NULL;
    }

    __this->_listener = NULL;
}

// protected void Init(Fuse.Reactive.IContext context) :59
void TernaryOperator__Subscription__Init_fn(TernaryOperator__Subscription* __this, uObject* context)
{
    __this->Init(context);
}

// protected Subscription New(Fuse.Reactive.TernaryOperator to, Fuse.Reactive.IListener listener) :44
void TernaryOperator__Subscription__New1_fn(::g::Fuse::Reactive::TernaryOperator* to, uObject* listener, TernaryOperator__Subscription** __retval)
{
    *__retval = TernaryOperator__Subscription::New1(to, listener);
}

// protected override sealed void OnNewData(Fuse.Reactive.IExpression source, object value) :66
void TernaryOperator__Subscription__OnNewData_fn(TernaryOperator__Subscription* __this, uObject* source, uObject* value)
{
    uStackFrame __("Fuse.Reactive.TernaryOperator.Subscription", "OnNewData(Fuse.Reactive.IExpression,object)");

    if (source == uPtr(__this->_to)->First())
    {
        __this->_hasFirst = true;
        __this->_first = value;
    }

    if (source == uPtr(__this->_to)->Second())
    {
        __this->_hasSecond = true;
        __this->_second = value;
    }

    if (source == uPtr(__this->_to)->Third())
    {
        __this->_hasThird = true;
        __this->_third = value;
    }

    if (((__this->_hasFirst || uPtr(__this->_to)->IsFirstOptional()) && (__this->_hasSecond || uPtr(__this->_to)->IsSecondOptional())) && (__this->_hasThird || uPtr(__this->_to)->IsThirdOptional()))
        __this->OnNewOperands(__this->_first, __this->_second, __this->_third);
}

// protected void OnNewOperands(object first, object second, object third) :76
void TernaryOperator__Subscription__OnNewOperands_fn(TernaryOperator__Subscription* __this, uObject* first, uObject* second, uObject* third)
{
    __this->OnNewOperands(first, second, third);
}

// protected Subscription(Fuse.Reactive.TernaryOperator to, Fuse.Reactive.IListener listener) [instance] :44
void TernaryOperator__Subscription::ctor_1(::g::Fuse::Reactive::TernaryOperator* to, uObject* listener)
{
    ctor_();
    _to = to;
    _listener = listener;
}

// protected void Init(Fuse.Reactive.IContext context) [instance] :59
void TernaryOperator__Subscription::Init(uObject* context)
{
    uStackFrame __("Fuse.Reactive.TernaryOperator.Subscription", "Init(Fuse.Reactive.IContext)");
    _firstSub = uPtr(uPtr(_to)->First())->Subscribe(context, (uObject*)this);
    _secondSub = uPtr(uPtr(_to)->Second())->Subscribe(context, (uObject*)this);
    _thirdSub = uPtr(uPtr(_to)->Third())->Subscribe(context, (uObject*)this);
}

// protected void OnNewOperands(object first, object second, object third) [instance] :76
void TernaryOperator__Subscription::OnNewOperands(uObject* first, uObject* second, uObject* third)
{
    uStackFrame __("Fuse.Reactive.TernaryOperator.Subscription", "OnNewOperands(object,object,object)");
    ClearDiagnostic();

    try
    {
        {
            ::g::Fuse::Reactive::IListener::OnNewData(uInterface(uPtr(_listener), ::TYPES[23/*Fuse.Reactive.IListener*/]), (uObject*)_to, uPtr(_to)->Compute(first, second, third));
        }
    }

    catch (const uThrowable& __t)
    {
        if (uIs(__t.Exception, ::TYPES[44/*Fuse.MarshalException*/]))
        {
            ::g::Fuse::MarshalException* me = (::g::Fuse::MarshalException*)__t.Exception;
            SetDiagnostic(uPtr(me)->Message(), (uObject*)_to);
        }
        else         throw __t;
    }
}

// public static Fuse.Reactive.TernaryOperator.Subscription Create(Fuse.Reactive.TernaryOperator to, Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) [static] :50
TernaryOperator__Subscription* TernaryOperator__Subscription::Create(::g::Fuse::Reactive::TernaryOperator* to, uObject* context, uObject* listener)
{
    uStackFrame __("Fuse.Reactive.TernaryOperator.Subscription", "Create(Fuse.Reactive.TernaryOperator,Fuse.Reactive.IContext,Fuse.Reactive.IListener)");
    TernaryOperator__Subscription* sub = TernaryOperator__Subscription::New1(to, listener);
    sub->Init(context);
    return sub;
}

// protected Subscription New(Fuse.Reactive.TernaryOperator to, Fuse.Reactive.IListener listener) [static] :44
TernaryOperator__Subscription* TernaryOperator__Subscription::New1(::g::Fuse::Reactive::TernaryOperator* to, uObject* listener)
{
    TernaryOperator__Subscription* obj1 = (TernaryOperator__Subscription*)uNew(TernaryOperator__Subscription_typeof());
    obj1->ctor_1(to, listener);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.4.0/Property.uno
// --------------------------------------------------------------------------

// private sealed class Property.Subscription :25
// {
static void Property__Subscription_build(uType* type)
{
    ::TYPES[23] = ::g::Fuse::Reactive::IListener_typeof();
    type->SetDependencies(
        ::g::Uno::UX::Selector_typeof());
    type->SetInterfaces(
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(Property__Subscription_type, interface0),
        ::g::Fuse::Reactive::IWriteable_typeof(), offsetof(Property__Subscription_type, interface1),
        ::g::Uno::IDisposable_typeof(), offsetof(Property__Subscription_type, interface2));
    type->SetFields(0,
        ::g::Fuse::Reactive::Property_typeof(), offsetof(Property__Subscription, _prop), 0,
        ::g::Uno::UX::PropertyObject_typeof(), offsetof(Property__Subscription, _object), 0,
        ::g::Uno::UX::PropertyAccessor_typeof(), offsetof(Property__Subscription, _accessor), 0,
        ::TYPES[23/*Fuse.Reactive.IListener*/], offsetof(Property__Subscription, _listener), 0);
}

Property__Subscription_type* Property__Subscription_typeof()
{
    static uSStrong<Property__Subscription_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.InterfaceCount = 3;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(Property__Subscription);
    options.TypeSize = sizeof(Property__Subscription_type);
    type = (Property__Subscription_type*)uClassType::New("Fuse.Reactive.Property.Subscription", options);
    type->fp_build_ = Property__Subscription_build;
    type->interface0.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))Property__Subscription__UnoUXIPropertyListenerOnPropertyChanged_fn;
    type->interface1.fp_TrySetExclusive = (void(*)(uObject*, uObject*, bool*))Property__Subscription__TrySetExclusive_fn;
    type->interface2.fp_Dispose = (void(*)(uObject*))Property__Subscription__Dispose_fn;
    return type;
}

// public Subscription(Fuse.Reactive.Property prop, Uno.UX.PropertyObject obj, Uno.UX.PropertyAccessor accessor, Fuse.Reactive.IListener listener) :32
void Property__Subscription__ctor__fn(Property__Subscription* __this, ::g::Fuse::Reactive::Property* prop, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::PropertyAccessor* accessor, uObject* listener)
{
    __this->ctor_(prop, obj, accessor, listener);
}

// public void Dispose() :55
void Property__Subscription__Dispose_fn(Property__Subscription* __this)
{
    __this->Dispose();
}

// public Subscription New(Fuse.Reactive.Property prop, Uno.UX.PropertyObject obj, Uno.UX.PropertyAccessor accessor, Fuse.Reactive.IListener listener) :32
void Property__Subscription__New1_fn(::g::Fuse::Reactive::Property* prop, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::PropertyAccessor* accessor, uObject* listener, Property__Subscription** __retval)
{
    *__retval = Property__Subscription::New1(prop, obj, accessor, listener);
}

// private void PushValue() :68
void Property__Subscription__PushValue_fn(Property__Subscription* __this)
{
    __this->PushValue();
}

// public bool TrySetExclusive(object value) :44
void Property__Subscription__TrySetExclusive_fn(Property__Subscription* __this, uObject* value, bool* __retval)
{
    *__retval = __this->TrySetExclusive(value);
}

// private void Uno.UX.IPropertyListener.OnPropertyChanged(Uno.UX.PropertyObject obj, Uno.UX.Selector prop) :63
void Property__Subscription__UnoUXIPropertyListenerOnPropertyChanged_fn(Property__Subscription* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::Selector* prop)
{
    uStackFrame __("Fuse.Reactive.Property.Subscription", "Uno.UX.IPropertyListener.OnPropertyChanged(Uno.UX.PropertyObject,Uno.UX.Selector)");
    ::g::Uno::UX::Selector prop_ = *prop;

    if (::g::Uno::UX::Selector__op_Equality(prop_, uPtr(__this->_accessor)->Name()))
        __this->PushValue();
}

// public Subscription(Fuse.Reactive.Property prop, Uno.UX.PropertyObject obj, Uno.UX.PropertyAccessor accessor, Fuse.Reactive.IListener listener) [instance] :32
void Property__Subscription::ctor_(::g::Fuse::Reactive::Property* prop, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::PropertyAccessor* accessor, uObject* listener)
{
    uStackFrame __("Fuse.Reactive.Property.Subscription", ".ctor(Fuse.Reactive.Property,Uno.UX.PropertyObject,Uno.UX.PropertyAccessor,Fuse.Reactive.IListener)");
    _prop = prop;
    _listener = listener;
    _accessor = accessor;
    _object = obj;
    uPtr(_object)->AddPropertyListener((uObject*)this);
    PushValue();
}

// public void Dispose() [instance] :55
void Property__Subscription::Dispose()
{
    uStackFrame __("Fuse.Reactive.Property.Subscription", "Dispose()");
    uPtr(_object)->RemovePropertyListener((uObject*)this);
    _accessor = NULL;
    _object = NULL;
    _listener = NULL;
}

// private void PushValue() [instance] :68
void Property__Subscription::PushValue()
{
    uStackFrame __("Fuse.Reactive.Property.Subscription", "PushValue()");
    ::g::Fuse::Reactive::IListener::OnNewData(uInterface(uPtr(_listener), ::TYPES[23/*Fuse.Reactive.IListener*/]), (uObject*)_prop, uPtr(_accessor)->GetAsObject(_object));
}

// public bool TrySetExclusive(object value) [instance] :44
bool Property__Subscription::TrySetExclusive(uObject* value)
{
    uStackFrame __("Fuse.Reactive.Property.Subscription", "TrySetExclusive(object)");
    uObject* res;

    if (::g::Fuse::Marshal::TryConvertTo(uPtr(_accessor)->PropertyType(), value, &res, _object))
    {
        uPtr(_accessor)->SetAsObject(_object, res, (uObject*)this);
        return true;
    }

    return false;
}

// public Subscription New(Fuse.Reactive.Property prop, Uno.UX.PropertyObject obj, Uno.UX.PropertyAccessor accessor, Fuse.Reactive.IListener listener) [static] :32
Property__Subscription* Property__Subscription::New1(::g::Fuse::Reactive::Property* prop, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::PropertyAccessor* accessor, uObject* listener)
{
    Property__Subscription* obj1 = (Property__Subscription*)uNew(Property__Subscription_typeof());
    obj1->ctor_(prop, obj, accessor, listener);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.4.0/QuaternaryOperator.uno
// ------------------------------------------------------------------------------------

// private sealed class QuaternaryOperator.Subscription :35
// {
static void QuaternaryOperator__Subscription_build(uType* type)
{
    ::TYPES[2] = ::g::Uno::IDisposable_typeof();
    ::TYPES[44] = ::g::Fuse::MarshalException_typeof();
    ::TYPES[23] = ::g::Fuse::Reactive::IListener_typeof();
    type->SetInterfaces(
        ::TYPES[2/*Uno.IDisposable*/], offsetof(::g::Fuse::Reactive::InnerListener_type, interface0),
        ::TYPES[23/*Fuse.Reactive.IListener*/], offsetof(::g::Fuse::Reactive::InnerListener_type, interface1));
    type->SetFields(2,
        ::g::Fuse::Reactive::QuaternaryOperator_typeof(), offsetof(QuaternaryOperator__Subscription, _qo), 0,
        uObject_typeof(), offsetof(QuaternaryOperator__Subscription, _first), 0,
        uObject_typeof(), offsetof(QuaternaryOperator__Subscription, _second), 0,
        uObject_typeof(), offsetof(QuaternaryOperator__Subscription, _third), 0,
        uObject_typeof(), offsetof(QuaternaryOperator__Subscription, _fourth), 0,
        ::g::Uno::Bool_typeof(), offsetof(QuaternaryOperator__Subscription, _hasFirst), 0,
        ::g::Uno::Bool_typeof(), offsetof(QuaternaryOperator__Subscription, _hasSecond), 0,
        ::g::Uno::Bool_typeof(), offsetof(QuaternaryOperator__Subscription, _hasThird), 0,
        ::g::Uno::Bool_typeof(), offsetof(QuaternaryOperator__Subscription, _hasFourth), 0,
        ::TYPES[2/*Uno.IDisposable*/], offsetof(QuaternaryOperator__Subscription, _firstSub), 0,
        ::TYPES[2/*Uno.IDisposable*/], offsetof(QuaternaryOperator__Subscription, _secondSub), 0,
        ::TYPES[2/*Uno.IDisposable*/], offsetof(QuaternaryOperator__Subscription, _thirdSub), 0,
        ::TYPES[2/*Uno.IDisposable*/], offsetof(QuaternaryOperator__Subscription, _fourthSub), 0,
        ::TYPES[23/*Fuse.Reactive.IListener*/], offsetof(QuaternaryOperator__Subscription, _listener), 0);
}

::g::Fuse::Reactive::InnerListener_type* QuaternaryOperator__Subscription_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::InnerListener_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::InnerListener_typeof();
    options.FieldCount = 16;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(QuaternaryOperator__Subscription);
    options.TypeSize = sizeof(::g::Fuse::Reactive::InnerListener_type);
    type = (::g::Fuse::Reactive::InnerListener_type*)uClassType::New("Fuse.Reactive.QuaternaryOperator.Subscription", options);
    type->fp_build_ = QuaternaryOperator__Subscription_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Reactive::InnerListener*))QuaternaryOperator__Subscription__Dispose_fn;
    type->fp_OnNewData = (void(*)(::g::Fuse::Reactive::InnerListener*, uObject*, uObject*))QuaternaryOperator__Subscription__OnNewData_fn;
    type->interface1.fp_OnNewData = (void(*)(uObject*, uObject*, uObject*))::g::Fuse::Reactive::InnerListener__FuseReactiveIListenerOnNewData_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))QuaternaryOperator__Subscription__Dispose_fn;
    return type;
}

// protected Subscription(Fuse.Reactive.QuaternaryOperator qo, Fuse.Reactive.IListener listener) :48
void QuaternaryOperator__Subscription__ctor_1_fn(QuaternaryOperator__Subscription* __this, ::g::Fuse::Reactive::QuaternaryOperator* qo, uObject* listener)
{
    __this->ctor_1(qo, listener);
}

// public static Fuse.Reactive.QuaternaryOperator.Subscription Create(Fuse.Reactive.QuaternaryOperator qo, Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :54
void QuaternaryOperator__Subscription__Create_fn(::g::Fuse::Reactive::QuaternaryOperator* qo, uObject* context, uObject* listener, QuaternaryOperator__Subscription** __retval)
{
    *__retval = QuaternaryOperator__Subscription::Create(qo, context, listener);
}

// public override sealed void Dispose() :96
void QuaternaryOperator__Subscription__Dispose_fn(QuaternaryOperator__Subscription* __this)
{
    uStackFrame __("Fuse.Reactive.QuaternaryOperator.Subscription", "Dispose()");
    ::g::Fuse::Reactive::InnerListener__Dispose_fn(__this);

    if (__this->_firstSub != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(__this->_firstSub), ::TYPES[2/*Uno.IDisposable*/]));
        __this->_firstSub = NULL;
    }

    if (__this->_secondSub != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(__this->_secondSub), ::TYPES[2/*Uno.IDisposable*/]));
        __this->_secondSub = NULL;
    }

    if (__this->_thirdSub != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(__this->_thirdSub), ::TYPES[2/*Uno.IDisposable*/]));
        __this->_thirdSub = NULL;
    }

    if (__this->_fourthSub != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(__this->_fourthSub), ::TYPES[2/*Uno.IDisposable*/]));
        __this->_fourthSub = NULL;
    }

    __this->_listener = NULL;
}

// protected void Init(Fuse.Reactive.IContext context) :63
void QuaternaryOperator__Subscription__Init_fn(QuaternaryOperator__Subscription* __this, uObject* context)
{
    __this->Init(context);
}

// protected Subscription New(Fuse.Reactive.QuaternaryOperator qo, Fuse.Reactive.IListener listener) :48
void QuaternaryOperator__Subscription__New1_fn(::g::Fuse::Reactive::QuaternaryOperator* qo, uObject* listener, QuaternaryOperator__Subscription** __retval)
{
    *__retval = QuaternaryOperator__Subscription::New1(qo, listener);
}

// protected override sealed void OnNewData(Fuse.Reactive.IExpression source, object value) :71
void QuaternaryOperator__Subscription__OnNewData_fn(QuaternaryOperator__Subscription* __this, uObject* source, uObject* value)
{
    uStackFrame __("Fuse.Reactive.QuaternaryOperator.Subscription", "OnNewData(Fuse.Reactive.IExpression,object)");

    if (source == uPtr(__this->_qo)->First())
    {
        __this->_hasFirst = true;
        __this->_first = value;
    }

    if (source == uPtr(__this->_qo)->Second())
    {
        __this->_hasSecond = true;
        __this->_second = value;
    }

    if (source == uPtr(__this->_qo)->Third())
    {
        __this->_hasThird = true;
        __this->_third = value;
    }

    if (source == uPtr(__this->_qo)->Fourth())
    {
        __this->_hasFourth = true;
        __this->_fourth = value;
    }

    if ((((__this->_hasFirst || uPtr(__this->_qo)->IsFirstOptional()) && (__this->_hasSecond || uPtr(__this->_qo)->IsSecondOptional())) && (__this->_hasThird || uPtr(__this->_qo)->IsThirdOptional())) && (__this->_hasFourth || uPtr(__this->_qo)->IsFourthOptional()))
        __this->OnNewOperands(__this->_first, __this->_second, __this->_third, __this->_fourth);
}

// protected void OnNewOperands(object first, object second, object third, object fourth) :82
void QuaternaryOperator__Subscription__OnNewOperands_fn(QuaternaryOperator__Subscription* __this, uObject* first, uObject* second, uObject* third, uObject* fourth)
{
    __this->OnNewOperands(first, second, third, fourth);
}

// protected Subscription(Fuse.Reactive.QuaternaryOperator qo, Fuse.Reactive.IListener listener) [instance] :48
void QuaternaryOperator__Subscription::ctor_1(::g::Fuse::Reactive::QuaternaryOperator* qo, uObject* listener)
{
    ctor_();
    _qo = qo;
    _listener = listener;
}

// protected void Init(Fuse.Reactive.IContext context) [instance] :63
void QuaternaryOperator__Subscription::Init(uObject* context)
{
    uStackFrame __("Fuse.Reactive.QuaternaryOperator.Subscription", "Init(Fuse.Reactive.IContext)");
    _firstSub = uPtr(uPtr(_qo)->First())->Subscribe(context, (uObject*)this);
    _secondSub = uPtr(uPtr(_qo)->Second())->Subscribe(context, (uObject*)this);
    _thirdSub = uPtr(uPtr(_qo)->Third())->Subscribe(context, (uObject*)this);
    _fourthSub = uPtr(uPtr(_qo)->Fourth())->Subscribe(context, (uObject*)this);
}

// protected void OnNewOperands(object first, object second, object third, object fourth) [instance] :82
void QuaternaryOperator__Subscription::OnNewOperands(uObject* first, uObject* second, uObject* third, uObject* fourth)
{
    uStackFrame __("Fuse.Reactive.QuaternaryOperator.Subscription", "OnNewOperands(object,object,object,object)");
    ClearDiagnostic();

    try
    {
        {
            ::g::Fuse::Reactive::IListener::OnNewData(uInterface(uPtr(_listener), ::TYPES[23/*Fuse.Reactive.IListener*/]), (uObject*)_qo, uPtr(_qo)->Compute(first, second, third, fourth));
        }
    }

    catch (const uThrowable& __t)
    {
        if (uIs(__t.Exception, ::TYPES[44/*Fuse.MarshalException*/]))
        {
            ::g::Fuse::MarshalException* me = (::g::Fuse::MarshalException*)__t.Exception;
            SetDiagnostic(uPtr(me)->Message(), (uObject*)_qo);
        }
        else         throw __t;
    }
}

// public static Fuse.Reactive.QuaternaryOperator.Subscription Create(Fuse.Reactive.QuaternaryOperator qo, Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) [static] :54
QuaternaryOperator__Subscription* QuaternaryOperator__Subscription::Create(::g::Fuse::Reactive::QuaternaryOperator* qo, uObject* context, uObject* listener)
{
    uStackFrame __("Fuse.Reactive.QuaternaryOperator.Subscription", "Create(Fuse.Reactive.QuaternaryOperator,Fuse.Reactive.IContext,Fuse.Reactive.IListener)");
    QuaternaryOperator__Subscription* res = QuaternaryOperator__Subscription::New1(qo, listener);
    res->Init(context);
    return res;
}

// protected Subscription New(Fuse.Reactive.QuaternaryOperator qo, Fuse.Reactive.IListener listener) [static] :48
QuaternaryOperator__Subscription* QuaternaryOperator__Subscription::New1(::g::Fuse::Reactive::QuaternaryOperator* qo, uObject* listener)
{
    QuaternaryOperator__Subscription* obj1 = (QuaternaryOperator__Subscription*)uNew(QuaternaryOperator__Subscription_typeof());
    obj1->ctor_1(qo, listener);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.4.0/Snapshot.uno
// --------------------------------------------------------------------------

// private sealed class Snapshot.Subscription :23
// {
static void Snapshot__Subscription_build(uType* type)
{
    ::TYPES[2] = ::g::Uno::IDisposable_typeof();
    ::TYPES[23] = ::g::Fuse::Reactive::IListener_typeof();
    type->SetInterfaces(
        ::TYPES[2/*Uno.IDisposable*/], offsetof(Snapshot__Subscription_type, interface0),
        ::TYPES[23/*Fuse.Reactive.IListener*/], offsetof(Snapshot__Subscription_type, interface1));
    type->SetFields(0,
        ::g::Fuse::Reactive::Snapshot_typeof(), offsetof(Snapshot__Subscription, _snap), 0,
        ::TYPES[23/*Fuse.Reactive.IListener*/], offsetof(Snapshot__Subscription, _listener), 0,
        ::TYPES[2/*Uno.IDisposable*/], offsetof(Snapshot__Subscription, _sub), 0);
}

Snapshot__Subscription_type* Snapshot__Subscription_typeof()
{
    static uSStrong<Snapshot__Subscription_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Snapshot__Subscription);
    options.TypeSize = sizeof(Snapshot__Subscription_type);
    type = (Snapshot__Subscription_type*)uClassType::New("Fuse.Reactive.Snapshot.Subscription", options);
    type->fp_build_ = Snapshot__Subscription_build;
    type->interface1.fp_OnNewData = (void(*)(uObject*, uObject*, uObject*))Snapshot__Subscription__FuseReactiveIListenerOnNewData_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))Snapshot__Subscription__Dispose_fn;
    return type;
}

// public Subscription(Fuse.Reactive.Snapshot snap, Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :29
void Snapshot__Subscription__ctor__fn(Snapshot__Subscription* __this, ::g::Fuse::Reactive::Snapshot* snap, uObject* context, uObject* listener)
{
    __this->ctor_(snap, context, listener);
}

// public void Dispose() :36
void Snapshot__Subscription__Dispose_fn(Snapshot__Subscription* __this)
{
    __this->Dispose();
}

// private void Fuse.Reactive.IListener.OnNewData(Fuse.Reactive.IExpression source, object value) :46
void Snapshot__Subscription__FuseReactiveIListenerOnNewData_fn(Snapshot__Subscription* __this, uObject* source, uObject* value)
{
    uStackFrame __("Fuse.Reactive.Snapshot.Subscription", "Fuse.Reactive.IListener.OnNewData(Fuse.Reactive.IExpression,object)");

    if (__this->_listener != NULL)
        ::g::Fuse::Reactive::IListener::OnNewData(uInterface(uPtr(__this->_listener), ::TYPES[23/*Fuse.Reactive.IListener*/]), (uObject*)__this->_snap, value);

    __this->Dispose();
}

// public Subscription New(Fuse.Reactive.Snapshot snap, Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :29
void Snapshot__Subscription__New1_fn(::g::Fuse::Reactive::Snapshot* snap, uObject* context, uObject* listener, Snapshot__Subscription** __retval)
{
    *__retval = Snapshot__Subscription::New1(snap, context, listener);
}

// public Subscription(Fuse.Reactive.Snapshot snap, Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) [instance] :29
void Snapshot__Subscription::ctor_(::g::Fuse::Reactive::Snapshot* snap, uObject* context, uObject* listener)
{
    uStackFrame __("Fuse.Reactive.Snapshot.Subscription", ".ctor(Fuse.Reactive.Snapshot,Fuse.Reactive.IContext,Fuse.Reactive.IListener)");
    _snap = snap;
    _listener = listener;
    _sub = uPtr(uPtr(_snap)->Source())->Subscribe(context, (uObject*)this);
}

// public void Dispose() [instance] :36
void Snapshot__Subscription::Dispose()
{
    uStackFrame __("Fuse.Reactive.Snapshot.Subscription", "Dispose()");
    _listener = NULL;

    if (_sub != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_sub), ::TYPES[2/*Uno.IDisposable*/]));
        _sub = NULL;
    }
}

// public Subscription New(Fuse.Reactive.Snapshot snap, Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) [static] :29
Snapshot__Subscription* Snapshot__Subscription::New1(::g::Fuse::Reactive::Snapshot* snap, uObject* context, uObject* listener)
{
    Snapshot__Subscription* obj1 = (Snapshot__Subscription*)uNew(Snapshot__Subscription_typeof());
    obj1->ctor_(snap, context, listener);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.4.0/Operators.uno
// ---------------------------------------------------------------------------

// public sealed class Subtract :31
// {
static void Subtract_build(uType* type)
{
    ::STRINGS[101] = uString::Const("-");
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::InfixOperator_type, interface0));
    type->SetFields(2);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Subtract__New1_fn, 0, true, type, 2, ::g::Fuse::Reactive::Expression_typeof(), ::g::Fuse::Reactive::Expression_typeof()));
}

::g::Fuse::Reactive::InfixOperator_type* Subtract_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::InfixOperator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::InfixOperator_typeof();
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Subtract);
    options.TypeSize = sizeof(::g::Fuse::Reactive::InfixOperator_type);
    type = (::g::Fuse::Reactive::InfixOperator_type*)uClassType::New("Fuse.Reactive.Subtract", options);
    type->fp_build_ = Subtract_build;
    type->fp_Compute = (void(*)(::g::Fuse::Reactive::BinaryOperator*, uObject*, uObject*, uObject**))Subtract__Compute_fn;
    type->fp_get_Symbol = (void(*)(::g::Fuse::Reactive::InfixOperator*, uString**))Subtract__get_Symbol_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::BinaryOperator__Subscribe_fn;
    return type;
}

// public Subtract(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) :34
void Subtract__ctor_3_fn(Subtract* __this, ::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right)
{
    __this->ctor_3(left, right);
}

// protected override sealed object Compute(object left, object right) :35
void Subtract__Compute_fn(Subtract* __this, uObject* left, uObject* right, uObject** __retval)
{
    uStackFrame __("Fuse.Reactive.Subtract", "Compute(object,object)");
    return *__retval = ::g::Fuse::Marshal::Subtract(left, right), void();
}

// public Subtract New(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) :34
void Subtract__New1_fn(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right, Subtract** __retval)
{
    *__retval = Subtract::New1(left, right);
}

// public override sealed string get_Symbol() :40
void Subtract__get_Symbol_fn(Subtract* __this, uString** __retval)
{
    return *__retval = ::STRINGS[101/*"-"*/], void();
}

// public Subtract(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) [instance] :34
void Subtract::ctor_3(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right)
{
    ctor_2(left, right);
}

// public Subtract New(Fuse.Reactive.Expression left, Fuse.Reactive.Expression right) [static] :34
Subtract* Subtract::New1(::g::Fuse::Reactive::Expression* left, ::g::Fuse::Reactive::Expression* right)
{
    Subtract* obj1 = (Subtract*)uNew(Subtract_typeof());
    obj1->ctor_3(left, right);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.4.0/MathFunctions.uno
// -------------------------------------------------------------------------------

// public sealed class Tan :231
// {
static void Tan_build(uType* type)
{
    ::STRINGS[102] = uString::Const("tan");
    ::TYPES[0] = ::g::Fuse::Reactive::UnaryFloatOperator__FloatOp_typeof();
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::UnaryOperator_type, interface0));
    type->SetFields(3);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Tan__New1_fn, 0, true, type, 1, ::g::Fuse::Reactive::Expression_typeof()));
}

::g::Fuse::Reactive::UnaryOperator_type* Tan_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::UnaryOperator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::UnaryFloatOperator_typeof();
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Tan);
    options.TypeSize = sizeof(::g::Fuse::Reactive::UnaryOperator_type);
    type = (::g::Fuse::Reactive::UnaryOperator_type*)uClassType::New("Fuse.Reactive.Tan", options);
    type->fp_build_ = Tan_build;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::UnaryOperator__Subscribe_fn;
    return type;
}

// public Tan(Fuse.Reactive.Expression operand) :234
void Tan__ctor_3_fn(Tan* __this, ::g::Fuse::Reactive::Expression* operand)
{
    __this->ctor_3(operand);
}

// public Tan New(Fuse.Reactive.Expression operand) :234
void Tan__New1_fn(::g::Fuse::Reactive::Expression* operand, Tan** __retval)
{
    *__retval = Tan::New1(operand);
}

// public Tan(Fuse.Reactive.Expression operand) [instance] :234
void Tan::ctor_3(::g::Fuse::Reactive::Expression* operand)
{
    ctor_2(operand, ::STRINGS[102/*"tan"*/], uDelegate::New(::TYPES[0/*Fuse.Reactive.UnaryFloatOperator.FloatOp*/], (void*)::g::Uno::Math__Tan_fn));
}

// public Tan New(Fuse.Reactive.Expression operand) [static] :234
Tan* Tan::New1(::g::Fuse::Reactive::Expression* operand)
{
    Tan* obj1 = (Tan*)uNew(Tan_typeof());
    obj1->ctor_3(operand);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Bindings/1.4.0/Instance.WindowItems.uno
// -----------------------------------------------------------------------------------

// private struct Instantiator.TemplateMatch :112
// {
static void Instantiator__TemplateMatch_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(Instantiator__TemplateMatch, All), 0,
        ::g::Uno::UX::Template_typeof(), offsetof(Instantiator__TemplateMatch, Template), 0);
}

uStructType* Instantiator__TemplateMatch_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.Alignment = alignof(Instantiator__TemplateMatch);
    options.ValueSize = sizeof(Instantiator__TemplateMatch);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Reactive.Instantiator.TemplateMatch", options);
    type->fp_build_ = Instantiator__TemplateMatch_build;
    return type;
}

// public bool Matches(Fuse.Reactive.Instantiator.TemplateMatch b) :119
void Instantiator__TemplateMatch__Matches_fn(Instantiator__TemplateMatch* __this, Instantiator__TemplateMatch* b, bool* __retval)
{
    *__retval = __this->Matches(*b);
}

// public bool Matches(Fuse.Reactive.Instantiator.TemplateMatch b) [instance] :119
bool Instantiator__TemplateMatch::Matches(Instantiator__TemplateMatch b)
{
    if (All != b.All)
        return false;

    return Template == b.Template;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.4.0/TernaryOperator.uno
// ---------------------------------------------------------------------------------

// public abstract class TernaryOperator :8
// {
static void TernaryOperator_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(TernaryOperator_type, interface0));
    type->SetFields(0,
        ::g::Fuse::Reactive::Expression_typeof(), offsetof(TernaryOperator, _First), 0,
        ::g::Fuse::Reactive::Expression_typeof(), offsetof(TernaryOperator, _Second), 0,
        ::g::Fuse::Reactive::Expression_typeof(), offsetof(TernaryOperator, _Third), 0);
    type->Reflection.SetFunctions(3,
        new uFunction("get_First", NULL, (void*)TernaryOperator__get_First_fn, 0, false, ::g::Fuse::Reactive::Expression_typeof(), 0),
        new uFunction("get_Second", NULL, (void*)TernaryOperator__get_Second_fn, 0, false, ::g::Fuse::Reactive::Expression_typeof(), 0),
        new uFunction("get_Third", NULL, (void*)TernaryOperator__get_Third_fn, 0, false, ::g::Fuse::Reactive::Expression_typeof(), 0));
}

TernaryOperator_type* TernaryOperator_typeof()
{
    static uSStrong<TernaryOperator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::Expression_typeof();
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(TernaryOperator);
    options.TypeSize = sizeof(TernaryOperator_type);
    type = (TernaryOperator_type*)uClassType::New("Fuse.Reactive.TernaryOperator", options);
    type->fp_build_ = TernaryOperator_build;
    type->fp_get_IsThirdOptional = TernaryOperator__get_IsThirdOptional_fn;
    type->fp_Subscribe = (void(*)(::g::Fuse::Reactive::Expression*, uObject*, uObject*, uObject**))TernaryOperator__Subscribe_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))TernaryOperator__Subscribe_fn;
    return type;
}

// protected TernaryOperator(Fuse.Reactive.Expression first, Fuse.Reactive.Expression second, Fuse.Reactive.Expression third) :14
void TernaryOperator__ctor_1_fn(TernaryOperator* __this, ::g::Fuse::Reactive::Expression* first, ::g::Fuse::Reactive::Expression* second, ::g::Fuse::Reactive::Expression* third)
{
    __this->ctor_1(first, second, third);
}

// public generated Fuse.Reactive.Expression get_First() :10
void TernaryOperator__get_First_fn(TernaryOperator* __this, ::g::Fuse::Reactive::Expression** __retval)
{
    *__retval = __this->First();
}

// private generated void set_First(Fuse.Reactive.Expression value) :10
void TernaryOperator__set_First_fn(TernaryOperator* __this, ::g::Fuse::Reactive::Expression* value)
{
    __this->First(value);
}

// protected bool get_IsFirstOptional() :26
void TernaryOperator__get_IsFirstOptional_fn(TernaryOperator* __this, bool* __retval)
{
    *__retval = __this->IsFirstOptional();
}

// protected bool get_IsSecondOptional() :27
void TernaryOperator__get_IsSecondOptional_fn(TernaryOperator* __this, bool* __retval)
{
    *__retval = __this->IsSecondOptional();
}

// protected virtual bool get_IsThirdOptional() :28
void TernaryOperator__get_IsThirdOptional_fn(TernaryOperator* __this, bool* __retval)
{
    return *__retval = false, void();
}

// public generated Fuse.Reactive.Expression get_Second() :11
void TernaryOperator__get_Second_fn(TernaryOperator* __this, ::g::Fuse::Reactive::Expression** __retval)
{
    *__retval = __this->Second();
}

// private generated void set_Second(Fuse.Reactive.Expression value) :11
void TernaryOperator__set_Second_fn(TernaryOperator* __this, ::g::Fuse::Reactive::Expression* value)
{
    __this->Second(value);
}

// public override sealed Uno.IDisposable Subscribe(Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :21
void TernaryOperator__Subscribe_fn(TernaryOperator* __this, uObject* context, uObject* listener, uObject** __retval)
{
    uStackFrame __("Fuse.Reactive.TernaryOperator", "Subscribe(Fuse.Reactive.IContext,Fuse.Reactive.IListener)");
    return *__retval = (uObject*)TernaryOperator__Subscription::Create(__this, context, listener), void();
}

// public generated Fuse.Reactive.Expression get_Third() :12
void TernaryOperator__get_Third_fn(TernaryOperator* __this, ::g::Fuse::Reactive::Expression** __retval)
{
    *__retval = __this->Third();
}

// private generated void set_Third(Fuse.Reactive.Expression value) :12
void TernaryOperator__set_Third_fn(TernaryOperator* __this, ::g::Fuse::Reactive::Expression* value)
{
    __this->Third(value);
}

// protected TernaryOperator(Fuse.Reactive.Expression first, Fuse.Reactive.Expression second, Fuse.Reactive.Expression third) [instance] :14
void TernaryOperator::ctor_1(::g::Fuse::Reactive::Expression* first, ::g::Fuse::Reactive::Expression* second, ::g::Fuse::Reactive::Expression* third)
{
    ctor_();
    First(first);
    Second(second);
    Third(third);
}

// public generated Fuse.Reactive.Expression get_First() [instance] :10
::g::Fuse::Reactive::Expression* TernaryOperator::First()
{
    return _First;
}

// private generated void set_First(Fuse.Reactive.Expression value) [instance] :10
void TernaryOperator::First(::g::Fuse::Reactive::Expression* value)
{
    _First = value;
}

// protected bool get_IsFirstOptional() [instance] :26
bool TernaryOperator::IsFirstOptional()
{
    return false;
}

// protected bool get_IsSecondOptional() [instance] :27
bool TernaryOperator::IsSecondOptional()
{
    return false;
}

// public generated Fuse.Reactive.Expression get_Second() [instance] :11
::g::Fuse::Reactive::Expression* TernaryOperator::Second()
{
    return _Second;
}

// private generated void set_Second(Fuse.Reactive.Expression value) [instance] :11
void TernaryOperator::Second(::g::Fuse::Reactive::Expression* value)
{
    _Second = value;
}

// public generated Fuse.Reactive.Expression get_Third() [instance] :12
::g::Fuse::Reactive::Expression* TernaryOperator::Third()
{
    return _Third;
}

// private generated void set_Third(Fuse.Reactive.Expression value) [instance] :12
void TernaryOperator::Third(::g::Fuse::Reactive::Expression* value)
{
    _Third = value;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.4.0/StringFunctions.uno
// ---------------------------------------------------------------------------------

// public sealed class ToLower :22
// {
static void ToLower_build(uType* type)
{
    ::STRINGS[103] = uString::Const("toLower(");
    ::STRINGS[5] = uString::Const(")");
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::UnaryOperator_type, interface0));
    type->SetFields(1);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)ToLower__New1_fn, 0, true, type, 1, ::g::Fuse::Reactive::Expression_typeof()));
}

::g::Fuse::Reactive::UnaryOperator_type* ToLower_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::UnaryOperator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::UnaryOperator_typeof();
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(ToLower);
    options.TypeSize = sizeof(::g::Fuse::Reactive::UnaryOperator_type);
    type = (::g::Fuse::Reactive::UnaryOperator_type*)uClassType::New("Fuse.Reactive.ToLower", options);
    type->fp_build_ = ToLower_build;
    type->fp_Compute = (void(*)(::g::Fuse::Reactive::UnaryOperator*, uObject*, uObject**))ToLower__Compute_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))ToLower__ToString_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::UnaryOperator__Subscribe_fn;
    return type;
}

// public ToLower(Fuse.Reactive.Expression value) :25
void ToLower__ctor_2_fn(ToLower* __this, ::g::Fuse::Reactive::Expression* value)
{
    __this->ctor_2(value);
}

// protected override sealed object Compute(object s) :26
void ToLower__Compute_fn(ToLower* __this, uObject* s, uObject** __retval)
{
    uStackFrame __("Fuse.Reactive.ToLower", "Compute(object)");
    return *__retval = ::g::Uno::String::ToLower(uPtr(::g::Uno::Object::ToString(uPtr(s)))), void();
}

// public ToLower New(Fuse.Reactive.Expression value) :25
void ToLower__New1_fn(::g::Fuse::Reactive::Expression* value, ToLower** __retval)
{
    *__retval = ToLower::New1(value);
}

// public override sealed string ToString() :31
void ToLower__ToString_fn(ToLower* __this, uString** __retval)
{
    uStackFrame __("Fuse.Reactive.ToLower", "ToString()");
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[103/*"toLower("*/], __this->Operand()), ::STRINGS[5/*")"*/]), void();
}

// public ToLower(Fuse.Reactive.Expression value) [instance] :25
void ToLower::ctor_2(::g::Fuse::Reactive::Expression* value)
{
    ctor_1(value);
}

// public ToLower New(Fuse.Reactive.Expression value) [static] :25
ToLower* ToLower::New1(::g::Fuse::Reactive::Expression* value)
{
    ToLower* obj1 = (ToLower*)uNew(ToLower_typeof());
    obj1->ctor_2(value);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.4.0/StringFunctions.uno
// ---------------------------------------------------------------------------------

// public sealed class ToUpper :6
// {
static void ToUpper_build(uType* type)
{
    ::STRINGS[104] = uString::Const("toUpper(");
    ::STRINGS[5] = uString::Const(")");
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::UnaryOperator_type, interface0));
    type->SetFields(1);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)ToUpper__New1_fn, 0, true, type, 1, ::g::Fuse::Reactive::Expression_typeof()));
}

::g::Fuse::Reactive::UnaryOperator_type* ToUpper_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::UnaryOperator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::UnaryOperator_typeof();
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(ToUpper);
    options.TypeSize = sizeof(::g::Fuse::Reactive::UnaryOperator_type);
    type = (::g::Fuse::Reactive::UnaryOperator_type*)uClassType::New("Fuse.Reactive.ToUpper", options);
    type->fp_build_ = ToUpper_build;
    type->fp_Compute = (void(*)(::g::Fuse::Reactive::UnaryOperator*, uObject*, uObject**))ToUpper__Compute_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))ToUpper__ToString_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::UnaryOperator__Subscribe_fn;
    return type;
}

// public ToUpper(Fuse.Reactive.Expression value) :9
void ToUpper__ctor_2_fn(ToUpper* __this, ::g::Fuse::Reactive::Expression* value)
{
    __this->ctor_2(value);
}

// protected override sealed object Compute(object s) :10
void ToUpper__Compute_fn(ToUpper* __this, uObject* s, uObject** __retval)
{
    uStackFrame __("Fuse.Reactive.ToUpper", "Compute(object)");
    return *__retval = ::g::Uno::String::ToUpper(uPtr(::g::Uno::Object::ToString(uPtr(s)))), void();
}

// public ToUpper New(Fuse.Reactive.Expression value) :9
void ToUpper__New1_fn(::g::Fuse::Reactive::Expression* value, ToUpper** __retval)
{
    *__retval = ToUpper::New1(value);
}

// public override sealed string ToString() :15
void ToUpper__ToString_fn(ToUpper* __this, uString** __retval)
{
    uStackFrame __("Fuse.Reactive.ToUpper", "ToString()");
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[104/*"toUpper("*/], __this->Operand()), ::STRINGS[5/*")"*/]), void();
}

// public ToUpper(Fuse.Reactive.Expression value) [instance] :9
void ToUpper::ctor_2(::g::Fuse::Reactive::Expression* value)
{
    ctor_1(value);
}

// public ToUpper New(Fuse.Reactive.Expression value) [static] :9
ToUpper* ToUpper::New1(::g::Fuse::Reactive::Expression* value)
{
    ToUpper* obj1 = (ToUpper*)uNew(ToUpper_typeof());
    obj1->ctor_2(value);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.4.0/MathFunctions.uno
// -------------------------------------------------------------------------------

// public sealed class Trunc :392
// {
static void Trunc_build(uType* type)
{
    ::STRINGS[105] = uString::Const("trunc");
    ::TYPES[0] = ::g::Fuse::Reactive::UnaryFloatOperator__FloatOp_typeof();
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::UnaryOperator_type, interface0));
    type->SetFields(3);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Trunc__New1_fn, 0, true, type, 1, ::g::Fuse::Reactive::Expression_typeof()));
}

::g::Fuse::Reactive::UnaryOperator_type* Trunc_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::UnaryOperator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::UnaryFloatOperator_typeof();
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Trunc);
    options.TypeSize = sizeof(::g::Fuse::Reactive::UnaryOperator_type);
    type = (::g::Fuse::Reactive::UnaryOperator_type*)uClassType::New("Fuse.Reactive.Trunc", options);
    type->fp_build_ = Trunc_build;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::UnaryOperator__Subscribe_fn;
    return type;
}

// public Trunc(Fuse.Reactive.Expression operand) :395
void Trunc__ctor_3_fn(Trunc* __this, ::g::Fuse::Reactive::Expression* operand)
{
    __this->ctor_3(operand);
}

// public Trunc New(Fuse.Reactive.Expression operand) :395
void Trunc__New1_fn(::g::Fuse::Reactive::Expression* operand, Trunc** __retval)
{
    *__retval = Trunc::New1(operand);
}

// internal static double Op(double v) :398
void Trunc__Op_fn(double* v, double* __retval)
{
    *__retval = Trunc::Op(*v);
}

// public Trunc(Fuse.Reactive.Expression operand) [instance] :395
void Trunc::ctor_3(::g::Fuse::Reactive::Expression* operand)
{
    ctor_2(operand, ::STRINGS[105/*"trunc"*/], uDelegate::New(::TYPES[0/*Fuse.Reactive.UnaryFloatOperator.FloatOp*/], (void*)Trunc__Op_fn));
}

// public Trunc New(Fuse.Reactive.Expression operand) [static] :395
Trunc* Trunc::New1(::g::Fuse::Reactive::Expression* operand)
{
    Trunc* obj1 = (Trunc*)uNew(Trunc_typeof());
    obj1->ctor_3(operand);
    return obj1;
}

// internal static double Op(double v) [static] :398
double Trunc::Op(double v)
{
    return (v < 0.0) ? ::g::Uno::Math::Ceil(v) : ::g::Uno::Math::Floor(v);
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.4.0/MathFunctions.uno
// -------------------------------------------------------------------------------

// public abstract class UnaryFloatOperator :144
// {
static void UnaryFloatOperator_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::UnaryOperator_type, interface0));
    type->SetFields(1,
        ::g::Uno::String_typeof(), offsetof(UnaryFloatOperator, _name), 0,
        UnaryFloatOperator__FloatOp_typeof(), offsetof(UnaryFloatOperator, _op), 0);
}

::g::Fuse::Reactive::UnaryOperator_type* UnaryFloatOperator_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::UnaryOperator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::UnaryOperator_typeof();
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(UnaryFloatOperator);
    options.TypeSize = sizeof(::g::Fuse::Reactive::UnaryOperator_type);
    type = (::g::Fuse::Reactive::UnaryOperator_type*)uClassType::New("Fuse.Reactive.UnaryFloatOperator", options);
    type->fp_build_ = UnaryFloatOperator_build;
    type->fp_Compute = (void(*)(::g::Fuse::Reactive::UnaryOperator*, uObject*, uObject**))UnaryFloatOperator__Compute_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))UnaryFloatOperator__ToString_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::UnaryOperator__Subscribe_fn;
    return type;
}

// internal UnaryFloatOperator(Fuse.Reactive.Expression operand, string name, Fuse.Reactive.UnaryFloatOperator.FloatOp op) :149
void UnaryFloatOperator__ctor_2_fn(UnaryFloatOperator* __this, ::g::Fuse::Reactive::Expression* operand, uString* name, uDelegate* op)
{
    __this->ctor_2(operand, name, op);
}

// protected override sealed object Compute(object operand) :155
void UnaryFloatOperator__Compute_fn(UnaryFloatOperator* __this, uObject* operand, uObject** __retval)
{
    uStackFrame __("Fuse.Reactive.UnaryFloatOperator", "Compute(object)");
    double ret1;
    double ret2;
    double ret3;
    double ret4;
    double ret5;
    double ret6;
    double ret7;
    double ret8;
    double ret9;
    double ret10;
    ::g::Uno::Float4 v;
    int size;

    if (::g::Fuse::Marshal::TryToZeroFloat4(operand, &v, &size))

        switch (size)
        {
            case 1:
                return *__retval = uBox(::TYPES[11/*double*/], (uPtr(__this->_op)->Invoke(&ret1, 1, uCRef((double)v.Item(0))), ret1)), void();
            case 2:
                return *__retval = uBox(::g::Uno::Float2_typeof(), ::g::Uno::Float2__New2((float)(uPtr(__this->_op)->Invoke(&ret2, 1, uCRef((double)v.Item(0))), ret2), (float)(uPtr(__this->_op)->Invoke(&ret3, 1, uCRef((double)v.Item(1))), ret3))), void();
            case 3:
                return *__retval = uBox(::g::Uno::Float3_typeof(), ::g::Uno::Float3__New2((float)(uPtr(__this->_op)->Invoke(&ret4, 1, uCRef((double)v.Item(0))), ret4), (float)(uPtr(__this->_op)->Invoke(&ret5, 1, uCRef((double)v.Item(1))), ret5), (float)(uPtr(__this->_op)->Invoke(&ret6, 1, uCRef((double)v.Item(2))), ret6))), void();
            case 4:
                return *__retval = uBox(::g::Uno::Float4_typeof(), ::g::Uno::Float4__New2((float)(uPtr(__this->_op)->Invoke(&ret7, 1, uCRef((double)v.Item(0))), ret7), (float)(uPtr(__this->_op)->Invoke(&ret8, 1, uCRef((double)v.Item(1))), ret8), (float)(uPtr(__this->_op)->Invoke(&ret9, 1, uCRef((double)v.Item(2))), ret9), (float)(uPtr(__this->_op)->Invoke(&ret10, 1, uCRef((double)v.Item(3))), ret10))), void();
        }

    return *__retval = NULL, void();
}

// public override sealed string ToString() :176
void UnaryFloatOperator__ToString_fn(UnaryFloatOperator* __this, uString** __retval)
{
    uStackFrame __("Fuse.Reactive.UnaryFloatOperator", "ToString()");
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(__this->_name, ::STRINGS[6/*"("*/]), __this->Operand()), ::STRINGS[5/*")"*/]), void();
}

// internal UnaryFloatOperator(Fuse.Reactive.Expression operand, string name, Fuse.Reactive.UnaryFloatOperator.FloatOp op) [instance] :149
void UnaryFloatOperator::ctor_2(::g::Fuse::Reactive::Expression* operand, uString* name, uDelegate* op)
{
    ctor_1(operand);
    _name = name;
    _op = op;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.4.0/UnaryOperator.uno
// -------------------------------------------------------------------------------

// public abstract class UnaryOperator :8
// {
static void UnaryOperator_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(UnaryOperator_type, interface0));
    type->SetFields(0,
        ::g::Fuse::Reactive::Expression_typeof(), offsetof(UnaryOperator, _Operand), 0);
    type->Reflection.SetFunctions(1,
        new uFunction("get_Operand", NULL, (void*)UnaryOperator__get_Operand_fn, 0, false, ::g::Fuse::Reactive::Expression_typeof(), 0));
}

UnaryOperator_type* UnaryOperator_typeof()
{
    static uSStrong<UnaryOperator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::Expression_typeof();
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(UnaryOperator);
    options.TypeSize = sizeof(UnaryOperator_type);
    type = (UnaryOperator_type*)uClassType::New("Fuse.Reactive.UnaryOperator", options);
    type->fp_build_ = UnaryOperator_build;
    type->fp_Compute = UnaryOperator__Compute_fn;
    type->fp_Subscribe = (void(*)(::g::Fuse::Reactive::Expression*, uObject*, uObject*, uObject**))UnaryOperator__Subscribe_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))UnaryOperator__Subscribe_fn;
    return type;
}

// protected UnaryOperator(Fuse.Reactive.Expression operand) :11
void UnaryOperator__ctor_1_fn(UnaryOperator* __this, ::g::Fuse::Reactive::Expression* operand)
{
    __this->ctor_1(operand);
}

// protected virtual object Compute(object operand) :21
void UnaryOperator__Compute_fn(UnaryOperator* __this, uObject* operand, uObject** __retval)
{
    uStackFrame __("Fuse.Reactive.UnaryOperator", "Compute(object)");
    U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition2(::g::Uno::Type::FullName(uPtr(::g::Uno::Object::GetType(__this))), uString::Const(" does not implement the required methods"))));
}

// protected void OnNewOperand(Fuse.Reactive.IListener listener, object operand) :26
void UnaryOperator__OnNewOperand_fn(UnaryOperator* __this, uObject* listener, uObject* operand)
{
    __this->OnNewOperand(listener, operand);
}

// public generated Fuse.Reactive.Expression get_Operand() :10
void UnaryOperator__get_Operand_fn(UnaryOperator* __this, ::g::Fuse::Reactive::Expression** __retval)
{
    *__retval = __this->Operand();
}

// private generated void set_Operand(Fuse.Reactive.Expression value) :10
void UnaryOperator__set_Operand_fn(UnaryOperator* __this, ::g::Fuse::Reactive::Expression* value)
{
    __this->Operand(value);
}

// public override Uno.IDisposable Subscribe(Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener) :16
void UnaryOperator__Subscribe_fn(UnaryOperator* __this, uObject* context, uObject* listener, uObject** __retval)
{
    uStackFrame __("Fuse.Reactive.UnaryOperator", "Subscribe(Fuse.Reactive.IContext,Fuse.Reactive.IListener)");
    return *__retval = (uObject*)UnaryOperator__Subscription::Create(__this, context, listener), void();
}

// protected UnaryOperator(Fuse.Reactive.Expression operand) [instance] :11
void UnaryOperator::ctor_1(::g::Fuse::Reactive::Expression* operand)
{
    ctor_();
    Operand(operand);
}

// protected void OnNewOperand(Fuse.Reactive.IListener listener, object operand) [instance] :26
void UnaryOperator::OnNewOperand(uObject* listener, uObject* operand)
{
    uStackFrame __("Fuse.Reactive.UnaryOperator", "OnNewOperand(Fuse.Reactive.IListener,object)");
    ::g::Fuse::Reactive::IListener::OnNewData(uInterface(uPtr(listener), ::TYPES[23/*Fuse.Reactive.IListener*/]), (uObject*)this, Compute(operand));
}

// public generated Fuse.Reactive.Expression get_Operand() [instance] :10
::g::Fuse::Reactive::Expression* UnaryOperator::Operand()
{
    return _Operand;
}

// private generated void set_Operand(Fuse.Reactive.Expression value) [instance] :10
void UnaryOperator::Operand(::g::Fuse::Reactive::Expression* value)
{
    _Operand = value;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/1.4.0/ObserverMap.uno
// -----------------------------------------------------------------

// internal sealed class UnmappedView<T> :8
// {
static void UnmappedView_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::IArray_typeof(), offsetof(UnmappedView_type, interface0));
    type->SetFields(0,
        ::g::Fuse::Reactive::ObserverMap_typeof()->MakeType(type->T(0), NULL), offsetof(UnmappedView, _source), 0);
}

UnmappedView_type* UnmappedView_typeof()
{
    static uSStrong<UnmappedView_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.GenericCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(UnmappedView);
    options.TypeSize = sizeof(UnmappedView_type);
    type = (UnmappedView_type*)uClassType::New("Fuse.Reactive.UnmappedView`1", options);
    type->fp_build_ = UnmappedView_build;
    type->interface0.fp_get_Length = (void(*)(uObject*, int*))UnmappedView__get_Length_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uObject**))UnmappedView__get_Item_fn;
    return type;
}

// public UnmappedView(Fuse.Reactive.ObserverMap<T> source) :11
void UnmappedView__ctor__fn(UnmappedView* __this, ::g::Fuse::Reactive::ObserverMap* source)
{
    __this->ctor_(source);
}

// public object get_Item(int index) :17
void UnmappedView__get_Item_fn(UnmappedView* __this, int* index, uObject** __retval)
{
    *__retval = __this->Item(*index);
}

// public int get_Length() :16
void UnmappedView__get_Length_fn(UnmappedView* __this, int* __retval)
{
    *__retval = __this->Length();
}

// public UnmappedView New(Fuse.Reactive.ObserverMap<T> source) :11
void UnmappedView__New1_fn(uType* __type, ::g::Fuse::Reactive::ObserverMap* source, UnmappedView** __retval)
{
    *__retval = UnmappedView::New1(__type, source);
}

// public UnmappedView(Fuse.Reactive.ObserverMap<T> source) [instance] :11
void UnmappedView::ctor_(::g::Fuse::Reactive::ObserverMap* source)
{
    _source = source;
}

// public object get_Item(int index) [instance] :17
uObject* UnmappedView::Item(int index)
{
    uStackFrame __("Fuse.Reactive.UnmappedView`1", "get_Item(int)");
    uObject* ret2;
    return uPtr(_source)->UVUnmap((::g::Uno::Collections::List__get_Item_fn(uPtr((::g::Uno::Collections::List*)uPtr(_source)->_list), uCRef<int>(index), &ret2), ret2));
}

// public int get_Length() [instance] :16
int UnmappedView::Length()
{
    uStackFrame __("Fuse.Reactive.UnmappedView`1", "get_Length()");
    return uPtr((::g::Uno::Collections::List*)uPtr(_source)->_list)->Count();
}

// public UnmappedView New(Fuse.Reactive.ObserverMap<T> source) [static] :11
UnmappedView* UnmappedView::New1(uType* __type, ::g::Fuse::Reactive::ObserverMap* source)
{
    UnmappedView* obj1 = (UnmappedView*)uNew(__type);
    obj1->ctor_(source);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/1.4.0/ValueObserver.uno
// -------------------------------------------------------------------

// internal sealed class ValueForwarder :85
// {
static void ValueForwarder_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Reactive::ValueObserver_type, interface0),
        ::g::Fuse::Reactive::IObserver_typeof(), offsetof(::g::Fuse::Reactive::ValueObserver_type, interface1));
    type->SetFields(2,
        ValueForwarder__IValueListener_typeof(), offsetof(ValueForwarder, _listener), 0);
}

::g::Fuse::Reactive::ValueObserver_type* ValueForwarder_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::ValueObserver_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::ValueObserver_typeof();
    options.FieldCount = 3;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(ValueForwarder);
    options.TypeSize = sizeof(::g::Fuse::Reactive::ValueObserver_type);
    type = (::g::Fuse::Reactive::ValueObserver_type*)uClassType::New("Fuse.Reactive.ValueForwarder", options);
    type->fp_build_ = ValueForwarder_build;
    type->fp_PushData = (void(*)(::g::Fuse::Reactive::ValueObserver*, uObject*))ValueForwarder__PushData_fn;
    type->interface1.fp_OnClear = (void(*)(uObject*))::g::Fuse::Reactive::ValueObserver__FuseReactiveIObserverOnClear_fn;
    type->interface1.fp_OnSet = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::ValueObserver__FuseReactiveIObserverOnSet_fn;
    type->interface1.fp_OnAdd = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::ValueObserver__FuseReactiveIObserverOnAdd_fn;
    type->interface1.fp_OnNewAt = (void(*)(uObject*, int*, uObject*))::g::Fuse::Reactive::ValueObserver__FuseReactiveIObserverOnNewAt_fn;
    type->interface1.fp_OnFailed = (void(*)(uObject*, uString*))::g::Fuse::Reactive::ValueObserver__FuseReactiveIObserverOnFailed_fn;
    type->interface1.fp_OnNewAll = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::ValueObserver__FuseReactiveIObserverOnNewAll_fn;
    type->interface1.fp_OnRemoveAt = (void(*)(uObject*, int*))::g::Fuse::Reactive::ValueObserver__FuseReactiveIObserverOnRemoveAt_fn;
    type->interface1.fp_OnInsertAt = (void(*)(uObject*, int*, uObject*))::g::Fuse::Reactive::ValueObserver__FuseReactiveIObserverOnInsertAt_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Reactive::ValueObserver__Dispose_fn;
    return type;
}

// public ValueForwarder(Fuse.Reactive.IObservable obs, Fuse.Reactive.ValueForwarder.IValueListener listener) :90
void ValueForwarder__ctor_1_fn(ValueForwarder* __this, uObject* obs, uObject* listener)
{
    __this->ctor_1(obs, listener);
}

// public ValueForwarder New(Fuse.Reactive.IObservable obs, Fuse.Reactive.ValueForwarder.IValueListener listener) :90
void ValueForwarder__New1_fn(uObject* obs, uObject* listener, ValueForwarder** __retval)
{
    *__retval = ValueForwarder::New1(obs, listener);
}

// protected override sealed void PushData(object newValue) :96
void ValueForwarder__PushData_fn(ValueForwarder* __this, uObject* newValue)
{
    uStackFrame __("Fuse.Reactive.ValueForwarder", "PushData(object)");
    ValueForwarder__IValueListener::NewValue(uInterface(uPtr(__this->_listener), ValueForwarder__IValueListener_typeof()), newValue);
}

// public ValueForwarder(Fuse.Reactive.IObservable obs, Fuse.Reactive.ValueForwarder.IValueListener listener) [instance] :90
void ValueForwarder::ctor_1(uObject* obs, uObject* listener)
{
    uStackFrame __("Fuse.Reactive.ValueForwarder", ".ctor(Fuse.Reactive.IObservable,Fuse.Reactive.ValueForwarder.IValueListener)");
    ctor_();
    _listener = listener;
    Subscribe(obs);
}

// public ValueForwarder New(Fuse.Reactive.IObservable obs, Fuse.Reactive.ValueForwarder.IValueListener listener) [static] :90
ValueForwarder* ValueForwarder::New1(uObject* obs, uObject* listener)
{
    ValueForwarder* obj1 = (ValueForwarder*)uNew(ValueForwarder_typeof());
    obj1->ctor_1(obs, listener);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive/1.4.0/ValueObserver.uno
// -------------------------------------------------------------------

// internal abstract class ValueObserver :11
// {
static void ValueObserver_build(uType* type)
{
    ::TYPES[25] = ::g::Fuse::IArray_typeof();
    ::TYPES[27] = ::g::Fuse::Reactive::IObservableArray_typeof();
    ::TYPES[2] = ::g::Uno::IDisposable_typeof();
    type->SetInterfaces(
        ::TYPES[2/*Uno.IDisposable*/], offsetof(ValueObserver_type, interface0),
        ::g::Fuse::Reactive::IObserver_typeof(), offsetof(ValueObserver_type, interface1));
    type->SetFields(0,
        ::TYPES[2/*Uno.IDisposable*/], offsetof(ValueObserver, _obsSub), 0,
        ::g::Fuse::Reactive::IObservable_typeof(), offsetof(ValueObserver, _obs), 0);
}

ValueObserver_type* ValueObserver_typeof()
{
    static uSStrong<ValueObserver_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(ValueObserver);
    options.TypeSize = sizeof(ValueObserver_type);
    type = (ValueObserver_type*)uClassType::New("Fuse.Reactive.ValueObserver", options);
    type->fp_build_ = ValueObserver_build;
    type->fp_Dispose = ValueObserver__Dispose_fn;
    type->interface1.fp_OnClear = (void(*)(uObject*))ValueObserver__FuseReactiveIObserverOnClear_fn;
    type->interface1.fp_OnSet = (void(*)(uObject*, uObject*))ValueObserver__FuseReactiveIObserverOnSet_fn;
    type->interface1.fp_OnAdd = (void(*)(uObject*, uObject*))ValueObserver__FuseReactiveIObserverOnAdd_fn;
    type->interface1.fp_OnNewAt = (void(*)(uObject*, int*, uObject*))ValueObserver__FuseReactiveIObserverOnNewAt_fn;
    type->interface1.fp_OnFailed = (void(*)(uObject*, uString*))ValueObserver__FuseReactiveIObserverOnFailed_fn;
    type->interface1.fp_OnNewAll = (void(*)(uObject*, uObject*))ValueObserver__FuseReactiveIObserverOnNewAll_fn;
    type->interface1.fp_OnRemoveAt = (void(*)(uObject*, int*))ValueObserver__FuseReactiveIObserverOnRemoveAt_fn;
    type->interface1.fp_OnInsertAt = (void(*)(uObject*, int*, uObject*))ValueObserver__FuseReactiveIObserverOnInsertAt_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))ValueObserver__Dispose_fn;
    return type;
}

// protected generated ValueObserver() :11
void ValueObserver__ctor__fn(ValueObserver* __this)
{
    __this->ctor_();
}

// public virtual void Dispose() :35
void ValueObserver__Dispose_fn(ValueObserver* __this)
{
    uStackFrame __("Fuse.Reactive.ValueObserver", "Dispose()");
    __this->Unsubscribe();
}

// private void Fuse.Reactive.IObserver.OnAdd(object addedValue) :52
void ValueObserver__FuseReactiveIObserverOnAdd_fn(ValueObserver* __this, uObject* addedValue)
{
    uStackFrame __("Fuse.Reactive.ValueObserver", "Fuse.Reactive.IObserver.OnAdd(object)");
    __this->PushData(::g::Fuse::IArray::Item(uInterface(uPtr(__this->_obs), ::TYPES[25/*Fuse.IArray*/]), 0));
}

// private void Fuse.Reactive.IObserver.OnClear() :42
void ValueObserver__FuseReactiveIObserverOnClear_fn(ValueObserver* __this)
{
    uStackFrame __("Fuse.Reactive.ValueObserver", "Fuse.Reactive.IObserver.OnClear()");
    __this->PushData(NULL);
}

// private void Fuse.Reactive.IObserver.OnFailed(string message) :62
void ValueObserver__FuseReactiveIObserverOnFailed_fn(ValueObserver* __this, uString* message)
{
}

// private void Fuse.Reactive.IObserver.OnInsertAt(int index, object value) :79
void ValueObserver__FuseReactiveIObserverOnInsertAt_fn(ValueObserver* __this, int* index, uObject* value)
{
    uStackFrame __("Fuse.Reactive.ValueObserver", "Fuse.Reactive.IObserver.OnInsertAt(int,object)");
    __this->PushData(::g::Fuse::IArray::Item(uInterface(uPtr(__this->_obs), ::TYPES[25/*Fuse.IArray*/]), 0));
}

// private void Fuse.Reactive.IObserver.OnNewAll(Fuse.IArray values) :67
void ValueObserver__FuseReactiveIObserverOnNewAll_fn(ValueObserver* __this, uObject* values)
{
    uStackFrame __("Fuse.Reactive.ValueObserver", "Fuse.Reactive.IObserver.OnNewAll(Fuse.IArray)");

    if (::g::Fuse::IArray::Length(uInterface(uPtr(values), ::TYPES[25/*Fuse.IArray*/])) > 0)
        __this->PushData(::g::Fuse::IArray::Item(uInterface(uPtr(__this->_obs), ::TYPES[25/*Fuse.IArray*/]), 0));
}

// private void Fuse.Reactive.IObserver.OnNewAt(int index, object value) :57
void ValueObserver__FuseReactiveIObserverOnNewAt_fn(ValueObserver* __this, int* index, uObject* value)
{
    uStackFrame __("Fuse.Reactive.ValueObserver", "Fuse.Reactive.IObserver.OnNewAt(int,object)");
    __this->PushData(::g::Fuse::IArray::Item(uInterface(uPtr(__this->_obs), ::TYPES[25/*Fuse.IArray*/]), 0));
}

// private void Fuse.Reactive.IObserver.OnRemoveAt(int index) :73
void ValueObserver__FuseReactiveIObserverOnRemoveAt_fn(ValueObserver* __this, int* index)
{
    uStackFrame __("Fuse.Reactive.ValueObserver", "Fuse.Reactive.IObserver.OnRemoveAt(int)");

    if (::g::Fuse::IArray::Length(uInterface(uPtr(__this->_obs), ::TYPES[25/*Fuse.IArray*/])) > 0)
        __this->PushData(::g::Fuse::IArray::Item(uInterface(uPtr(__this->_obs), ::TYPES[25/*Fuse.IArray*/]), 0));
}

// private void Fuse.Reactive.IObserver.OnSet(object newValue) :47
void ValueObserver__FuseReactiveIObserverOnSet_fn(ValueObserver* __this, uObject* newValue)
{
    uStackFrame __("Fuse.Reactive.ValueObserver", "Fuse.Reactive.IObserver.OnSet(object)");
    __this->PushData(newValue);
}

// public Fuse.Reactive.IObservable get_Observable() :16
void ValueObserver__get_Observable_fn(ValueObserver* __this, uObject** __retval)
{
    *__retval = __this->Observable();
}

// protected void Subscribe(Fuse.Reactive.IObservable obs) :21
void ValueObserver__Subscribe_fn(ValueObserver* __this, uObject* obs)
{
    __this->Subscribe(obs);
}

// protected void Unsubscribe() :28
void ValueObserver__Unsubscribe_fn(ValueObserver* __this)
{
    __this->Unsubscribe();
}

// protected generated ValueObserver() [instance] :11
void ValueObserver::ctor_()
{
}

// public Fuse.Reactive.IObservable get_Observable() [instance] :16
uObject* ValueObserver::Observable()
{
    return _obs;
}

// protected void Subscribe(Fuse.Reactive.IObservable obs) [instance] :21
void ValueObserver::Subscribe(uObject* obs)
{
    uStackFrame __("Fuse.Reactive.ValueObserver", "Subscribe(Fuse.Reactive.IObservable)");
    _obs = obs;

    if (::g::Fuse::IArray::Length(uInterface(uPtr(obs), ::TYPES[25/*Fuse.IArray*/])) > 0)
        PushData(::g::Fuse::IArray::Item(uInterface(uPtr(obs), ::TYPES[25/*Fuse.IArray*/]), 0));

    _obsSub = ::g::Fuse::Reactive::IObservableArray::Subscribe(uInterface(uPtr(obs), ::TYPES[27/*Fuse.Reactive.IObservableArray*/]), (uObject*)this);
}

// protected void Unsubscribe() [instance] :28
void ValueObserver::Unsubscribe()
{
    uStackFrame __("Fuse.Reactive.ValueObserver", "Unsubscribe()");

    if (_obsSub != NULL)
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_obsSub), ::TYPES[2/*Uno.IDisposable*/]));

    _obsSub = NULL;
    _obs = NULL;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.4.0/VarArgFunction.uno
// --------------------------------------------------------------------------------

// public abstract class VarArgFunction :11
// {
static void VarArgFunction_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::Expression_type, interface0));
    type->SetFields(0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Reactive::Expression_typeof(), NULL), offsetof(VarArgFunction, _args), 0);
    type->Reflection.SetFunctions(1,
        new uFunction("get_Arguments", NULL, (void*)VarArgFunction__get_Arguments_fn, 0, false, ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Reactive::Expression_typeof(), NULL), 0));
}

::g::Fuse::Reactive::Expression_type* VarArgFunction_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::Expression_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::Expression_typeof();
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(VarArgFunction);
    options.TypeSize = sizeof(::g::Fuse::Reactive::Expression_type);
    type = (::g::Fuse::Reactive::Expression_type*)uClassType::New("Fuse.Reactive.VarArgFunction", options);
    type->fp_build_ = VarArgFunction_build;
    return type;
}

// protected generated VarArgFunction() :11
void VarArgFunction__ctor_1_fn(VarArgFunction* __this)
{
    __this->ctor_1();
}

// public Uno.Collections.IList<Fuse.Reactive.Expression> get_Arguments() :42
void VarArgFunction__get_Arguments_fn(VarArgFunction* __this, uObject** __retval)
{
    *__retval = __this->Arguments();
}

// protected string FormatString(string funcName) :45
void VarArgFunction__FormatString_fn(VarArgFunction* __this, uString* funcName, uString** __retval)
{
    *__retval = __this->FormatString(funcName);
}

// protected generated VarArgFunction() [instance] :11
void VarArgFunction::ctor_1()
{
    _args = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[55/*Uno.Collections.List`1*/]->MakeType(::g::Fuse::Reactive::Expression_typeof(), NULL)));
    ctor_();
}

// public Uno.Collections.IList<Fuse.Reactive.Expression> get_Arguments() [instance] :42
uObject* VarArgFunction::Arguments()
{
    uStackFrame __("Fuse.Reactive.VarArgFunction", "get_Arguments()");
    return (uObject*)_args;
}

// protected string FormatString(string funcName) [instance] :45
uString* VarArgFunction::FormatString(uString* funcName)
{
    uStackFrame __("Fuse.Reactive.VarArgFunction", "FormatString(string)");
    ::g::Fuse::Reactive::Expression* ret1;
    uString* q = ::g::Uno::String::op_Addition2(funcName, ::STRINGS[6/*"("*/]);

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(Arguments()), ::TYPES[61/*Uno.Collections.ICollection<Fuse.Reactive.Expression>*/])); ++i)
    {
        if (i > 0)
            q = ::g::Uno::String::op_Addition2(q, ::STRINGS[13/*","*/]);

        q = ::g::Uno::String::op_Addition2(q, ::g::Uno::Object::ToString(uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(Arguments()), ::TYPES[62/*Uno.Collections.IList<Fuse.Reactive.Expression>*/]), uCRef<int>(i), &ret1), ret1))));
    }

    q = ::g::Uno::String::op_Addition2(q, ::STRINGS[5/*")"*/]);
    return q;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Expressions/1.4.0/VectorFunctions.uno
// ---------------------------------------------------------------------------------

// public sealed class Vector :11
// {
static void Vector_build(uType* type)
{
    ::STRINGS[21] = uString::Const("");
    ::TYPES[23] = ::g::Fuse::Reactive::IListener_typeof();
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::SimpleVarArgFunction_type, interface0));
    type->SetFields(1);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Vector__New1_fn, 0, true, type, 0));
}

::g::Fuse::Reactive::SimpleVarArgFunction_type* Vector_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::SimpleVarArgFunction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::SimpleVarArgFunction_typeof();
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Vector);
    options.TypeSize = sizeof(::g::Fuse::Reactive::SimpleVarArgFunction_type);
    type = (::g::Fuse::Reactive::SimpleVarArgFunction_type*)uClassType::New("Fuse.Reactive.Vector", options);
    type->fp_build_ = Vector_build;
    type->fp_ctor_ = (void*)Vector__New1_fn;
    type->fp_OnNewArguments = (void(*)(::g::Fuse::Reactive::SimpleVarArgFunction*, uArray*, uObject*))Vector__OnNewArguments_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))Vector__ToString_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))::g::Fuse::Reactive::SimpleVarArgFunction__Subscribe_fn;
    return type;
}

// public generated Vector() :11
void Vector__ctor_3_fn(Vector* __this)
{
    __this->ctor_3();
}

// public generated Vector New() :11
void Vector__New1_fn(Vector** __retval)
{
    *__retval = Vector::New1();
}

// protected override sealed void OnNewArguments(Fuse.Reactive.VarArgFunction.Argument[] args, Fuse.Reactive.IListener listener) :13
void Vector__OnNewArguments_fn(Vector* __this, uArray* args, uObject* listener)
{
    uStackFrame __("Fuse.Reactive.Vector", "OnNewArguments(Fuse.Reactive.VarArgFunction.Argument[],Fuse.Reactive.IListener)");
    ::g::Fuse::Reactive::IListener::OnNewData(uInterface(uPtr(listener), ::TYPES[23/*Fuse.Reactive.IListener*/]), (uObject*)__this, ::g::Fuse::Reactive::Array::New1(args));
}

// public override sealed string ToString() :18
void Vector__ToString_fn(Vector* __this, uString** __retval)
{
    uStackFrame __("Fuse.Reactive.Vector", "ToString()");
    return *__retval = __this->FormatString(::STRINGS[21/*""*/]), void();
}

// public generated Vector() [instance] :11
void Vector::ctor_3()
{
    ctor_2();
}

// public generated Vector New() [static] :11
Vector* Vector::New1()
{
    Vector* obj1 = (Vector*)uNew(Vector_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Bindings/1.4.0/WhileCount.uno
// -------------------------------------------------------------------------

// public class WhileCount :44
// {
static void WhileCount_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(WhileCount_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(WhileCount_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(WhileCount_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(WhileCount_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(WhileCount_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(WhileCount_type, interface5),
        ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof(), offsetof(WhileCount_type, interface6),
        ::g::Fuse::Animations::IBasePlayerFeedback_typeof(), offsetof(WhileCount_type, interface7),
        ::g::Fuse::Reactive::IObserver_typeof(), offsetof(WhileCount_type, interface8));
    type->SetFields(38,
        uObject_typeof(), offsetof(WhileCount, _items), 0,
        ::g::Uno::Int_typeof(), offsetof(WhileCount, _oldCount), 0,
        ::g::Uno::Int2_typeof(), offsetof(WhileCount, _compare), 0,
        WhileCount__Range_typeof(), offsetof(WhileCount, _low), 0,
        WhileCount__Range_typeof(), offsetof(WhileCount, _high), 0,
        ::g::Uno::IDisposable_typeof(), offsetof(WhileCount, _subscription), 0);
    type->Reflection.SetFunctions(13,
        new uFunction("get_EqualTo", NULL, (void*)WhileCount__get_EqualTo_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("set_EqualTo", NULL, (void*)WhileCount__set_EqualTo_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("get_GreaterThan", NULL, (void*)WhileCount__get_GreaterThan_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("set_GreaterThan", NULL, (void*)WhileCount__set_GreaterThan_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("get_GreaterThanEqual", NULL, (void*)WhileCount__get_GreaterThanEqual_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("set_GreaterThanEqual", NULL, (void*)WhileCount__set_GreaterThanEqual_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("get_Items", NULL, (void*)WhileCount__get_Items_fn, 0, false, uObject_typeof(), 0),
        new uFunction("set_Items", NULL, (void*)WhileCount__set_Items_fn, 0, false, uVoid_typeof(), 1, uObject_typeof()),
        new uFunction("get_LessThan", NULL, (void*)WhileCount__get_LessThan_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("set_LessThan", NULL, (void*)WhileCount__set_LessThan_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("get_LessThanEqual", NULL, (void*)WhileCount__get_LessThanEqual_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("set_LessThanEqual", NULL, (void*)WhileCount__set_LessThanEqual_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction(".ctor", NULL, (void*)WhileCount__New2_fn, 0, true, type, 0));
}

WhileCount_type* WhileCount_typeof()
{
    static uSStrong<WhileCount_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::WhileTrigger_typeof();
    options.FieldCount = 44;
    options.InterfaceCount = 9;
    options.ObjectSize = sizeof(WhileCount);
    options.TypeSize = sizeof(WhileCount_type);
    type = (WhileCount_type*)uClassType::New("Fuse.Reactive.WhileCount", options);
    type->fp_build_ = WhileCount_build;
    type->fp_ctor_ = (void*)WhileCount__New2_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))WhileCount__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))WhileCount__OnUnrooted_fn;
    type->interface8.fp_OnSet = (void(*)(uObject*, uObject*))WhileCount__FuseReactiveIObserverOnSet_fn;
    type->interface8.fp_OnFailed = (void(*)(uObject*, uString*))WhileCount__FuseReactiveIObserverOnFailed_fn;
    type->interface8.fp_OnAdd = (void(*)(uObject*, uObject*))WhileCount__FuseReactiveIObserverOnAdd_fn;
    type->interface8.fp_OnRemoveAt = (void(*)(uObject*, int*))WhileCount__FuseReactiveIObserverOnRemoveAt_fn;
    type->interface8.fp_OnNewAt = (void(*)(uObject*, int*, uObject*))WhileCount__FuseReactiveIObserverOnNewAt_fn;
    type->interface8.fp_OnInsertAt = (void(*)(uObject*, int*, uObject*))WhileCount__FuseReactiveIObserverOnInsertAt_fn;
    type->interface8.fp_OnClear = (void(*)(uObject*))WhileCount__FuseReactiveIObserverOnClear_fn;
    type->interface8.fp_OnNewAll = (void(*)(uObject*, uObject*))WhileCount__FuseReactiveIObserverOnNewAll_fn;
    type->interface7.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnPlaybackDone_fn;
    type->interface7.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnStable_fn;
    type->interface6.fp_OnProgressUpdated = (void(*)(uObject*, uObject*, double*, double*, int*))::g::Fuse::Triggers::Trigger__FuseAnimationsIUnwrappedPlayerFeedbackOnProgressUpdated_fn;
    type->interface4.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface4.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface5.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface4.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface4.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public generated WhileCount() :44
void WhileCount__ctor_6_fn(WhileCount* __this)
{
    __this->ctor_6();
}

// private void Assess(int count) :125
void WhileCount__Assess_fn(WhileCount* __this, int* count)
{
    __this->Assess(*count);
}

// public int get_EqualTo() :206
void WhileCount__get_EqualTo_fn(WhileCount* __this, int* __retval)
{
    *__retval = __this->EqualTo();
}

// public void set_EqualTo(int value) :207
void WhileCount__set_EqualTo_fn(WhileCount* __this, int* value)
{
    __this->EqualTo(*value);
}

// private void Fuse.Reactive.IObserver.OnAdd(object addedValue) :226
void WhileCount__FuseReactiveIObserverOnAdd_fn(WhileCount* __this, uObject* addedValue)
{
    __this->Assess(__this->_oldCount + 1);
}

// private void Fuse.Reactive.IObserver.OnClear() :244
void WhileCount__FuseReactiveIObserverOnClear_fn(WhileCount* __this)
{
    __this->Assess(0);
}

// private void Fuse.Reactive.IObserver.OnFailed(string message) :222
void WhileCount__FuseReactiveIObserverOnFailed_fn(WhileCount* __this, uString* message)
{
    __this->Assess(0);
}

// private void Fuse.Reactive.IObserver.OnInsertAt(int index, object value) :239
void WhileCount__FuseReactiveIObserverOnInsertAt_fn(WhileCount* __this, int* index, uObject* value)
{
    __this->Assess(__this->_oldCount + 1);
}

// private void Fuse.Reactive.IObserver.OnNewAll(Fuse.IArray values) :249
void WhileCount__FuseReactiveIObserverOnNewAll_fn(WhileCount* __this, uObject* values)
{
    uStackFrame __("Fuse.Reactive.WhileCount", "Fuse.Reactive.IObserver.OnNewAll(Fuse.IArray)");
    __this->Assess(::g::Fuse::IArray::Length(uInterface(uPtr(values), ::TYPES[25/*Fuse.IArray*/])));
}

// private void Fuse.Reactive.IObserver.OnNewAt(int index, object value) :235
void WhileCount__FuseReactiveIObserverOnNewAt_fn(WhileCount* __this, int* index, uObject* value)
{
}

// private void Fuse.Reactive.IObserver.OnRemoveAt(int index) :230
void WhileCount__FuseReactiveIObserverOnRemoveAt_fn(WhileCount* __this, int* index)
{
    __this->Assess(__this->_oldCount - 1);
}

// private void Fuse.Reactive.IObserver.OnSet(object newValue) :218
void WhileCount__FuseReactiveIObserverOnSet_fn(WhileCount* __this, uObject* newValue)
{
    __this->Assess(1);
}

// public int get_GreaterThan() :182
void WhileCount__get_GreaterThan_fn(WhileCount* __this, int* __retval)
{
    *__retval = __this->GreaterThan();
}

// public void set_GreaterThan(int value) :183
void WhileCount__set_GreaterThan_fn(WhileCount* __this, int* value)
{
    __this->GreaterThan(*value);
}

// public int get_GreaterThanEqual() :194
void WhileCount__get_GreaterThanEqual_fn(WhileCount* __this, int* __retval)
{
    *__retval = __this->GreaterThanEqual();
}

// public void set_GreaterThanEqual(int value) :195
void WhileCount__set_GreaterThanEqual_fn(WhileCount* __this, int* value)
{
    __this->GreaterThanEqual(*value);
}

// private bool IsOn(int count) :131
void WhileCount__IsOn_fn(WhileCount* __this, int* count, bool* __retval)
{
    *__retval = __this->IsOn(*count);
}

// public object get_Items() :69
void WhileCount__get_Items_fn(WhileCount* __this, uObject** __retval)
{
    *__retval = __this->Items();
}

// public void set_Items(object value) :70
void WhileCount__set_Items_fn(WhileCount* __this, uObject* value)
{
    __this->Items(value);
}

// public int get_LessThan() :158
void WhileCount__get_LessThan_fn(WhileCount* __this, int* __retval)
{
    *__retval = __this->LessThan();
}

// public void set_LessThan(int value) :159
void WhileCount__set_LessThan_fn(WhileCount* __this, int* value)
{
    __this->LessThan(*value);
}

// public int get_LessThanEqual() :170
void WhileCount__get_LessThanEqual_fn(WhileCount* __this, int* __retval)
{
    *__retval = __this->LessThanEqual();
}

// public void set_LessThanEqual(int value) :171
void WhileCount__set_LessThanEqual_fn(WhileCount* __this, int* value)
{
    __this->LessThanEqual(*value);
}

// public generated WhileCount New() :44
void WhileCount__New2_fn(WhileCount** __retval)
{
    *__retval = WhileCount::New2();
}

// private void OnItemsChanged() :80
void WhileCount__OnItemsChanged_fn(WhileCount* __this)
{
    __this->OnItemsChanged();
}

// protected override sealed void OnRooted() :46
void WhileCount__OnRooted_fn(WhileCount* __this)
{
    uStackFrame __("Fuse.Reactive.WhileCount", "OnRooted()");
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);
    __this->OnItemsChanged();
}

// protected override sealed void OnUnrooted() :52
void WhileCount__OnUnrooted_fn(WhileCount* __this)
{
    uStackFrame __("Fuse.Reactive.WhileCount", "OnUnrooted()");

    if (__this->_subscription != NULL)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(__this->_subscription), ::TYPES[2/*Uno.IDisposable*/]));
        __this->_subscription = NULL;
    }

    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this);
}

// private void UpdateState() :94
void WhileCount__UpdateState_fn(WhileCount* __this)
{
    __this->UpdateState();
}

// public generated WhileCount() [instance] :44
void WhileCount::ctor_6()
{
    ctor_5();
}

// private void Assess(int count) [instance] :125
void WhileCount::Assess(int count)
{
    _oldCount = count;
    SetActive(IsOn(_oldCount));
}

// public int get_EqualTo() [instance] :206
int WhileCount::EqualTo()
{
    return _compare.X;
}

// public void set_EqualTo(int value) [instance] :207
void WhileCount::EqualTo(int value)
{
    uStackFrame __("Fuse.Reactive.WhileCount", "set_EqualTo(int)");
    _compare.X = (_compare.Y = value);
    _low = 2;
    _high = 2;
    UpdateState();
}

// public int get_GreaterThan() [instance] :182
int WhileCount::GreaterThan()
{
    return _compare.X;
}

// public void set_GreaterThan(int value) [instance] :183
void WhileCount::GreaterThan(int value)
{
    uStackFrame __("Fuse.Reactive.WhileCount", "set_GreaterThan(int)");
    _compare.X = value;
    _low = 1;
    UpdateState();
}

// public int get_GreaterThanEqual() [instance] :194
int WhileCount::GreaterThanEqual()
{
    return _compare.X;
}

// public void set_GreaterThanEqual(int value) [instance] :195
void WhileCount::GreaterThanEqual(int value)
{
    uStackFrame __("Fuse.Reactive.WhileCount", "set_GreaterThanEqual(int)");
    _compare.X = value;
    _low = 2;
    UpdateState();
}

// private bool IsOn(int count) [instance] :131
bool WhileCount::IsOn(int count)
{
    if ((_low == 1) && (count <= _compare.X))
        return false;

    if ((_low == 2) && (count < _compare.X))
        return false;

    if ((_high == 1) && (count >= _compare.Y))
        return false;

    if ((_high == 2) && (count > _compare.Y))
        return false;

    return true;
}

// public object get_Items() [instance] :69
uObject* WhileCount::Items()
{
    return _items;
}

// public void set_Items(object value) [instance] :70
void WhileCount::Items(uObject* value)
{
    uStackFrame __("Fuse.Reactive.WhileCount", "set_Items(object)");

    if (_items != value)
    {
        _items = value;
        OnItemsChanged();
    }
}

// public int get_LessThan() [instance] :158
int WhileCount::LessThan()
{
    return _compare.Y;
}

// public void set_LessThan(int value) [instance] :159
void WhileCount::LessThan(int value)
{
    uStackFrame __("Fuse.Reactive.WhileCount", "set_LessThan(int)");
    _compare.Y = value;
    _high = 1;
    UpdateState();
}

// public int get_LessThanEqual() [instance] :170
int WhileCount::LessThanEqual()
{
    return _compare.Y;
}

// public void set_LessThanEqual(int value) [instance] :171
void WhileCount::LessThanEqual(int value)
{
    uStackFrame __("Fuse.Reactive.WhileCount", "set_LessThanEqual(int)");
    _compare.Y = value;
    _high = 2;
    UpdateState();
}

// private void OnItemsChanged() [instance] :80
void WhileCount::OnItemsChanged()
{
    uStackFrame __("Fuse.Reactive.WhileCount", "OnItemsChanged()");

    if (!IsRootingStarted())
        return;

    if (_subscription != NULL)
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_subscription), ::TYPES[2/*Uno.IDisposable*/]));

    uObject* obs = uAs<uObject*>(_items, ::TYPES[27/*Fuse.Reactive.IObservableArray*/]);

    if (obs != NULL)
        _subscription = ::g::Fuse::Reactive::IObservableArray::Subscribe(uInterface(uPtr(obs), ::TYPES[27/*Fuse.Reactive.IObservableArray*/]), (uObject*)this);

    UpdateState();
}

// private void UpdateState() [instance] :94
void WhileCount::UpdateState()
{
    uStackFrame __("Fuse.Reactive.WhileCount", "UpdateState()");

    if (!IsRootingStarted())
        return;

    uArray* e = uAs<uArray*>(_items, ::TYPES[3/*object[]*/]);

    if (e != NULL)
    {
        Assess(uPtr(e)->Length());
        return;
    }

    uObject* obs = uAs<uObject*>(_items, ::TYPES[27/*Fuse.Reactive.IObservableArray*/]);

    if (obs != NULL)
    {
        Assess(::g::Fuse::IArray::Length(uInterface(uPtr(obs), ::TYPES[25/*Fuse.IArray*/])));
        return;
    }

    uObject* arr = uAs<uObject*>(_items, ::TYPES[25/*Fuse.IArray*/]);

    if (arr != NULL)
    {
        Assess(::g::Fuse::IArray::Length(uInterface(uPtr(arr), ::TYPES[25/*Fuse.IArray*/])));
        return;
    }

    Assess(0);
}

// public generated WhileCount New() [static] :44
WhileCount* WhileCount::New2()
{
    WhileCount* obj1 = (WhileCount*)uNew(WhileCount_typeof());
    obj1->ctor_6();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Bindings/1.4.0/WhileEmpty.uno
// -------------------------------------------------------------------------

// public sealed class WhileEmpty :29
// {
static void WhileEmpty_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Reactive::WhileCount_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Reactive::WhileCount_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Reactive::WhileCount_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Reactive::WhileCount_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Reactive::WhileCount_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Reactive::WhileCount_type, interface5),
        ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof(), offsetof(::g::Fuse::Reactive::WhileCount_type, interface6),
        ::g::Fuse::Animations::IBasePlayerFeedback_typeof(), offsetof(::g::Fuse::Reactive::WhileCount_type, interface7),
        ::g::Fuse::Reactive::IObserver_typeof(), offsetof(::g::Fuse::Reactive::WhileCount_type, interface8));
    type->SetFields(44);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)WhileEmpty__New3_fn, 0, true, type, 0));
}

::g::Fuse::Reactive::WhileCount_type* WhileEmpty_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::WhileCount_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::WhileCount_typeof();
    options.FieldCount = 44;
    options.InterfaceCount = 9;
    options.ObjectSize = sizeof(WhileEmpty);
    options.TypeSize = sizeof(::g::Fuse::Reactive::WhileCount_type);
    type = (::g::Fuse::Reactive::WhileCount_type*)uClassType::New("Fuse.Reactive.WhileEmpty", options);
    type->fp_build_ = WhileEmpty_build;
    type->fp_ctor_ = (void*)WhileEmpty__New3_fn;
    type->interface8.fp_OnSet = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::WhileCount__FuseReactiveIObserverOnSet_fn;
    type->interface8.fp_OnFailed = (void(*)(uObject*, uString*))::g::Fuse::Reactive::WhileCount__FuseReactiveIObserverOnFailed_fn;
    type->interface8.fp_OnAdd = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::WhileCount__FuseReactiveIObserverOnAdd_fn;
    type->interface8.fp_OnRemoveAt = (void(*)(uObject*, int*))::g::Fuse::Reactive::WhileCount__FuseReactiveIObserverOnRemoveAt_fn;
    type->interface8.fp_OnNewAt = (void(*)(uObject*, int*, uObject*))::g::Fuse::Reactive::WhileCount__FuseReactiveIObserverOnNewAt_fn;
    type->interface8.fp_OnInsertAt = (void(*)(uObject*, int*, uObject*))::g::Fuse::Reactive::WhileCount__FuseReactiveIObserverOnInsertAt_fn;
    type->interface8.fp_OnClear = (void(*)(uObject*))::g::Fuse::Reactive::WhileCount__FuseReactiveIObserverOnClear_fn;
    type->interface8.fp_OnNewAll = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::WhileCount__FuseReactiveIObserverOnNewAll_fn;
    type->interface7.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnPlaybackDone_fn;
    type->interface7.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnStable_fn;
    type->interface6.fp_OnProgressUpdated = (void(*)(uObject*, uObject*, double*, double*, int*))::g::Fuse::Triggers::Trigger__FuseAnimationsIUnwrappedPlayerFeedbackOnProgressUpdated_fn;
    type->interface4.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface4.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface5.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface4.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface4.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public WhileEmpty() :31
void WhileEmpty__ctor_7_fn(WhileEmpty* __this)
{
    __this->ctor_7();
}

// public WhileEmpty New() :31
void WhileEmpty__New3_fn(WhileEmpty** __retval)
{
    *__retval = WhileEmpty::New3();
}

// public WhileEmpty() [instance] :31
void WhileEmpty::ctor_7()
{
    uStackFrame __("Fuse.Reactive.WhileEmpty", ".ctor()");
    ctor_6();
    EqualTo(0);
}

// public WhileEmpty New() [static] :31
WhileEmpty* WhileEmpty::New3()
{
    WhileEmpty* obj1 = (WhileEmpty*)uNew(WhileEmpty_typeof());
    obj1->ctor_7();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Bindings/1.4.0/WhileEmpty.uno
// -------------------------------------------------------------------------

// public sealed class WhileNotEmpty :57
// {
static void WhileNotEmpty_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Reactive::WhileCount_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Reactive::WhileCount_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Reactive::WhileCount_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Reactive::WhileCount_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Reactive::WhileCount_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Reactive::WhileCount_type, interface5),
        ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof(), offsetof(::g::Fuse::Reactive::WhileCount_type, interface6),
        ::g::Fuse::Animations::IBasePlayerFeedback_typeof(), offsetof(::g::Fuse::Reactive::WhileCount_type, interface7),
        ::g::Fuse::Reactive::IObserver_typeof(), offsetof(::g::Fuse::Reactive::WhileCount_type, interface8));
    type->SetFields(44);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)WhileNotEmpty__New3_fn, 0, true, type, 0));
}

::g::Fuse::Reactive::WhileCount_type* WhileNotEmpty_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::WhileCount_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::WhileCount_typeof();
    options.FieldCount = 44;
    options.InterfaceCount = 9;
    options.ObjectSize = sizeof(WhileNotEmpty);
    options.TypeSize = sizeof(::g::Fuse::Reactive::WhileCount_type);
    type = (::g::Fuse::Reactive::WhileCount_type*)uClassType::New("Fuse.Reactive.WhileNotEmpty", options);
    type->fp_build_ = WhileNotEmpty_build;
    type->fp_ctor_ = (void*)WhileNotEmpty__New3_fn;
    type->interface8.fp_OnSet = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::WhileCount__FuseReactiveIObserverOnSet_fn;
    type->interface8.fp_OnFailed = (void(*)(uObject*, uString*))::g::Fuse::Reactive::WhileCount__FuseReactiveIObserverOnFailed_fn;
    type->interface8.fp_OnAdd = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::WhileCount__FuseReactiveIObserverOnAdd_fn;
    type->interface8.fp_OnRemoveAt = (void(*)(uObject*, int*))::g::Fuse::Reactive::WhileCount__FuseReactiveIObserverOnRemoveAt_fn;
    type->interface8.fp_OnNewAt = (void(*)(uObject*, int*, uObject*))::g::Fuse::Reactive::WhileCount__FuseReactiveIObserverOnNewAt_fn;
    type->interface8.fp_OnInsertAt = (void(*)(uObject*, int*, uObject*))::g::Fuse::Reactive::WhileCount__FuseReactiveIObserverOnInsertAt_fn;
    type->interface8.fp_OnClear = (void(*)(uObject*))::g::Fuse::Reactive::WhileCount__FuseReactiveIObserverOnClear_fn;
    type->interface8.fp_OnNewAll = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::WhileCount__FuseReactiveIObserverOnNewAll_fn;
    type->interface7.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnPlaybackDone_fn;
    type->interface7.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnStable_fn;
    type->interface6.fp_OnProgressUpdated = (void(*)(uObject*, uObject*, double*, double*, int*))::g::Fuse::Triggers::Trigger__FuseAnimationsIUnwrappedPlayerFeedbackOnProgressUpdated_fn;
    type->interface4.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface4.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface5.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface4.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface4.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public WhileNotEmpty() :59
void WhileNotEmpty__ctor_7_fn(WhileNotEmpty* __this)
{
    __this->ctor_7();
}

// public WhileNotEmpty New() :59
void WhileNotEmpty__New3_fn(WhileNotEmpty** __retval)
{
    *__retval = WhileNotEmpty::New3();
}

// public WhileNotEmpty() [instance] :59
void WhileNotEmpty::ctor_7()
{
    uStackFrame __("Fuse.Reactive.WhileNotEmpty", ".ctor()");
    ctor_6();
    GreaterThan(0);
}

// public WhileNotEmpty New() [static] :59
WhileNotEmpty* WhileNotEmpty::New3()
{
    WhileNotEmpty* obj1 = (WhileNotEmpty*)uNew(WhileNotEmpty_typeof());
    obj1->ctor_7();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Bindings/1.4.0/Instance.WindowItems.uno
// -----------------------------------------------------------------------------------

// private sealed class Instantiator.WindowItem :467
// {
static void Instantiator__WindowItem_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(Instantiator__WindowItem, Nodes), 0,
        ::g::Fuse::Reactive::Instantiator__TemplateMatch_typeof(), offsetof(Instantiator__WindowItem, Template), 0,
        uObject_typeof(), offsetof(Instantiator__WindowItem, Data), 0,
        ::g::Fuse::Reactive::Instantiator__ObservableLink_typeof(), offsetof(Instantiator__WindowItem, DataLink), 0,
        uObject_typeof(), offsetof(Instantiator__WindowItem, Id), 0);
}

uType* Instantiator__WindowItem_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.ObjectSize = sizeof(Instantiator__WindowItem);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Reactive.Instantiator.WindowItem", options);
    type->fp_build_ = Instantiator__WindowItem_build;
    type->fp_ctor_ = (void*)Instantiator__WindowItem__New1_fn;
    return type;
}

// public WindowItem() :481
void Instantiator__WindowItem__ctor__fn(Instantiator__WindowItem* __this)
{
    __this->ctor_();
}

// public object get_CurrentData() :487
void Instantiator__WindowItem__get_CurrentData_fn(Instantiator__WindowItem* __this, uObject** __retval)
{
    *__retval = __this->CurrentData();
}

// public WindowItem New() :481
void Instantiator__WindowItem__New1_fn(Instantiator__WindowItem** __retval)
{
    *__retval = Instantiator__WindowItem::New1();
}

// public void Unlink() :494
void Instantiator__WindowItem__Unlink_fn(Instantiator__WindowItem* __this)
{
    __this->Unlink();
}

// public WindowItem() [instance] :481
void Instantiator__WindowItem::ctor_()
{
}

// public object get_CurrentData() [instance] :487
uObject* Instantiator__WindowItem::CurrentData()
{
    uStackFrame __("Fuse.Reactive.Instantiator.WindowItem", "get_CurrentData()");
    return (DataLink != NULL) ? (uObject*)uPtr(DataLink)->Data() : (uObject*)Data;
}

// public void Unlink() [instance] :494
void Instantiator__WindowItem::Unlink()
{
    uStackFrame __("Fuse.Reactive.Instantiator.WindowItem", "Unlink()");

    if (DataLink != NULL)
    {
        Data = uPtr(DataLink)->Data();
        uPtr(DataLink)->Dispose();
        DataLink = NULL;
    }
}

// public WindowItem New() [static] :481
Instantiator__WindowItem* Instantiator__WindowItem::New1()
{
    Instantiator__WindowItem* obj1 = (Instantiator__WindowItem*)uNew(Instantiator__WindowItem_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Reactive.Bindings/1.4.0/With.uno
// -------------------------------------------------------------------

// public class With :28
// {
static void With_build(uType* type)
{
    ::TYPES[2] = ::g::Uno::IDisposable_typeof();
    ::TYPES[43] = ::g::Fuse::Reactive::IObservable_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(With_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(With_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(With_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(With_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(With_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(With_type, interface5),
        ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof(), offsetof(With_type, interface6),
        ::g::Fuse::Animations::IBasePlayerFeedback_typeof(), offsetof(With_type, interface7),
        ::g::Fuse::Node__ISubtreeDataProvider_typeof(), offsetof(With_type, interface8),
        ::g::Fuse::Reactive::ValueForwarder__IValueListener_typeof(), offsetof(With_type, interface9));
    type->SetFields(37,
        ::TYPES[2/*Uno.IDisposable*/], offsetof(With, _sub), 0,
        uObject_typeof(), offsetof(With, _sourceData), 0,
        uObject_typeof(), offsetof(With, _subtreeData), 0);
    type->Reflection.SetFunctions(3,
        new uFunction("get_Data", NULL, (void*)With__get_Data_fn, 0, false, uObject_typeof(), 0),
        new uFunction("set_Data", NULL, (void*)With__set_Data_fn, 0, false, uVoid_typeof(), 1, uObject_typeof()),
        new uFunction(".ctor", NULL, (void*)With__New2_fn, 0, true, type, 0));
}

With_type* With_typeof()
{
    static uSStrong<With_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Trigger_typeof();
    options.FieldCount = 40;
    options.InterfaceCount = 10;
    options.ObjectSize = sizeof(With);
    options.TypeSize = sizeof(With_type);
    type = (With_type*)uClassType::New("Fuse.Reactive.With", options);
    type->fp_build_ = With_build;
    type->fp_ctor_ = (void*)With__New2_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))With__OnRooted_fn;
    type->interface8.fp_GetData = (void(*)(uObject*, ::g::Fuse::Node*, uObject**))With__FuseNodeISubtreeDataProviderGetData_fn;
    type->interface9.fp_NewValue = (void(*)(uObject*, uObject*))With__FuseReactiveValueForwarderIValueListenerNewValue_fn;
    type->interface7.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnPlaybackDone_fn;
    type->interface7.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnStable_fn;
    type->interface6.fp_OnProgressUpdated = (void(*)(uObject*, uObject*, double*, double*, int*))::g::Fuse::Triggers::Trigger__FuseAnimationsIUnwrappedPlayerFeedbackOnProgressUpdated_fn;
    type->interface4.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface4.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface5.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface4.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface4.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public generated With() :28
void With__ctor_5_fn(With* __this)
{
    __this->ctor_5();
}

// public object get_Data() :46
void With__get_Data_fn(With* __this, uObject** __retval)
{
    *__retval = __this->Data();
}

// public void set_Data(object value) :47
void With__set_Data_fn(With* __this, uObject* value)
{
    __this->Data(value);
}

// private object Fuse.Node.ISubtreeDataProvider.GetData(Fuse.Node n) :71
void With__FuseNodeISubtreeDataProviderGetData_fn(With* __this, ::g::Fuse::Node* n, uObject** __retval)
{
    return *__retval = __this->_subtreeData, void();
}

// private void Fuse.Reactive.ValueForwarder.IValueListener.NewValue(object value) :73
void With__FuseReactiveValueForwarderIValueListenerNewValue_fn(With* __this, uObject* value)
{
    __this->SetSubtreeData(value);
}

// public generated With New() :28
void With__New2_fn(With** __retval)
{
    *__retval = With::New2();
}

// protected override sealed void OnRooted() :30
void With__OnRooted_fn(With* __this)
{
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);
    __this->Activate(NULL);
}

// private void SetSubtreeData(object value) :78
void With__SetSubtreeData_fn(With* __this, uObject* value)
{
    __this->SetSubtreeData(value);
}

// public generated With() [instance] :28
void With::ctor_5()
{
    ctor_4();
}

// public object get_Data() [instance] :46
uObject* With::Data()
{
    return _sourceData;
}

// public void set_Data(object value) [instance] :47
void With::Data(uObject* value)
{
    uStackFrame __("Fuse.Reactive.With", "set_Data(object)");

    if (_sourceData != value)
    {
        if (_sub != NULL)
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_sub), ::TYPES[2/*Uno.IDisposable*/]));

        _sourceData = value;
        uObject* obs = uAs<uObject*>(value, ::TYPES[43/*Fuse.Reactive.IObservable*/]);

        if (obs != NULL)
        {
            SetSubtreeData(NULL);
            _sub = (uObject*)::g::Fuse::Reactive::ValueForwarder::New1(obs, (uObject*)this);
        }
        else
            SetSubtreeData(value);
    }
}

// private void SetSubtreeData(object value) [instance] :78
void With::SetSubtreeData(uObject* value)
{
    uStackFrame __("Fuse.Reactive.With", "SetSubtreeData(object)");
    uObject* oldData = _subtreeData;
    _subtreeData = value;
    BroadcastDataChange(oldData, value);
}

// public generated With New() [static] :28
With* With::New2()
{
    With* obj1 = (With*)uNew(With_typeof());
    obj1->ctor_5();
    return obj1;
}
// }

}}} // ::g::Fuse::Reactive
