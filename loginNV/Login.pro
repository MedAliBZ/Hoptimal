QT       += core sql gui widgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = LogSys
TEMPLATE = app


SOURCES += main.cpp\
    connexion.cpp \
    loginfinale.cpp \
        loginsystem.cpp

HEADERS  += loginsystem.h \
    connexion.h \
    loginfinale.h

FORMS    += loginsystem.ui

DISTFILES +=

RESOURCES += \
    elements.qrc \
    photo.qrc
