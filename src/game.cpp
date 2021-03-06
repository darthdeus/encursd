#include "game.h"

void game_loop(Player& p, WINDOW* win, Map& map) {
  while (1) {
    map.print(win);
    wmove(win, p.y, p.x);
    wrefresh(win);

    char c = getchar();

    switch (c) {
      case 'h':
        p.move(map, Direction::LEFT);
        break;
      case 'k':
        p.move(map, Direction::UP);
        break;
      case 'j':
        p.move(map, Direction::DOWN);
        break;
      case 'l':
        p.move(map, Direction::RIGHT);
        break;
      case 'q':
        exit(0);
    }
  }
}

void game_init_colors() {
  start_color();
  init_pair(1, COLOR_RED, COLOR_BLACK);
  init_pair(2, COLOR_BLUE, COLOR_BLACK);
}

