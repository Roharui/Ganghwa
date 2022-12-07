
#include "page/page.hpp"

namespace ganghwa
{
  void Page::setBtns(vector<Button> vBtn)
  {
    this->vBtn = vBtn;
  }

  void Page::setTxts(vector<Text> vTxt)
  {
    this->vTxt = vTxt;
  }

  void Page::draw()
  {
    for (Button &i : this->vBtn)
    {
      i.draw();
    }
    for (Text &i : this->vTxt)
    {
      i.draw();
    }
  }

  void Page::doClick(Vector2 &vec)
  {
    for (Button &i : this->vBtn)
    {
      if (i.checkClick(vec))
      {
        i.doClick();
        return;
      }
    }
  }
}