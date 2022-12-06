#pragma once

#include <raylib.h>

namespace ganghwa
{

  struct MouseInfo
  {
    Vector2 vec;
    bool click;
  };

  MouseInfo getMouseInfo();
};