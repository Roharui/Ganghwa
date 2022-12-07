
#include "page/enforce_page.hpp"

namespace ganghwa
{
  EnforcePage::EnforcePage() : mm(MoneyManager::getInstance())
  {
    this->do_btn = Button({100, 100}, {100, 100}, BLUE);
    this->money_txt = Text({100, 100}, 10, BLACK);
  }

  void EnforcePage::calc()
  {
    this->money_txt.setText(fmt::format("Money: {}", mm.getMoney()));
    if (this->do_btn.checkClick())
    {
      mm.setMoney(mm.getMoney() - 100);
    }
  }

  void EnforcePage::draw()
  {
    this->do_btn.draw();
    this->money_txt.draw();
  }
}