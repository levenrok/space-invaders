#include "include/laser.hpp"

Laser::Laser(Vector2 position, int speed, Color colour)
{
    this->position = position;
    this->speed = speed;
    this->colour = colour;
    active = true;
}

void Laser::Draw()
{
    if (active)
    {
        DrawRectangle(position.x, position.y, 4, 15, colour);
    }
}

void Laser::Update()
{
    position.y += speed;
    if (active)
    {
        if (position.y < 0 || position.y > GetScreenHeight())
        {
            active = false;
        }
    }
}