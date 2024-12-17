#ifndef __TERM_ENGINE_H__
#define __TERM_ENGINE_H__

#include <ncurses.h>
#include <algorithm>
#include <string>
#include <utility>
#include <vector>

/**
 * @brief A type alias for a pair of integers representing a position.
 *
 * The `position` type is used to store coordinates, where:
 * - The first integer represents the x-coordinate.
 * - The second integer represents the y-coordinate.
 */
typedef std::pair<int, int> position;

/**
 * @brief Collection of game related functions wrapped in a class.
 */
class Game {
  public:
    /**
     * @brief Initializes the game window.
     */
    void create_window();

    /**
     * @brief Draws a sprite at a given position.
     *
     * @param sprite_position The position to draw the sprite passed as a position type.
     * @param sprite The vector of strings representing the sprite.
     */
    void draw_sprite(position sprite_position, const std::vector<std::string>& sprite);

    /**
     * @brief Moves a sprite based on user input.
     *
     * @param sprite_position The starting position of the sprite passed as a position type.
     * @param sprite The vector of strings representing the sprite.
     */
    void move_sprite(position sprite_position, const std::vector<std::string>& sprite);

    /**
     * @brief Cleans up and deletes the game window.
     */
    void delete_window();

  private:
    WINDOW* window; /**< Pointer to the game window. */
};

#endif  // __TERM_ENGINE_H__
