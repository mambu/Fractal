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

#ifndef _COLORSCHEMEFACTORY_H
#define	_COLORSCHEMEFACTORY_H

#include "IColorScheme.h"
#include <map>

class ColorSchemeFactory
{
public:
  static const IColorScheme& getColorScheme();
  static void setNextColorScheme();
  static void setColorScheme(unsigned int id);

  static void registerColorScheme(const IColorScheme& colorScheme);

  static unsigned int colorSchemeCount() { return getMap().size(); }

private:
  class Container
  {
  public:
    Container()
      : colorScheme_(NULL)
    {}
    Container(const IColorScheme& colorScheme)
      : colorScheme_(colorScheme.copy())
    {}
    Container(const Container& container)
      : colorScheme_(container.colorScheme_->copy())
    {}
    Container& operator=(const Container& container)
    {
      colorScheme_ = container.colorScheme_->copy();
      return *this;
    }
    ~Container() { delete colorScheme_; }

    IColorScheme& get() { return *colorScheme_; }

  private:
    IColorScheme *colorScheme_;
  };

private:
  static std::map<unsigned int, Container>& getMap() { static std::map<unsigned int, Container> colorSchemes; return colorSchemes; }

private:
  static unsigned int currentId_;
};

#endif	/* _COLORSCHEMEFACTORY_H */
