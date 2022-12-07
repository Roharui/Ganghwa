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

    void (*loadFn)(Text *t) = nullptr;

  public:
    Text(Vector2 loc, int size, Color color);

    void setFn(void (*loadFn)(Text *t));
    void setText(string text);

    void draw();
  };
}