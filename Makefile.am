CLEANFILES = *~
EXTRA_DIST = src/window.ui
AM_CXXFLAGS = -std=c++11

bin_PROGRAMS = vmfm

vmfm_CPPFLAGS = $(VMFM_CFLAGS)
vmfm_LDADD = $(VMFM_LIBS)

vmfm_SOURCES = \
		src/VmfmArea.cc src/VmfmArea.h \
		src/VmfmAppWindow.cc src/VmfmAppWindow.h \
		src/main.cc
