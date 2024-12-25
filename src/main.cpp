#include <raylib.h>
#include <cstdlib>

int main(void)
{
    int windowWidth = 750;
    int windowHeight = 700;

    InitWindow(windowWidth, windowHeight, "C++ Space Invaders");
    SetTargetFPS(60);

    while (WindowShouldClose() == false)
    {
        BeginDrawing();
        EndDrawing();
    }


    CloseWindow();
    exit(EXIT_SUCCESS);
}