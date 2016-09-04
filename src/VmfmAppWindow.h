#ifndef VMFM_APP_WINDOW_H
#define VMFM_APP_WINDOW_H

#include <gtkmm/button.h>
#include <gtkmm/window.h>
#include <gtkmm/builder.h>

class VmfmAppWindow : public Gtk::Window
{

public:

    // Lifecycle
    VmfmAppWindow(BaseObjectType* cobject, const Glib::RefPtr<Gtk::Builder>& refGlade);
    virtual ~VmfmAppWindow();

protected:

    // Builder
    Glib::RefPtr<Gtk::Builder> m_refGlade;

    //Signal handlers:
    void on_button_hello();

    //Member widgets:
    Gtk::Button* m_pButton;
};

#endif // VMFM_APP_WINDOW_H
