
#include "manager/money_manager.hpp"

namespace ganghwa
{
  int MoneyManager::getMoney()
  {
    return this->money;
  }

  void MoneyManager::setMoney(int money)
  {
    this->money = money;
  }
}