QT       += core gui sql multimedia printsupport network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = smtp
TEMPLATE = app

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

INCLUDEPATH += C:/OpenSSL-Win64/include
DEPENDPATH += C:/OpenSSL-Win64/include


SOURCES += \
    connexion.cpp \
    employe.cpp \
    main.cpp \
    mainwindow.cpp \
    smtp.cpp

HEADERS += \
    connexion.h \
    employe.h \
    mainwindow.h \
    smtp.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

