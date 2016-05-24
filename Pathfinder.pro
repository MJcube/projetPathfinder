#-------------------------------------------------
#
# Project created by QtCreator 2016-05-05T12:44:46
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Pathfinder
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    personnage.cpp \
    competences.cpp \
    sort.cpp \
    mjwindow.cpp \
    joueurwindow.cpp \
    formcrea.cpp \
    cara.cpp \
    modificateur.cpp

HEADERS  += mainwindow.h \
    personnage.h \
    competences.h \
    sort.h \
    mjwindow.h \
    joueurwindow.h \
    formcrea.h \
    cara.h \
    modificateur.h

FORMS    += mainwindow.ui \
    mjwindow.ui \
    joueurwindow.ui \
    formcrea.ui
