#include "include/spaceship.hpp"

SpaceShip::SpaceShip()
{
    image = LoadTexture("resources/player.png");
    position.x = (GetScreenWidth() - image.width) / 2;
    // The spaceship will be placed 10 pixels from the bottom of the screen
    position.y = (GetScreenHeight() - (image.height + 7));
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