#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <curses.h>

int main(void) {
    WINDOW * mainwin;

    if ((mainwin = initscr()) == NULL) {
      fprintf(stderr, "Error initialising ncurses.\n");
      exit(EXIT_FAILURE);
    }

    mvaddstr(1, 1, "Ncurses Test");
    addstr("\nPress any key to exit...");
    refresh();

    getch();
    delwin(mainwin);
    endwin();
    refresh();

    return EXIT_SUCCESS;
}
