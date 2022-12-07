
#include "object/button.hpp"

namespace ganghwa
{
  Button::Button(Vector2 loc, Vector2 size, Color color)
  {
    this->loc = loc;
    this->size = size;
    this->color = color;
  }

  void Button::draw()
  {
    DrawRectangleV(this->loc, this->size, this->color);
  }

  bool Button::checkClick(Vector2 vec)
  {
    int x = vec.x;
    int y = vec.y;

    int sx = this->loc.x;
    int sy = this->loc.y;

    int ex = this->loc.x + this->size.x;
    int ey = this->loc.y + this->size.y;

    return (sx <= x && ex >= x) && ((sy <= y && ey >= y));
  }

  void Button::doClick()
  {
    if (this->clickFn)
      this->clickFn();
  }

  void Button::setFn(void (*clickFn)())
  {
    this->clickFn = clickFn;
  }
}