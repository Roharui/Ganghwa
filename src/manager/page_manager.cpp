
#include "manager/page_manager.hpp"

namespace ganghwa
{
  // public

  PageManager::PageManager()
  {
  }

  Page &PageManager::curPage()
  {
    switch (this->pt)
    {
    case ENFORCE:
      return this->ep;
    }
  }

  void PageManager::setPage(PageType pt)
  {
    this->pt = pt;
  }
}