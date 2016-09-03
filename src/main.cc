#include "VmfmApp.h"
#include <gtkmm/application.h>

int main (int argc, char *argv[])
{
  auto app = Gtk::Application::create(argc, argv, "com.github.ststep.vmfm");

  VmfmApp vmfmApp;

  //Shows the window and returns when it is closed.
  return app->run(vmfmApp);
}
