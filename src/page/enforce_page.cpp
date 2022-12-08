
#include "page/enforce_page.hpp"

namespace ganghwa
{
  EnforcePage::EnforcePage()
  {
    this->do_btn = Button({250, 350}, {300, 50}, BLUE);
    this->money_txt = Text({10, 10}, 30, BLACK);
    this->info_ele = ItemInfo({656, 90});
  }

  void EnforcePage::calc()
  {
    MoneyManager &mm = MoneyManager::getInstance();

    this->money_txt.setText(fmt::format("Money: {}", mm.getMoney()));
    if (this->do_btn.checkClick())
    {
      mm.setMoney(mm.getMoney() - 100);
    }
    this->info_ele.calc();
  }

  void EnforcePage::draw()
  {
    this->do_btn.draw();
    this->money_txt.draw();
    this->info_ele.draw();
  }
}