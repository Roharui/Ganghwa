#pragma once

#include <raylib.h>

namespace ganghwa
{
  class Object
  {
  private:
    Vector2 size;
    Vector2 loc;
    Color color;

    void (*fn)();

  public:
    Object(Vector2 loc, Vector2 size, Color color);
    bool checkClick(Vector2 vec);

    void setFn(void (*fn)());

    virtual void draw();
    virtual void doClick();
  };
}