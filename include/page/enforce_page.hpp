#pragma once

#include <fmt/core.h>

#include "page/page.hpp"

#include "manager/money_manager.hpp"
#include "manager/item_manager.hpp"

#include "object/button.hpp"
#include "object/text.hpp"

#include "element/item_info.hpp"

namespace ganghwa
{
  class EnforcePage : public Page
  {
  private:
    Button do_btn;
    Text money_txt;
    ItemInfo info_ele;

  public:
    EnforcePage();

    void calc() override;
    void draw() override;
  };
}