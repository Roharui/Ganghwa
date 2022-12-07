#pragma once

#include <vector>

#include "object/button.hpp"
#include "object/text.hpp"

using std::vector;

namespace ganghwa
{
  class Page
  {
  public:
    virtual void calc() = 0;
    virtual void draw() = 0;
  };
}