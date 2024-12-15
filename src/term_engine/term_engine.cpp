#include "include/term_engine.h"

void create_window(WINDOW*& window) {
    window = initscr();
    noecho();
    cbreak();
}

void draw_sprite(WINDOW*& window, int x, int y, const std::vector<std::string>& sprite) {
    for (const std::string& line : sprite) {
        wmove(window, y, x);
        wprintw(window, "%s", line.c_str());
        y++;
    }
    wrefresh(window);
}

void delete_window(WINDOW*& window) {
    delwin(window);
    endwin();
}
