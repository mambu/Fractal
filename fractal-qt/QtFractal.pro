#-------------------------------------------------
#
# Project created by QtCreator 2013-05-13T19:26:47
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = QtFractal
TEMPLATE = app


SOURCES += src/MainWindow.cpp \
           src/HsvColorScheme.cpp \
           src/Fractal.cpp main.cpp \
           src/RgbBandColorScheme.cpp \
           src/FractalForm.cpp \
           src/Julia.cpp \
           src/Mandelbrot.cpp \
           src/AboutForm.cpp \
           src/ColorSchemeFactory.cpp \
           src/RgbColorScheme.cpp

HEADERS  += include/Julia.h \
            include/AboutForm.h \
            include/FractalForm.h \
            include/Mandelbrot.h \
            include/ColorSchemeFactory.h \
            include/Fractal.h \
            include/IDraw.h \
            include/RgbColorScheme.h \
            include/MainWindow.h \
            include/ColorSchemeRegister.h \
            include/FractalAlgo.h \
            include/IProgress.h \
            include/ImageDraw.h \
            include/RgbBandColorScheme.h \
            include/IColorScheme.h \
            include/Point.h \
            include/ProgressHandler.h \
            include/HsvColorScheme.h

FORMS    += res/MainWindow.ui \
            res/FractalForm.ui \
            res/AboutForm.ui

INCLUDEPATH += include
