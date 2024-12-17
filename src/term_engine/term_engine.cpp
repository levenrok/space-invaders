#include "include/term_engine.h"

void Game::create_window() {
    // Initialize the game window and allocate required the memory.
    window = initscr();
    // Disable echoing user input to the screen.
    noecho();
    // Disable line buffering to make user input immediately available without pressing 'Enter'.
    cbreak();
    // Set the cursor visibility to invisible.
    curs_set(0);
}

void Game::draw_sprite(position sprite_position, const std::vector<std::string>& sprite) {
    // Draw the sprite from the top down by looping over each line.
    for (const std::string& line : sprite) {
        wmove(window, sprite_position.second, sprite_position.first);
        wprintw(window, "%s", line.c_str());
        sprite_position.second++;
    }
    // Refresh the window to show the sprite after drawing.
    wrefresh(window);
}

void Game::move_sprite(position sprite_position, const std::vector<std::string>& sprite) {
    int sprite_height = sprite.size();
    int sprite_width;
    // Determine the max width by looping over each line of the sprite.
    for (const std::string& line : sprite) {
        sprite_width = std::max(sprite_width, (int)line.length());
    }

    int input;
    while ((input = getch()) != 'q') {
        position previous_sprite_position = sprite_position;

        switch (input) {
            case 'a':
                // Check if the sprite is colliding with the beginning of the window.
                if (sprite_position.first > 0) {
                    sprite_position.first--;
                }
                break;
            case 'd':
                // Check if the sprite is colliding with the end of the window.
                if (sprite_position.first < COLS - sprite_width) {
                    sprite_position.first++;
                }
                break;
        }
        // Clear the previous drawing of the sprite by filling the previous position with spaces.
        std::vector<std::string> empty_space(sprite_height, std::string(sprite_width, ' '));
        this->draw_sprite(previous_sprite_position, empty_space);

        // Redraw the sprite in the new location.
        this->draw_sprite(sprite_position, sprite);
    }
}

void Game::delete_window() {
    // Delete the game window and free up the memory allocated.
    delwin(window);
    // Exit form the ncurses mode (revert back to the terminal).
    endwin();
}
