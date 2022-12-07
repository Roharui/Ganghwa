#pragma once

#include <string>
#include <raylib.h>

#include "object/object.hpp"

using std::string;

namespace ganghwa
{
  class Text : public Object
  {
  private:
    Vector2 loc;
    int size;
    string text;
    Color color;

  public:
    Text() {}
    Text(Vector2 loc, int size, Color color);

    void setText(string text);

    void draw() override;
  };
}