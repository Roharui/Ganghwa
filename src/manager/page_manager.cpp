
#include "manager/page_manager.hpp"

namespace ganghwa
{
  // private

  void PageManager::load_pages()
  {
    // set First Page
    this->pt = ENFORCE;

    // enforce Page
    Object obj({100, 100}, {100, 100}, BLUE);
    obj.setFn([]()
              { std::cout << "Hello World!\n"; });
    this->pages[ENFORCE] = Page({obj});
  }

  // public

  PageManager::PageManager()
  {
    this->load_pages();
  }

  Page &PageManager::curPage()
  {
    return this->pages[this->pt];
  }

  void PageManager::setPage(PageType pt)
  {
    this->pt = pt;
  }
}