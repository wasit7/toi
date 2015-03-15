TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    grader.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    tourist.h

DISTFILES += \
    sample1.in \
    sample2.ou

