#include "HsvColorScheme.h"
#include <limits>

ColorSchemeRegister<HsvColorScheme> HsvColorScheme::register_ = ColorSchemeRegister<HsvColorScheme>();

QColor HsvColorScheme::getColor(double value) const
{
//  return QColor::fromHsv(value*255, 255, (value < std::numeric_limits<double>::min()) ? 0 : 255);
  return QColor::fromHsv(value*255, 255 - value*255, (value < std::numeric_limits<double>::min()) ? 0 : value*128 + 127);
}

IColorScheme* HsvColorScheme::copy() const
{
  return new HsvColorScheme();
}
