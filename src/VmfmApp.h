#ifndef VMFM_APP_H
#define VMFM_APP_H

#include <gtkmm/button.h>
#include <gtkmm/window.h>

class VmfmApp : public Gtk::Window
{

public:
  VmfmApp();
  virtual ~VmfmApp();

protected:
  //Signal handlers:
  void on_button_clicked();

  //Member widgets:
  Gtk::Button m_button;
};

#endif // VMFM_APP_H
