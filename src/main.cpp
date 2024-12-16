#include <string>
#include <vector>

#include "term_engine/include/term_engine.h"

int main(void) {
    Game game;

    std::vector<std::string> sprite_player = {
        "   /\\",
        "  |==|",
        " /____\\",
        " |.--.|",
    };

    game.create_window();

    game.draw_sprite(COLS / 2, LINES - sprite_player.size(), sprite_player);

    game.delete_window();
}
