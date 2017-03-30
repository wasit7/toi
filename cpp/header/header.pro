TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    foo.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    foo.h

