#pragma once

#include <raylib.h>

class Laser
{
public:
    Laser(Vector2 position, int speed, Color colour);
    void Update();
    void Draw();
    bool active;

private:
    Vector2 position;
    int speed;
    Color colour;
};
