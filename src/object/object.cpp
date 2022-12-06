
#include "object/object.hpp"

namespace ganghwa
{
  Object::Object(Vector2 loc, Vector2 size, Color color)
  {
    this->loc = loc;
    this->size = size;
    this->color = color;
  }

  void Object::draw()
  {
    DrawRectangleV(this->loc, this->size, this->color);
  }

  bool Object::checkClick(Vector2 vec)
  {
    int x = vec.x;
    int y = vec.y;

    int sx = this->loc.x;
    int sy = this->loc.y;

    int ex = this->loc.x + this->size.x;
    int ey = this->loc.y + this->size.y;

    return (sx <= x && ex >= x) && ((sy <= y && ey >= y));
  }

  void Object::doClick()
  {
    this->fn();
  }

  void Object::setFn(void (*fn)())
  {
    this->fn = fn;
  }
}