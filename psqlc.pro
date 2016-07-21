#-------------------------------------------------
#
# Project created by QtCreator 2014-08-08T19:56:15
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = psqlc
TEMPLATE = app


SOURCES += main.cpp \
    mainwindow.cpp \
    player.cpp \
    newgameplayer.cpp \
    loaddialog.cpp \
    programsettings.cpp \
    settingsdialog.cpp

HEADERS  += \
    mainwindow.h \
    player.h \
    humanoid.h \
    newgameplayer.h \
    loaddialog.h \
    programsettings.h \
    settingsdialog.h

FORMS    += \
    mainwindow.ui \
    newgameplayer.ui \
    loaddialog.ui \
    settingsdialog.ui

OTHER_FILES +=
