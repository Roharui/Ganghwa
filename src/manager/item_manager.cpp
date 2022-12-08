
#include "manager/item_manager.hpp"

namespace ganghwa
{

  ItemManager::ItemManager()
  {
    this->selected = {
        .name = "평범한 검",
        .stack = 0,
        .damage = 10,
        .type = SWORD,
        .level = COMMON,
    };
    this->inventory.push_back(&this->selected);
  }

  Item &ItemManager::getSelected()
  {
    return this->selected;
  }
}