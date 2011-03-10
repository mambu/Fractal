#include "RgbBandColorScheme.h"
#include <limits>

ColorSchemeRegister<RgbBandColorScheme> RgbBandColorScheme::register_ = ColorSchemeRegister<RgbBandColorScheme>();

QColor RgbBandColorScheme::getColor(double value) const
{
  return QColor::fromRgb(unwrap(value*255, 32),
          unwrap(value*255, 128),
          unwrap(value*255, 64));
}

IColorScheme* RgbBandColorScheme::copy() const
{
  return new RgbBandColorScheme();
}

int RgbBandColorScheme::unwrap(int value, int max)
{
  if (value < max)
    return value * 255 / max;
  return unwrap(value - max, max);
//  return value < max ? value : unwrap(value - max, max);
}
