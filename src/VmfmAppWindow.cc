#include "VmfmAppWindow.h" // Implements

#include <iostream>

/////////////// LIFECYCLE ////////////////////


VmfmAppWindow::VmfmAppWindow(BaseObjectType* cobject, const Glib::RefPtr<Gtk::Builder>& refGlade)
:   Gtk::Window(cobject),
    m_refGlade(refGlade),
    m_pButton(nullptr)
{
    //Get the Glade-instantiated Button, and connect a signal handler:
    m_refGlade->get_widget("hello_button", m_pButton);
    if(m_pButton)
    {
        m_pButton->signal_clicked().connect( sigc::mem_fun(*this, &VmfmAppWindow::on_button_hello) ); 
    }
#if 0
    //Get the GtkBuilder-instantiated Dialog:
    refBuilder->get_widget("DialogBasic", pDialog);
    if(pDialog)
    {
        //Get the GtkBuilder-instantiated Button, and connect a signal handler:
        Gtk::Button* pButton = nullptr;
        refBuilder->get_widget("quit_button", pButton);
        if(pButton)
        {
            pButton->signal_clicked().connect( sigc::ptr_fun(on_button_clicked) );
        }

        app->run(*pDialog);
    }

    delete pDialog;

    // When the button receives the "clicked" signal, it will call the
    // on_button_clicked() method defined below.
    m_button.signal_clicked().connect(sigc::mem_fun(*this,
              &VmfmAppWindow::on_button_clicked));

#endif
}


VmfmAppWindow::~VmfmAppWindow()
{
}

/////////////// SIGNAL HANDLERS ////////////////////

void VmfmAppWindow::on_button_hello()
{
    std::cout << "Hello:" << std::endl;
}

