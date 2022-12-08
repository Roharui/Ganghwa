
#include "manager/font_manager.hpp"

namespace ganghwa
{
  FontManager::FontManager()
  {
    this->font = LoadFontEx("./font/NanumBarunGothic.ttf", 64, font_chars, 11266);
  }

  Font FontManager::getFont()
  {
    return this->font;
  }
}