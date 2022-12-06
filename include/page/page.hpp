#pragma once

#include <vector>

#include "object/object.hpp"

using std::vector;

namespace ganghwa
{
  class Page
  {
  private:
    vector<Object> vObj;

  public:
    Page(const vector<Object> vObj);
    void draw();
    void doClick(Vector2 &vec);
  };
}