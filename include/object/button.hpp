#pragma once

#include <raylib.h>

#include "object/object.hpp"

namespace ganghwa
{
  class Button : public Object
  {
  private:
    Vector2 size;
    Vector2 loc;
    Color color;

    void (*clickFn)() = nullptr;

  public:
    Button(Vector2 loc, Vector2 size, Color color);
    bool checkClick(Vector2 vec);

    void setFn(void (*clickFn)());
    void doClick();

    void draw();
  };
}