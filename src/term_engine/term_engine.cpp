#include "include/term_engine.h"

void create_window(WINDOW*& window) {
    window = initscr();
    noecho();
    cbreak();
}

void delete_window(WINDOW*& window) {
    delwin(window);
    endwin();
}
