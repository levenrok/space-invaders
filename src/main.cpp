#include <string>
#include <vector>

#include "term_engine/include/term_engine.h"

int main(void) {
    WINDOW* win_game;
    std::vector<std::string> sprite_player = {
        "   /\\",
        "  |==|",
        " /____\\",
        " |.--.|",
    };

    create_window(win_game);

    draw_sprite(win_game, COLS / 2, LINES - sprite_player.size(), sprite_player);

    delete_window(win_game);
}
