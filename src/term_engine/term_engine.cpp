#include "include/term_engine.h"

void create_window(WINDOW*& window) {
    window = initscr();
    noecho();
    cbreak();
}

void draw_sprite(WINDOW*& window, int x, int y, std::vector<std::string> sprite) {
    move(y, x);
    for (const std::string& line : sprite) {
        wprintw(window, "%s\n", line.c_str());
    }
}

void delete_window(WINDOW*& window) {
    delwin(window);
    endwin();
}
