#-------------------------------------------------
#
# Project created by QtCreator 2014-06-05T17:04:16
#
#-------------------------------------------------

QT       += core gui opengl xml

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = tsenmu-mesh-viewer
TEMPLATE = app


SOURCES += main.cpp \
    meshviewer.cpp

HEADERS  += \
    meshviewer.h \
    test_cgal.h

FORMS    +=

LIBS += -lCGAL -lgmp -lmpfr -lQGLViewer -lGLU
QMAKE_CXXFLAGS += -frounding-math -O3
