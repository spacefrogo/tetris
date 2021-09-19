/*
** EPITECH PROJECT, 2019
** ghjk
** File description:
** ghj
*/

#include "./include/my.h"

void	my_color(void)
{
    keypad(stdscr, TRUE);
    noecho();
    curs_set(0);
    start_color();
    init_pair(1, COLOR_CYAN, COLOR_BLACK);
    attron(COLOR_PAIR(1));
}
