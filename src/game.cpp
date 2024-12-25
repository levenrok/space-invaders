#include "include/game.hpp"

Game::Game() {

}

Game::~Game() {
}

void Game::Draw() {
    spaceship.Draw();
}

void Game::HandleInput() {
    if (IsKeyDown(KEY_LEFT)) {
        spaceship.MoveLeft();
    }
    if (IsKeyDown(KEY_RIGHT)) {
        spaceship.MoveRight();
    }
}