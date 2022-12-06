
#include "driver.hpp"

namespace ganghwa
{
  Driver::Driver()
  {
    InitWindow(WINDOW_WIDTH, WINDOW_HEIGH, WINDOW_TITLE);

    SetTargetFPS(60);
  }

  void Driver::run()
  {

    while (!WindowShouldClose())
    {
      // Update
      //----------------------------------------------------------------------------------
      Page p = pm.curPage();
      MouseInfo mi = getMouseInfo();

      if (mi.click)
        p.doClick(mi.vec);
      //----------------------------------------------------------------------------------

      // Draw
      //----------------------------------------------------------------------------------
      BeginDrawing();
      ClearBackground(RAYWHITE);

      p.draw();

      EndDrawing();
      //----------------------------------------------------------------------------------
    }
  }

  Driver::~Driver()
  {
    CloseWindow();
  }
}
