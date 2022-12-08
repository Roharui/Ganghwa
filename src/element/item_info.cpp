
#include "element/item_info.hpp"

namespace ganghwa
{
  ItemInfo::ItemInfo(Vector2 loc)
  {
    this->item_name_txt = Text({loc.x + 5, loc.y + 5}, 20, BLACK);
    this->item_damage_txt = Text({loc.x + 5, loc.y + 30}, 20, BLACK);
    this->item_type_txt = Text({loc.x + 5, loc.y + 55}, 20, BLACK);
    this->item_level_txt = Text({loc.x + 5, loc.y + 80}, 20, BLACK);
  }

  void ItemInfo::calc()
  {
    ItemManager &im = ItemManager::getInstance();

    Item &item = im.getSelected();

    this->item_name_txt.setText(fmt::format("{} +{}", item.name, item.stack));
    this->item_damage_txt.setText(fmt::format("{}", item.damage));
    this->item_type_txt.setText(getNameOfItemType(item.type));
    this->item_level_txt.setText(getNameOfItemLevel(item.level));
  }

  void ItemInfo::draw()
  {
    this->item_name_txt.draw();
    this->item_damage_txt.draw();
    this->item_type_txt.draw();
    this->item_level_txt.draw();
  }
}