#ifndef __TERM_ENGINE_H__
#define __TERM_ENGINE_H__

#include <ncurses.h>

void create_window(WINDOW*& window);
void delete_window(WINDOW*& window);

#endif  // __TERM_ENGINE_H__
