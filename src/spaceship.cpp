#include "include/spaceship.hpp"

SpaceShip::SpaceShip()
{
    image = LoadTexture("resources/player.png");
    position.x = (GetScreenWidth() - image.width) / 2;
    // The spaceship will be placed 10 pixels from the bottom of the screen
    position.y = (GetScreenHeight() - (image.height + 7));
    lastFireTime = 0.0;
}

SpaceShip::~SpaceShip()
{
    UnloadTexture(image);
}

void SpaceShip::Draw()
{
    DrawTextureV(image, position, WHITE);
}

void SpaceShip::MoveLeft()
{
    position.x -= 7;
    if (position.x <= 0)
    {
        position.x = 0;
    }
}

void SpaceShip::MoveRight()
{
    position.x += 7;
    if (position.x >= GetScreenWidth() - image.width)
    {
        position.x = GetScreenWidth() - image.width;
    }
}

void SpaceShip::FireLaser()
{
    if (GetTime() - lastFireTime >= 0.35)
    {
        lastFireTime = GetTime();
        lasers.push_back(Laser({position.x + image.width / 2 - 2, position.y - 4}, -6, {0, 0, 255, 255}));
    }
}