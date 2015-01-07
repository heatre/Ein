TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt
CONFIG += debug_and_release
SOURCES += main.cpp

CONFIG(release, debug|release): LIBS += -L$$PWD/../boost/lib/ -llibboost_system-vc120-mt-1_57

CONFIG(debug, debug|release):  LIBS += -L$$PWD/../boost/lib/ -llibboost_system-vc120-mt-gd-1_57

INCLUDEPATH += $$PWD/../boost/include
DEPENDPATH += $$PWD/../boost/include


