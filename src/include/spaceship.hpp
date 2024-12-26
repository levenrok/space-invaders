#pragma once

#include <raylib.h>
#include <vector>

#include "laser.hpp"

class SpaceShip
{
public:
    std::vector<Laser> lasers;

    SpaceShip();
    ~SpaceShip();

    void Draw();
    void MoveLeft();
    void MoveRight();
    void FireLaser();

private:
    Texture2D image;
    Vector2 position;
    double lastFireTime;
};