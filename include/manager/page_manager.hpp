#pragma once

#include <map>

#include "page/page.hpp"

// tmp
#include <iostream>

using std::map;

namespace ganghwa
{

  enum PageType
  {
    ENFORCE,
  };

  class PageManager
  {
  private:
    PageType pt;
    map<PageType, Page> pages;
    void load_pages();

  public:
    PageManager();
    Page &curPage();
    void setPage(PageType pt);
  };
}