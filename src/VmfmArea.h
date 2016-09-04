#ifndef VMFM_AREA_H
#define VMFM_AREA_H

#include <gtkmm.h>

class VmfmArea : public Gtk::DrawingArea
{
public:

    VmfmArea(BaseObjectType* cobject, const Glib::RefPtr<Gtk::Builder>& refGlade);
    virtual ~VmfmArea();

protected:

    // Builder
    Glib::RefPtr<Gtk::Builder> m_refGlade;

    //Override default signal handler:
    bool on_draw(const Cairo::RefPtr<Cairo::Context>& cr) override;
};

#endif // VMFM_AREA_H
