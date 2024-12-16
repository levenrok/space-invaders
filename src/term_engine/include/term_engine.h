#ifndef __TERM_ENGINE_H__
#define __TERM_ENGINE_H__

#include <ncurses.h>
#include <string>
#include <utility>
#include <vector>

typedef std::pair<int, int> position;

class Game {
  public:
    void create_window();
    void draw_sprite(position sprite_position, const std::vector<std::string>& sprite);
    void delete_window();

  private:
    WINDOW* window;
};

#endif  // __TERM_ENGINE_H__
