/*
** EPITECH PROJECT, 2019
** ghj
** File description:
** fgh
*/

#include "./include/my.h"

void	print_score(tetris_t *t)
{
    init_pair(2, COLOR_MAGENTA, COLOR_BLACK);
    attron(COLOR_PAIR(2));
    mvprintw(23, 12, "HIGH SCORE:   ");
    mvprintw(23, 28, int_to_array(t->high));
    mvprintw(26, 12, "SCORE:   ");
    mvprintw(26, 28, int_to_array(t->score));
    mvprintw(29, 12, "LINES:   ");
    mvprintw(29, 28, int_to_array(t->lines));
    mvprintw(32, 12, "LEVEL:   ");
    mvprintw(32, 28, int_to_array(t->level));
    mvprintw(35, 12, "TIMER:   ");
    mvprintw(35, 28, int_to_array(t->time));
}

void	to_check(tetris_t *t)
{
    my_color();
    while (!t->i) {
        print_tetris();
        game_map_print(t);
        score_map_print(t);
        next_termino_print(t);
        print_score(t);
        refresh();
        if ((t->key = getch()) == 113)
            t->i++;
    }
    endwin();
    my_putstr("You finished game with ");
    my_put_nbr(t->score);
    my_putstr(" points.\n");
    exit (0);
}

void	check_if_begin(tetris_t *t)
{
    int x = 0;
    int y = 0;

    initscr();
    getmaxyx(stdscr, x, y);
    if (x < t->p->firsts || y < t->p->seconds) {
        endwin();
        my_putstr("Your window is small!\n");
    } else {
        to_check(t);
    }
}
