#-------------------------------------------------
#
# Project created by QtCreator 2017-11-09T18:28:35
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = simulador_pendulo
TEMPLATE = app


SOURCES += main.cpp\
        simulacion.cpp \
    movimientopendulo.cpp \
    pendulo.cpp

HEADERS  += simulacion.h \
    movimientopendulo.h \
    pendulo.h

FORMS    += simulacion.ui
