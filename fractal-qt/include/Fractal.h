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

#ifndef _FRACTAL_H
#define	_FRACTAL_H

#include "Point.h"
#include <string>

class IDraw;
class IProgress;
class FractalAlgo;

class Fractal
{
public:
  Fractal(const Point& center = Point(), double zoom = 1.0);

  Fractal& setCenter(const Point& center);
  Fractal& setBaseIterations(unsigned int iterations);
  Fractal& setZoom(double zoom);

  virtual std::string getName() const { return name_; }

  const Point& getCenter() const { return center_; }
  unsigned int getBaseIterations() const { return baseIterations_; }
  double getZoom() const { return zoom_; }

  unsigned int getIterations() const { return zoom_ * baseIterations_; }

  void compute(IDraw& draw, FractalAlgo& algo, IProgress& progress);
  Point pointImage2Factal(int imageWidth, int imageHeight, const Point& point) const;

private:
  Point center_;
  int baseIterations_;
  double zoom_;
  std::string name_;
};

#endif	/* _FRACTAL_H */

