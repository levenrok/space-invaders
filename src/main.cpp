#include <raylib.h>
#include <cstdlib>

#include "include/spaceship.hpp"

int main(void)
{
    int windowWidth = 480;
    int windowHeight = 480;

    InitWindow(windowWidth, windowHeight, "C++ Space Invaders");
    SetTargetFPS(60);

    SpaceShip spaceship;

    while (WindowShouldClose() == false)
    {
        BeginDrawing();

        spaceship.Draw();

        EndDrawing();
    }

    CloseWindow();
    exit(EXIT_SUCCESS);
}