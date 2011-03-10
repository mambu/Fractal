#include "ColorSchemeFactory.h"
#include <stdexcept>

unsigned int ColorSchemeFactory::currentId_ = 0;

const IColorScheme& ColorSchemeFactory::getColorScheme()
{
  if (currentId_ >= getMap().size())
    throw std::out_of_range("No ColorScheme registered.");
  return getMap()[currentId_].get();
}

void ColorSchemeFactory::setNextColorScheme()
{
  if (currentId_ == getMap().size()-1)
    currentId_ = 0;
}

void ColorSchemeFactory::setColorScheme(unsigned int id)
{
  if (id >= getMap().size())
    throw std::out_of_range("ColorScheme not registered.");
  currentId_ = id;
}

void ColorSchemeFactory::registerColorScheme(const IColorScheme& colorScheme)
{
  getMap().insert(std::make_pair<unsigned int, Container>(getMap().size(), /*Container*/(colorScheme)));
}
