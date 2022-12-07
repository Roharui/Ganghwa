#pragma once

#include <map>
#include <string>

#include "manager/manager.hpp"
#include "manager/money_manager.hpp"

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

  class PageManager : public Manager
  {
  private:
    PageType pt;
    map<PageType, Page> pages;
    void load_pages();

  protected:
    PageManager();

  public:
    Page &curPage();
    void setPage(PageType pt);

    static PageManager &getInstance()
    {
      static PageManager p;
      return p;
    }
  };
}