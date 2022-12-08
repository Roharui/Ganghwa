
#include "object/text.hpp"

namespace ganghwa
{
  Text::Text(Vector2 loc, int size, Color color)
  {
    this->loc = loc;
    this->size = size;
    this->color = color;
  }

  void Text::draw()
  {
    FontManager &fm = FontManager::getInstance();
    DrawTextEx(fm.getFont(), this->text.c_str(), this->loc, this->size, 2, this->color);
  }

  void Text::setText(string text)
  {
    this->text = text;
  }
}