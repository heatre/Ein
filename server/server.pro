#-------------------------------------------------
#
# Project created by QtCreator 2014-12-20T23:45:39
#
#-------------------------------------------------

QT       += core \
                 sql

QT       -= gui

TARGET = server
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += main.cpp \
    server.cpp \
    databaseop.cpp

HEADERS += \
    server.h \
    databaseop.h
