#include "include/term_engine.h"

void Game::create_window() {
    window = initscr();
    noecho();
    cbreak();
}

void Game::draw_sprite(position sprite_position, const std::vector<std::string>& sprite) {
    for (const std::string& line : sprite) {
        wmove(window, sprite_position.second, sprite_position.first);
        wprintw(window, "%s", line.c_str());
        sprite_position.second++;
    }
    wrefresh(window);
}

void Game::delete_window() {
    delwin(window);
    endwin();
}
