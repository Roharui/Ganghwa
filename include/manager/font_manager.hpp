#pragma once

#include <raylib.h>

#include "hangle.hpp"

#include "manager/manager.hpp"

namespace ganghwa
{
  class FontManager : public Manager
  {
  private:
    Font font;

    FontManager();

  public:
    Font getFont();
    static FontManager &getInstance()
    {
      static FontManager p;
      return p;
    }
  };
}