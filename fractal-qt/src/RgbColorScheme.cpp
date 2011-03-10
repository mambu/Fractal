#include "RgbColorScheme.h"
#include <limits>

ColorSchemeRegister<RgbColorScheme> RgbColorScheme::register_ = ColorSchemeRegister<RgbColorScheme>();

QColor RgbColorScheme::getColor(double value) const
{
  return QColor::fromRgb((value < std::numeric_limits<double>::min()) ? 0 : 255 - value*255,
          boundTo(value*512, 255),
          boundTo(value*383, 255));
}

IColorScheme* RgbColorScheme::copy() const
{
  return new RgbColorScheme();
}

int RgbColorScheme::boundTo(int value, int max)
{
  return value > max ? max : value;
}
