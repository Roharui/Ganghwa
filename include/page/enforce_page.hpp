#pragma once

#include <fmt/core.h>

#include "page/page.hpp"

#include "manager/money_manager.hpp"

#include "object/button.hpp"
#include "object/text.hpp"

namespace ganghwa
{
  class EnforcePage : public Page
  {
  private:
    Button do_btn;
    Text money_txt;

    MoneyManager &mm;

  public:
    EnforcePage();

    void calc() override;
    void draw() override;
  };
}