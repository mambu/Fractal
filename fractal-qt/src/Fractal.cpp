#include "Fractal.h"
#include "IProgress.h"
#include "IDraw.h"
#include "FractalAlgo.h"
#include <complex>

Fractal::Fractal(const Point& center, double zoom)
  : center_(center)
  , baseIterations_(150)
  , zoom_(zoom)
{
}

Fractal& Fractal::setCenter(const Point& center)
{
  center_ = center;
  return *this;
}

Fractal& Fractal::setBaseIterations(unsigned int iterations)
{
  baseIterations_ = iterations;
  return *this;
}

Fractal& Fractal::setZoom(double zoom)
{
  if (zoom > 0)
    zoom_ = zoom;
  return *this;
}

void Fractal::compute(IDraw& draw, FractalAlgo& algo, IProgress& progress)
{
  name_ = algo.getName();
  int imageWidth = draw.getWidth();
  int imageHeight = draw.getHeight();
  double halfWidth = 1.0/zoom_;
  double MinRe = center_.x() - halfWidth;
  double MaxRe = center_.x() + halfWidth;
  double halfHeight = halfWidth*imageHeight/imageWidth;
  double MinIm = center_.y() - halfHeight;
  double MaxIm = center_.y() + halfHeight;

  double Re_factor = (MaxRe-MinRe)/(imageWidth-1);
  double Im_factor = (MaxIm-MinIm)/(imageHeight-1);

  unsigned int iterations = getIterations();

  for (int y = 0; y < imageHeight; ++y)
  {
    double c_im = MaxIm - y * Im_factor;
    for (int x = 0; x < imageWidth; ++x)
    {
      double c_re = MinRe + x * Re_factor;

      double Z_re = c_re, Z_im = c_im; // Set Z = c
      double insideValue = 0;
      for(unsigned int n = 0; n < iterations; ++n)
      {
          if(Z_re*Z_re + Z_im*Z_im > 4) // Absolute value of Z > 2
          {
              insideValue = (double)n/iterations;
              break;
          }
          algo.computeNewZ(Z_re, Z_im, c_re, c_im);
      }
      draw(x, y, insideValue);
    }
    progress.setProgress(y*100/imageHeight);
  }
}

Point Fractal::pointImage2Factal(int imageWidth, int imageHeight, const Point& point) const
{
  double halfWidth = 1.0/zoom_;
  double MinRe = center_.x() - halfWidth;
  double MaxRe = center_.x() + halfWidth;
  double halfHeight = halfWidth*imageHeight/imageWidth;
  double MinIm = center_.y() - halfHeight;
  double MaxIm = center_.y() + halfHeight;

  return Point(MinRe + point.x()*(MaxRe-MinRe)/(imageWidth-1), MaxIm - point.y()*(MaxIm-MinIm)/(imageHeight-1));
}
