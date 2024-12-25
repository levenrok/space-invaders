#include "include/spaceship.hpp"

SpaceShip::SpaceShip()
{
    image = LoadTexture("resources/player.png");
    position.x = (GetScreenWidth() - image.width) / 2;
    // The spaceship will be placed 10 pixels from the bottom of the screen
    position.y = (GetScreenHeight() - (image.height + 10));
}

SpaceShip::~SpaceShip()
{
    UnloadTexture(image);
}

void SpaceShip::Draw()
{
    DrawTextureV(image, position, WHITE);
}