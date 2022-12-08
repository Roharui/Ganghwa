
#include "driver.hpp"

namespace ganghwa
{
  // Font Text::font = LoadFont("./font/NanumBarunGothic.ttf");

  Driver::Driver() : pm(PageManager::getInstance())
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
      Page &p = pm.curPage();
      p.calc();
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
    // UnloadFont(Text::font);
    CloseWindow();
  }
}
