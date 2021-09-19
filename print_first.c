/*
** EPITECH PROJECT, 2019
** fghj
** File description:
** ghj
*/

#include "./include/my.h"

void	print_tetris(void)
{
    mvprintw(5, 3, "TTTTTTT  EEEEEE   TTTTTTT  RRRR    I   SSSSS ");
    mvprintw(6, 3, "   T     E           T     R   R   I   S     ");
    mvprintw(7, 3, "   T     EEE         T     RRRR    I   SSSSS ");
    mvprintw(8, 3, "   T     E           T     R  R    I       S ");
    mvprintw(9, 3, "   T     EEEEEE      T     R   R   I   SSSSS ");

}

void	game_map_print(tetris_t *t)
{
    while (t->a[t->j] != NULL) {
        mvprintw(t->k++, 50, t->a[t->j]);
        t->j++;
    }
}

void	score_map_print(tetris_t *t)
{
    t->k = 20;
    t->j = 0;
    while (t->b[t->j] != NULL) {
        mvprintw(t->k++, 10, t->b[t->j]);
        t->j++;
    }
}

void	next_termino_print(tetris_t *t)
{
    t->k = 5;
    t->j = 0;
    while (t->c[t->j] != NULL) {
        mvprintw(t->k++, 110, t->c[t->j]);
        t->j++;
    }
}

void	print_termino(char **k)
{
    int	i = 0;
    int j = 7;

    while (k[i] != NULL) {
        mvprintw(j++, 70, k[i]);
        i++;
    }
}
