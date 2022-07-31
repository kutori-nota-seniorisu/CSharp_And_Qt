TEMPLATE     = lib
CONFIG	    += dll
SOURCES	     = main.cpp \
    mainwindow.cpp

TARGET	     = QtTestWidget
DLLDESTDIR   = $$[QT_INSTALL_PREFIX]/bin

include(../../src/qtwinmigrate.pri)

FORMS += \
    mainwindow.ui

HEADERS += \
    mainwindow.h
