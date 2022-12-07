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

  public:
    Button(){};
    Button(Vector2 loc, Vector2 size, Color color);
    bool checkClick();

    void draw() override;
  };
}