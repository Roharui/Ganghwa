
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
    DrawText(this->text.c_str(), this->loc.x, this->loc.y, this->size, this->color);
  }

  void Text::setText(string text)
  {
    this->text = text;
  }
}