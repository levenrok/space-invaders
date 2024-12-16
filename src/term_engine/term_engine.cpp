#include "include/term_engine.h"

void Game::create_window() {
    window = initscr();
    noecho();
    cbreak();
}

void Game::draw_sprite(int x, int y, const std::vector<std::string>& sprite) {
    for (const std::string& line : sprite) {
        wmove(window, y, x);
        wprintw(window, "%s", line.c_str());
        y++;
    }
    wrefresh(window);
}

void Game::delete_window() {
    delwin(window);
    endwin();
}
