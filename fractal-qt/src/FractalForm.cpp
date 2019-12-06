#include "FractalForm.h"
#include "Point.h"
#include "ImageDraw.h"
#include "ColorSchemeFactory.h"
#include "ProgressHandler.h"
#include "Mandelbrot.h"
#include "Julia.h"
#include "ProgressHandler.h"
#include <qimage.h>
#include <QtWidgets/QGraphicsPixmapItem>
#include <QtWidgets/QFileDialog>

FractalForm::FractalForm(QWidget* parent)
  : QWidget(parent)
{
  widget.setupUi(this);
  setWindowFlags(Qt::Window);
}

FractalForm::~FractalForm()
{
}

void FractalForm::saveImg()
{
  QString s = QFileDialog::getSaveFileName(this, "Choose file name", "");
  if (s.isNull())
    return;

  pixmap_.save(s, 0, 100);
}

void FractalForm::onClick(const QPoint& point)
{
//  widget.graphicsView
  Point fractalPoint = fractal_.pointImage2Factal(pixmap_.width(), pixmap_.height(), Point(point.x(), point.y()));
  widget.labelStatusBar->setText(QString::number(point.x()) + ","
    + QString::number(point.y()) + "; "
    + QString::number(fractalPoint.x()) + ","
    + QString::number(fractalPoint.y()));
}

void FractalForm::computeMandelbrot(const Point& center, double zoom, std::size_t imageWidth, std::size_t imageHeight)
{
  fractal_ = Fractal(center, zoom);
  ImageDraw draw(imageWidth, imageHeight, ColorSchemeFactory::getColorScheme());
  ProgressHandler progress(widget.progressBar);

  Mandelbrot algo;
  fractal_.compute(draw, algo, progress);

  progress.setProgress(100);

  drawImage(draw.getImage());
  this->setCenter(fractal_.getCenter())
    ->setZoom(fractal_.getZoom())
    ->setIterations(fractal_.getIterations())
    ->setImageInfo(imageWidth, imageHeight)
    ->setColorScheme(ColorSchemeFactory::getColorScheme().getName())
    ->setTitle(fractal_.getName());
}

void FractalForm::computeJulia(const Point& center, double zoom, std::size_t imageWidth, std::size_t imageHeight, const Point& computation)
{
  fractal_ = Fractal(center, zoom);
  ImageDraw draw(imageWidth, imageHeight, ColorSchemeFactory::getColorScheme());
  ProgressHandler progress(widget.progressBar);

  Julia algo(computation);
  fractal_.compute(draw, algo, progress);

  progress.setProgress(100);

  drawImage(draw.getImage());
  this->setCenter(fractal_.getCenter())
    ->setZoom(fractal_.getZoom())
    ->setIterations(fractal_.getIterations())
    ->setImageInfo(imageWidth, imageHeight)
    ->setColorScheme(ColorSchemeFactory::getColorScheme().getName())
    ->setTitle(fractal_.getName());
}

void FractalForm::drawImage(const QImage& image)
{
  pixmap_ = QPixmap::fromImage(image);

  QGraphicsScene *scene = new QGraphicsScene(pixmap_.rect(), widget.graphicsView);
  QGraphicsPixmapItem *graphicsItem = new QGraphicsPixmapItem(pixmap_, scene->activePanel());
  graphicsItem->setPixmap(pixmap_);
//  graphicsItem->setAcceptedMouseButtons(Qt::LeftButton | Qt::RightButton);
  scene->setSceneRect(0, 0, image.width(), image.height());
  scene->addItem(graphicsItem);

  widget.graphicsView->setMaximumSize(pixmap_.width() + 10, pixmap_.height() + 10);
  widget.graphicsView->setScene(scene);
  widget.graphicsView->show();
}

FractalForm* FractalForm::setCenter(const Point& center)
{
  widget.labelCenterValue->setText(QString::fromStdString("(") + QString::number(center.x())
    + "," + QString::number(center.y()) + ")");
  return this;
}

FractalForm* FractalForm::setZoom(double zoom)
{
  widget.labelZoomValue->setText(QString::number(zoom));
  return this;
}

FractalForm* FractalForm::setIterations(double iterations)
{
  widget.labelIterationsValue->setText(QString::number(iterations));
  return this;
}

FractalForm* FractalForm::setImageInfo(int width, int height)
{
  widget.labelWidthValue->setText(QString::number(width));
  widget.labelHeightValue->setText(QString::number(height));
  return this;
}
FractalForm* FractalForm::setColorScheme(const std::string& name)
{
  widget.labelColorSchemeValue->setText(QString::fromStdString(name));
  return this;
}

FractalForm* FractalForm::setTitle(const std::string& title)
{
  this->setWindowTitle(QString::fromStdString("Fractal: " + title));
  return this;
}
