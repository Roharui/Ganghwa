#pragma once

#include <string>

using std::string;

namespace ganghwa
{
  enum ItemType
  {
    AXE,
    BOW,
    SPEAR,
    SWORD,
    STAFF,
  };

  string getNameOfItemType(ItemType type);

  enum ItemLevel
  {
    COMMON,
    RARE,
    EPIC,
    LEGEND,
  };

  string getNameOfItemLevel(ItemLevel level);
}