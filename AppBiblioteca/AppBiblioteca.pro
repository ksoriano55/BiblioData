#-------------------------------------------------
#
# Project created by QtCreator 2021-04-10T20:15:16
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = AppBiblioteca
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    frmcliente.cpp \
    frmlibro.cpp \
    frmcategoria.cpp

HEADERS  += mainwindow.h \
    frmcliente.h \
    frmlibro.h \
    frmcategoria.h

FORMS    += mainwindow.ui \
    frmcliente.ui \
    frmlibro.ui \
    frmcategoria.ui
