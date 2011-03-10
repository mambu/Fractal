/*
The MIT License

Copyright (c) 2010 Marco Ambu

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
 */

#ifndef _FRACTALFORM_H
#define	_FRACTALFORM_H

#include "ui_FractalForm.h"
#include "Fractal.h"
#include <qpixmap.h>

class Point;

class FractalForm : public QWidget {
  Q_OBJECT
public:
  FractalForm(QWidget* parent);
  virtual ~FractalForm();

public slots:
  void saveImg();
  void onClick(const QPoint& point);

public:
  void computeMandelbrot(const Point& center, double zoom, std::size_t imageWidth, std::size_t imageHeight);
  void computeJulia(const Point& center, double zoom, std::size_t imageWidth, std::size_t imageHeight, const Point& computation);

private:
  void drawImage(const QImage& image);
  FractalForm* setCenter(const Point& center);
  FractalForm* setZoom(double zoom);
  FractalForm* setIterations(double iterations);
  FractalForm* setImageInfo(int width, int height);
  FractalForm* setColorScheme(const std::string& name);
  FractalForm* setTitle(const std::string& title);

private:
  Ui::FractalForm widget;
  Fractal fractal_;
  QPixmap pixmap_;
};

#endif	/* _FRACTALFORM_H */
