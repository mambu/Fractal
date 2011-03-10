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

#ifndef _IMAGEDRAW_H
#define	_IMAGEDRAW_H

#include "IDraw.h"
#include "IColorScheme.h"

class ImageDraw : public IDraw
{
public:
  ImageDraw(int width, int height, const IColorScheme& colorScheme)
    : image_(width, height, QImage::Format_RGB32)
    , colorScheme_(colorScheme)
  {}
  virtual int getWidth() const { return image_.width(); }
  virtual int getHeight() const { return image_.height(); }
  virtual void operator()(int x, int y, double insideValue)
  {
    image_.setPixel(x, y, colorScheme_.getColor(insideValue).rgb());
  }

  const QImage& getImage() const { return image_; }

private:
  QImage image_;
  const IColorScheme& colorScheme_;
};

#endif	/* _IMAGEDRAW_H */

