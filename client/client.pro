QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = client
TEMPLATE = app


SOURCES += main.cpp \
    logindlg.cpp \
    friendpanel.cpp \
    basedialog.cpp

HEADERS  += \
    logindlg.h \
    friendpanel.h \
    basedialog.h

FORMS    += \
    logindlg.ui \
    friendpanel.ui
