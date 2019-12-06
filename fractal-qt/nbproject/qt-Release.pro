# This file is generated automatically. Do not edit.
# Use project properties -> Build -> Qt -> Expert -> Custom Definitions.
TEMPLATE = app
DESTDIR = dist/Release/GNU-Linux
TARGET = fractal-qt
VERSION = 1.0.0
CONFIG -= debug_and_release app_bundle lib_bundle
CONFIG += release 
PKGCONFIG +=
QT = core gui widgets
SOURCES += main.cpp src/AboutForm.cpp src/ColorSchemeFactory.cpp src/Fractal.cpp src/FractalForm.cpp src/HsvColorScheme.cpp src/Julia.cpp src/MainWindow.cpp src/Mandelbrot.cpp src/RgbBandColorScheme.cpp src/RgbColorScheme.cpp
HEADERS += include/AboutForm.h include/ColorSchemeFactory.h include/ColorSchemeRegister.h include/Fractal.h include/FractalAlgo.h include/FractalForm.h include/HsvColorScheme.h include/IColorScheme.h include/IDraw.h include/IProgress.h include/ImageDraw.h include/Julia.h include/MainWindow.h include/Mandelbrot.h include/Point.h include/ProgressHandler.h include/RgbBandColorScheme.h include/RgbColorScheme.h
FORMS += res/AboutForm.ui res/FractalForm.ui res/MainWindow.ui
RESOURCES +=
TRANSLATIONS +=
OBJECTS_DIR = build/Release/GNU-Linux
MOC_DIR = 
RCC_DIR = 
UI_DIR = 
QMAKE_CC = gcc
QMAKE_CXX = g++
DEFINES += 
INCLUDEPATH += include 
LIBS += 
