#pragma once

#include "config.hpp"

#include "manager/manager.hpp"

namespace ganghwa
{
  class MoneyManager : public Manager
  {
  private:
    int money = MONEY;

  public:
    int getMoney();
    void setMoney(int money);

    static MoneyManager &getInstance()
    {
      static MoneyManager p;
      return p;
    }
  };
}