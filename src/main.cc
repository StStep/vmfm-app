#include "VmfmAppWindow.h"

#include <iostream>

#include <gtkmm/application.h>
#include <glibmm/fileutils.h>
#include <glibmm/markup.h>
#include <gtkmm/builder.h>

int main (int argc, char *argv[])
{
    auto app = Gtk::Application::create(argc, argv, "com.github.ststep.vmfm");

    //Load the GtkBuilder file and instantiate its widgets:
    auto refBuilder = Gtk::Builder::create();
    try
    {
        refBuilder->add_from_file("src/window.ui");
    }
    catch(const Glib::FileError& ex)
    {
        std::cerr << "FileError: " << ex.what() << std::endl;
        return 1;
    }
    catch(const Glib::MarkupError& ex)
    {
        std::cerr << "MarkupError: " << ex.what() << std::endl;
        return 1;
    }
    catch(const Gtk::BuilderError& ex)
    {
        std::cerr << "BuilderError: " << ex.what() << std::endl;
        return 1;
    }

    // Open and run application window
    VmfmAppWindow * window = nullptr;
    refBuilder->get_widget_derived("VmfmAppWindow", window);
    if(window != nullptr)
    {
        app->run(*window);
    }

    delete(window);

    return 0;
}
