#pragma once

// lib section
#include <raylib.h>
#include <vector>

// config
#include "config.hpp"

// input section
#include "input/mouse.hpp"

// page section
#include "manager/page_manager.hpp"

// tmp section

using std::vector;
namespace ganghwa
{
  class Driver
  {
  private:
    PageManager pm;

  public:
    Driver();
    void run();
    ~Driver();
  };
}
