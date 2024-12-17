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
    position sprite_player_position;

    game.create_window();

    sprite_player_position.first = COLS / 2;
    sprite_player_position.second = LINES - sprite_player.size();
    game.draw_sprite(sprite_player_position, sprite_player);
    game.move_sprite(sprite_player_position, sprite_player);

    game.delete_window();
}
