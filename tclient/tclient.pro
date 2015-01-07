TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp


win64{
CONFIG(release, debug|release): LIBS += -L$$PWD/../boost/lib/ -llibboost_thread-vc120-mt-1_57
CONFIG(debug, debug|release):LIBS += -L$$PWD/../boost/lib/ -llibboost_thread-vc120-mt-gd-1_57
}
INCLUDEPATH += $$PWD/../boost/include
DEPENDPATH += $$PWD/../boost/include


