
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
    if (this->loadFn)
      this->loadFn(this);
    DrawText(this->text.c_str(), this->loc.x, this->loc.y, this->size, this->color);
  }

  void Text::setFn(void (*loadFn)(Text *t))
  {
    this->loadFn = loadFn;
  }

  void Text::setText(string text)
  {
    this->text = text;
  }
}