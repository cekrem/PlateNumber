[Uno.Compiler.UxGenerated]
public partial class ProfilePage: Fuse.Controls.Page
{
    readonly Fuse.Navigation.Router router;
    global::Uno.UX.Property<string> temp_Value_inst;
    global::Uno.UX.Property<string> temp1_Value_inst;
    internal global::Fuse.Reactive.EventBinding temp_eb0;
    internal global::Fuse.Reactive.EventBinding temp_eb1;
    internal global::Fuse.Reactive.EventBinding temp_eb2;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "router",
        "temp_eb0",
        "temp_eb1",
        "temp_eb2"
    };
    static ProfilePage()
    {
    }
    [global::Uno.UX.UXConstructor]
    public ProfilePage(
		[global::Uno.UX.UXParameter("router")] Fuse.Navigation.Router router)
    {
        this.router = router;
        InitializeUX();
    }
    void InitializeUX()
    {
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        var temp = new global::Fuse.Controls.TextBox();
        temp_Value_inst = new PlateNumber_FuseControlsTextInputControl_Value_Property(temp, __selector0);
        var temp2 = new global::Fuse.Reactive.Data("plateNum");
        var temp3 = new global::Fuse.Reactive.Data("plateSearch");
        var temp1 = new global::Fuse.Controls.Text();
        temp1_Value_inst = new PlateNumber_FuseControlsTextControl_Value_Property(temp1, __selector0);
        var temp4 = new global::Fuse.Reactive.Data("profileJson");
        var temp5 = new global::Fuse.Reactive.Data("save");
        var temp6 = new global::Fuse.Reactive.Data("load");
        var temp7 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        var temp8 = new global::Fuse.Controls.StackPanel();
        var temp9 = new global::Fuse.Controls.Text();
        var temp10 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp2, Fuse.Reactive.BindingMode.Default);
        temp_eb0 = new global::Fuse.Reactive.EventBinding(temp3);
        var temp11 = new global::Fuse.Reactive.DataBinding(temp1_Value_inst, temp4, Fuse.Reactive.BindingMode.Default);
        var temp12 = new global::Fuse.Controls.Button();
        temp_eb1 = new global::Fuse.Reactive.EventBinding(temp5);
        var temp13 = new global::Fuse.Controls.Button();
        temp_eb2 = new global::Fuse.Reactive.EventBinding(temp6);
        temp7.LineNumber = 4;
        temp7.FileName = "Pages/ProfilePage.ux";
        temp7.File = new global::Uno.UX.BundleFileSource(import("../../../../../Pages/ProfilePage.js"));
        temp8.Children.Add(temp9);
        temp8.Children.Add(temp);
        temp8.Children.Add(temp1);
        temp8.Children.Add(temp12);
        temp8.Children.Add(temp13);
        temp9.Value = "Regnr:";
        temp9.Color = Fuse.Drawing.Colors.White;
        temp.ValueChanged += temp_eb0.OnEvent;
        temp.Bindings.Add(temp10);
        temp.Bindings.Add(temp_eb0);
        temp1.Bindings.Add(temp11);
        temp12.Text = "Save";
        global::Fuse.Gestures.Clicked.AddHandler(temp12, temp_eb1.OnEvent);
        temp12.Bindings.Add(temp_eb1);
        temp13.Text = "Load";
        global::Fuse.Gestures.Clicked.AddHandler(temp13, temp_eb2.OnEvent);
        temp13.Bindings.Add(temp_eb2);
        __g_nametable.This = this;
        __g_nametable.Objects.Add(router);
        __g_nametable.Objects.Add(temp_eb0);
        __g_nametable.Objects.Add(temp_eb1);
        __g_nametable.Objects.Add(temp_eb2);
        this.Children.Add(temp7);
        this.Children.Add(temp8);
    }
    static global::Uno.UX.Selector __selector0 = "Value";
}
