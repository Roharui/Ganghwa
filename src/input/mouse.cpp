
#include "input/mouse.hpp"

namespace ganghwa
{
  MouseInfo getMouseInfo()
  {
    return {
        .vec = GetMousePosition(),
        .click = IsMouseButtonPressed(MOUSE_BUTTON_LEFT),
    };
  }
}