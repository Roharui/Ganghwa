
#include "enum/item_type.hpp"

namespace ganghwa
{
  string getNameOfItemType(ItemType type)
  {
    switch (type)
    {
    case AXE:
      return "도끼";
    case BOW:
      return "활";
    case SPEAR:
      return "창";
    case SWORD:
      return "검";
    case STAFF:
      return "지팡이";
    default:
      return "ERROR";
    }
  }

  string getNameOfItemLevel(ItemLevel level)
  {
    switch (level)
    {
    case COMMON:
      return "일반(COMMON)";
    case RARE:
      return "희귀(RARE)";
    case EPIC:
      return "서사(EPIC)";
    case LEGEND:
      return "전설(LEGEND)";
    default:
      return "ERROR";
    }
  }
}