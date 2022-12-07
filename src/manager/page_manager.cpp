
#include "manager/page_manager.hpp"

namespace ganghwa
{
  // private

  void PageManager::load_pages()
  {
    // set First Page
    this->pt = ENFORCE;

    // enforce Page
    Page enforce;

    Button btn({100, 100}, {100, 100}, BLUE);
    btn.setFn([]()
              { MoneyManager &m = MoneyManager::getInstance();
                m.setMoney(m.getMoney() - 100); });
    enforce.setBtns({btn});

    Text text({100, 100}, 10, BLACK);
    text.setFn([](Text *t)
               { MoneyManager &m = MoneyManager::getInstance();
                t->setText("Money: " + std::to_string(m.getMoney())); });
    enforce.setTxts({text});

    this->pages[ENFORCE] = enforce;
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