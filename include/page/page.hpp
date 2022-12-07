#pragma once

#include <vector>

#include "object/button.hpp"
#include "object/text.hpp"

using std::vector;

namespace ganghwa
{
  class Page
  {
  private:
    vector<Button> vBtn;
    vector<Text> vTxt;

  public:
    Page() {}

    void setBtns(vector<Button> vBtn);
    void setTxts(vector<Text> vTxt);

    void draw();
    void doClick(Vector2 &vec);
  };
}