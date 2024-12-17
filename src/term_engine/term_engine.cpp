#include "include/term_engine.h"

void Game::create_window() {
    window = initscr();
    noecho();
    cbreak();
    curs_set(0);
}

void Game::draw_sprite(position sprite_position, const std::vector<std::string>& sprite) {
    for (const std::string& line : sprite) {
        wmove(window, sprite_position.second, sprite_position.first);
        wprintw(window, "%s", line.c_str());
        sprite_position.second++;
    }
    wrefresh(window);
}

void Game::move_sprite(position sprite_position, const std::vector<std::string>& sprite) {
    int sprite_height = sprite.size();
    int sprite_width;
    for (const std::string& line : sprite) {
        sprite_width = std::max(sprite_width, (int)line.length());
    }

    int input;
    while ((input = getch()) != 'q') {
        position previous_sprite_position = sprite_position;

        switch (input) {
            case 'a':
                if (sprite_position.first > 0) {
                    sprite_position.first--;
                }
                break;
            case 'd':
                if (sprite_position.first < COLS - sprite_width) {
                    sprite_position.first++;
                }
                break;
        }
        std::vector<std::string> empty_space(sprite_height, std::string(sprite_width, ' '));
        this->draw_sprite(previous_sprite_position, empty_space);

        this->draw_sprite(sprite_position, sprite);
    }
}

void Game::delete_window() {
    curs_set(1);
    delwin(window);
    endwin();
}
