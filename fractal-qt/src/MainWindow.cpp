#include "MainWindow.h"
#include "FractalForm.h"
#include "AboutForm.h"
//#include "ImageDraw.h"
#include "ColorSchemeFactory.h"
#include "HsvColorScheme.h"
#include "RgbColorScheme.h"
//#include "ProgressHandler.h"
//#include "Mandelbrot.h"
//#include "Julia.h"


MainWindow::MainWindow() {
  widget.setupUi(this);
  for (unsigned int i = 0; i < ColorSchemeFactory::colorSchemeCount(); ++i)
  {
    ColorSchemeFactory::setColorScheme(i);
    widget.colorScheme->addItem(QString::fromStdString(ColorSchemeFactory::getColorScheme().getName()), QVariant(i));
  }
  setWindowIcon(QIcon(":/images/icon.png"));
}

MainWindow::~MainWindow() {
}

void MainWindow::getParameters(Point& center, double& zoom, int& imageWidth, int& imageHeight) const
{
  imageWidth = widget.imageWidth->text().toUInt();
  imageHeight = widget.imageHeight->text().toUInt();
  if (imageWidth == 0)
    imageWidth = 320;
  if (imageHeight == 0)
    imageHeight = 240;
  zoom = widget.zoom->text().toDouble();
  if (zoom < 0.000001)
    zoom = 1;
  center.x() = widget.centerRe->text().toDouble();
  center.y() = widget.centerIm->text().toDouble();
}

void MainWindow::showMandelbrot()
{
  Point center;
  double zoom = 1.0;
  int imageWidth, imageHeight;
  getParameters(center, zoom, imageWidth, imageHeight);
  ColorSchemeFactory::setColorScheme(widget.colorScheme->currentIndex());

  FractalForm *fractalForm = new FractalForm(this);
  fractalForm->show();
  fractalForm->computeMandelbrot(center, zoom, imageWidth, imageHeight);
}

void MainWindow::showJulia()
{
  Point center;
  double zoom = 1.0;
  int imageWidth, imageHeight;
  getParameters(center, zoom, imageWidth, imageHeight);
  ColorSchemeFactory::setColorScheme(widget.colorScheme->currentIndex());

  double compPointX = widget.computationRe_Julia->text().toDouble();
  double compPointY = widget.computationIm_Julia->text().toDouble();

  FractalForm *fractalForm = new FractalForm(this);
  fractalForm->show();
  fractalForm->computeJulia(center, zoom, imageWidth, imageHeight, Point(compPointX, compPointY));
}

void MainWindow::aboutQt()
{
  QApplication::aboutQt();
}

void MainWindow::about()
{
  AboutForm *aboutForm = new AboutForm(this);
  aboutForm->show();
}
