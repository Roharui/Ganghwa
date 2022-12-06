
#include "page/page.hpp"

namespace ganghwa
{
  Page::Page(const vector<Object> vObj)
  {
    this->vObj = vObj;
  }

  void Page::draw()
  {
    for (Object &i : this->vObj)
    {
      i.draw();
    }
  }

  void Page::doClick(Vector2 &vec)
  {
    for (Object &i : this->vObj)
    {
      if (i.checkClick(vec))
      {
        i.doClick();
        return;
      }
    }
  }
}