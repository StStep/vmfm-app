# Initialization
AC_INIT([VHDL MFM], [1.0.0], [st.summerlin@gmail.com])
AC_CONFIG_SRCDIR([src/main.cc])
AM_INIT_AUTOMAKE([-Wall foreign subdir-objects])
AM_SILENT_RULES([yes])

# Shopping List
AC_PROG_CXX
PKG_PROG_PKG_CONFIG

# Libraries
PKG_CHECK_MODULES([VMFM], [gtkmm-3.0 >= 3.8.0])

# Output
AC_CONFIG_FILES([Makefile])
AC_OUTPUT
