#include "VmfmAppWindow.h" // Implements

#include <iostream>

/////////////// LIFECYCLE ////////////////////


VmfmAppWindow::VmfmAppWindow(BaseObjectType* cobject, const Glib::RefPtr<Gtk::Builder>& refGlade)
:   Gtk::Window(cobject),
    m_refGlade(refGlade),
    m_pButton(nullptr),
    m_drawArea(nullptr)
{
    //Get the Glade-instantiated Button, and connect a signal handler:
    m_refGlade->get_widget("hello_button", m_pButton);
    if(m_pButton)
    {
        m_pButton->signal_clicked().connect( sigc::mem_fun(*this, &VmfmAppWindow::on_button_hello) ); 
    }

    m_refGlade->get_widget_derived("VmfmArea", m_drawArea);
}


VmfmAppWindow::~VmfmAppWindow()
{
}

/////////////// SIGNAL HANDLERS ////////////////////

void VmfmAppWindow::on_button_hello()
{
    std::cout << "Hello:" << std::endl;
}

