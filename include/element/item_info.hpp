#pragma once

#include <raylib.h>
#include <fmt/core.h>

#include "object/object.hpp"
#include "object/text.hpp"

#include "enum/item_type.hpp"

#include "manager/item_manager.hpp"

namespace ganghwa
{
  class ItemInfo : public Object
  {
  private:
    Text item_name_txt;
    Text item_damage_txt;
    Text item_type_txt;
    Text item_level_txt;

  public:
    ItemInfo() {}
    ItemInfo(Vector2 loc);

    void calc();
    void draw() override;
  };
}