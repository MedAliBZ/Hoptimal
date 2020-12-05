QT += core network
QT -= gui

TARGET = DuMessengerLANServer
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    MessengerServer.cpp \
    MessengerSocket.cpp

QMAKE_CXXFLAGS += -std=gnu++11

HEADERS += \
    MessengerServer.h \
    MessengerSocket.h
