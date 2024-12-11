#ifndef __TERM_ENGINE_H__
#define __TERM_ENGINE_H__

#include <ncurses.h>
#include <string>
#include <vector>

void create_window(WINDOW*& window);
void draw_sprite(WINDOW*& window, int x, int y, std::vector<std::string> sprite);
void delete_window(WINDOW*& window);

#endif  // __TERM_ENGINE_H__
