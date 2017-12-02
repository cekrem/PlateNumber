// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.App.h>
#include <Fuse.AppBase.h>
#include <Fuse.Controls.Button.h>
#include <Fuse.Controls.ButtonBase.h>
#include <Fuse.Controls.ClientPanel.h>
#include <Fuse.Controls.Control.h>
#include <Fuse.Controls.Grid.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextAlignment.h>
#include <Fuse.Controls.TextBox.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Controls.TextInput.h>
#include <Fuse.Controls.TextInputControl.h>
#include <Fuse.Controls.TextWrapping.h>
#include <Fuse.Diagnostic.h>
#include <Fuse.DiagnosticHandler.h>
#include <Fuse.Diagnostics.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Gestures.ClickedArgs.h>
#include <Fuse.Gestures.ClickedHandler.h>
#include <Fuse.Input.Pointer.h>
#include <Fuse.Input.PointerEventArgs.h>
#include <Fuse.Input.PointerMovedArgs.h>
#include <Fuse.Input.PointerPressedArgs.h>
#include <Fuse.Input.PointerReleasedArgs.h>
#include <Fuse.Input.PointerWheelMovedArgs.h>
#include <Fuse.Layouts.Orientation.h>
#include <Fuse.Node.h>
#include <Fuse.RootViewport.h>
#include <Fuse.Timer.h>
#include <Fuse.UnhandledExceptionArgs.h>
#include <Fuse.UnhandledExceptionHandler.h>
#include <Fuse.Visual.h>
#include <Outracks.IBinaryMessage.h>
#include <Outracks.Optional.h>
#include <Outracks.Optional-1.h>
#include <Outracks.Simulator.Bytecode.Lambda.h>
#include <Outracks.Simulator.Bytecode.ProjectBytecode.h>
#include <Outracks.Simulator.Client.Application.h>
#include <Outracks.Simulator.Client.ChangeIp.h>
#include <Outracks.Simulator.Client.Connected.h>
#include <Outracks.Simulator.Client.Connecting.h>
#include <Outracks.Simulator.Client.ConnectingToHost.h>
#include <Outracks.Simulator.Client.ConnectingToProxy.h>
#include <Outracks.Simulator.Client.ConnectionLost.h>
#include <Outracks.Simulator.Client.Context.h>
#include <Outracks.Simulator.Client.DesignerNotRunning.h>
#include <Outracks.Simulator.Client.DeviceInfo.h>
#include <Outracks.Simulator.Client.DialogButton.h>
#include <Outracks.Simulator.Client.Dialogs.LoadingScreen.h>
#include <Outracks.Simulator.Client.Dialogs.ModalDialog.h>
#include <Outracks.Simulator.Client.Exceptions.h>
#include <Outracks.Simulator.Client.FailedToConnect.h>
#include <Outracks.Simulator.Client.FakeApp.h>
#include <Outracks.Simulator.Client.Faulted.h>
#include <Outracks.Simulator.Client.Idle.h>
#include <Outracks.Simulator.Client.InputMode.h>
#include <Outracks.Simulator.Client.LoadingScreen.h>
#include <Outracks.Simulator.Client.ModalDialog.h>
#include <Outracks.Simulator.Client.Reifying.h>
#include <Outracks.Simulator.Client.Running.h>
#include <Outracks.Simulator.Client.ShowingModalDialog.h>
#include <Outracks.Simulator.Client.ShowingPrompt.h>
#include <Outracks.Simulator.Client.State.h>
#include <Outracks.Simulator.Client.Uninitialized.h>
#include <Outracks.Simulator.Client.UserAppState.h>
#include <Outracks.Simulator.Client.VirtualMachine.h>
#include <Outracks.Simulator.Closure.h>
#include <Outracks.Simulator.ConcurrentQueue-1.h>
#include <Outracks.Simulator.ConnectToFirstRespondingEndpoint.h>
#include <Outracks.Simulator.DesignerNotRunning.h>
#include <Outracks.Simulator.DeveloperMenu.h>
#include <Outracks.Simulator.ForgetAction-2.h>
#include <Outracks.Simulator.ISimulatorClient.h>
#include <Outracks.Simulator.Protocol.BytecodeGenerated.h>
#include <Outracks.Simulator.Protocol.BytecodeUpdated.h>
#include <Outracks.Simulator.Protocol.DebugLog.h>
#include <Outracks.Simulator.Protocol.Diagnostic.h>
#include <Outracks.Simulator.Protocol.DismissDiagnostic.h>
#include <Outracks.Simulator.Protocol.Error.h>
#include <Outracks.Simulator.Protocol.ExceptionInfo.h>
#include <Outracks.Simulator.Protocol.Ready.h>
#include <Outracks.Simulator.Protocol.RegisterName.h>
#include <Outracks.Simulator.Protocol.UnhandledException.h>
#include <Outracks.Simulator.ProxyClient.h>
#include <Outracks.Simulator.Runtime.Environment.h>
#include <Outracks.Simulator.Runtime.IReflection.h>
#include <Outracks.Simulator.Runtime.ScopeClosure.h>
#include <Outracks.Simulator.SimulatorClient.h>
#include <Outracks.Simulator.Task-1.h>
#include <Outracks.UnoBinaryMessage.h>
#include <Outracks.UnoHost.BinaryMessageInbox.h>
#include <Outracks.UnoHost.FusionInterop.h>
#include <System.IO.BinaryReader.h>
#include <Uno.Action.h>
#include <Uno.Action-1.h>
#include <Uno.AggregateException.h>
#include <Uno.Bool.h>
#include <Uno.Collections.Dictionary-2.Enumerator.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.EnumerableExtensions.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IEnumerator.h>
#include <Uno.Collections.IEnumerator-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Collections.IListExtensions.h>
#include <Uno.Collections.KeyValuePair-2.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Collections.ReadOnlyCollection-1.h>
#include <Uno.Diagnostics.Debug.h>
#include <Uno.Diagnostics.DebugMessageType.h>
#include <Uno.Diagnostics.LogHandler.h>
#include <Uno.Double.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
#include <Uno.Func-2.h>
#include <Uno.IDisposable.h>
#include <Uno.Int.h>
#include <Uno.Net.IPAddress.h>
#include <Uno.Net.IPEndPoint.h>
#include <Uno.Net.Sockets.Socket.h>
#include <Uno.Object.h>
#include <Uno.Platform.ApplicationStateTransitionHandler.h>
#include <Uno.Platform.CoreApp.h>
#include <Uno.Platform.Display.h>
#include <Uno.Platform.Displays.h>
#include <Uno.Runtime.Implementation.Internal.ArrayEnumerable-1.h>
#include <Uno.String.h>
#include <Uno.Threading.Monitor.h>
#include <Uno.Type.h>
#include <Uno.UX.Resource.h>
static uString* STRINGS[28];
static uType* TYPES[62];

namespace g{
namespace Outracks{
namespace Simulator{
namespace Client{

// /usr/local/share/uno/Packages/Fuse.Preview.Core/0.1.0/Application.uno
// ---------------------------------------------------------------------

// public class Application :82
// {
static void Application_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Failed to properly reset. Try exiting Fuse and restarting.");
    ::STRINGS[1] = uString::Const("/usr/local/share/uno/Packages/Fuse.Preview.Core/0.1.0/Application.uno");
    ::STRINGS[2] = uString::Const("ResetEverything");
    ::TYPES[0] = ::g::Outracks::Simulator::ConcurrentQueue_typeof()->MakeType(::g::Uno::Action_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Input::PointerPressedArgs_typeof(), NULL);
    ::TYPES[2] = ::g::Outracks::Simulator::ConcurrentQueue_typeof()->MakeType(::g::Uno::Exception_typeof(), NULL);
    ::TYPES[3] = ::g::Fuse::UnhandledExceptionHandler_typeof();
    ::TYPES[4] = ::g::Fuse::Input::IPointerEventResponder_typeof();
    ::TYPES[5] = ::g::Uno::Action_typeof();
    ::TYPES[6] = ::g::Outracks::Simulator::Client::Faulted_typeof();
    ::TYPES[7] = ::g::Uno::Exception_typeof();
    ::TYPES[8] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[9] = ::g::Uno::Collections::IEnumerator_typeof();
    ::TYPES[10] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[11] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[12] = ::g::Fuse::Controls::Panel_typeof();
    ::TYPES[13] = ::g::Uno::IDisposable_typeof();
    ::TYPES[14] = ::g::Fuse::Node_typeof();
    ::TYPES[15] = ::g::Uno::Collections::IList_typeof()->MakeType(::TYPES[14/*Fuse.Node*/], NULL);
    type->SetDependencies(
        ::g::Fuse::Diagnostics_typeof());
    type->SetInterfaces(
        ::g::Fuse::IProperties_typeof(), offsetof(Application_type, interface0),
        ::TYPES[4/*Fuse.Input.IPointerEventResponder*/], offsetof(Application_type, interface1));
    type->SetFields(11,
        ::g::Outracks::Simulator::Client::State_typeof(), offsetof(Application, _state), 0,
        ::TYPES[4/*Fuse.Input.IPointerEventResponder*/], offsetof(Application, _defaultPointerEventResponder), 0,
        ::TYPES[0/*Outracks.Simulator.ConcurrentQueue<Uno.Action>*/], offsetof(Application, _dispatcher), 0,
        ::TYPES[1/*Uno.Collections.List<Fuse.Input.PointerPressedArgs>*/], offsetof(Application, pointers), 0,
        ::g::Outracks::Simulator::DeveloperMenu_typeof(), offsetof(Application, _developerMenu), 0,
        ::TYPES[2/*Outracks.Simulator.ConcurrentQueue<Uno.Exception>*/], offsetof(Application, _exception), 0);
    type->Reflection.SetFunctions(7,
        new uFunction(".ctor", NULL, (void*)Application__New2_fn, 0, true, type, 3, ::g::Uno::Net::IPEndPoint_typeof()->Array(), ::g::Uno::String_typeof(), ::g::Uno::String_typeof()->Array()),
        new uFunction("OnPointerMoved", NULL, (void*)Application__OnPointerMoved_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Input::PointerMovedArgs_typeof()),
        new uFunction("OnPointerPressed", NULL, (void*)Application__OnPointerPressed_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Input::PointerPressedArgs_typeof()),
        new uFunction("OnPointerReleased", NULL, (void*)Application__OnPointerReleased_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Input::PointerReleasedArgs_typeof()),
        new uFunction("OnPointerWheelMoved", NULL, (void*)Application__OnPointerWheelMoved_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Input::PointerWheelMovedArgs_typeof()),
        new uFunction("get_Reflection", NULL, (void*)Application__get_Reflection_fn, 0, false, ::g::Outracks::Simulator::Runtime::IReflection_typeof(), 0),
        new uFunction("set_Reflection", NULL, (void*)Application__set_Reflection_fn, 0, false, uVoid_typeof(), 1, ::g::Outracks::Simulator::Runtime::IReflection_typeof()));
}

Application_type* Application_typeof()
{
    static uSStrong<Application_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::App_typeof();
    options.FieldCount = 17;
    options.InterfaceCount = 2;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(Application);
    options.TypeSize = sizeof(Application_type);
    type = (Application_type*)uClassType::New("Outracks.Simulator.Client.Application", options);
    type->fp_build_ = Application_build;
    type->fp_OnUpdate = (void(*)(::g::Fuse::AppBase*))Application__OnUpdate_fn;
    type->interface1.fp_OnPointerPressed = (void(*)(uObject*, ::g::Fuse::Input::PointerPressedArgs*))Application__OnPointerPressed_fn;
    type->interface1.fp_OnPointerMoved = (void(*)(uObject*, ::g::Fuse::Input::PointerMovedArgs*))Application__OnPointerMoved_fn;
    type->interface1.fp_OnPointerReleased = (void(*)(uObject*, ::g::Fuse::Input::PointerReleasedArgs*))Application__OnPointerReleased_fn;
    type->interface1.fp_OnPointerWheelMoved = (void(*)(uObject*, ::g::Fuse::Input::PointerWheelMovedArgs*))Application__OnPointerWheelMoved_fn;
    type->interface0.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::AppBase__get_Properties_fn;
    return type;
}

// public Application(Uno.Net.IPEndPoint[] proxyEndpoints, string project, string[] defines) :94
void Application__ctor_4_fn(Application* __this, uArray* proxyEndpoints, uString* project, uArray* defines)
{
    __this->ctor_4(proxyEndpoints, project, defines);
}

// private void DoNothing() :176
void Application__DoNothing_fn(Application* __this)
{
    __this->DoNothing();
}

// public Application New(Uno.Net.IPEndPoint[] proxyEndpoints, string project, string[] defines) :94
void Application__New2_fn(uArray* proxyEndpoints, uString* project, uArray* defines, Application** __retval)
{
    *__retval = Application::New2(proxyEndpoints, project, defines);
}

// public void OnPointerMoved(Fuse.Input.PointerMovedArgs args) :178
void Application__OnPointerMoved_fn(Application* __this, ::g::Fuse::Input::PointerMovedArgs* args)
{
    __this->OnPointerMoved(args);
}

// public void OnPointerPressed(Fuse.Input.PointerPressedArgs args) :143
void Application__OnPointerPressed_fn(Application* __this, ::g::Fuse::Input::PointerPressedArgs* args)
{
    __this->OnPointerPressed(args);
}

// public void OnPointerReleased(Fuse.Input.PointerReleasedArgs args) :185
void Application__OnPointerReleased_fn(Application* __this, ::g::Fuse::Input::PointerReleasedArgs* args)
{
    __this->OnPointerReleased(args);
}

// public void OnPointerWheelMoved(Fuse.Input.PointerWheelMovedArgs args) :199
void Application__OnPointerWheelMoved_fn(Application* __this, ::g::Fuse::Input::PointerWheelMovedArgs* args)
{
    __this->OnPointerWheelMoved(args);
}

// private void OnUnhandledException(object sender, Fuse.UnhandledExceptionArgs args) :209
void Application__OnUnhandledException1_fn(Application* __this, uObject* sender, ::g::Fuse::UnhandledExceptionArgs* args)
{
    __this->OnUnhandledException1(sender, args);
}

// protected override sealed void OnUpdate() :215
void Application__OnUpdate_fn(Application* __this)
{
    uStackFrame __("Outracks.Simulator.Client.Application", "OnUpdate()");
    bool ret6;
    bool ret7;
    ::g::Uno::Exception* exception = NULL, *t;

    while ((::g::Outracks::Simulator::ConcurrentQueue__TryDequeue_fn(uPtr(__this->_exception), (void**)(&t), &ret6), ret6))
        exception = t;

    if (exception != NULL)
    {
        if (uIs((::g::Outracks::Simulator::Client::State*)__this->_state, ::TYPES[6/*Outracks.Simulator.Client.Faulted*/]))
            ;
        else
        {
            __this->ResetEverything(false);
            __this->SetState(uPtr(__this->_state)->OnException(exception));
        }
    }

    uDelegate* action;

    while ((::g::Outracks::Simulator::ConcurrentQueue__TryDequeue_fn(uPtr(__this->_dispatcher), (void**)(&action), &ret7), ret7))
        uPtr(action)->InvokeVoid();

    __this->SetState(uPtr(__this->_state)->OnUpdate());
    ::g::Fuse::App__OnUpdate_fn(__this);
}

// public Outracks.Simulator.Runtime.IReflection get_Reflection() :90
void Application__get_Reflection_fn(Application* __this, uObject** __retval)
{
    *__retval = __this->Reflection();
}

// public void set_Reflection(Outracks.Simulator.Runtime.IReflection value) :91
void Application__set_Reflection_fn(Application* __this, uObject* value)
{
    __this->Reflection(value);
}

// private void ResetEverything(bool initial) :110
void Application__ResetEverything_fn(Application* __this, bool* initial)
{
    __this->ResetEverything(*initial);
}

// private void SetState(Outracks.Simulator.Client.State nextState) :244
void Application__SetState_fn(Application* __this, ::g::Outracks::Simulator::Client::State* nextState)
{
    __this->SetState(nextState);
}

// private void ShowDeveloperMenu() :159
void Application__ShowDeveloperMenu_fn(Application* __this)
{
    __this->ShowDeveloperMenu();
}

// public Application(Uno.Net.IPEndPoint[] proxyEndpoints, string project, string[] defines) [instance] :94
void Application::ctor_4(uArray* proxyEndpoints, uString* project, uArray* defines)
{
    uStackFrame __("Outracks.Simulator.Client.Application", ".ctor(Uno.Net.IPEndPoint[],string,string[])");
    _state = ::g::Outracks::Simulator::Client::Uninitialized::New1();
    _dispatcher = ((::g::Outracks::Simulator::ConcurrentQueue*)::g::Outracks::Simulator::ConcurrentQueue::New1(::TYPES[0/*Outracks.Simulator.ConcurrentQueue<Uno.Action>*/]));
    pointers = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[1/*Uno.Collections.List<Fuse.Input.PointerPressedArgs>*/]));
    _exception = ((::g::Outracks::Simulator::ConcurrentQueue*)::g::Outracks::Simulator::ConcurrentQueue::New1(::TYPES[2/*Outracks.Simulator.ConcurrentQueue<Uno.Exception>*/]));
    ctor_3();
    ::g::Outracks::Simulator::Client::Context::SetGlobals(proxyEndpoints, project, defines);
    _defaultPointerEventResponder = ::g::Fuse::Input::Pointer::EventResponder();
    ::g::Fuse::Input::Pointer::EventResponder((uObject*)this);
    add_UnhandledException(uDelegate::New(::TYPES[3/*Fuse.UnhandledExceptionHandler*/], (void*)Application__OnUnhandledException1_fn, this));
    ::g::Outracks::Simulator::Client::FakeApp* fakeApp = ::g::Outracks::Simulator::Client::FakeApp::New4(this);
    ::g::Outracks::Simulator::Client::UserAppState::Default(::g::Outracks::Simulator::Client::UserAppState::Save(fakeApp));
    ResetEverything(true);
    _developerMenu = ::g::Outracks::Simulator::DeveloperMenu::New4();
}

// private void DoNothing() [instance] :176
void Application::DoNothing()
{
}

// public void OnPointerMoved(Fuse.Input.PointerMovedArgs args) [instance] :178
void Application::OnPointerMoved(::g::Fuse::Input::PointerMovedArgs* args)
{
    uStackFrame __("Outracks.Simulator.Client.Application", "OnPointerMoved(Fuse.Input.PointerMovedArgs)");
    ::g::Fuse::Input::IPointerEventResponder::OnPointerMoved(uInterface(uPtr(_defaultPointerEventResponder), ::TYPES[4/*Fuse.Input.IPointerEventResponder*/]), args);
}

// public void OnPointerPressed(Fuse.Input.PointerPressedArgs args) [instance] :143
void Application::OnPointerPressed(::g::Fuse::Input::PointerPressedArgs* args)
{
    uStackFrame __("Outracks.Simulator.Client.Application", "OnPointerPressed(Fuse.Input.PointerPressedArgs)");
    ::g::Uno::Collections::List__Add_fn(uPtr(pointers), args);

    if (uPtr(pointers)->Count() == 3)
        ::g::Fuse::Timer::Wait(1.0, uDelegate::New(::TYPES[5/*Uno.Action*/], (void*)Application__ShowDeveloperMenu_fn, this));

    ::g::Fuse::Input::IPointerEventResponder::OnPointerPressed(uInterface(uPtr(_defaultPointerEventResponder), ::TYPES[4/*Fuse.Input.IPointerEventResponder*/]), args);
}

// public void OnPointerReleased(Fuse.Input.PointerReleasedArgs args) [instance] :185
void Application::OnPointerReleased(::g::Fuse::Input::PointerReleasedArgs* args)
{
    uStackFrame __("Outracks.Simulator.Client.Application", "OnPointerReleased(Fuse.Input.PointerReleasedArgs)");
    ::g::Fuse::Input::PointerPressedArgs* ret5;

    for (int i = 0; i < uPtr(pointers)->Count(); i++)
        if (uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(pointers), uCRef<int>(i), &ret5), ret5))->PointIndex() == uPtr(args)->PointIndex())
        {
            uPtr(pointers)->RemoveAt(i);
            break;
        }

    ::g::Fuse::Input::IPointerEventResponder::OnPointerReleased(uInterface(uPtr(_defaultPointerEventResponder), ::TYPES[4/*Fuse.Input.IPointerEventResponder*/]), args);
}

// public void OnPointerWheelMoved(Fuse.Input.PointerWheelMovedArgs args) [instance] :199
void Application::OnPointerWheelMoved(::g::Fuse::Input::PointerWheelMovedArgs* args)
{
    uStackFrame __("Outracks.Simulator.Client.Application", "OnPointerWheelMoved(Fuse.Input.PointerWheelMovedArgs)");
    ::g::Fuse::Input::IPointerEventResponder::OnPointerWheelMoved(uInterface(uPtr(_defaultPointerEventResponder), ::TYPES[4/*Fuse.Input.IPointerEventResponder*/]), args);
}

// private void OnUnhandledException(object sender, Fuse.UnhandledExceptionArgs args) [instance] :209
void Application::OnUnhandledException1(uObject* sender, ::g::Fuse::UnhandledExceptionArgs* args)
{
    uStackFrame __("Outracks.Simulator.Client.Application", "OnUnhandledException(object,Fuse.UnhandledExceptionArgs)");
    uPtr(args)->IsHandled(true);
    ::g::Outracks::Simulator::ConcurrentQueue__Enqueue_fn(uPtr(_exception), args->Exception());
}

// public Outracks.Simulator.Runtime.IReflection get_Reflection() [instance] :90
uObject* Application::Reflection()
{
    return ::g::Outracks::Simulator::Client::Context::Reflection();
}

// public void set_Reflection(Outracks.Simulator.Runtime.IReflection value) [instance] :91
void Application::Reflection(uObject* value)
{
    ::g::Outracks::Simulator::Client::Context::Reflection(value);
}

// private void ResetEverything(bool initial) [instance] :110
void Application::ResetEverything(bool initial)
{
    uStackFrame __("Outracks.Simulator.Client.Application", "ResetEverything(bool)");
    ::g::Fuse::Controls::Panel* collection2;
    uObject* array3;
    ::g::Fuse::Node* ret8;
    ::g::Outracks::Simulator::Client::FakeApp* fakeApp = ::g::Outracks::Simulator::Client::FakeApp::New4(this);
    ::g::Outracks::Simulator::Client::Context::SetApp(fakeApp);

    try
    {
        {
            uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(Children()), ::TYPES[8/*Uno.Collections.IEnumerable<Fuse.Node>*/]));

            try
            {
                {
                    while (::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::TYPES[9/*Uno.Collections.IEnumerator*/])))
                    {
                        ::g::Fuse::Node* panel = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[10/*Uno.Collections.IEnumerator<Fuse.Node>*/]), &ret8), ret8);
                        ::g::Uno::Collections::ICollection::Clear(uInterface(uPtr(uPtr(uCast< ::g::Fuse::Controls::Panel*>(panel, ::TYPES[12/*Fuse.Controls.Panel*/]))->Children()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Node>*/]));
                    }
                }
                {
                    ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum1), ::TYPES[13/*Uno.IDisposable*/]));
                }
            }

            catch (const uThrowable& __t)
            {
                {
                    ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum1), ::TYPES[13/*Uno.IDisposable*/]));
                }
                                throw __t;
            }

            ::g::Uno::Collections::ICollection::Clear(uInterface(uPtr(Children()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Node>*/]));
        }
    }

    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        ::g::Fuse::Diagnostics::UnknownException(::STRINGS[0/*"Failed to p...*/], e, this, ::STRINGS[1/*"/usr/local/...*/], 125, ::STRINGS[2/*"ResetEveryt...*/]);
    }

    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Node>*/]), (collection2 = ::g::Fuse::Controls::Panel::New3(), array3 = uPtr(collection2)->Children(), ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(array3), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Node>*/]), (::g::Outracks::UnoHost::FusionInterop::Content_ != NULL) ? uCast< ::g::Fuse::Node*>(::g::Outracks::UnoHost::FusionInterop::Content_, ::TYPES[14/*Fuse.Node*/]) : (::g::Fuse::Controls::Panel*)::g::Fuse::Controls::Panel::New3()), ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(array3), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Node>*/]), fakeApp), collection2));
}

// private void SetState(Outracks.Simulator.Client.State nextState) [instance] :244
void Application::SetState(::g::Outracks::Simulator::Client::State* nextState)
{
    uStackFrame __("Outracks.Simulator.Client.Application", "SetState(Outracks.Simulator.Client.State)");

    while (nextState != _state)
    {
        uPtr(_state)->OnLeaveState();
        _state = nextState;
        nextState = uPtr(_state)->OnEnterState();
    }
}

// private void ShowDeveloperMenu() [instance] :159
void Application::ShowDeveloperMenu()
{
    uStackFrame __("Outracks.Simulator.Client.Application", "ShowDeveloperMenu()");
    ::g::Fuse::Input::PointerPressedArgs* ret9;
    ::g::Fuse::Input::PointerPressedArgs* ret10;
    bool ret11;

    if (uPtr(pointers)->Count() != 3)
        return;

    for (int i = 0; i < uPtr(pointers)->Count(); i++)
        if (uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(pointers), uCRef<int>(i), &ret9), ret9))->TryHardCapture(this, uDelegate::New(::TYPES[5/*Uno.Action*/], (void*)Application__DoNothing_fn, this), NULL))
            uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(pointers), uCRef<int>(i), &ret10), ret10))->ReleaseCapture(this);

    if (!(::g::Uno::Collections::ICollection::Contains_ex(uInterface(uPtr(Children()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Node>*/]), _developerMenu, &ret11), ret11))
        ::g::Uno::Collections::IList::Insert_ex(uInterface(uPtr(Children()), ::TYPES[15/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(0), _developerMenu);
}

// public Application New(Uno.Net.IPEndPoint[] proxyEndpoints, string project, string[] defines) [static] :94
Application* Application::New2(uArray* proxyEndpoints, uString* project, uArray* defines)
{
    Application* obj4 = (Application*)uNew(Application_typeof());
    obj4->ctor_4(proxyEndpoints, project, defines);
    return obj4;
}
// }

// /usr/local/share/uno/Packages/Fuse.Preview.Core/0.1.0/ApplicationStates.uno
// ---------------------------------------------------------------------------

// internal sealed class ChangeIp :483
// {
static void ChangeIp_build(uType* type)
{
    ::STRINGS[3] = uString::Const("Connect to IP");
    ::STRINGS[4] = uString::Const("\n"
        "E.g. '192.168.1.1'");
    ::TYPES[16] = ::g::Uno::Net::IPEndPoint_typeof()->Array();
    type->SetDependencies(
        ::g::Uno::Net::IPAddress_typeof());
    type->SetFields(5);
}

::g::Outracks::Simulator::Client::ShowingPrompt_type* ChangeIp_typeof()
{
    static uSStrong< ::g::Outracks::Simulator::Client::ShowingPrompt_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Outracks::Simulator::Client::ShowingPrompt_typeof();
    options.FieldCount = 5;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(ChangeIp);
    options.TypeSize = sizeof(::g::Outracks::Simulator::Client::ShowingPrompt_type);
    type = (::g::Outracks::Simulator::Client::ShowingPrompt_type*)uClassType::New("Outracks.Simulator.Client.ChangeIp", options);
    type->fp_build_ = ChangeIp_build;
    type->fp_OnCancel = (void(*)(::g::Outracks::Simulator::Client::ShowingPrompt*, ::g::Outracks::Simulator::Client::State**))ChangeIp__OnCancel_fn;
    type->fp_OnException = (void(*)(::g::Outracks::Simulator::Client::State*, ::g::Uno::Exception*, ::g::Outracks::Simulator::Client::State**))ChangeIp__OnException_fn;
    type->fp_OnOk = (void(*)(::g::Outracks::Simulator::Client::ShowingPrompt*, uString*, ::g::Outracks::Simulator::Client::State**))ChangeIp__OnOk_fn;
    return type;
}

// public ChangeIp([string body]) :485
void ChangeIp__ctor_2_fn(ChangeIp* __this, uString* body)
{
    __this->ctor_2(body);
}

// public ChangeIp New([string body]) :485
void ChangeIp__New1_fn(uString* body, ChangeIp** __retval)
{
    *__retval = ChangeIp::New1(body);
}

// protected override sealed Outracks.Simulator.Client.State OnCancel() :499
void ChangeIp__OnCancel_fn(ChangeIp* __this, ::g::Outracks::Simulator::Client::State** __retval)
{
    return *__retval = ::g::Outracks::Simulator::Client::ConnectingToProxy::New1(), void();
}

// public override sealed Outracks.Simulator.Client.State OnException(Uno.Exception e) :504
void ChangeIp__OnException_fn(ChangeIp* __this, ::g::Uno::Exception* e, ::g::Outracks::Simulator::Client::State** __retval)
{
    uStackFrame __("Outracks.Simulator.Client.ChangeIp", "OnException(Uno.Exception)");
    return *__retval = ChangeIp::New1(uPtr(e)->Message()), void();
}

// protected override sealed Outracks.Simulator.Client.State OnOk(string input) :490
void ChangeIp__OnOk_fn(ChangeIp* __this, uString* input, ::g::Outracks::Simulator::Client::State** __retval)
{
    uStackFrame __("Outracks.Simulator.Client.ChangeIp", "OnOk(string)");
    uArray* endpoints = uArray::Init< ::g::Uno::Net::IPEndPoint*>(::TYPES[16/*Uno.Net.IPEndPoint[]*/], 1, (::g::Uno::Net::IPEndPoint*)::g::Uno::Net::IPEndPoint::New1(::g::Uno::Net::IPAddress::Parse(input), uPtr(uPtr(::g::Outracks::Simulator::Client::Context::ProxyEndpoints())->Strong< ::g::Uno::Net::IPEndPoint*>(0))->Port()));
    return *__retval = ::g::Outracks::Simulator::Client::ConnectingToProxy::New2(endpoints), void();
}

// public ChangeIp([string body]) [instance] :485
void ChangeIp::ctor_2(uString* body)
{
    uStackFrame __("Outracks.Simulator.Client.ChangeIp", ".ctor([string])");
    ctor_1(::STRINGS[3/*"Connect to IP"*/], ::g::Uno::String::op_Addition2(body, ::STRINGS[4/*"\nE.g. '192...*/]));
}

// public ChangeIp New([string body]) [static] :485
ChangeIp* ChangeIp::New1(uString* body)
{
    ChangeIp* obj1 = (ChangeIp*)uNew(ChangeIp_typeof());
    obj1->ctor_2(body);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Preview.Core/0.1.0/ApplicationStates.uno
// ---------------------------------------------------------------------------

// internal abstract class Connected :141
// {
// static generated Connected() :141
static void Connected__cctor__fn(uType* __type)
{
    Connected::_activeDiagnostics_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[17/*Uno.Collections.Dictionary<Fuse.Diagnostic, Outracks.Simulator.Protocol.Diagnostic>*/]));
    Connected::_mutex_ = ::g::Uno::Object::New();
}

static void Connected_build(uType* type)
{
    ::TYPES[17] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Fuse::Diagnostic_typeof(), ::g::Outracks::Simulator::Protocol::Diagnostic_typeof(), NULL);
    ::TYPES[18] = ::g::Uno::Collections::Dictionary__Enumerator_typeof()->MakeType(::g::Fuse::Diagnostic_typeof(), ::g::Outracks::Simulator::Protocol::Diagnostic_typeof(), NULL);
    ::TYPES[19] = ::g::Outracks::Simulator::ISimulatorClient_typeof();
    ::TYPES[20] = ::g::Uno::Collections::KeyValuePair_typeof()->MakeType(::g::Fuse::Diagnostic_typeof(), ::g::Outracks::Simulator::Protocol::Diagnostic_typeof(), NULL);
    ::TYPES[21] = ::g::Outracks::UnoBinaryMessage_typeof()->MakeMethod(1/*TryParse<Outracks.Simulator.Protocol.BytecodeGenerated>*/, ::g::Outracks::Simulator::Protocol::BytecodeGenerated_typeof(), NULL);
    ::TYPES[22] = ::g::Uno::Func1_typeof()->MakeType(::g::System::IO::BinaryReader_typeof(), ::g::Outracks::Simulator::Protocol::BytecodeGenerated_typeof(), NULL);
    ::TYPES[23] = ::g::Outracks::Optional1_typeof()->MakeType(::g::Outracks::Simulator::Protocol::BytecodeGenerated_typeof(), NULL);
    ::TYPES[24] = ::g::Outracks::UnoBinaryMessage_typeof()->MakeMethod(1/*TryParse<Outracks.Simulator.Protocol.BytecodeUpdated>*/, ::g::Outracks::Simulator::Protocol::BytecodeUpdated_typeof(), NULL);
    ::TYPES[25] = ::g::Uno::Func1_typeof()->MakeType(::g::System::IO::BinaryReader_typeof(), ::g::Outracks::Simulator::Protocol::BytecodeUpdated_typeof(), NULL);
    ::TYPES[26] = ::g::Outracks::Optional1_typeof()->MakeType(::g::Outracks::Simulator::Protocol::BytecodeUpdated_typeof(), NULL);
    ::TYPES[27] = ::g::Outracks::UnoBinaryMessage_typeof()->MakeMethod(1/*TryParse<Outracks.Simulator.Protocol.Error>*/, ::g::Outracks::Simulator::Protocol::Error_typeof(), NULL);
    ::TYPES[28] = ::g::Uno::Func1_typeof()->MakeType(::g::System::IO::BinaryReader_typeof(), ::g::Outracks::Simulator::Protocol::Error_typeof(), NULL);
    ::TYPES[29] = ::g::Outracks::Optional1_typeof()->MakeType(::g::Outracks::Simulator::Protocol::Error_typeof(), NULL);
    ::TYPES[30] = ::g::Uno::Diagnostics::LogHandler_typeof();
    ::TYPES[31] = ::g::Fuse::DiagnosticHandler_typeof();
    ::TYPES[32] = uObject_typeof()->Array();
    type->SetDependencies(
        ::g::Outracks::Simulator::Protocol::BytecodeGenerated_typeof(),
        ::g::Outracks::Simulator::Protocol::BytecodeUpdated_typeof(),
        ::g::Uno::Diagnostics::Debug_typeof(),
        ::g::Fuse::Diagnostics_typeof(),
        ::g::Outracks::Simulator::Protocol::Error_typeof());
    type->SetFields(0,
        ::TYPES[19/*Outracks.Simulator.ISimulatorClient*/], offsetof(Connected, Client), 0,
        ::TYPES[17/*Uno.Collections.Dictionary<Fuse.Diagnostic, Outracks.Simulator.Protocol.Diagnostic>*/], (uintptr_t)&Connected::_activeDiagnostics_, uFieldFlagsStatic,
        uObject_typeof(), (uintptr_t)&Connected::_mutex_, uFieldFlagsStatic);
}

Connected_type* Connected_typeof()
{
    static uSStrong<Connected_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Outracks::Simulator::Client::State_typeof();
    options.FieldCount = 3;
    options.DependencyCount = 5;
    options.ObjectSize = sizeof(Connected);
    options.TypeSize = sizeof(Connected_type);
    type = (Connected_type*)uClassType::New("Outracks.Simulator.Client.Connected", options);
    type->fp_build_ = Connected_build;
    type->fp_cctor_ = Connected__cctor__fn;
    type->fp_OnEnterState = (void(*)(::g::Outracks::Simulator::Client::State*, ::g::Outracks::Simulator::Client::State**))Connected__OnEnterState_fn;
    type->fp_OnException = (void(*)(::g::Outracks::Simulator::Client::State*, ::g::Uno::Exception*, ::g::Outracks::Simulator::Client::State**))Connected__OnException_fn;
    type->fp_OnLeaveState = (void(*)(::g::Outracks::Simulator::Client::State*))Connected__OnLeaveState_fn;
    type->fp_OnUpdate = (void(*)(::g::Outracks::Simulator::Client::State*, ::g::Outracks::Simulator::Client::State**))Connected__OnUpdate_fn;
    return type;
}

// protected Connected(Outracks.Simulator.ISimulatorClient client) :145
void Connected__ctor_1_fn(Connected* __this, uObject* client)
{
    __this->ctor_1(client);
}

// public void DismissAllActiveDiagnostics() :249
void Connected__DismissAllActiveDiagnostics_fn(Connected* __this)
{
    __this->DismissAllActiveDiagnostics();
}

// private Outracks.Simulator.Client.State NextState(Outracks.IBinaryMessage message) :189
void Connected__NextState_fn(Connected* __this, uObject* message, ::g::Outracks::Simulator::Client::State** __retval)
{
    *__retval = __this->NextState(message);
}

// protected Outracks.Simulator.Client.State OnConnectionError(Outracks.Simulator.Protocol.Error error) :218
void Connected__OnConnectionError_fn(Connected* __this, ::g::Outracks::Simulator::Protocol::Error* error, ::g::Outracks::Simulator::Client::State** __retval)
{
    *__retval = __this->OnConnectionError(error);
}

// private void OnDiagnosticDismissed(Fuse.Diagnostic d) :236
void Connected__OnDiagnosticDismissed_fn(Connected* __this, ::g::Fuse::Diagnostic* d)
{
    __this->OnDiagnosticDismissed(d);
}

// private void OnDiagnosticReported(Fuse.Diagnostic d) :226
void Connected__OnDiagnosticReported_fn(Connected* __this, ::g::Fuse::Diagnostic* d)
{
    __this->OnDiagnosticReported(d);
}

// public override Outracks.Simulator.Client.State OnEnterState() :151
void Connected__OnEnterState_fn(Connected* __this, ::g::Outracks::Simulator::Client::State** __retval)
{
    uStackFrame __("Outracks.Simulator.Client.Connected", "OnEnterState()");
    ::g::Uno::Diagnostics::Debug::SetLogHandler(uDelegate::New(::TYPES[30/*Uno.Diagnostics.LogHandler*/], (void*)Connected__SendDebugLog_fn, __this));
    ::g::Outracks::Simulator::ISimulatorClient::Send(uInterface(uPtr(__this->Client), ::TYPES[19/*Outracks.Simulator.ISimulatorClient*/]), (uObject*)::g::Outracks::Simulator::Protocol::RegisterName::New2(::g::Outracks::Simulator::Client::DeviceInfo::GUID(), ::g::Outracks::Simulator::Client::DeviceInfo::Name()));
    ::g::Fuse::Diagnostics::add_DiagnosticReported(uDelegate::New(::TYPES[31/*Fuse.DiagnosticHandler*/], (void*)Connected__OnDiagnosticReported_fn, __this));
    ::g::Fuse::Diagnostics::add_DiagnosticDismissed(uDelegate::New(::TYPES[31/*Fuse.DiagnosticHandler*/], (void*)Connected__OnDiagnosticDismissed_fn, __this));
    return *__retval = __this, void();
}

// public override sealed Outracks.Simulator.Client.State OnException(Uno.Exception e) :166
void Connected__OnException_fn(Connected* __this, ::g::Uno::Exception* e, ::g::Outracks::Simulator::Client::State** __retval)
{
    uStackFrame __("Outracks.Simulator.Client.Connected", "OnException(Uno.Exception)");
    ::g::Uno::Exception* ret8;
    ::g::Uno::Collections::List* exceptions = ::g::Outracks::Simulator::Client::Exceptions::Unpack(e);
    ::g::Outracks::Simulator::Client::Exceptions::Send(__this->Client, exceptions);
    ::g::Uno::Exception* f = (uPtr(exceptions)->Count() == 1) ? (::g::Uno::Collections::List__get_Item_fn(uPtr(exceptions), uCRef<int>(0), &ret8), ret8) : e;
    return *__retval = __this->OnFaulted(f), void();
}

// protected Outracks.Simulator.Client.State OnExecute(Outracks.Simulator.Protocol.BytecodeUpdated args) :212
void Connected__OnExecute_fn(Connected* __this, ::g::Outracks::Simulator::Protocol::BytecodeUpdated* args, ::g::Outracks::Simulator::Client::State** __retval)
{
    *__retval = __this->OnExecute(args);
}

// public override void OnLeaveState() :160
void Connected__OnLeaveState_fn(Connected* __this)
{
    uStackFrame __("Outracks.Simulator.Client.Connected", "OnLeaveState()");
    ::g::Fuse::Diagnostics::remove_DiagnosticReported(uDelegate::New(::TYPES[31/*Fuse.DiagnosticHandler*/], (void*)Connected__OnDiagnosticReported_fn, __this));
    ::g::Fuse::Diagnostics::remove_DiagnosticDismissed(uDelegate::New(::TYPES[31/*Fuse.DiagnosticHandler*/], (void*)Connected__OnDiagnosticDismissed_fn, __this));
}

// protected Outracks.Simulator.Client.State OnReify(Outracks.Simulator.Protocol.BytecodeGenerated reify) :207
void Connected__OnReify_fn(Connected* __this, ::g::Outracks::Simulator::Protocol::BytecodeGenerated* reify, ::g::Outracks::Simulator::Client::State** __retval)
{
    *__retval = __this->OnReify(reify);
}

// public override Outracks.Simulator.Client.State OnUpdate() :176
void Connected__OnUpdate_fn(Connected* __this, ::g::Outracks::Simulator::Client::State** __retval)
{
    uStackFrame __("Outracks.Simulator.Client.Connected", "OnUpdate()");
    bool ret9;
    uObject* message;

    while ((::g::Outracks::Simulator::ConcurrentQueue__TryDequeue_fn(uPtr(::g::Outracks::Simulator::ISimulatorClient::IncommingMessages(uInterface(uPtr(__this->Client), ::TYPES[19/*Outracks.Simulator.ISimulatorClient*/]))), (void**)(&message), &ret9), ret9))
    {
        ::g::Outracks::Simulator::Client::State* newState = __this->NextState(message);

        if (newState != __this)
            return *__retval = newState, void();
    }

    return *__retval = __this, void();
}

// private void SendDebugLog(string text, Uno.Diagnostics.DebugMessageType type) :261
void Connected__SendDebugLog_fn(Connected* __this, uString* text, int* type)
{
    __this->SendDebugLog(text, *type);
}

uSStrong< ::g::Uno::Collections::Dictionary*> Connected::_activeDiagnostics_;
uSStrong<uObject*> Connected::_mutex_;

// protected Connected(Outracks.Simulator.ISimulatorClient client) [instance] :145
void Connected::ctor_1(uObject* client)
{
    ctor_();
    Client = client;
}

// public void DismissAllActiveDiagnostics() [instance] :249
void Connected::DismissAllActiveDiagnostics()
{
    uStackFrame __("Outracks.Simulator.Client.Connected", "DismissAllActiveDiagnostics()");
    ::g::Uno::Collections::Dictionary__Enumerator<uStrong< ::g::Fuse::Diagnostic*>, uStrong< ::g::Outracks::Simulator::Protocol::Diagnostic*> > ret2;
    ::g::Uno::Threading::Monitor::Enter(Connected::_mutex_);

    try
    {
        {
            ::g::Uno::Collections::Dictionary__Enumerator<uStrong< ::g::Fuse::Diagnostic*>, uStrong< ::g::Outracks::Simulator::Protocol::Diagnostic*> > enum1 = (::g::Uno::Collections::Dictionary__GetEnumerator_fn(uPtr(Connected::_activeDiagnostics_), &ret2), ret2);

            try
            {
                {
                    while (enum1.MoveNext(::TYPES[18/*Uno.Collections.Dictionary<Fuse.Diagnostic, Outracks.Simulator.Protocol.Diagnostic>.Enumerator*/]))
                    {
                        ::g::Uno::Collections::KeyValuePair<uStrong< ::g::Fuse::Diagnostic*>, uStrong< ::g::Outracks::Simulator::Protocol::Diagnostic*> > k = enum1.Current(::TYPES[18/*Uno.Collections.Dictionary<Fuse.Diagnostic, Outracks.Simulator.Protocol.Diagnostic>.Enumerator*/]);
                        ::g::Outracks::Simulator::ISimulatorClient::Send(uInterface(uPtr(Client), ::TYPES[19/*Outracks.Simulator.ISimulatorClient*/]), (uObject*)::g::Outracks::Simulator::Protocol::DismissDiagnostic::New1(::g::Outracks::Simulator::Client::DeviceInfo::GUID(), ::g::Outracks::Simulator::Client::DeviceInfo::Name(), uPtr(k.Value(::TYPES[20/*Uno.Collections.KeyValuePair<Fuse.Diagnostic, Outracks.Simulator.Protocol.Diagnostic>*/]))->DiagnosticId()));
                    }
                }
                {
                    enum1.Dispose(::TYPES[18/*Uno.Collections.Dictionary<Fuse.Diagnostic, Outracks.Simulator.Protocol.Diagnostic>.Enumerator*/]);
                }
            }

            catch (const uThrowable& __t)
            {
                {
                    enum1.Dispose(::TYPES[18/*Uno.Collections.Dictionary<Fuse.Diagnostic, Outracks.Simulator.Protocol.Diagnostic>.Enumerator*/]);
                }
                                throw __t;
            }

            uPtr(Connected::_activeDiagnostics_)->Clear();
        }
        {
            ::g::Uno::Threading::Monitor::Exit(Connected::_mutex_);
        }
    }

    catch (const uThrowable& __t)
    {
        {
            ::g::Uno::Threading::Monitor::Exit(Connected::_mutex_);
        }
                throw __t;
    }
}

// private Outracks.Simulator.Client.State NextState(Outracks.IBinaryMessage message) [instance] :189
::g::Outracks::Simulator::Client::State* Connected::NextState(uObject* message)
{
    uStackFrame __("Outracks.Simulator.Client.Connected", "NextState(Outracks.IBinaryMessage)");
    ::g::Outracks::Optional1<uStrong< ::g::Outracks::Simulator::Protocol::BytecodeGenerated*> > ret3;
    ::g::Outracks::Optional1<uStrong< ::g::Outracks::Simulator::Protocol::BytecodeUpdated*> > ret4;
    ::g::Outracks::Optional1<uStrong< ::g::Outracks::Simulator::Protocol::Error*> > ret5;
    ::g::Outracks::Optional1<uStrong< ::g::Outracks::Simulator::Protocol::BytecodeGenerated*> > bcg = (::g::Outracks::UnoBinaryMessage__TryParse_fn(::TYPES[21/*Outracks.UnoBinaryMessage.TryParse<Outracks.Simulator.Protocol.BytecodeGenerated>*/], message, ::g::Outracks::Simulator::Protocol::BytecodeGenerated::MessageType_, uDelegate::New(::TYPES[22/*Uno.Func<System.IO.BinaryReader, Outracks.Simulator.Protocol.BytecodeGenerated>*/], (void*)::g::Outracks::Simulator::Protocol::BytecodeGenerated__ReadDataFrom_fn), &ret3), ret3);

    if (bcg.HasValue(::TYPES[23/*Outracks.Optional<Outracks.Simulator.Protocol.BytecodeGenerated>*/]))
        return OnReify(bcg.Value(::TYPES[23/*Outracks.Optional<Outracks.Simulator.Protocol.BytecodeGenerated>*/]));

    ::g::Outracks::Optional1<uStrong< ::g::Outracks::Simulator::Protocol::BytecodeUpdated*> > bu = (::g::Outracks::UnoBinaryMessage__TryParse_fn(::TYPES[24/*Outracks.UnoBinaryMessage.TryParse<Outracks.Simulator.Protocol.BytecodeUpdated>*/], message, ::g::Outracks::Simulator::Protocol::BytecodeUpdated::MessageType_, uDelegate::New(::TYPES[25/*Uno.Func<System.IO.BinaryReader, Outracks.Simulator.Protocol.BytecodeUpdated>*/], (void*)::g::Outracks::Simulator::Protocol::BytecodeUpdated__ReadDataFrom_fn), &ret4), ret4);

    if (bu.HasValue(::TYPES[26/*Outracks.Optional<Outracks.Simulator.Protocol.BytecodeUpdated>*/]))
        return OnExecute(bu.Value(::TYPES[26/*Outracks.Optional<Outracks.Simulator.Protocol.BytecodeUpdated>*/]));

    ::g::Outracks::Optional1<uStrong< ::g::Outracks::Simulator::Protocol::Error*> > e = (::g::Outracks::UnoBinaryMessage__TryParse_fn(::TYPES[27/*Outracks.UnoBinaryMessage.TryParse<Outracks.Simulator.Protocol.Error>*/], message, ::g::Outracks::Simulator::Protocol::Error::MessageType_, uDelegate::New(::TYPES[28/*Uno.Func<System.IO.BinaryReader, Outracks.Simulator.Protocol.Error>*/], (void*)::g::Outracks::Simulator::Protocol::Error__ReadDataFrom_fn), &ret5), ret5);

    if (e.HasValue(::TYPES[29/*Outracks.Optional<Outracks.Simulator.Protocol.Error>*/]))
        return OnConnectionError(e.Value(::TYPES[29/*Outracks.Optional<Outracks.Simulator.Protocol.Error>*/]));

    return this;
}

// protected Outracks.Simulator.Client.State OnConnectionError(Outracks.Simulator.Protocol.Error error) [instance] :218
::g::Outracks::Simulator::Client::State* Connected::OnConnectionError(::g::Outracks::Simulator::Protocol::Error* error)
{
    uStackFrame __("Outracks.Simulator.Client.Connected", "OnConnectionError(Outracks.Simulator.Protocol.Error)");
    return ::g::Outracks::Simulator::Client::ConnectionLost::New2(uPtr(error)->Exception());
}

// private void OnDiagnosticDismissed(Fuse.Diagnostic d) [instance] :236
void Connected::OnDiagnosticDismissed(::g::Fuse::Diagnostic* d)
{
    uStackFrame __("Outracks.Simulator.Client.Connected", "OnDiagnosticDismissed(Fuse.Diagnostic)");
    bool ret6;
    bool ret7;
    ::g::Uno::Threading::Monitor::Enter(Connected::_mutex_);

    try
    {
        {
            ::g::Outracks::Simulator::Protocol::Diagnostic* diag;

            if ((::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(Connected::_activeDiagnostics_), d, (void**)(&diag), &ret6), ret6))
            {
                ::g::Outracks::Simulator::ISimulatorClient::Send(uInterface(uPtr(Client), ::TYPES[19/*Outracks.Simulator.ISimulatorClient*/]), (uObject*)::g::Outracks::Simulator::Protocol::DismissDiagnostic::New1(::g::Outracks::Simulator::Client::DeviceInfo::GUID(), ::g::Outracks::Simulator::Client::DeviceInfo::Name(), uPtr(diag)->DiagnosticId()));
                ::g::Uno::Collections::Dictionary__Remove_fn(uPtr(Connected::_activeDiagnostics_), d, &ret7);
            }
        }
        {
            ::g::Uno::Threading::Monitor::Exit(Connected::_mutex_);
        }
    }

    catch (const uThrowable& __t)
    {
        {
            ::g::Uno::Threading::Monitor::Exit(Connected::_mutex_);
        }
                throw __t;
    }
}

// private void OnDiagnosticReported(Fuse.Diagnostic d) [instance] :226
void Connected::OnDiagnosticReported(::g::Fuse::Diagnostic* d)
{
    uStackFrame __("Outracks.Simulator.Client.Connected", "OnDiagnosticReported(Fuse.Diagnostic)");
    ::g::Uno::Threading::Monitor::Enter(Connected::_mutex_);

    try
    {
        {
            ::g::Outracks::Simulator::Protocol::Diagnostic* diag = ::g::Outracks::Simulator::Protocol::Diagnostic::New1(::g::Outracks::Simulator::Client::DeviceInfo::GUID(), ::g::Outracks::Simulator::Client::DeviceInfo::Name(), uPtr(d)->Message, uPtr(d)->ToString(), uPtr(d)->FilePath, uPtr(d)->LineNumber, 0, -1);
            ::g::Outracks::Simulator::ISimulatorClient::Send(uInterface(uPtr(Client), ::TYPES[19/*Outracks.Simulator.ISimulatorClient*/]), (uObject*)diag);
            ::g::Uno::Collections::Dictionary__Add_fn(uPtr(Connected::_activeDiagnostics_), d, diag);
        }
        {
            ::g::Uno::Threading::Monitor::Exit(Connected::_mutex_);
        }
    }

    catch (const uThrowable& __t)
    {
        {
            ::g::Uno::Threading::Monitor::Exit(Connected::_mutex_);
        }
                throw __t;
    }
}

// protected Outracks.Simulator.Client.State OnExecute(Outracks.Simulator.Protocol.BytecodeUpdated args) [instance] :212
::g::Outracks::Simulator::Client::State* Connected::OnExecute(::g::Outracks::Simulator::Protocol::BytecodeUpdated* args)
{
    uStackFrame __("Outracks.Simulator.Client.Connected", "OnExecute(Outracks.Simulator.Protocol.BytecodeUpdated)");
    ::g::Outracks::Simulator::Client::VirtualMachine::Execute(uPtr(args)->Function(), uArray::New(::TYPES[32/*object[]*/], 0));
    return this;
}

// protected Outracks.Simulator.Client.State OnReify(Outracks.Simulator.Protocol.BytecodeGenerated reify) [instance] :207
::g::Outracks::Simulator::Client::State* Connected::OnReify(::g::Outracks::Simulator::Protocol::BytecodeGenerated* reify)
{
    return ::g::Outracks::Simulator::Client::Reifying::New1(Client, reify);
}

// private void SendDebugLog(string text, Uno.Diagnostics.DebugMessageType type) [instance] :261
void Connected::SendDebugLog(uString* text, int type)
{
    uStackFrame __("Outracks.Simulator.Client.Connected", "SendDebugLog(string,Uno.Diagnostics.DebugMessageType)");
    ::g::Outracks::Simulator::ISimulatorClient::Send(uInterface(uPtr(Client), ::TYPES[19/*Outracks.Simulator.ISimulatorClient*/]), (uObject*)::g::Outracks::Simulator::Protocol::DebugLog::New2(::g::Outracks::Simulator::Client::DeviceInfo::GUID(), ::g::Outracks::Simulator::Client::DeviceInfo::Name(), text));
}
// }

// /usr/local/share/uno/Packages/Fuse.Preview.Core/0.1.0/ApplicationStates.uno
// ---------------------------------------------------------------------------

// internal abstract class Connecting :41
// {
static void Connecting_build(uType* type)
{
    ::TYPES[33] = ::g::Outracks::Simulator::DesignerNotRunning_typeof();
}

::g::Outracks::Simulator::Client::State_type* Connecting_typeof()
{
    static uSStrong< ::g::Outracks::Simulator::Client::State_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Outracks::Simulator::Client::State_typeof();
    options.ObjectSize = sizeof(Connecting);
    options.TypeSize = sizeof(::g::Outracks::Simulator::Client::State_type);
    type = (::g::Outracks::Simulator::Client::State_type*)uClassType::New("Outracks.Simulator.Client.Connecting", options);
    type->fp_build_ = Connecting_build;
    type->fp_OnException = (void(*)(::g::Outracks::Simulator::Client::State*, ::g::Uno::Exception*, ::g::Outracks::Simulator::Client::State**))Connecting__OnException_fn;
    return type;
}

// protected generated Connecting() :41
void Connecting__ctor_1_fn(Connecting* __this)
{
    __this->ctor_1();
}

// public override sealed Outracks.Simulator.Client.State OnException(Uno.Exception e) :43
void Connecting__OnException_fn(Connecting* __this, ::g::Uno::Exception* e, ::g::Outracks::Simulator::Client::State** __retval)
{
    if (uIs(e, ::TYPES[33/*Outracks.Simulator.DesignerNotRunning*/]))
        return *__retval = ::g::Outracks::Simulator::Client::DesignerNotRunning::New2(), void();

    return *__retval = ::g::Outracks::Simulator::Client::FailedToConnect::New2(e), void();
}

// protected generated Connecting() [instance] :41
void Connecting::ctor_1()
{
    ctor_();
}
// }

// /usr/local/share/uno/Packages/Fuse.Preview.Core/0.1.0/ApplicationStates.uno
// ---------------------------------------------------------------------------

// internal sealed class ConnectingToHost :100
// {
static void ConnectingToHost_build(uType* type)
{
    ::STRINGS[5] = uString::Const("Connecting");
    ::STRINGS[6] = uString::Const("Fetching project data from computer");
    ::TYPES[34] = ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(9/*ToArray<Uno.Net.IPEndPoint>*/, ::g::Uno::Net::IPEndPoint_typeof(), NULL);
    ::TYPES[35] = ::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable_typeof()->MakeType(::g::Uno::Net::IPEndPoint_typeof(), NULL);
    ::TYPES[5] = ::g::Uno::Action_typeof();
    type->SetDependencies(
        ::g::Uno::Platform::CoreApp_typeof());
    type->SetFields(0,
        ::g::Uno::Net::IPEndPoint_typeof()->Array(), offsetof(ConnectingToHost, _simulatorEndpoints), 0,
        ::g::Outracks::Simulator::Task_typeof()->MakeType(::g::Uno::Net::Sockets::Socket_typeof(), NULL), offsetof(ConnectingToHost, _connecting), 0);
}

::g::Outracks::Simulator::Client::State_type* ConnectingToHost_typeof()
{
    static uSStrong< ::g::Outracks::Simulator::Client::State_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Outracks::Simulator::Client::Connecting_typeof();
    options.FieldCount = 2;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(ConnectingToHost);
    options.TypeSize = sizeof(::g::Outracks::Simulator::Client::State_type);
    type = (::g::Outracks::Simulator::Client::State_type*)uClassType::New("Outracks.Simulator.Client.ConnectingToHost", options);
    type->fp_build_ = ConnectingToHost_build;
    type->fp_OnEnterState = (void(*)(::g::Outracks::Simulator::Client::State*, ::g::Outracks::Simulator::Client::State**))ConnectingToHost__OnEnterState_fn;
    type->fp_OnUpdate = (void(*)(::g::Outracks::Simulator::Client::State*, ::g::Outracks::Simulator::Client::State**))ConnectingToHost__OnUpdate_fn;
    return type;
}

// public ConnectingToHost(Uno.Collections.IEnumerable<Uno.Net.IPEndPoint> simulatorEndpoints) :104
void ConnectingToHost__ctor_2_fn(ConnectingToHost* __this, uObject* simulatorEndpoints)
{
    __this->ctor_2(simulatorEndpoints);
}

// public ConnectingToHost New(Uno.Collections.IEnumerable<Uno.Net.IPEndPoint> simulatorEndpoints) :104
void ConnectingToHost__New1_fn(uObject* simulatorEndpoints, ConnectingToHost** __retval)
{
    *__retval = ConnectingToHost::New1(simulatorEndpoints);
}

// public override sealed Outracks.Simulator.Client.State OnEnterState() :111
void ConnectingToHost__OnEnterState_fn(ConnectingToHost* __this, ::g::Outracks::Simulator::Client::State** __retval)
{
    uStackFrame __("Outracks.Simulator.Client.ConnectingToHost", "OnEnterState()");
    __this->_connecting = ::g::Outracks::Simulator::ConnectToFirstRespondingEndpoint::Execute((uObject*)((::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable*)::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable::New1(::TYPES[35/*Uno.Runtime.Implementation.Internal.ArrayEnumerable<Uno.Net.IPEndPoint>*/], __this->_simulatorEndpoints)));
    ::g::Outracks::Simulator::Client::LoadingScreen::Show(::g::Outracks::Simulator::Client::Context::App(), ::STRINGS[5/*"Connecting"*/], ::STRINGS[6/*"Fetching pr...*/]);
    return *__retval = __this, void();
}

// public override sealed Outracks.Simulator.Client.State OnUpdate() :126
void ConnectingToHost__OnUpdate_fn(ConnectingToHost* __this, ::g::Outracks::Simulator::Client::State** __retval)
{
    uStackFrame __("Outracks.Simulator.Client.ConnectingToHost", "OnUpdate()");
    ::g::Uno::Net::Sockets::Socket* ret2;

    if (uPtr(__this->_connecting)->IsCompleted())
    {
        ::g::Outracks::Simulator::SimulatorClient* client = ::g::Outracks::Simulator::SimulatorClient::New1((::g::Outracks::Simulator::Task__get_Result_fn(uPtr(__this->_connecting), &ret2), ret2));
        ::g::Uno::Platform::CoreApp::add_Terminating(::g::Outracks::Simulator::Closure::ToAppStateChangeHandler(uDelegate::New(::TYPES[5/*Uno.Action*/], (void*)::g::Outracks::Simulator::SimulatorClient__Dispose_fn, client)));
        return *__retval = ::g::Outracks::Simulator::Client::Idle::New1((uObject*)client), void();
    }

    return *__retval = __this, void();
}

// public ConnectingToHost(Uno.Collections.IEnumerable<Uno.Net.IPEndPoint> simulatorEndpoints) [instance] :104
void ConnectingToHost::ctor_2(uObject* simulatorEndpoints)
{
    uStackFrame __("Outracks.Simulator.Client.ConnectingToHost", ".ctor(Uno.Collections.IEnumerable<Uno.Net.IPEndPoint>)");
    ctor_1();
    _simulatorEndpoints = ((uArray*)::g::Uno::Collections::EnumerableExtensions::ToArray(::TYPES[34/*Uno.Collections.EnumerableExtensions.ToArray<Uno.Net.IPEndPoint>*/], simulatorEndpoints));
}

// public ConnectingToHost New(Uno.Collections.IEnumerable<Uno.Net.IPEndPoint> simulatorEndpoints) [static] :104
ConnectingToHost* ConnectingToHost::New1(uObject* simulatorEndpoints)
{
    ConnectingToHost* obj1 = (ConnectingToHost*)uNew(ConnectingToHost_typeof());
    obj1->ctor_2(simulatorEndpoints);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Preview.Core/0.1.0/ApplicationStates.uno
// ---------------------------------------------------------------------------

// internal sealed class ConnectingToProxy :52
// {
static void ConnectingToProxy_build(uType* type)
{
    ::STRINGS[5] = uString::Const("Connecting");
    ::STRINGS[7] = uString::Const("Connecting to computer...");
    ::TYPES[35] = ::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable_typeof()->MakeType(::g::Uno::Net::IPEndPoint_typeof(), NULL);
    ::TYPES[36] = ::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    type->SetFields(0,
        ::g::Uno::Net::IPEndPoint_typeof()->Array(), offsetof(ConnectingToProxy, _proxyEndpoints), 0,
        ::g::Outracks::Simulator::Task_typeof()->MakeType(::g::Uno::Net::IPEndPoint_typeof()->Array(), NULL), offsetof(ConnectingToProxy, _connecting), 0);
}

::g::Outracks::Simulator::Client::State_type* ConnectingToProxy_typeof()
{
    static uSStrong< ::g::Outracks::Simulator::Client::State_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Outracks::Simulator::Client::Connecting_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(ConnectingToProxy);
    options.TypeSize = sizeof(::g::Outracks::Simulator::Client::State_type);
    type = (::g::Outracks::Simulator::Client::State_type*)uClassType::New("Outracks.Simulator.Client.ConnectingToProxy", options);
    type->fp_build_ = ConnectingToProxy_build;
    type->fp_ctor_ = (void*)ConnectingToProxy__New1_fn;
    type->fp_OnEnterState = (void(*)(::g::Outracks::Simulator::Client::State*, ::g::Outracks::Simulator::Client::State**))ConnectingToProxy__OnEnterState_fn;
    type->fp_OnUpdate = (void(*)(::g::Outracks::Simulator::Client::State*, ::g::Outracks::Simulator::Client::State**))ConnectingToProxy__OnUpdate_fn;
    return type;
}

// public ConnectingToProxy() :62
void ConnectingToProxy__ctor_2_fn(ConnectingToProxy* __this)
{
    __this->ctor_2();
}

// public ConnectingToProxy(Uno.Net.IPEndPoint[] proxyEndpoints) :57
void ConnectingToProxy__ctor_3_fn(ConnectingToProxy* __this, uArray* proxyEndpoints)
{
    __this->ctor_3(proxyEndpoints);
}

// public ConnectingToProxy New() :62
void ConnectingToProxy__New1_fn(ConnectingToProxy** __retval)
{
    *__retval = ConnectingToProxy::New1();
}

// public ConnectingToProxy New(Uno.Net.IPEndPoint[] proxyEndpoints) :57
void ConnectingToProxy__New2_fn(uArray* proxyEndpoints, ConnectingToProxy** __retval)
{
    *__retval = ConnectingToProxy::New2(proxyEndpoints);
}

// public override sealed Outracks.Simulator.Client.State OnEnterState() :67
void ConnectingToProxy__OnEnterState_fn(ConnectingToProxy* __this, ::g::Outracks::Simulator::Client::State** __retval)
{
    uStackFrame __("Outracks.Simulator.Client.ConnectingToProxy", "OnEnterState()");
    __this->_connecting = ::g::Outracks::Simulator::ProxyClient::GetSimulatorEndpoint((uObject*)((::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable*)::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable::New1(::TYPES[35/*Uno.Runtime.Implementation.Internal.ArrayEnumerable<Uno.Net.IPEndPoint>*/], __this->_proxyEndpoints)), ::g::Outracks::Simulator::Client::Context::Project(), (uObject*)((::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable*)::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable::New1(::TYPES[36/*Uno.Runtime.Implementation.Internal.ArrayEnumerable<string>*/], ::g::Outracks::Simulator::Client::Context::Defines())));
    ::g::Outracks::Simulator::Client::LoadingScreen::Show(::g::Outracks::Simulator::Client::Context::App(), ::STRINGS[5/*"Connecting"*/], ::STRINGS[7/*"Connecting ...*/]);
    return *__retval = __this, void();
}

// public override sealed Outracks.Simulator.Client.State OnUpdate() :91
void ConnectingToProxy__OnUpdate_fn(ConnectingToProxy* __this, ::g::Outracks::Simulator::Client::State** __retval)
{
    uStackFrame __("Outracks.Simulator.Client.ConnectingToProxy", "OnUpdate()");
    uArray* ret3;

    if (uPtr(__this->_connecting)->IsCompleted())
        return *__retval = ::g::Outracks::Simulator::Client::ConnectingToHost::New1((uObject*)((::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable*)::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable::New1(::TYPES[35/*Uno.Runtime.Implementation.Internal.ArrayEnumerable<Uno.Net.IPEndPoint>*/], (::g::Outracks::Simulator::Task__get_Result_fn(uPtr(__this->_connecting), &ret3), ret3)))), void();

    return *__retval = __this, void();
}

// public ConnectingToProxy() [instance] :62
void ConnectingToProxy::ctor_2()
{
    ctor_1();
    _proxyEndpoints = ::g::Outracks::Simulator::Client::Context::ProxyEndpoints();
}

// public ConnectingToProxy(Uno.Net.IPEndPoint[] proxyEndpoints) [instance] :57
void ConnectingToProxy::ctor_3(uArray* proxyEndpoints)
{
    ctor_1();
    _proxyEndpoints = proxyEndpoints;
}

// public ConnectingToProxy New() [static] :62
ConnectingToProxy* ConnectingToProxy::New1()
{
    ConnectingToProxy* obj2 = (ConnectingToProxy*)uNew(ConnectingToProxy_typeof());
    obj2->ctor_2();
    return obj2;
}

// public ConnectingToProxy New(Uno.Net.IPEndPoint[] proxyEndpoints) [static] :57
ConnectingToProxy* ConnectingToProxy::New2(uArray* proxyEndpoints)
{
    ConnectingToProxy* obj1 = (ConnectingToProxy*)uNew(ConnectingToProxy_typeof());
    obj1->ctor_3(proxyEndpoints);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Preview.Core/0.1.0/ApplicationStates.uno
// ---------------------------------------------------------------------------

// internal sealed class ConnectionLost :443
// {
static void ConnectionLost_build(uType* type)
{
    ::STRINGS[8] = uString::Const("Connection lost");
    ::STRINGS[9] = uString::Const("");
    ::STRINGS[10] = uString::Const("Change IP");
    ::STRINGS[11] = uString::Const("Reconnect");
    ::TYPES[37] = ::g::Outracks::Simulator::Client::DialogButton_typeof()->Array();
    type->SetDependencies(
        ::g::Outracks::Simulator::Protocol::ExceptionInfo_typeof());
    type->SetFields(5);
}

::g::Outracks::Simulator::Client::State_type* ConnectionLost_typeof()
{
    static uSStrong< ::g::Outracks::Simulator::Client::State_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Outracks::Simulator::Client::ShowingModalDialog_typeof();
    options.FieldCount = 5;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(ConnectionLost);
    options.TypeSize = sizeof(::g::Outracks::Simulator::Client::State_type);
    type = (::g::Outracks::Simulator::Client::State_type*)uClassType::New("Outracks.Simulator.Client.ConnectionLost", options);
    type->fp_build_ = ConnectionLost_build;
    return type;
}

// public ConnectionLost(Outracks.Simulator.Protocol.ExceptionInfo exception) :449
void ConnectionLost__ctor_2_fn(ConnectionLost* __this, ::g::Outracks::Simulator::Protocol::ExceptionInfo* exception)
{
    __this->ctor_2(exception);
}

// public ConnectionLost(Uno.Exception exception) :445
void ConnectionLost__ctor_3_fn(ConnectionLost* __this, ::g::Uno::Exception* exception)
{
    __this->ctor_3(exception);
}

// public ConnectionLost New(Outracks.Simulator.Protocol.ExceptionInfo exception) :449
void ConnectionLost__New2_fn(::g::Outracks::Simulator::Protocol::ExceptionInfo* exception, ConnectionLost** __retval)
{
    *__retval = ConnectionLost::New2(exception);
}

// public ConnectionLost New(Uno.Exception exception) :445
void ConnectionLost__New3_fn(::g::Uno::Exception* exception, ConnectionLost** __retval)
{
    *__retval = ConnectionLost::New3(exception);
}

// public ConnectionLost(Outracks.Simulator.Protocol.ExceptionInfo exception) [instance] :449
void ConnectionLost::ctor_2(::g::Outracks::Simulator::Protocol::ExceptionInfo* exception)
{
    uStackFrame __("Outracks.Simulator.Client.ConnectionLost", ".ctor(Outracks.Simulator.Protocol.ExceptionInfo)");
    ctor_1(::STRINGS[8/*"Connection ...*/], uPtr(exception)->Message, ::STRINGS[9/*""*/], uArray::Init< ::g::Outracks::Simulator::Client::DialogButton*>(::TYPES[37/*Outracks.Simulator.Client.DialogButton[]*/], 2, (::g::Outracks::Simulator::Client::DialogButton*)::g::Outracks::Simulator::Client::DialogButton::New1(::STRINGS[10/*"Change IP"*/], ::g::Outracks::Simulator::Client::ChangeIp::New1(::STRINGS[9/*""*/])), (::g::Outracks::Simulator::Client::DialogButton*)::g::Outracks::Simulator::Client::DialogButton::New1(::STRINGS[11/*"Reconnect"*/], ::g::Outracks::Simulator::Client::ConnectingToProxy::New1())));
}

// public ConnectionLost(Uno.Exception exception) [instance] :445
void ConnectionLost::ctor_3(::g::Uno::Exception* exception)
{
    uStackFrame __("Outracks.Simulator.Client.ConnectionLost", ".ctor(Uno.Exception)");
    ctor_2(::g::Outracks::Simulator::Protocol::ExceptionInfo::Capture(exception));
}

// public ConnectionLost New(Outracks.Simulator.Protocol.ExceptionInfo exception) [static] :449
ConnectionLost* ConnectionLost::New2(::g::Outracks::Simulator::Protocol::ExceptionInfo* exception)
{
    ConnectionLost* obj2 = (ConnectionLost*)uNew(ConnectionLost_typeof());
    obj2->ctor_2(exception);
    return obj2;
}

// public ConnectionLost New(Uno.Exception exception) [static] :445
ConnectionLost* ConnectionLost::New3(::g::Uno::Exception* exception)
{
    ConnectionLost* obj1 = (ConnectionLost*)uNew(ConnectionLost_typeof());
    obj1->ctor_3(exception);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Preview.Core/0.1.0/Context.uno
// -----------------------------------------------------------------

// public static class Context :25
// {
static void Context_build(uType* type)
{
    type->SetFields(0,
        ::g::Outracks::Simulator::Client::FakeApp_typeof(), (uintptr_t)&Context::_App_, uFieldFlagsStatic,
        ::g::Uno::String_typeof()->Array(), (uintptr_t)&Context::_Defines_, uFieldFlagsStatic,
        ::g::Outracks::Simulator::Client::InputMode_typeof(), (uintptr_t)&Context::_InputMode_, uFieldFlagsStatic,
        ::g::Uno::String_typeof(), (uintptr_t)&Context::_Project_, uFieldFlagsStatic,
        ::g::Uno::Net::IPEndPoint_typeof()->Array(), (uintptr_t)&Context::_ProxyEndpoints_, uFieldFlagsStatic,
        ::g::Outracks::Simulator::Runtime::IReflection_typeof(), (uintptr_t)&Context::_Reflection_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(9,
        new uFunction("get_App", NULL, (void*)Context__get_App_fn, 0, true, ::g::Outracks::Simulator::Client::FakeApp_typeof(), 0),
        new uFunction("get_Defines", NULL, (void*)Context__get_Defines_fn, 0, true, ::g::Uno::String_typeof()->Array(), 0),
        new uFunction("get_InputMode", NULL, (void*)Context__get_InputMode_fn, 0, true, ::g::Outracks::Simulator::Client::InputMode_typeof(), 0),
        new uFunction("get_Project", NULL, (void*)Context__get_Project_fn, 0, true, ::g::Uno::String_typeof(), 0),
        new uFunction("get_ProxyEndpoints", NULL, (void*)Context__get_ProxyEndpoints_fn, 0, true, ::g::Uno::Net::IPEndPoint_typeof()->Array(), 0),
        new uFunction("get_Reflection", NULL, (void*)Context__get_Reflection_fn, 0, true, ::g::Outracks::Simulator::Runtime::IReflection_typeof(), 0),
        new uFunction("set_Reflection", NULL, (void*)Context__set_Reflection_fn, 0, true, uVoid_typeof(), 1, ::g::Outracks::Simulator::Runtime::IReflection_typeof()),
        new uFunction("SetApp", NULL, (void*)Context__SetApp_fn, 0, true, uVoid_typeof(), 1, ::g::Outracks::Simulator::Client::FakeApp_typeof()),
        new uFunction("SetGlobals", NULL, (void*)Context__SetGlobals_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Net::IPEndPoint_typeof()->Array(), ::g::Uno::String_typeof(), ::g::Uno::String_typeof()->Array()));
}

uClassType* Context_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Outracks.Simulator.Client.Context", options);
    type->fp_build_ = Context_build;
    return type;
}

// public static generated Outracks.Simulator.Client.FakeApp get_App() :28
void Context__get_App_fn(::g::Outracks::Simulator::Client::FakeApp** __retval)
{
    *__retval = Context::App();
}

// private static generated void set_App(Outracks.Simulator.Client.FakeApp value) :28
void Context__set_App_fn(::g::Outracks::Simulator::Client::FakeApp* value)
{
    Context::App(value);
}

// public static generated string[] get_Defines() :31
void Context__get_Defines_fn(uArray** __retval)
{
    *__retval = Context::Defines();
}

// private static generated void set_Defines(string[] value) :31
void Context__set_Defines_fn(uArray* value)
{
    Context::Defines(value);
}

// public static generated Outracks.Simulator.Client.InputMode get_InputMode() :27
void Context__get_InputMode_fn(int* __retval)
{
    *__retval = Context::InputMode();
}

// private static generated void set_InputMode(Outracks.Simulator.Client.InputMode value) :27
void Context__set_InputMode_fn(int* value)
{
    Context::InputMode(*value);
}

// public static generated string get_Project() :30
void Context__get_Project_fn(uString** __retval)
{
    *__retval = Context::Project();
}

// private static generated void set_Project(string value) :30
void Context__set_Project_fn(uString* value)
{
    Context::Project(value);
}

// public static generated Uno.Net.IPEndPoint[] get_ProxyEndpoints() :29
void Context__get_ProxyEndpoints_fn(uArray** __retval)
{
    *__retval = Context::ProxyEndpoints();
}

// private static generated void set_ProxyEndpoints(Uno.Net.IPEndPoint[] value) :29
void Context__set_ProxyEndpoints_fn(uArray* value)
{
    Context::ProxyEndpoints(value);
}

// public static generated Outracks.Simulator.Runtime.IReflection get_Reflection() :33
void Context__get_Reflection_fn(uObject** __retval)
{
    *__retval = Context::Reflection();
}

// public static generated void set_Reflection(Outracks.Simulator.Runtime.IReflection value) :33
void Context__set_Reflection_fn(uObject* value)
{
    Context::Reflection(value);
}

// public static void SetApp(Outracks.Simulator.Client.FakeApp app) :35
void Context__SetApp_fn(::g::Outracks::Simulator::Client::FakeApp* app)
{
    Context::SetApp(app);
}

// public static void SetGlobals(Uno.Net.IPEndPoint[] proxyEndpoints, string project, string[] defines) :40
void Context__SetGlobals_fn(uArray* proxyEndpoints, uString* project, uArray* defines)
{
    Context::SetGlobals(proxyEndpoints, project, defines);
}

uSStrong< ::g::Outracks::Simulator::Client::FakeApp*> Context::_App_;
uSStrong<uArray*> Context::_Defines_;
int Context::_InputMode_;
uSStrong<uString*> Context::_Project_;
uSStrong<uArray*> Context::_ProxyEndpoints_;
uSStrong<uObject*> Context::_Reflection_;

// public static void SetApp(Outracks.Simulator.Client.FakeApp app) [static] :35
void Context::SetApp(::g::Outracks::Simulator::Client::FakeApp* app)
{
    Context::App(app);
}

// public static void SetGlobals(Uno.Net.IPEndPoint[] proxyEndpoints, string project, string[] defines) [static] :40
void Context::SetGlobals(uArray* proxyEndpoints, uString* project, uArray* defines)
{
    Context::ProxyEndpoints(proxyEndpoints);
    Context::Project(project);
    Context::Defines(defines);
}

// public static generated Outracks.Simulator.Client.FakeApp get_App() [static] :28
::g::Outracks::Simulator::Client::FakeApp* Context::App()
{
    return Context::_App_;
}

// private static generated void set_App(Outracks.Simulator.Client.FakeApp value) [static] :28
void Context::App(::g::Outracks::Simulator::Client::FakeApp* value)
{
    Context::_App_ = value;
}

// public static generated string[] get_Defines() [static] :31
uArray* Context::Defines()
{
    return Context::_Defines_;
}

// private static generated void set_Defines(string[] value) [static] :31
void Context::Defines(uArray* value)
{
    Context::_Defines_ = value;
}

// public static generated Outracks.Simulator.Client.InputMode get_InputMode() [static] :27
int Context::InputMode()
{
    return Context::_InputMode_;
}

// private static generated void set_InputMode(Outracks.Simulator.Client.InputMode value) [static] :27
void Context::InputMode(int value)
{
    Context::_InputMode_ = value;
}

// public static generated string get_Project() [static] :30
uString* Context::Project()
{
    return Context::_Project_;
}

// private static generated void set_Project(string value) [static] :30
void Context::Project(uString* value)
{
    Context::_Project_ = value;
}

// public static generated Uno.Net.IPEndPoint[] get_ProxyEndpoints() [static] :29
uArray* Context::ProxyEndpoints()
{
    return Context::_ProxyEndpoints_;
}

// private static generated void set_ProxyEndpoints(Uno.Net.IPEndPoint[] value) [static] :29
void Context::ProxyEndpoints(uArray* value)
{
    Context::_ProxyEndpoints_ = value;
}

// public static generated Outracks.Simulator.Runtime.IReflection get_Reflection() [static] :33
uObject* Context::Reflection()
{
    return Context::_Reflection_;
}

// public static generated void set_Reflection(Outracks.Simulator.Runtime.IReflection value) [static] :33
void Context::Reflection(uObject* value)
{
    Context::_Reflection_ = value;
}
// }

// /usr/local/share/uno/Packages/Fuse.Preview.Core/0.1.0/ApplicationStates.uno
// ---------------------------------------------------------------------------

// internal sealed class DesignerNotRunning :471
// {
static void DesignerNotRunning_build(uType* type)
{
    ::STRINGS[12] = uString::Const("Fuse not running");
    ::STRINGS[13] = uString::Const("Please check that this project is open in Fuse on your computer.");
    ::STRINGS[9] = uString::Const("");
    ::STRINGS[10] = uString::Const("Change IP");
    ::STRINGS[14] = uString::Const("Try again");
    ::TYPES[37] = ::g::Outracks::Simulator::Client::DialogButton_typeof()->Array();
    type->SetFields(5);
}

::g::Outracks::Simulator::Client::State_type* DesignerNotRunning_typeof()
{
    static uSStrong< ::g::Outracks::Simulator::Client::State_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Outracks::Simulator::Client::ShowingModalDialog_typeof();
    options.FieldCount = 5;
    options.ObjectSize = sizeof(DesignerNotRunning);
    options.TypeSize = sizeof(::g::Outracks::Simulator::Client::State_type);
    type = (::g::Outracks::Simulator::Client::State_type*)uClassType::New("Outracks.Simulator.Client.DesignerNotRunning", options);
    type->fp_build_ = DesignerNotRunning_build;
    type->fp_ctor_ = (void*)DesignerNotRunning__New2_fn;
    return type;
}

// public DesignerNotRunning() :473
void DesignerNotRunning__ctor_2_fn(DesignerNotRunning* __this)
{
    __this->ctor_2();
}

// public DesignerNotRunning New() :473
void DesignerNotRunning__New2_fn(DesignerNotRunning** __retval)
{
    *__retval = DesignerNotRunning::New2();
}

// public DesignerNotRunning() [instance] :473
void DesignerNotRunning::ctor_2()
{
    uStackFrame __("Outracks.Simulator.Client.DesignerNotRunning", ".ctor()");
    ctor_1(::STRINGS[12/*"Fuse not ru...*/], ::STRINGS[13/*"Please chec...*/], ::STRINGS[9/*""*/], uArray::Init< ::g::Outracks::Simulator::Client::DialogButton*>(::TYPES[37/*Outracks.Simulator.Client.DialogButton[]*/], 2, (::g::Outracks::Simulator::Client::DialogButton*)::g::Outracks::Simulator::Client::DialogButton::New1(::STRINGS[10/*"Change IP"*/], ::g::Outracks::Simulator::Client::ChangeIp::New1(::STRINGS[9/*""*/])), (::g::Outracks::Simulator::Client::DialogButton*)::g::Outracks::Simulator::Client::DialogButton::New1(::STRINGS[14/*"Try again"*/], ::g::Outracks::Simulator::Client::ConnectingToProxy::New1())));
}

// public DesignerNotRunning New() [static] :473
DesignerNotRunning* DesignerNotRunning::New2()
{
    DesignerNotRunning* obj1 = (DesignerNotRunning*)uNew(DesignerNotRunning_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Preview.Core/0.1.0/ModalDialog.uno
// ---------------------------------------------------------------------

// internal sealed class DialogButton :231
// {
static void DialogButton_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(DialogButton, Text), 0,
        ::g::Outracks::Simulator::Client::State_typeof(), offsetof(DialogButton, Destination), 0);
}

uType* DialogButton_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(DialogButton);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Outracks.Simulator.Client.DialogButton", options);
    type->fp_build_ = DialogButton_build;
    return type;
}

// public DialogButton(string text, Outracks.Simulator.Client.State destination) :236
void DialogButton__ctor__fn(DialogButton* __this, uString* text, ::g::Outracks::Simulator::Client::State* destination)
{
    __this->ctor_(text, destination);
}

// public DialogButton New(string text, Outracks.Simulator.Client.State destination) :236
void DialogButton__New1_fn(uString* text, ::g::Outracks::Simulator::Client::State* destination, DialogButton** __retval)
{
    *__retval = DialogButton::New1(text, destination);
}

// public DialogButton(string text, Outracks.Simulator.Client.State destination) [instance] :236
void DialogButton::ctor_(uString* text, ::g::Outracks::Simulator::Client::State* destination)
{
    Text = text;
    Destination = destination;
}

// public DialogButton New(string text, Outracks.Simulator.Client.State destination) [static] :236
DialogButton* DialogButton::New1(uString* text, ::g::Outracks::Simulator::Client::State* destination)
{
    DialogButton* obj1 = (DialogButton*)uNew(DialogButton_typeof());
    obj1->ctor_(text, destination);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Preview.Core/0.1.0/ApplicationStates.uno
// ---------------------------------------------------------------------------

// internal static class Exceptions :397
// {
static void Exceptions_build(uType* type)
{
    ::TYPES[19] = ::g::Outracks::Simulator::ISimulatorClient_typeof();
    ::TYPES[38] = ::g::Uno::AggregateException_typeof();
    ::TYPES[39] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Exception_typeof(), NULL);
    ::TYPES[9] = ::g::Uno::Collections::IEnumerator_typeof();
    ::TYPES[40] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Uno::Exception_typeof(), NULL);
    ::TYPES[13] = ::g::Uno::IDisposable_typeof();
}

uClassType* Exceptions_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Outracks.Simulator.Client.Exceptions", options);
    type->fp_build_ = Exceptions_build;
    return type;
}

// public static void Send(Outracks.Simulator.ISimulatorClient client, Uno.Collections.List<Uno.Exception> exceptions) :399
void Exceptions__Send_fn(uObject* client, ::g::Uno::Collections::List* exceptions)
{
    Exceptions::Send(client, exceptions);
}

// public static Uno.Collections.List<Uno.Exception> Unpack(Uno.Exception e) :408
void Exceptions__Unpack_fn(::g::Uno::Exception* e, ::g::Uno::Collections::List** __retval)
{
    *__retval = Exceptions::Unpack(e);
}

// public static void Send(Outracks.Simulator.ISimulatorClient client, Uno.Collections.List<Uno.Exception> exceptions) [static] :399
void Exceptions::Send(uObject* client, ::g::Uno::Collections::List* exceptions)
{
    uStackFrame __("Outracks.Simulator.Client.Exceptions", "Send(Outracks.Simulator.ISimulatorClient,Uno.Collections.List<Uno.Exception>)");
    ::g::Uno::Exception* ret3;

    for (int i = 0; i < uPtr(exceptions)->Count(); ++i)
    {
        ::g::Uno::Exception* unpacked = (::g::Uno::Collections::List__get_Item_fn(uPtr(exceptions), uCRef<int>(i), &ret3), ret3);
        ::g::Outracks::Simulator::ISimulatorClient::Send(uInterface(uPtr(client), ::TYPES[19/*Outracks.Simulator.ISimulatorClient*/]), (uObject*)::g::Outracks::Simulator::Protocol::UnhandledException::New2(::g::Outracks::Simulator::Client::DeviceInfo::GUID(), ::g::Outracks::Simulator::Client::DeviceInfo::Name(), uPtr(unpacked)->Message(), uPtr(unpacked)->StackTrace(), uPtr(::g::Uno::Object::GetType(uPtr(unpacked)))->ToString()));
    }
}

// public static Uno.Collections.List<Uno.Exception> Unpack(Uno.Exception e) [static] :408
::g::Uno::Collections::List* Exceptions::Unpack(::g::Uno::Exception* e)
{
    uStackFrame __("Outracks.Simulator.Client.Exceptions", "Unpack(Uno.Exception)");
    ::g::Uno::Collections::List* collection2;
    ::g::Uno::Exception* ret4;

    if (uIs(e, ::TYPES[38/*Uno.AggregateException*/]))
    {
        ::g::Uno::AggregateException* aggregate = uCast< ::g::Uno::AggregateException*>(e, ::TYPES[38/*Uno.AggregateException*/]);
        ::g::Uno::Collections::List* exceptions = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[39/*Uno.Collections.List<Uno.Exception>*/]);
        uObject* enum1 = (uObject*)uPtr(uPtr(aggregate)->InnerExceptions())->GetEnumerator();

        try
        {
            {
                while (::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::TYPES[9/*Uno.Collections.IEnumerator*/])))
                {
                    ::g::Uno::Exception* inner = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[40/*Uno.Collections.IEnumerator<Uno.Exception>*/]), &ret4), ret4);
                    uPtr(exceptions)->AddRange((uObject*)Exceptions::Unpack(inner));
                }
            }
            {
                ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum1), ::TYPES[13/*Uno.IDisposable*/]));
            }
        }

        catch (const uThrowable& __t)
        {
            {
                ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum1), ::TYPES[13/*Uno.IDisposable*/]));
            }
                        throw __t;
        }

        return exceptions;
    }
    else if (uPtr(e)->InnerException() != NULL)
        return Exceptions::Unpack(uPtr(e)->InnerException());
    else
    {
        collection2 = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[39/*Uno.Collections.List<Uno.Exception>*/]);
        ::g::Uno::Collections::List__Add_fn(uPtr(collection2), e);
        return collection2;
    }
}
// }

// /usr/local/share/uno/Packages/Fuse.Preview.Core/0.1.0/ApplicationStates.uno
// ---------------------------------------------------------------------------

// internal sealed class FailedToConnect :459
// {
static void FailedToConnect_build(uType* type)
{
    ::STRINGS[15] = uString::Const("Failed to connect");
    ::STRINGS[16] = uString::Const("Please check that this device is connected to the same network as your computer.");
    ::STRINGS[10] = uString::Const("Change IP");
    ::STRINGS[9] = uString::Const("");
    ::STRINGS[14] = uString::Const("Try again");
    ::TYPES[37] = ::g::Outracks::Simulator::Client::DialogButton_typeof()->Array();
    type->SetFields(5);
}

::g::Outracks::Simulator::Client::State_type* FailedToConnect_typeof()
{
    static uSStrong< ::g::Outracks::Simulator::Client::State_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Outracks::Simulator::Client::ShowingModalDialog_typeof();
    options.FieldCount = 5;
    options.ObjectSize = sizeof(FailedToConnect);
    options.TypeSize = sizeof(::g::Outracks::Simulator::Client::State_type);
    type = (::g::Outracks::Simulator::Client::State_type*)uClassType::New("Outracks.Simulator.Client.FailedToConnect", options);
    type->fp_build_ = FailedToConnect_build;
    return type;
}

// public FailedToConnect(Uno.Exception exception) :461
void FailedToConnect__ctor_2_fn(FailedToConnect* __this, ::g::Uno::Exception* exception)
{
    __this->ctor_2(exception);
}

// public FailedToConnect New(Uno.Exception exception) :461
void FailedToConnect__New2_fn(::g::Uno::Exception* exception, FailedToConnect** __retval)
{
    *__retval = FailedToConnect::New2(exception);
}

// public FailedToConnect(Uno.Exception exception) [instance] :461
void FailedToConnect::ctor_2(::g::Uno::Exception* exception)
{
    uStackFrame __("Outracks.Simulator.Client.FailedToConnect", ".ctor(Uno.Exception)");
    ctor_1(::STRINGS[15/*"Failed to c...*/], ::STRINGS[16/*"Please chec...*/], uPtr(exception)->Message(), uArray::Init< ::g::Outracks::Simulator::Client::DialogButton*>(::TYPES[37/*Outracks.Simulator.Client.DialogButton[]*/], 2, (::g::Outracks::Simulator::Client::DialogButton*)::g::Outracks::Simulator::Client::DialogButton::New1(::STRINGS[10/*"Change IP"*/], ::g::Outracks::Simulator::Client::ChangeIp::New1(::STRINGS[9/*""*/])), (::g::Outracks::Simulator::Client::DialogButton*)::g::Outracks::Simulator::Client::DialogButton::New1(::STRINGS[14/*"Try again"*/], ::g::Outracks::Simulator::Client::ConnectingToProxy::New1())));
}

// public FailedToConnect New(Uno.Exception exception) [static] :461
FailedToConnect* FailedToConnect::New2(::g::Uno::Exception* exception)
{
    FailedToConnect* obj1 = (FailedToConnect*)uNew(FailedToConnect_typeof());
    obj1->ctor_2(exception);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Preview.Core/0.1.0/FakeApp.uno
// -----------------------------------------------------------------

// public sealed class FakeApp :19
// {
static void FakeApp_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface5),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface6),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface7),
        ::g::Fuse::ITemplateSource_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface8),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface9),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface10),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface11),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface12),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface13),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface14),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface15),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface16),
        ::g::Fuse::Drawing::ISurfaceDrawable_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface17));
    type->SetFields(116,
        ::g::Fuse::App_typeof(), offsetof(FakeApp, _app), 0);
    type->Reflection.SetFunctions(7,
        new uFunction("get_Background", NULL, (void*)FakeApp__get_Background1_fn, 0, false, ::g::Uno::Float4_typeof(), 0),
        new uFunction("set_Background", NULL, (void*)FakeApp__set_Background1_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float4_typeof()),
        new uFunction("get_ClearColor", NULL, (void*)FakeApp__get_ClearColor_fn, 0, false, ::g::Uno::Float4_typeof(), 0),
        new uFunction("set_ClearColor", NULL, (void*)FakeApp__set_ClearColor_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float4_typeof()),
        new uFunction(".ctor", NULL, (void*)FakeApp__New4_fn, 0, true, type, 1, ::g::Fuse::App_typeof()),
        new uFunction("get_Resources", NULL, (void*)FakeApp__get_Resources1_fn, 0, false, ::g::Uno::Collections::IList_typeof()->MakeType(::g::Uno::UX::Resource_typeof(), NULL), 0),
        new uFunction("get_RootViewport", NULL, (void*)FakeApp__get_RootViewport_fn, 0, false, ::g::Fuse::RootViewport_typeof(), 0));
}

::g::Fuse::Controls::Panel_type* FakeApp_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Panel_typeof();
    options.FieldCount = 117;
    options.InterfaceCount = 18;
    options.ObjectSize = sizeof(FakeApp);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("Outracks.Simulator.Client.FakeApp", options);
    type->fp_build_ = FakeApp_build;
    type->interface17.fp_Draw = (void(*)(uObject*, ::g::Fuse::Drawing::Surface*))::g::Fuse::Controls::Panel__FuseDrawingISurfaceDrawableDraw_fn;
    type->interface17.fp_get_IsPrimary = (void(*)(uObject*, bool*))::g::Fuse::Controls::Panel__FuseDrawingISurfaceDrawableget_IsPrimary_fn;
    type->interface17.fp_get_ElementSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Panel__FuseDrawingISurfaceDrawableget_ElementSize_fn;
    type->interface12.fp_Show = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIShowShow_fn;
    type->interface14.fp_Collapse = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsICollapseCollapse_fn;
    type->interface13.fp_Hide = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIHideHide_fn;
    type->interface16.fp_SetSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__FuseAnimationsIResizeSetSize_fn;
    type->interface15.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__FuseIActualPlacementget_ActualSize_fn;
    type->interface15.fp_get_ActualPosition = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__FuseIActualPlacementget_ActualPosition_fn;
    type->interface15.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface15.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface9.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Visual__UnoCollectionsIEnumerableFuseVisualGetEnumerator_fn;
    type->interface10.fp_Clear = (void(*)(uObject*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeClear_fn;
    type->interface10.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeContains_fn;
    type->interface6.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Visual__UnoCollectionsIListFuseNodeRemoveAt_fn;
    type->interface11.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Visual__UnoCollectionsIEnumerableFuseNodeGetEnumerator_fn;
    type->interface10.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeget_Count_fn;
    type->interface6.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Visual__UnoCollectionsIListFuseNodeget_Item_fn;
    type->interface6.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Visual__Insert1_fn;
    type->interface7.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))::g::Fuse::Controls::Control__OnPropertyChanged2_fn;
    type->interface8.fp_FindTemplate = (void(*)(uObject*, uString*, ::g::Uno::UX::Template**))::g::Fuse::Visual__FindTemplate_fn;
    type->interface10.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Visual__Add1_fn;
    type->interface10.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__Remove1_fn;
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

// public FakeApp(Fuse.App app) :23
void FakeApp__ctor_7_fn(FakeApp* __this, ::g::Fuse::App* app)
{
    __this->ctor_7(app);
}

// public new float4 get_Background() :30
void FakeApp__get_Background1_fn(FakeApp* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->Background1();
}

// public new void set_Background(float4 value) :31
void FakeApp__set_Background1_fn(FakeApp* __this, ::g::Uno::Float4* value)
{
    __this->Background1(*value);
}

// public float4 get_ClearColor() :41
void FakeApp__get_ClearColor_fn(FakeApp* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->ClearColor();
}

// public void set_ClearColor(float4 value) :42
void FakeApp__set_ClearColor_fn(FakeApp* __this, ::g::Uno::Float4* value)
{
    __this->ClearColor(*value);
}

// public FakeApp New(Fuse.App app) :23
void FakeApp__New4_fn(::g::Fuse::App* app, FakeApp** __retval)
{
    *__retval = FakeApp::New4(app);
}

// public new Uno.Collections.IList<Uno.UX.Resource> get_Resources() :36
void FakeApp__get_Resources1_fn(FakeApp* __this, uObject** __retval)
{
    *__retval = __this->Resources1();
}

// public Fuse.RootViewport get_RootViewport() :47
void FakeApp__get_RootViewport_fn(FakeApp* __this, ::g::Fuse::RootViewport** __retval)
{
    *__retval = __this->RootViewport();
}

// public FakeApp(Fuse.App app) [instance] :23
void FakeApp::ctor_7(::g::Fuse::App* app)
{
    ctor_6();
    _app = app;
}

// public new float4 get_Background() [instance] :30
::g::Uno::Float4 FakeApp::Background1()
{
    uStackFrame __("Outracks.Simulator.Client.FakeApp", "get_Background()");
    return uPtr(_app)->Background();
}

// public new void set_Background(float4 value) [instance] :31
void FakeApp::Background1(::g::Uno::Float4 value)
{
    uStackFrame __("Outracks.Simulator.Client.FakeApp", "set_Background(float4)");
    uPtr(_app)->Background(value);
}

// public float4 get_ClearColor() [instance] :41
::g::Uno::Float4 FakeApp::ClearColor()
{
    uStackFrame __("Outracks.Simulator.Client.FakeApp", "get_ClearColor()");
    return uPtr(_app)->Background();
}

// public void set_ClearColor(float4 value) [instance] :42
void FakeApp::ClearColor(::g::Uno::Float4 value)
{
    uStackFrame __("Outracks.Simulator.Client.FakeApp", "set_ClearColor(float4)");
    uPtr(_app)->Background(value);
}

// public new Uno.Collections.IList<Uno.UX.Resource> get_Resources() [instance] :36
uObject* FakeApp::Resources1()
{
    uStackFrame __("Outracks.Simulator.Client.FakeApp", "get_Resources()");
    return uPtr(_app)->Resources();
}

// public Fuse.RootViewport get_RootViewport() [instance] :47
::g::Fuse::RootViewport* FakeApp::RootViewport()
{
    uStackFrame __("Outracks.Simulator.Client.FakeApp", "get_RootViewport()");
    return uPtr(_app)->RootViewport();
}

// public FakeApp New(Fuse.App app) [static] :23
FakeApp* FakeApp::New4(::g::Fuse::App* app)
{
    FakeApp* obj1 = (FakeApp*)uNew(FakeApp_typeof());
    obj1->ctor_7(app);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Preview.Core/0.1.0/ApplicationStates.uno
// ---------------------------------------------------------------------------

// internal sealed class Faulted :432
// {
static void Faulted_build(uType* type)
{
    ::STRINGS[17] = uString::Const("Oops! Something went wrong here.");
    ::STRINGS[18] = uString::Const("\n"
        "\n"
        "Please refer to the log for details.");
    ::STRINGS[9] = uString::Const("");
    type->SetFields(5);
}

::g::Outracks::Simulator::Client::State_type* Faulted_typeof()
{
    static uSStrong< ::g::Outracks::Simulator::Client::State_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Outracks::Simulator::Client::ShowingModalDialog_typeof();
    options.FieldCount = 5;
    options.ObjectSize = sizeof(Faulted);
    options.TypeSize = sizeof(::g::Outracks::Simulator::Client::State_type);
    type = (::g::Outracks::Simulator::Client::State_type*)uClassType::New("Outracks.Simulator.Client.Faulted", options);
    type->fp_build_ = Faulted_build;
    return type;
}

// public Faulted(bool isOnline, Uno.Exception exception, Outracks.Simulator.Client.DialogButton[] buttons) :434
void Faulted__ctor_2_fn(Faulted* __this, bool* isOnline, ::g::Uno::Exception* exception, uArray* buttons)
{
    __this->ctor_2(*isOnline, exception, buttons);
}

// public Faulted New(bool isOnline, Uno.Exception exception, Outracks.Simulator.Client.DialogButton[] buttons) :434
void Faulted__New2_fn(bool* isOnline, ::g::Uno::Exception* exception, uArray* buttons, Faulted** __retval)
{
    *__retval = Faulted::New2(*isOnline, exception, buttons);
}

// public Faulted(bool isOnline, Uno.Exception exception, Outracks.Simulator.Client.DialogButton[] buttons) [instance] :434
void Faulted::ctor_2(bool isOnline, ::g::Uno::Exception* exception, uArray* buttons)
{
    uStackFrame __("Outracks.Simulator.Client.Faulted", ".ctor(bool,Uno.Exception,Outracks.Simulator.Client.DialogButton[])");
    ctor_1(::STRINGS[17/*"Oops! Somet...*/], ::g::Uno::String::op_Addition2(uPtr(exception)->Message(), isOnline ? ::STRINGS[18/*"\n\nPlease ...*/] : ::STRINGS[9/*""*/]), ::STRINGS[9/*""*/], buttons);
}

// public Faulted New(bool isOnline, Uno.Exception exception, Outracks.Simulator.Client.DialogButton[] buttons) [static] :434
Faulted* Faulted::New2(bool isOnline, ::g::Uno::Exception* exception, uArray* buttons)
{
    Faulted* obj1 = (Faulted*)uNew(Faulted_typeof());
    obj1->ctor_2(isOnline, exception, buttons);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Preview.Core/0.1.0/ApplicationStates.uno
// ---------------------------------------------------------------------------

// internal sealed class Idle :268
// {
static void Idle_build(uType* type)
{
    ::STRINGS[19] = uString::Const("Loading");
    ::STRINGS[20] = uString::Const("Starting project...");
    ::STRINGS[14] = uString::Const("Try again");
    ::TYPES[19] = ::g::Outracks::Simulator::ISimulatorClient_typeof();
    ::TYPES[37] = ::g::Outracks::Simulator::Client::DialogButton_typeof()->Array();
    type->SetFields(1);
}

::g::Outracks::Simulator::Client::Connected_type* Idle_typeof()
{
    static uSStrong< ::g::Outracks::Simulator::Client::Connected_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Outracks::Simulator::Client::Connected_typeof();
    options.FieldCount = 1;
    options.ObjectSize = sizeof(Idle);
    options.TypeSize = sizeof(::g::Outracks::Simulator::Client::Connected_type);
    type = (::g::Outracks::Simulator::Client::Connected_type*)uClassType::New("Outracks.Simulator.Client.Idle", options);
    type->fp_build_ = Idle_build;
    type->fp_OnEnterState = (void(*)(::g::Outracks::Simulator::Client::State*, ::g::Outracks::Simulator::Client::State**))Idle__OnEnterState_fn;
    type->fp_OnFaulted = (void(*)(::g::Outracks::Simulator::Client::Connected*, ::g::Uno::Exception*, ::g::Outracks::Simulator::Client::State**))Idle__OnFaulted_fn;
    return type;
}

// public Idle(Outracks.Simulator.ISimulatorClient client) :270
void Idle__ctor_2_fn(Idle* __this, uObject* client)
{
    __this->ctor_2(client);
}

// public Idle New(Outracks.Simulator.ISimulatorClient client) :270
void Idle__New1_fn(uObject* client, Idle** __retval)
{
    *__retval = Idle::New1(client);
}

// public override sealed Outracks.Simulator.Client.State OnEnterState() :274
void Idle__OnEnterState_fn(Idle* __this, ::g::Outracks::Simulator::Client::State** __retval)
{
    uStackFrame __("Outracks.Simulator.Client.Idle", "OnEnterState()");
    ::g::Outracks::Simulator::Client::State* ret2;
    ::g::Outracks::Simulator::Client::Connected__OnEnterState_fn(__this, &ret2);
    ::g::Outracks::Simulator::Client::LoadingScreen::Show(::g::Outracks::Simulator::Client::Context::App(), ::STRINGS[19/*"Loading"*/], ::STRINGS[20/*"Starting pr...*/]);
    return *__retval = __this, void();
}

// protected override sealed Outracks.Simulator.Client.State OnFaulted(Uno.Exception e) :281
void Idle__OnFaulted_fn(Idle* __this, ::g::Uno::Exception* e, ::g::Outracks::Simulator::Client::State** __retval)
{
    uStackFrame __("Outracks.Simulator.Client.Idle", "OnFaulted(Uno.Exception)");
    return *__retval = ::g::Outracks::Simulator::Client::Faulted::New2(::g::Outracks::Simulator::ISimulatorClient::IsOnline(uInterface(uPtr(__this->Client), ::TYPES[19/*Outracks.Simulator.ISimulatorClient*/])), e, uArray::Init< ::g::Outracks::Simulator::Client::DialogButton*>(::TYPES[37/*Outracks.Simulator.Client.DialogButton[]*/], 1, (::g::Outracks::Simulator::Client::DialogButton*)::g::Outracks::Simulator::Client::DialogButton::New1(::STRINGS[14/*"Try again"*/], __this))), void();
}

// public Idle(Outracks.Simulator.ISimulatorClient client) [instance] :270
void Idle::ctor_2(uObject* client)
{
    ctor_1(client);
}

// public Idle New(Outracks.Simulator.ISimulatorClient client) [static] :270
Idle* Idle::New1(uObject* client)
{
    Idle* obj1 = (Idle*)uNew(Idle_typeof());
    obj1->ctor_2(client);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Preview.Core/0.1.0/Context.uno
// -----------------------------------------------------------------

// public enum InputMode :19
uEnumType* InputMode_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Outracks.Simulator.Client.InputMode", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "Interactive", 0LL,
        "Design", 1LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Preview.Core/0.1.0/ModalDialog.uno
// ---------------------------------------------------------------------

// internal sealed class LoadingScreen :16
// {
static void LoadingScreen_build(uType* type)
{
    ::TYPES[11] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
}

uType* LoadingScreen_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(LoadingScreen);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Outracks.Simulator.Client.LoadingScreen", options);
    type->fp_build_ = LoadingScreen_build;
    type->fp_ctor_ = (void*)LoadingScreen__New1_fn;
    return type;
}

// public generated LoadingScreen() :16
void LoadingScreen__ctor__fn(LoadingScreen* __this)
{
    __this->ctor_();
}

// public generated LoadingScreen New() :16
void LoadingScreen__New1_fn(LoadingScreen** __retval)
{
    *__retval = LoadingScreen::New1();
}

// public static void Show(Outracks.Simulator.Client.FakeApp app, string header, string message) :18
void LoadingScreen__Show_fn(::g::Outracks::Simulator::Client::FakeApp* app, uString* header, uString* message)
{
    LoadingScreen::Show(app, header, message);
}

// public generated LoadingScreen() [instance] :16
void LoadingScreen::ctor_()
{
}

// public generated LoadingScreen New() [static] :16
LoadingScreen* LoadingScreen::New1()
{
    LoadingScreen* obj2 = (LoadingScreen*)uNew(LoadingScreen_typeof());
    obj2->ctor_();
    return obj2;
}

// public static void Show(Outracks.Simulator.Client.FakeApp app, string header, string message) [static] :18
void LoadingScreen::Show(::g::Outracks::Simulator::Client::FakeApp* app, uString* header, uString* message)
{
    uStackFrame __("Outracks.Simulator.Client.LoadingScreen", "Show(Outracks.Simulator.Client.FakeApp,string,string)");
    ::g::Outracks::Simulator::Client::Dialogs::LoadingScreen* collection1;
    uPtr(::g::Outracks::Simulator::Client::UserAppState::Default())->ApplyTo(app);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(app)->Children()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Node>*/]), (collection1 = ::g::Outracks::Simulator::Client::Dialogs::LoadingScreen::New4(), uPtr(collection1)->Header(header), header, uPtr(collection1)->Message(message), message, collection1));
}
// }

// /usr/local/share/uno/Packages/Fuse.Preview.Core/0.1.0/ModalDialog.uno
// ---------------------------------------------------------------------

// internal sealed class ModalDialog :30
// {
static void ModalDialog_build(uType* type)
{
    ::TYPES[41] = ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(9/*ToArray<Fuse.Controls.Control>*/, ::g::Fuse::Controls::Control_typeof(), NULL);
    ::TYPES[11] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[42] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Controls::Control_typeof(), NULL);
    ::TYPES[9] = ::g::Uno::Collections::IEnumerator_typeof();
    ::TYPES[43] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Fuse::Controls::Control_typeof(), NULL);
    ::TYPES[13] = ::g::Uno::IDisposable_typeof();
}

uType* ModalDialog_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(ModalDialog);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Outracks.Simulator.Client.ModalDialog", options);
    type->fp_build_ = ModalDialog_build;
    type->fp_ctor_ = (void*)ModalDialog__New1_fn;
    return type;
}

// public generated ModalDialog() :30
void ModalDialog__ctor__fn(ModalDialog* __this)
{
    __this->ctor_();
}

// public generated ModalDialog New() :30
void ModalDialog__New1_fn(ModalDialog** __retval)
{
    *__retval = ModalDialog::New1();
}

// public static void Show(Outracks.Simulator.Client.FakeApp app, string header, string body, string details, Uno.Collections.IEnumerable<Fuse.Controls.Control> buttons) :76
void ModalDialog__Show_fn(::g::Outracks::Simulator::Client::FakeApp* app, uString* header, uString* body, uString* details, uObject* buttons)
{
    ModalDialog::Show(app, header, body, details, buttons);
}

// public static void ShowPrompt(Outracks.Simulator.Client.FakeApp app, string header, string body, Fuse.Controls.Control inputControl, Uno.Collections.IEnumerable<Fuse.Controls.Control> buttons) :32
void ModalDialog__ShowPrompt_fn(::g::Outracks::Simulator::Client::FakeApp* app, uString* header, uString* body, ::g::Fuse::Controls::Control* inputControl, uObject* buttons)
{
    ModalDialog::ShowPrompt(app, header, body, inputControl, buttons);
}

// public generated ModalDialog() [instance] :30
void ModalDialog::ctor_()
{
}

// public generated ModalDialog New() [static] :30
ModalDialog* ModalDialog::New1()
{
    ModalDialog* obj15 = (ModalDialog*)uNew(ModalDialog_typeof());
    obj15->ctor_();
    return obj15;
}

// public static void Show(Outracks.Simulator.Client.FakeApp app, string header, string body, string details, Uno.Collections.IEnumerable<Fuse.Controls.Control> buttons) [static] :76
void ModalDialog::Show(::g::Outracks::Simulator::Client::FakeApp* app, uString* header, uString* body, uString* details, uObject* buttons)
{
    uStackFrame __("Outracks.Simulator.Client.ModalDialog", "Show(Outracks.Simulator.Client.FakeApp,string,string,string,Uno.Collections.IEnumerable<Fuse.Controls.Control>)");
    ::g::Outracks::Simulator::Client::Dialogs::ModalDialog* collection7;
    collection7 = ::g::Outracks::Simulator::Client::Dialogs::ModalDialog::New4();
    uPtr(collection7)->Header(header);
    header;
    uPtr(collection7)->Body(body);
    body;
    uPtr(collection7)->Details(details);
    details;
    ::g::Outracks::Simulator::Client::Dialogs::ModalDialog* dialog = collection7;
    uArray* buttonArray = (uArray*)::g::Uno::Collections::EnumerableExtensions::ToArray(::TYPES[41/*Uno.Collections.EnumerableExtensions.ToArray<Fuse.Controls.Control>*/], buttons);
    uPtr(uPtr(dialog)->ButtonGrid)->ColumnCount(uPtr(buttonArray)->Length());

    for (int index9 = 0, length10 = buttonArray->Length(); index9 < length10; ++index9)
    {
        ::g::Fuse::Controls::Control* btn = uPtr(buttonArray)->Strong< ::g::Fuse::Controls::Control*>(index9);
        ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(uPtr(dialog)->ButtonGrid)->Children()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Node>*/]), btn);
    }

    uPtr(::g::Outracks::Simulator::Client::UserAppState::Default())->ApplyTo(::g::Outracks::Simulator::Client::Context::App());
    ::g::Uno::Collections::ICollection::Clear(uInterface(uPtr(uPtr(app)->Children()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Node>*/]));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(app->Children()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Node>*/]), dialog);
}

// public static void ShowPrompt(Outracks.Simulator.Client.FakeApp app, string header, string body, Fuse.Controls.Control inputControl, Uno.Collections.IEnumerable<Fuse.Controls.Control> buttons) [static] :32
void ModalDialog::ShowPrompt(::g::Outracks::Simulator::Client::FakeApp* app, uString* header, uString* body, ::g::Fuse::Controls::Control* inputControl, uObject* buttons)
{
    uStackFrame __("Outracks.Simulator.Client.ModalDialog", "ShowPrompt(Outracks.Simulator.Client.FakeApp,string,string,Fuse.Controls.Control,Uno.Collections.IEnumerable<Fuse.Controls.Control>)");
    ::g::Fuse::Controls::StackPanel* collection1;
    ::g::Uno::Float4 ind11;
    uObject* array2;
    ::g::Fuse::Controls::Text* collection3;
    ::g::Uno::Float4 ind12;
    ::g::Fuse::Controls::Text* collection4;
    ::g::Uno::Float4 ind13;
    ::g::Fuse::Controls::StackPanel* collection5;
    ::g::Uno::Float4 ind14;
    ::g::Fuse::Controls::Control* ret16;
    collection1 = ::g::Fuse::Controls::StackPanel::New4();
    uPtr(collection1)->Alignment(10);
    10;
    ind11 = ::g::Uno::Float4__New1(40.0f);
    uPtr(collection1)->Padding(ind11);
    ind11;
    array2 = uPtr(collection1)->Children();
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(array2), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Node>*/]), (collection3 = ::g::Fuse::Controls::Text::New3(), ind12 = ::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 20.0f), uPtr(collection3)->Margin(ind12), ind12, uPtr(collection3)->Value(header), header, uPtr(collection3)->FontSize(40.0f), 40.0f, uPtr(collection3)->TextAlignment(1), 1, uPtr(collection3)->TextWrapping(1), 1, collection3));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(array2), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Node>*/]), (collection4 = ::g::Fuse::Controls::Text::New3(), ind13 = ::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 20.0f), uPtr(collection4)->Margin(ind13), ind13, uPtr(collection4)->Value(body), body, uPtr(collection4)->TextWrapping(1), 1, collection4));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(array2), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Node>*/]), inputControl);
    ::g::Fuse::Controls::StackPanel* stackPanel = collection1;
    collection5 = ::g::Fuse::Controls::StackPanel::New4();
    ind14 = ::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 20.0f);
    uPtr(collection5)->Margin(ind14);
    ind14;
    uPtr(collection5)->Orientation(0);
    0;
    uPtr(collection5)->Alignment(10);
    10;
    ::g::Fuse::Controls::StackPanel* buttonPanel = collection5;
    uObject* enum6 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(buttons), ::TYPES[42/*Uno.Collections.IEnumerable<Fuse.Controls.Control>*/]));

    try
    {
        {
            while (::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum6), ::TYPES[9/*Uno.Collections.IEnumerator*/])))
            {
                ::g::Fuse::Controls::Control* btn = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum6), ::TYPES[43/*Uno.Collections.IEnumerator<Fuse.Controls.Control>*/]), &ret16), ret16);
                ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(buttonPanel)->Children()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Node>*/]), btn);
            }
        }
        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum6), ::TYPES[13/*Uno.IDisposable*/]));
        }
    }

    catch (const uThrowable& __t)
    {
        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum6), ::TYPES[13/*Uno.IDisposable*/]));
        }
                throw __t;
    }

    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(stackPanel)->Children()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Node>*/]), buttonPanel);
    ::g::Fuse::Controls::ClientPanel* root = ::g::Fuse::Controls::ClientPanel::New5();
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(root->Children()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Node>*/]), stackPanel);
    uPtr(::g::Outracks::Simulator::Client::UserAppState::Default())->ApplyTo(::g::Outracks::Simulator::Client::Context::App());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(app)->Children()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Node>*/]), root);
}
// }

// /usr/local/share/uno/Packages/Fuse.Preview.Core/0.1.0/ApplicationStates.uno
// ---------------------------------------------------------------------------

// internal sealed class Reifying :288
// {
static void Reifying_build(uType* type)
{
    ::STRINGS[14] = uString::Const("Try again");
    ::TYPES[32] = uObject_typeof()->Array();
    ::TYPES[19] = ::g::Outracks::Simulator::ISimulatorClient_typeof();
    ::TYPES[37] = ::g::Outracks::Simulator::Client::DialogButton_typeof()->Array();
    type->SetFields(1,
        ::g::Outracks::Simulator::Protocol::BytecodeGenerated_typeof(), offsetof(Reifying, _reify), 0);
}

::g::Outracks::Simulator::Client::Connected_type* Reifying_typeof()
{
    static uSStrong< ::g::Outracks::Simulator::Client::Connected_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Outracks::Simulator::Client::Connected_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(Reifying);
    options.TypeSize = sizeof(::g::Outracks::Simulator::Client::Connected_type);
    type = (::g::Outracks::Simulator::Client::Connected_type*)uClassType::New("Outracks.Simulator.Client.Reifying", options);
    type->fp_build_ = Reifying_build;
    type->fp_OnEnterState = (void(*)(::g::Outracks::Simulator::Client::State*, ::g::Outracks::Simulator::Client::State**))Reifying__OnEnterState_fn;
    type->fp_OnFaulted = (void(*)(::g::Outracks::Simulator::Client::Connected*, ::g::Uno::Exception*, ::g::Outracks::Simulator::Client::State**))Reifying__OnFaulted_fn;
    return type;
}

// public Reifying(Outracks.Simulator.ISimulatorClient client, Outracks.Simulator.Protocol.BytecodeGenerated reify) :292
void Reifying__ctor_2_fn(Reifying* __this, uObject* client, ::g::Outracks::Simulator::Protocol::BytecodeGenerated* reify)
{
    __this->ctor_2(client, reify);
}

// public Reifying New(Outracks.Simulator.ISimulatorClient client, Outracks.Simulator.Protocol.BytecodeGenerated reify) :292
void Reifying__New1_fn(uObject* client, ::g::Outracks::Simulator::Protocol::BytecodeGenerated* reify, Reifying** __retval)
{
    *__retval = Reifying::New1(client, reify);
}

// public override sealed Outracks.Simulator.Client.State OnEnterState() :298
void Reifying__OnEnterState_fn(Reifying* __this, ::g::Outracks::Simulator::Client::State** __retval)
{
    uStackFrame __("Outracks.Simulator.Client.Reifying", "OnEnterState()");
    ::g::Outracks::Simulator::Client::State* ret2;
    ::g::Outracks::Simulator::Client::Connected__OnEnterState_fn(__this, &ret2);
    __this->DismissAllActiveDiagnostics();
    uObject* previousState = NULL;

    if (uPtr(::g::Outracks::Simulator::Client::Context::App())->RootViewport() != NULL)
        previousState = uPtr(uPtr(::g::Outracks::Simulator::Client::Context::App())->RootViewport())->SavePreviewState();

    uPtr(::g::Outracks::Simulator::Client::UserAppState::Default())->ApplyTo(::g::Outracks::Simulator::Client::Context::App());

    if (uPtr(::g::Outracks::Simulator::Client::Context::App())->RootViewport() != NULL)
        uPtr(uPtr(::g::Outracks::Simulator::Client::Context::App())->RootViewport())->RestorePreviewState(previousState);

    ::g::Outracks::Simulator::Client::VirtualMachine::Execute(uPtr(uPtr(__this->_reify)->Bytecode())->Reify, uArray::Init<uObject*>(::TYPES[32/*object[]*/], 1, (::g::Outracks::Simulator::Client::FakeApp*)::g::Outracks::Simulator::Client::Context::App()));
    ::g::Outracks::Simulator::Client::UserAppState* userState = ::g::Outracks::Simulator::Client::UserAppState::Save(::g::Outracks::Simulator::Client::Context::App());
    ::g::Outracks::UnoHost::BinaryMessageInbox::Send((uObject*)::g::Outracks::Simulator::Protocol::Ready::New1());
    return *__retval = ::g::Outracks::Simulator::Client::Running::New1(__this->Client, userState, __this->_reify), void();
}

// protected override sealed Outracks.Simulator.Client.State OnFaulted(Uno.Exception e) :320
void Reifying__OnFaulted_fn(Reifying* __this, ::g::Uno::Exception* e, ::g::Outracks::Simulator::Client::State** __retval)
{
    uStackFrame __("Outracks.Simulator.Client.Reifying", "OnFaulted(Uno.Exception)");
    return *__retval = ::g::Outracks::Simulator::Client::Faulted::New2(::g::Outracks::Simulator::ISimulatorClient::IsOnline(uInterface(uPtr(__this->Client), ::TYPES[19/*Outracks.Simulator.ISimulatorClient*/])), e, uArray::Init< ::g::Outracks::Simulator::Client::DialogButton*>(::TYPES[37/*Outracks.Simulator.Client.DialogButton[]*/], 1, (::g::Outracks::Simulator::Client::DialogButton*)::g::Outracks::Simulator::Client::DialogButton::New1(::STRINGS[14/*"Try again"*/], ::g::Outracks::Simulator::Client::ConnectingToProxy::New1()))), void();
}

// public Reifying(Outracks.Simulator.ISimulatorClient client, Outracks.Simulator.Protocol.BytecodeGenerated reify) [instance] :292
void Reifying::ctor_2(uObject* client, ::g::Outracks::Simulator::Protocol::BytecodeGenerated* reify)
{
    ctor_1(client);
    _reify = reify;
}

// public Reifying New(Outracks.Simulator.ISimulatorClient client, Outracks.Simulator.Protocol.BytecodeGenerated reify) [static] :292
Reifying* Reifying::New1(uObject* client, ::g::Outracks::Simulator::Protocol::BytecodeGenerated* reify)
{
    Reifying* obj1 = (Reifying*)uNew(Reifying_typeof());
    obj1->ctor_2(client, reify);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Preview.Core/0.1.0/ApplicationStates.uno
// ---------------------------------------------------------------------------

// internal sealed class Running :343
// {
static void Running_build(uType* type)
{
    ::STRINGS[21] = uString::Const("Restart");
    ::STRINGS[22] = uString::Const("Density changed, reifying");
    ::STRINGS[23] = uString::Const("/usr/local/share/uno/Packages/Fuse.Preview.Core/0.1.0/ApplicationStates.uno");
    ::TYPES[19] = ::g::Outracks::Simulator::ISimulatorClient_typeof();
    ::TYPES[37] = ::g::Outracks::Simulator::Client::DialogButton_typeof()->Array();
    type->SetDependencies(
        ::g::Uno::Diagnostics::Debug_typeof());
    type->SetFields(1,
        ::g::Outracks::Simulator::Protocol::BytecodeGenerated_typeof(), offsetof(Running, _runningReify), 0,
        ::g::Uno::Float_typeof(), offsetof(Running, _zoomWhenRooted), 0,
        ::g::Outracks::Simulator::Client::UserAppState_typeof(), offsetof(Running, _userApp), 0);
}

::g::Outracks::Simulator::Client::Connected_type* Running_typeof()
{
    static uSStrong< ::g::Outracks::Simulator::Client::Connected_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Outracks::Simulator::Client::Connected_typeof();
    options.FieldCount = 4;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(Running);
    options.TypeSize = sizeof(::g::Outracks::Simulator::Client::Connected_type);
    type = (::g::Outracks::Simulator::Client::Connected_type*)uClassType::New("Outracks.Simulator.Client.Running", options);
    type->fp_build_ = Running_build;
    type->fp_OnEnterState = (void(*)(::g::Outracks::Simulator::Client::State*, ::g::Outracks::Simulator::Client::State**))Running__OnEnterState_fn;
    type->fp_OnFaulted = (void(*)(::g::Outracks::Simulator::Client::Connected*, ::g::Uno::Exception*, ::g::Outracks::Simulator::Client::State**))Running__OnFaulted_fn;
    type->fp_OnLeaveState = (void(*)(::g::Outracks::Simulator::Client::State*))Running__OnLeaveState_fn;
    type->fp_OnUpdate = (void(*)(::g::Outracks::Simulator::Client::State*, ::g::Outracks::Simulator::Client::State**))Running__OnUpdate_fn;
    return type;
}

// public Running(Outracks.Simulator.ISimulatorClient client, Outracks.Simulator.Client.UserAppState userApp, Outracks.Simulator.Protocol.BytecodeGenerated runningReify) :350
void Running__ctor_2_fn(Running* __this, uObject* client, ::g::Outracks::Simulator::Client::UserAppState* userApp, ::g::Outracks::Simulator::Protocol::BytecodeGenerated* runningReify)
{
    __this->ctor_2(client, userApp, runningReify);
}

// public Running New(Outracks.Simulator.ISimulatorClient client, Outracks.Simulator.Client.UserAppState userApp, Outracks.Simulator.Protocol.BytecodeGenerated runningReify) :350
void Running__New1_fn(uObject* client, ::g::Outracks::Simulator::Client::UserAppState* userApp, ::g::Outracks::Simulator::Protocol::BytecodeGenerated* runningReify, Running** __retval)
{
    *__retval = Running::New1(client, userApp, runningReify);
}

// public override sealed Outracks.Simulator.Client.State OnEnterState() :360
void Running__OnEnterState_fn(Running* __this, ::g::Outracks::Simulator::Client::State** __retval)
{
    uStackFrame __("Outracks.Simulator.Client.Running", "OnEnterState()");
    ::g::Outracks::Simulator::Client::State* ret2;
    ::g::Outracks::Simulator::Client::Connected__OnEnterState_fn(__this, &ret2);
    uPtr(__this->_userApp)->ApplyTo(::g::Outracks::Simulator::Client::Context::App());
    __this->_zoomWhenRooted = Running::QueryDensity();
    return *__retval = __this, void();
}

// protected override sealed Outracks.Simulator.Client.State OnFaulted(Uno.Exception e) :386
void Running__OnFaulted_fn(Running* __this, ::g::Uno::Exception* e, ::g::Outracks::Simulator::Client::State** __retval)
{
    uStackFrame __("Outracks.Simulator.Client.Running", "OnFaulted(Uno.Exception)");
    return *__retval = ::g::Outracks::Simulator::Client::Faulted::New2(::g::Outracks::Simulator::ISimulatorClient::IsOnline(uInterface(uPtr(__this->Client), ::TYPES[19/*Outracks.Simulator.ISimulatorClient*/])), e, uArray::Init< ::g::Outracks::Simulator::Client::DialogButton*>(::TYPES[37/*Outracks.Simulator.Client.DialogButton[]*/], 1, (::g::Outracks::Simulator::Client::DialogButton*)::g::Outracks::Simulator::Client::DialogButton::New1(::STRINGS[21/*"Restart"*/], ::g::Outracks::Simulator::Client::ConnectingToProxy::New1()))), void();
}

// public override sealed void OnLeaveState() :368
void Running__OnLeaveState_fn(Running* __this)
{
    uStackFrame __("Outracks.Simulator.Client.Running", "OnLeaveState()");
    ::g::Outracks::Simulator::Client::Connected__OnLeaveState_fn(__this);
    __this->_userApp = ::g::Outracks::Simulator::Client::UserAppState::Save(::g::Outracks::Simulator::Client::Context::App());
}

// public override sealed Outracks.Simulator.Client.State OnUpdate() :374
void Running__OnUpdate_fn(Running* __this, ::g::Outracks::Simulator::Client::State** __retval)
{
    uStackFrame __("Outracks.Simulator.Client.Running", "OnUpdate()");
    ::g::Outracks::Simulator::Client::State* ret3;
    float currentZoom = Running::QueryDensity();

    if (currentZoom != __this->_zoomWhenRooted)
    {
        ::g::Uno::Diagnostics::Debug::Log5(::STRINGS[22/*"Density cha...*/], 0, ::STRINGS[23/*"/usr/local/...*/], 379);
        return *__retval = ::g::Outracks::Simulator::Client::Reifying::New1(__this->Client, __this->_runningReify), void();
    }

    return *__retval = (::g::Outracks::Simulator::Client::Connected__OnUpdate_fn(__this, &ret3), ret3), void();
}

// private static float QueryDensity() :391
void Running__QueryDensity_fn(float* __retval)
{
    *__retval = Running::QueryDensity();
}

// public Running(Outracks.Simulator.ISimulatorClient client, Outracks.Simulator.Client.UserAppState userApp, Outracks.Simulator.Protocol.BytecodeGenerated runningReify) [instance] :350
void Running::ctor_2(uObject* client, ::g::Outracks::Simulator::Client::UserAppState* userApp, ::g::Outracks::Simulator::Protocol::BytecodeGenerated* runningReify)
{
    ctor_1(client);
    _userApp = userApp;
    _runningReify = runningReify;
}

// public Running New(Outracks.Simulator.ISimulatorClient client, Outracks.Simulator.Client.UserAppState userApp, Outracks.Simulator.Protocol.BytecodeGenerated runningReify) [static] :350
Running* Running::New1(uObject* client, ::g::Outracks::Simulator::Client::UserAppState* userApp, ::g::Outracks::Simulator::Protocol::BytecodeGenerated* runningReify)
{
    Running* obj1 = (Running*)uNew(Running_typeof());
    obj1->ctor_2(client, userApp, runningReify);
    return obj1;
}

// private static float QueryDensity() [static] :391
float Running::QueryDensity()
{
    uStackFrame __("Outracks.Simulator.Client.Running", "QueryDensity()");
    return uPtr(::g::Uno::Platform::Displays::MainDisplay())->Density();
}
// }

// /usr/local/share/uno/Packages/Fuse.Preview.Core/0.1.0/ModalDialog.uno
// ---------------------------------------------------------------------

// internal class ShowingModalDialog :169
// {
static void ShowingModalDialog_build(uType* type)
{
    ::STRINGS[24] = uString::Const("/usr/local/share/uno/Packages/Fuse.Preview.Core/0.1.0/ModalDialog.uno");
    ::TYPES[44] = ::g::Outracks::Optional_typeof()->MakeMethod(3/*Some<Outracks.Simulator.Client.DialogButton>*/, ::g::Outracks::Simulator::Client::DialogButton_typeof(), NULL);
    ::TYPES[45] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Controls::Control_typeof(), NULL);
    ::TYPES[46] = ::g::Outracks::Simulator::Closure_typeof()->MakeMethod(0/*Apply<Outracks.Simulator.Client.DialogButton>*/, ::g::Outracks::Simulator::Client::DialogButton_typeof(), NULL);
    ::TYPES[47] = ::g::Uno::Action1_typeof()->MakeType(::g::Outracks::Simulator::Client::DialogButton_typeof(), NULL);
    ::TYPES[48] = ::g::Fuse::Gestures::ClickedHandler_typeof();
    ::TYPES[49] = ::g::Outracks::Simulator::ForgetAction1_typeof()->MakeType(uObject_typeof(), ::g::Fuse::Gestures::ClickedArgs_typeof(), NULL);
    ::TYPES[50] = ::g::Outracks::Optional1_typeof()->MakeType(::g::Outracks::Simulator::Client::DialogButton_typeof(), NULL);
    type->SetDependencies(
        ::g::Uno::Diagnostics::Debug_typeof());
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(ShowingModalDialog, _header), 0,
        ::g::Uno::String_typeof(), offsetof(ShowingModalDialog, _body), 0,
        ::g::Uno::String_typeof(), offsetof(ShowingModalDialog, _details), 0,
        ::g::Outracks::Simulator::Client::DialogButton_typeof()->Array(), offsetof(ShowingModalDialog, _buttons), 0,
        ::TYPES[50/*Outracks.Optional<Outracks.Simulator.Client.DialogButton>*/], (uintptr_t)0, uFieldFlagsConstrained);
}

::g::Outracks::Simulator::Client::State_type* ShowingModalDialog_typeof()
{
    static uSStrong< ::g::Outracks::Simulator::Client::State_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Outracks::Simulator::Client::State_typeof();
    options.FieldCount = 5;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(ShowingModalDialog);
    options.TypeSize = sizeof(::g::Outracks::Simulator::Client::State_type);
    type = (::g::Outracks::Simulator::Client::State_type*)uClassType::New("Outracks.Simulator.Client.ShowingModalDialog", options);
    type->fp_build_ = ShowingModalDialog_build;
    type->fp_OnEnterState = (void(*)(::g::Outracks::Simulator::Client::State*, ::g::Outracks::Simulator::Client::State**))ShowingModalDialog__OnEnterState_fn;
    type->fp_OnException = (void(*)(::g::Outracks::Simulator::Client::State*, ::g::Uno::Exception*, ::g::Outracks::Simulator::Client::State**))ShowingModalDialog__OnException_fn;
    type->fp_OnUpdate = (void(*)(::g::Outracks::Simulator::Client::State*, ::g::Outracks::Simulator::Client::State**))ShowingModalDialog__OnUpdate_fn;
    return type;
}

// public ShowingModalDialog(string header, string body, string details, Outracks.Simulator.Client.DialogButton[] buttons) :178
void ShowingModalDialog__ctor_1_fn(ShowingModalDialog* __this, uString* header, uString* body, uString* details, uArray* buttons)
{
    __this->ctor_1(header, body, details, buttons);
}

// public ShowingModalDialog New(string header, string body, string details, Outracks.Simulator.Client.DialogButton[] buttons) :178
void ShowingModalDialog__New1_fn(uString* header, uString* body, uString* details, uArray* buttons, ShowingModalDialog** __retval)
{
    *__retval = ShowingModalDialog::New1(header, body, details, buttons);
}

// private void OnButtonClicked(Outracks.Simulator.Client.DialogButton button) :211
void ShowingModalDialog__OnButtonClicked_fn(ShowingModalDialog* __this, ::g::Outracks::Simulator::Client::DialogButton* button)
{
    __this->OnButtonClicked(button);
}

// public override sealed Outracks.Simulator.Client.State OnEnterState() :190
void ShowingModalDialog__OnEnterState_fn(ShowingModalDialog* __this, ::g::Outracks::Simulator::Client::State** __retval)
{
    uStackFrame __("Outracks.Simulator.Client.ShowingModalDialog", "OnEnterState()");
    uArray* array1;
    int index2;
    int length3;
    ::g::Fuse::Controls::Button* collection4;
    uString* ind5;
    uDelegate* ret8;
    ::g::Uno::Collections::List* buttons = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[45/*Uno.Collections.List<Fuse.Controls.Control>*/]);

    for (array1 = __this->_buttons, index2 = 0, length3 = uPtr(array1)->Length(); index2 < length3; ++index2)
    {
        ::g::Outracks::Simulator::Client::DialogButton* button = uPtr(array1)->Strong< ::g::Outracks::Simulator::Client::DialogButton*>(index2);
        collection4 = ::g::Fuse::Controls::Button::New5();
        ind5 = uPtr(button)->Text;
        uPtr(collection4)->Text(ind5);
        ind5;
        ::g::Fuse::Controls::Button* node = collection4;
        uDelegate* action = (::g::Outracks::Simulator::Closure__Apply_fn(::TYPES[46/*Outracks.Simulator.Closure.Apply<Outracks.Simulator.Client.DialogButton>*/], uDelegate::New(::TYPES[47/*Uno.Action<Outracks.Simulator.Client.DialogButton>*/], (void*)ShowingModalDialog__OnButtonClicked_fn, __this), button, &ret8), ret8);
        uDelegate* handler = uDelegate::New(::TYPES[48/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Outracks::Simulator::ForgetAction1__Execute_fn, (::g::Outracks::Simulator::ForgetAction1*)::g::Outracks::Simulator::ForgetAction1::New1(::TYPES[49/*Outracks.Simulator.ForgetAction<object, Fuse.Gestures.ClickedArgs>*/], action));
        ::g::Fuse::Gestures::Clicked::AddHandler(node, handler);
        ::g::Uno::Collections::List__Add_fn(uPtr(buttons), node);
    }

    ::g::Outracks::Simulator::Client::ModalDialog::Show(::g::Outracks::Simulator::Client::Context::App(), __this->_header, __this->_body, __this->_details, (uObject*)buttons);
    return *__retval = __this, void();
}

// public override sealed Outracks.Simulator.Client.State OnException(Uno.Exception e) :224
void ShowingModalDialog__OnException_fn(ShowingModalDialog* __this, ::g::Uno::Exception* e, ::g::Outracks::Simulator::Client::State** __retval)
{
    uStackFrame __("Outracks.Simulator.Client.ShowingModalDialog", "OnException(Uno.Exception)");
    ::g::Uno::Diagnostics::Debug::Log5(uPtr(e)->Message(), 0, ::STRINGS[24/*"/usr/local/...*/], 226);
    return *__retval = __this, void();
}

// public override sealed Outracks.Simulator.Client.State OnUpdate() :216
void ShowingModalDialog__OnUpdate_fn(ShowingModalDialog* __this, ::g::Outracks::Simulator::Client::State** __retval)
{
    uStackFrame __("Outracks.Simulator.Client.ShowingModalDialog", "OnUpdate()");

    if (__this->_clickedButton().Value< ::g::Outracks::Optional1<uStrong< ::g::Outracks::Simulator::Client::DialogButton*> > >().HasValue(::TYPES[50/*Outracks.Optional<Outracks.Simulator.Client.DialogButton>*/]))
        return *__retval = uPtr(__this->_clickedButton().Value< ::g::Outracks::Optional1<uStrong< ::g::Outracks::Simulator::Client::DialogButton*> > >().Value(::TYPES[50/*Outracks.Optional<Outracks.Simulator.Client.DialogButton>*/]))->Destination, void();

    return *__retval = __this, void();
}

// public ShowingModalDialog(string header, string body, string details, Outracks.Simulator.Client.DialogButton[] buttons) [instance] :178
void ShowingModalDialog::ctor_1(uString* header, uString* body, uString* details, uArray* buttons)
{
    ctor_();
    _header = header;
    _body = body;
    _details = details;
    _buttons = buttons;
}

// private void OnButtonClicked(Outracks.Simulator.Client.DialogButton button) [instance] :211
void ShowingModalDialog::OnButtonClicked(::g::Outracks::Simulator::Client::DialogButton* button)
{
    ::g::Outracks::Optional1<uStrong< ::g::Outracks::Simulator::Client::DialogButton*> > ret7;
    _clickedButton().Value< ::g::Outracks::Optional1<uStrong< ::g::Outracks::Simulator::Client::DialogButton*> > >() = (::g::Outracks::Optional__Some_fn(::TYPES[44/*Outracks.Optional.Some<Outracks.Simulator.Client.DialogButton>*/], button, &ret7), ret7);
}

// public ShowingModalDialog New(string header, string body, string details, Outracks.Simulator.Client.DialogButton[] buttons) [static] :178
ShowingModalDialog* ShowingModalDialog::New1(uString* header, uString* body, uString* details, uArray* buttons)
{
    ShowingModalDialog* obj6 = (ShowingModalDialog*)uNew(ShowingModalDialog_typeof());
    obj6->ctor_1(header, body, details, buttons);
    return obj6;
}
// }

// /usr/local/share/uno/Packages/Fuse.Preview.Core/0.1.0/ModalDialog.uno
// ---------------------------------------------------------------------

// internal abstract class ShowingPrompt :98
// {
static void ShowingPrompt_build(uType* type)
{
    ::STRINGS[25] = uString::Const("Ok");
    ::STRINGS[26] = uString::Const("Cancel");
    ::STRINGS[27] = uString::Const("# ");
    ::STRINGS[24] = uString::Const("/usr/local/share/uno/Packages/Fuse.Preview.Core/0.1.0/ModalDialog.uno");
    ::TYPES[48] = ::g::Fuse::Gestures::ClickedHandler_typeof();
    ::TYPES[51] = ::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable_typeof()->MakeType(::g::Fuse::Controls::Control_typeof(), NULL);
    ::TYPES[52] = ::g::Fuse::Controls::Control_typeof()->Array();
    type->SetDependencies(
        ::g::Uno::Diagnostics::Debug_typeof());
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(ShowingPrompt, _header), 0,
        ::g::Uno::String_typeof(), offsetof(ShowingPrompt, _body), 0,
        ::g::Fuse::Controls::TextInput_typeof(), offsetof(ShowingPrompt, _input), 0,
        ::g::Uno::Bool_typeof(), offsetof(ShowingPrompt, _okClicked), 0,
        ::g::Uno::Bool_typeof(), offsetof(ShowingPrompt, _cancelClicked), 0);
}

ShowingPrompt_type* ShowingPrompt_typeof()
{
    static uSStrong<ShowingPrompt_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Outracks::Simulator::Client::State_typeof();
    options.FieldCount = 5;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(ShowingPrompt);
    options.TypeSize = sizeof(ShowingPrompt_type);
    type = (ShowingPrompt_type*)uClassType::New("Outracks.Simulator.Client.ShowingPrompt", options);
    type->fp_build_ = ShowingPrompt_build;
    type->fp_OnEnterState = (void(*)(::g::Outracks::Simulator::Client::State*, ::g::Outracks::Simulator::Client::State**))ShowingPrompt__OnEnterState_fn;
    type->fp_OnUpdate = (void(*)(::g::Outracks::Simulator::Client::State*, ::g::Outracks::Simulator::Client::State**))ShowingPrompt__OnUpdate_fn;
    return type;
}

// protected ShowingPrompt(string header, string body) :107
void ShowingPrompt__ctor_1_fn(ShowingPrompt* __this, uString* header, uString* body)
{
    __this->ctor_1(header, body);
}

// private void OnCancelClicked(object s, Fuse.Gestures.ClickedArgs args) :148
void ShowingPrompt__OnCancelClicked_fn(ShowingPrompt* __this, uObject* s, ::g::Fuse::Gestures::ClickedArgs* args)
{
    __this->OnCancelClicked(s, args);
}

// public override sealed Outracks.Simulator.Client.State OnEnterState() :115
void ShowingPrompt__OnEnterState_fn(ShowingPrompt* __this, ::g::Outracks::Simulator::Client::State** __retval)
{
    uStackFrame __("Outracks.Simulator.Client.ShowingPrompt", "OnEnterState()");
    ::g::Fuse::Controls::Button* collection1;
    ::g::Uno::Float4 ind3;
    ::g::Fuse::Controls::Button* collection2;
    ::g::Uno::Float4 ind4;
    collection1 = ::g::Fuse::Controls::Button::New5();
    ind3 = ::g::Uno::Float4__New1(20.0f);
    uPtr(collection1)->Margin(ind3);
    ind3;
    uPtr(collection1)->Text(::STRINGS[25/*"Ok"*/]);
    ::STRINGS[25/*"Ok"*/];
    ::g::Fuse::Controls::Button* ok = collection1;
    ::g::Fuse::Gestures::Clicked::AddHandler(ok, uDelegate::New(::TYPES[48/*Fuse.Gestures.ClickedHandler*/], (void*)ShowingPrompt__OnOkClicked_fn, __this));
    collection2 = ::g::Fuse::Controls::Button::New5();
    ind4 = ::g::Uno::Float4__New1(20.0f);
    uPtr(collection2)->Margin(ind4);
    ind4;
    uPtr(collection2)->Text(::STRINGS[26/*"Cancel"*/]);
    ::STRINGS[26/*"Cancel"*/];
    ::g::Fuse::Controls::Button* cancel = collection2;
    ::g::Fuse::Gestures::Clicked::AddHandler(cancel, uDelegate::New(::TYPES[48/*Fuse.Gestures.ClickedHandler*/], (void*)ShowingPrompt__OnCancelClicked_fn, __this));
    __this->_input = ::g::Fuse::Controls::TextBox::New4();
    ::g::Uno::Diagnostics::Debug::Log5(::g::Uno::String::op_Addition2(::STRINGS[27/*"# "*/], __this->_header), 0, ::STRINGS[24/*"/usr/local/...*/], 136);
    ::g::Uno::Diagnostics::Debug::Log5(__this->_body, 0, ::STRINGS[24/*"/usr/local/...*/], 137);
    ::g::Outracks::Simulator::Client::ModalDialog::ShowPrompt(::g::Outracks::Simulator::Client::Context::App(), __this->_header, __this->_body, __this->_input, (uObject*)((::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable*)::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable::New1(::TYPES[51/*Uno.Runtime.Implementation.Internal.ArrayEnumerable<Fuse.Controls.Control>*/], uArray::Init< ::g::Fuse::Controls::Control*>(::TYPES[52/*Fuse.Controls.Control[]*/], 2, cancel, ok))));
    return *__retval = __this, void();
}

// private void OnOkClicked(object s, Fuse.Gestures.ClickedArgs args) :143
void ShowingPrompt__OnOkClicked_fn(ShowingPrompt* __this, uObject* s, ::g::Fuse::Gestures::ClickedArgs* args)
{
    __this->OnOkClicked(s, args);
}

// public override sealed Outracks.Simulator.Client.State OnUpdate() :157
void ShowingPrompt__OnUpdate_fn(ShowingPrompt* __this, ::g::Outracks::Simulator::Client::State** __retval)
{
    uStackFrame __("Outracks.Simulator.Client.ShowingPrompt", "OnUpdate()");

    if (__this->_cancelClicked)
        return *__retval = __this->OnCancel(), void();

    if (__this->_okClicked)
        return *__retval = __this->OnOk(uPtr(__this->_input)->Value()), void();

    return *__retval = __this, void();
}

// protected ShowingPrompt(string header, string body) [instance] :107
void ShowingPrompt::ctor_1(uString* header, uString* body)
{
    ctor_();
    _header = header;
    _body = body;
}

// private void OnCancelClicked(object s, Fuse.Gestures.ClickedArgs args) [instance] :148
void ShowingPrompt::OnCancelClicked(uObject* s, ::g::Fuse::Gestures::ClickedArgs* args)
{
    _cancelClicked = true;
}

// private void OnOkClicked(object s, Fuse.Gestures.ClickedArgs args) [instance] :143
void ShowingPrompt::OnOkClicked(uObject* s, ::g::Fuse::Gestures::ClickedArgs* args)
{
    _okClicked = true;
}
// }

// /usr/local/share/uno/Packages/Fuse.Preview.Core/0.1.0/Application.uno
// ---------------------------------------------------------------------

// internal abstract class State :255
// {
static void State_build(uType* type)
{
}

State_type* State_typeof()
{
    static uSStrong<State_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(State);
    options.TypeSize = sizeof(State_type);
    type = (State_type*)uClassType::New("Outracks.Simulator.Client.State", options);
    type->fp_build_ = State_build;
    type->fp_OnEnterState = State__OnEnterState_fn;
    type->fp_OnLeaveState = State__OnLeaveState_fn;
    type->fp_OnUpdate = State__OnUpdate_fn;
    return type;
}

// protected generated State() :255
void State__ctor__fn(State* __this)
{
    __this->ctor_();
}

// public virtual Outracks.Simulator.Client.State OnEnterState() :257
void State__OnEnterState_fn(State* __this, State** __retval)
{
    return *__retval = __this, void();
}

// public virtual void OnLeaveState() :262
void State__OnLeaveState_fn(State* __this)
{
}

// public virtual Outracks.Simulator.Client.State OnUpdate() :266
void State__OnUpdate_fn(State* __this, State** __retval)
{
    return *__retval = __this, void();
}

// protected generated State() [instance] :255
void State::ctor_()
{
}
// }

// /usr/local/share/uno/Packages/Fuse.Preview.Core/0.1.0/ApplicationStates.uno
// ---------------------------------------------------------------------------

// internal sealed class Uninitialized :23
// {
static void Uninitialized_build(uType* type)
{
    ::STRINGS[14] = uString::Const("Try again");
    ::TYPES[37] = ::g::Outracks::Simulator::Client::DialogButton_typeof()->Array();
}

::g::Outracks::Simulator::Client::State_type* Uninitialized_typeof()
{
    static uSStrong< ::g::Outracks::Simulator::Client::State_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Outracks::Simulator::Client::State_typeof();
    options.ObjectSize = sizeof(Uninitialized);
    options.TypeSize = sizeof(::g::Outracks::Simulator::Client::State_type);
    type = (::g::Outracks::Simulator::Client::State_type*)uClassType::New("Outracks.Simulator.Client.Uninitialized", options);
    type->fp_build_ = Uninitialized_build;
    type->fp_ctor_ = (void*)Uninitialized__New1_fn;
    type->fp_OnException = (void(*)(::g::Outracks::Simulator::Client::State*, ::g::Uno::Exception*, ::g::Outracks::Simulator::Client::State**))Uninitialized__OnException_fn;
    type->fp_OnUpdate = (void(*)(::g::Outracks::Simulator::Client::State*, ::g::Outracks::Simulator::Client::State**))Uninitialized__OnUpdate_fn;
    return type;
}

// public generated Uninitialized() :23
void Uninitialized__ctor_1_fn(Uninitialized* __this)
{
    __this->ctor_1();
}

// public generated Uninitialized New() :23
void Uninitialized__New1_fn(Uninitialized** __retval)
{
    *__retval = Uninitialized::New1();
}

// public override sealed Outracks.Simulator.Client.State OnException(Uno.Exception e) :33
void Uninitialized__OnException_fn(Uninitialized* __this, ::g::Uno::Exception* e, ::g::Outracks::Simulator::Client::State** __retval)
{
    uStackFrame __("Outracks.Simulator.Client.Uninitialized", "OnException(Uno.Exception)");
    return *__retval = ::g::Outracks::Simulator::Client::Faulted::New2(false, e, uArray::Init< ::g::Outracks::Simulator::Client::DialogButton*>(::TYPES[37/*Outracks.Simulator.Client.DialogButton[]*/], 1, (::g::Outracks::Simulator::Client::DialogButton*)::g::Outracks::Simulator::Client::DialogButton::New1(::STRINGS[14/*"Try again"*/], __this))), void();
}

// public override sealed Outracks.Simulator.Client.State OnUpdate() :25
void Uninitialized__OnUpdate_fn(Uninitialized* __this, ::g::Outracks::Simulator::Client::State** __retval)
{
    if (::g::Outracks::Simulator::Client::Context::Reflection() != NULL)
        return *__retval = ::g::Outracks::Simulator::Client::ConnectingToProxy::New1(), void();

    return *__retval = __this, void();
}

// public generated Uninitialized() [instance] :23
void Uninitialized::ctor_1()
{
    ctor_();
}

// public generated Uninitialized New() [static] :23
Uninitialized* Uninitialized::New1()
{
    Uninitialized* obj1 = (Uninitialized*)uNew(Uninitialized_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Preview.Core/0.1.0/UserAppState.uno
// ----------------------------------------------------------------------

// internal sealed class UserAppState :16
// {
static void UserAppState_build(uType* type)
{
    ::TYPES[53] = type->MakeMethod(1/*SetIfNotEqual<Fuse.Node>*/, ::g::Fuse::Node_typeof(), NULL);
    ::TYPES[54] = type->MakeMethod(1/*SetIfNotEqual<Uno.UX.Resource>*/, ::g::Uno::UX::Resource_typeof(), NULL);
    ::TYPES[55] = ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(9/*ToArray<Fuse.Node>*/, ::g::Fuse::Node_typeof(), NULL);
    ::TYPES[56] = ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(9/*ToArray<Uno.UX.Resource>*/, ::g::Uno::UX::Resource_typeof(), NULL);
    ::TYPES[57] = ::g::Uno::Collections::ICollection_typeof();
    ::TYPES[58] = ::g::Uno::Collections::IList_typeof();
    ::TYPES[59] = ::g::Uno::Collections::IListExtensions_typeof();
    ::TYPES[60] = ::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable_typeof();
    type->MethodTypes[0]->SetPrecalc(
        ::TYPES[57/*Uno.Collections.ICollection`1*/]->MakeType(type->MethodTypes[0]->U(0), NULL),
        ::TYPES[58/*Uno.Collections.IList`1*/]->MakeType(type->MethodTypes[0]->U(0), NULL));
    type->MethodTypes[1]->SetPrecalc(
        type->MakeMethod(0/*SequenceEquals<T>*/, type->MethodTypes[1]->U(0), NULL),
        type->MakeMethod(2/*SetSequence<T>*/, type->MethodTypes[1]->U(0), NULL));
    type->MethodTypes[2]->SetPrecalc(
        ::TYPES[57/*Uno.Collections.ICollection`1*/]->MakeType(type->MethodTypes[2]->U(0), NULL),
        ::TYPES[59/*Uno.Collections.IListExtensions*/]->MakeMethod(0/*AddRange<T>*/, type->MethodTypes[2]->U(0), NULL),
        ::TYPES[60/*Uno.Runtime.Implementation.Internal.ArrayEnumerable`1*/]->MakeType(type->MethodTypes[2]->U(0), NULL));
    type->SetFields(0,
        ::g::Uno::Float4_typeof(), offsetof(UserAppState, Background), 0,
        ::g::Fuse::Node_typeof()->Array(), offsetof(UserAppState, Children), 0,
        ::g::Uno::UX::Resource_typeof()->Array(), offsetof(UserAppState, Resources), 0,
        ::g::Uno::Float4_typeof(), offsetof(UserAppState, ClearColor), 0,
        type, (uintptr_t)&UserAppState::_Default_, uFieldFlagsStatic);
}

uType* UserAppState_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.MethodTypeCount = 3;
    options.ObjectSize = sizeof(UserAppState);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Outracks.Simulator.Client.UserAppState", options);
    type->MethodTypes[0] = type->NewMethodType(1, 2,0);
    type->MethodTypes[1] = type->NewMethodType(1, 2,0);
    type->MethodTypes[2] = type->NewMethodType(1, 3,0);
    type->fp_build_ = UserAppState_build;
    return type;
}

// public UserAppState(float4 background, Fuse.Node[] children, Uno.UX.Resource[] resources, float4 clearColor) :29
void UserAppState__ctor__fn(UserAppState* __this, ::g::Uno::Float4* background, uArray* children, uArray* resources, ::g::Uno::Float4* clearColor)
{
    __this->ctor_(*background, children, resources, *clearColor);
}

// public void ApplyTo(Outracks.Simulator.Client.FakeApp app) :53
void UserAppState__ApplyTo_fn(UserAppState* __this, ::g::Outracks::Simulator::Client::FakeApp* app)
{
    __this->ApplyTo(app);
}

// public static generated Outracks.Simulator.Client.UserAppState get_Default() :42
void UserAppState__get_Default_fn(UserAppState** __retval)
{
    *__retval = UserAppState::Default();
}

// public static generated void set_Default(Outracks.Simulator.Client.UserAppState value) :42
void UserAppState__set_Default_fn(UserAppState* value)
{
    UserAppState::Default(value);
}

// public UserAppState New(float4 background, Fuse.Node[] children, Uno.UX.Resource[] resources, float4 clearColor) :29
void UserAppState__New1_fn(::g::Uno::Float4* background, uArray* children, uArray* resources, ::g::Uno::Float4* clearColor, UserAppState** __retval)
{
    *__retval = UserAppState::New1(*background, children, resources, *clearColor);
}

// public static Outracks.Simulator.Client.UserAppState Save(Outracks.Simulator.Client.FakeApp app) :44
void UserAppState__Save_fn(::g::Outracks::Simulator::Client::FakeApp* app, UserAppState** __retval)
{
    *__retval = UserAppState::Save(app);
}

// private static bool SequenceEquals<T>(Uno.Collections.IList<T> left, T[] right) :73
void UserAppState__SequenceEquals_fn(uType* __type, uObject* left, uArray* right, bool* __retval)
{
    *__retval = UserAppState::SequenceEquals(__type, left, right);
}

// private static void SetIfNotEqual<T>(Uno.Collections.IList<T> list, T[] elements) :61
void UserAppState__SetIfNotEqual_fn(uType* __type, uObject* list, uArray* elements)
{
    UserAppState::SetIfNotEqual(__type, list, elements);
}

// private static void SetSequence<T>(Uno.Collections.IList<T> list, T[] elements) :67
void UserAppState__SetSequence_fn(uType* __type, uObject* list, uArray* elements)
{
    UserAppState::SetSequence(__type, list, elements);
}

uSStrong<UserAppState*> UserAppState::_Default_;

// public UserAppState(float4 background, Fuse.Node[] children, Uno.UX.Resource[] resources, float4 clearColor) [instance] :29
void UserAppState::ctor_(::g::Uno::Float4 background, uArray* children, uArray* resources, ::g::Uno::Float4 clearColor)
{
    Background = background;
    Children = children;
    Resources = resources;
    ClearColor = clearColor;
}

// public void ApplyTo(Outracks.Simulator.Client.FakeApp app) [instance] :53
void UserAppState::ApplyTo(::g::Outracks::Simulator::Client::FakeApp* app)
{
    uStackFrame __("Outracks.Simulator.Client.UserAppState", "ApplyTo(Outracks.Simulator.Client.FakeApp)");

    if (::g::Uno::Float4__op_Inequality(uPtr(app)->Background1(), Background))
        uPtr(app)->Background1(Background);

    UserAppState::SetIfNotEqual(::TYPES[53/*Outracks.Simulator.Client.UserAppState.SetIfNotEqual<Fuse.Node>*/], uPtr(app)->Children(), Children);
    UserAppState::SetIfNotEqual(::TYPES[54/*Outracks.Simulator.Client.UserAppState.SetIfNotEqual<Uno.UX.Resource>*/], app->Resources1(), Resources);

    if (::g::Uno::Float4__op_Inequality(app->ClearColor(), ClearColor))
        uPtr(app)->ClearColor(ClearColor);
}

// public UserAppState New(float4 background, Fuse.Node[] children, Uno.UX.Resource[] resources, float4 clearColor) [static] :29
UserAppState* UserAppState::New1(::g::Uno::Float4 background, uArray* children, uArray* resources, ::g::Uno::Float4 clearColor)
{
    UserAppState* obj1 = (UserAppState*)uNew(UserAppState_typeof());
    obj1->ctor_(background, children, resources, clearColor);
    return obj1;
}

// public static Outracks.Simulator.Client.UserAppState Save(Outracks.Simulator.Client.FakeApp app) [static] :44
UserAppState* UserAppState::Save(::g::Outracks::Simulator::Client::FakeApp* app)
{
    uStackFrame __("Outracks.Simulator.Client.UserAppState", "Save(Outracks.Simulator.Client.FakeApp)");
    return UserAppState::New1(uPtr(app)->Background1(), (uArray*)::g::Uno::Collections::EnumerableExtensions::ToArray(::TYPES[55/*Uno.Collections.EnumerableExtensions.ToArray<Fuse.Node>*/], uPtr(app)->Children()), (uArray*)::g::Uno::Collections::EnumerableExtensions::ToArray(::TYPES[56/*Uno.Collections.EnumerableExtensions.ToArray<Uno.UX.Resource>*/], uPtr(app)->Resources1()), uPtr(app)->ClearColor());
}

// private static bool SequenceEquals<T>(Uno.Collections.IList<T> left, T[] right) [static] :73
bool UserAppState::SequenceEquals(uType* __type, uObject* left, uArray* right)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.ICollection<T>*/),
        __type->Precalced(1/*Uno.Collections.IList<T>*/),
    };
    uStackFrame __("Outracks.Simulator.Client.UserAppState", "SequenceEquals`1(Uno.Collections.IList<T>,T[])");
    uT ret2(__type->U(0), U_ALLOCA(__type->U(0)->ValueSize));

    if (::g::Uno::Collections::ICollection::Count(uInterface(uPtr(left), __types[0])) != uPtr(right)->Length())
        return false;

    for (int i = 0; i < uPtr(right)->Length(); i++)
        if (uBoxPtr(__type->U(0), (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(left), __types[1]), uCRef<int>(i), &ret2), ret2)) != uBoxPtr(__type->U(0), uPtr(right)->TItem(i)))
            return false;

    return true;
}

// private static void SetIfNotEqual<T>(Uno.Collections.IList<T> list, T[] elements) [static] :61
void UserAppState::SetIfNotEqual(uType* __type, uObject* list, uArray* elements)
{
    uType* __types[] = {
        __type->Precalced(0/*Outracks.Simulator.Client.UserAppState.SequenceEquals<T>*/),
        __type->Precalced(1/*Outracks.Simulator.Client.UserAppState.SetSequence<T>*/),
    };
    uStackFrame __("Outracks.Simulator.Client.UserAppState", "SetIfNotEqual`1(Uno.Collections.IList<T>,T[])");

    if (!UserAppState::SequenceEquals(__types[0], list, elements))
        UserAppState::SetSequence(__types[1], list, elements);
}

// private static void SetSequence<T>(Uno.Collections.IList<T> list, T[] elements) [static] :67
void UserAppState::SetSequence(uType* __type, uObject* list, uArray* elements)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.ICollection<T>*/),
        __type->Precalced(1/*Uno.Collections.IListExtensions.AddRange<T>*/),
        __type->Precalced(2/*Uno.Runtime.Implementation.Internal.ArrayEnumerable<T>*/),
    };
    uStackFrame __("Outracks.Simulator.Client.UserAppState", "SetSequence`1(Uno.Collections.IList<T>,T[])");
    ::g::Uno::Collections::ICollection::Clear(uInterface(uPtr(list), __types[0]));
    ::g::Uno::Collections::IListExtensions::AddRange(__types[1], list, (uObject*)((::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable*)::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable::New1(__types[2], elements)));
}

// public static generated Outracks.Simulator.Client.UserAppState get_Default() [static] :42
UserAppState* UserAppState::Default()
{
    return UserAppState::_Default_;
}

// public static generated void set_Default(Outracks.Simulator.Client.UserAppState value) [static] :42
void UserAppState::Default(UserAppState* value)
{
    UserAppState::_Default_ = value;
}
// }

// /usr/local/share/uno/Packages/Fuse.Preview.Core/0.1.0/ApplicationStates.uno
// ---------------------------------------------------------------------------

// public static class VirtualMachine :329
// {
static void VirtualMachine_build(uType* type)
{
    ::TYPES[61] = ::g::Outracks::Optional_typeof()->MakeMethod(0/*None<Outracks.Simulator.Runtime.Environment>*/, ::g::Outracks::Simulator::Runtime::Environment_typeof(), NULL);
    type->Reflection.SetFunctions(2,
        new uFunction("Execute", NULL, (void*)VirtualMachine__Execute_fn, 0, true, uObject_typeof(), 2, ::g::Outracks::Simulator::Bytecode::Lambda_typeof(), uObject_typeof()->Array()),
        new uFunction("Execute", NULL, (void*)VirtualMachine__Execute1_fn, 0, true, uObject_typeof(), 3, ::g::Outracks::Simulator::Runtime::IReflection_typeof(), ::g::Outracks::Simulator::Bytecode::Lambda_typeof(), uObject_typeof()->Array()));
}

uClassType* VirtualMachine_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Outracks.Simulator.Client.VirtualMachine", options);
    type->fp_build_ = VirtualMachine_build;
    return type;
}

// public static object Execute(Outracks.Simulator.Bytecode.Lambda lambda, object[] arguments) :332
void VirtualMachine__Execute_fn(::g::Outracks::Simulator::Bytecode::Lambda* lambda, uArray* arguments, uObject** __retval)
{
    *__retval = VirtualMachine::Execute(lambda, arguments);
}

// public static object Execute(Outracks.Simulator.Runtime.IReflection reflection, Outracks.Simulator.Bytecode.Lambda lambda, object[] arguments) :337
void VirtualMachine__Execute1_fn(uObject* reflection, ::g::Outracks::Simulator::Bytecode::Lambda* lambda, uArray* arguments, uObject** __retval)
{
    *__retval = VirtualMachine::Execute1(reflection, lambda, arguments);
}

// public static object Execute(Outracks.Simulator.Bytecode.Lambda lambda, object[] arguments) [static] :332
uObject* VirtualMachine::Execute(::g::Outracks::Simulator::Bytecode::Lambda* lambda, uArray* arguments)
{
    return VirtualMachine::Execute1(::g::Outracks::Simulator::Client::Context::Reflection(), lambda, arguments);
}

// public static object Execute(Outracks.Simulator.Runtime.IReflection reflection, Outracks.Simulator.Bytecode.Lambda lambda, object[] arguments) [static] :337
uObject* VirtualMachine::Execute1(uObject* reflection, ::g::Outracks::Simulator::Bytecode::Lambda* lambda, uArray* arguments)
{
    uStackFrame __("Outracks.Simulator.Client.VirtualMachine", "Execute(Outracks.Simulator.Runtime.IReflection,Outracks.Simulator.Bytecode.Lambda,object[])");
    ::g::Outracks::Optional1<uStrong< ::g::Outracks::Simulator::Runtime::Environment*> > ret1;
    return ::g::Outracks::Simulator::Runtime::ScopeClosure::New1(::g::Outracks::Simulator::Runtime::Environment::New1((::g::Outracks::Optional__None_fn(::TYPES[61/*Outracks.Optional.None<Outracks.Simulator.Runtime.Environment>*/], &ret1), ret1)), reflection)->Execute1(lambda, arguments);
}
// }

}}}} // ::g::Outracks::Simulator::Client
