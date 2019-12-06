/*
 * File:   main.cpp
 * Author: Marco Ambu
 *
 * Created on September 15, 2010, 5:04 PM
 */

#include <QtGlobal>
#if QT_VERSION >= 0x050000
#include <QtWidgets/QApplication>
#else
#include <QtGui/QApplication>
#endif
#include "MainWindow.h"

int main(int argc, char *argv[])
{
  // initialize resources, if needed
  // Q_INIT_RESOURCE(resfile);

  QApplication app(argc, argv);

  // create and show your widgets here
  MainWindow mainWindow;
  mainWindow.show();

  return app.exec();
}
