#pragma once

#include <map>
#include <string>

#include "manager/manager.hpp"
#include "manager/money_manager.hpp"

#include "page/page.hpp"
#include "page/enforce_page.hpp"

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
    EnforcePage ep;

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