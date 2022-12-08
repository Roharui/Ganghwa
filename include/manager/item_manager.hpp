#pragma once

#include <vector>
#include <string>

#include "enum/item_type.hpp"

#include "manager/manager.hpp"

using std::string;
using std::vector;

namespace ganghwa
{
  struct Item
  {
    string name;
    int stack;
    int damage;
    ItemType type;
    ItemLevel level;
  };

  class ItemManager : public Manager
  {
  private:
    vector<Item *> inventory;
    Item selected;

    ItemManager();

  public:
    Item &getSelected();
    static ItemManager &getInstance()
    {
      static ItemManager p;
      return p;
    }
  };
}
