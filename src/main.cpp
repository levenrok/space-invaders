#include <raylib.h>
#include <cstdlib>

#include "include/game.hpp"

int main(void)
{
    int windowWidth = 480;
    int windowHeight = 480;

    InitWindow(windowWidth, windowHeight, "C++ Space Invaders");
    SetTargetFPS(60);

    Game game;

    while (WindowShouldClose() == false)
    {
        game.HandleInput();

        BeginDrawing();
        ClearBackground(BLACK);

        game.Draw();

        EndDrawing();
    }

    CloseWindow();
    exit(EXIT_SUCCESS);
}