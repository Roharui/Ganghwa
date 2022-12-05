
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
      //----------------------------------------------------------------------------------

      // Draw
      //----------------------------------------------------------------------------------
      BeginDrawing();

      ClearBackground(RAYWHITE);

      EndDrawing();
      //----------------------------------------------------------------------------------
    }
  }

  Driver::~Driver()
  {
    CloseWindow();
  }
}
