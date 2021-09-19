/*
** EPITECH PROJECT, 2019
** fgh
** File description:
** hj
*/

#include "./include/my.h"


void	print_first_debug(tetris_t *t)
{
    my_putstr("*** DEBUG MODE ***\n");
    my_putstr("Key Left :  ");
    my_putstr(t->p->left);
    my_putstr("\nKey Right :  ");
    my_putstr(t->p->right);
    my_putstr("\nKey Turn :  ");
    my_putstr(t->p->turn);
    my_putstr("\nKey Drop :  ");
    my_putstr(t->p->drop);
    my_putstr("\nKey Quit :  ");
    my_putchar(t->p->quit);
    my_putstr("\nKey Pause :  ");
    my_putchar(t->p->pause);
    my_putstr("\nNext :  ");
    my_putstr(t->p->next);
    my_putstr("\nLevel :  ");
    my_put_nbr(t->p->level);
}

void	print_term(tetris_t *t)
{
    my_putstr("\nTetriminos :  Name ");
    my_putstr(t->names[t->p1]);
    my_putstr(" :  Size ");
    my_put_nbr(my_getnbr(t->x1[0]));
    my_putchar('*');
    my_put_nbr(my_getnbr(t->x1[1]));
    my_putstr(" :  Color ");
    my_put_nbr(my_getnbr(t->x1[2]));
    my_putstr(" :\n");
    my_putstr(t->buffer2);
}

void	third_debug(tetris_t *t)
{
    char	**c = NULL;

    t->k1 = double_array(t->buffer, '\n');
    t->x1 = double_array(t->k1[0], ' ');
    t->buffer2 = take_only_termino(t->buffer);
    c = double_array(t->buffer2, '\n');
    if (count_dir(t->x1) != 3 || \
    check_num(t->x1) == 1 || \
    my_getnbr(t->x1[2]) > 7 || \
    count_lines(t->buffer2) != my_getnbr(t->x1[1])-1 || \
    check_k(c) != my_getnbr(t->x1[0]) || \
    check_buf(t->buffer2) == 1) {
        error_print(t);
    } else {
        print_term(t);
    }
}

void	second_debug(tetris_t *t)
{
    for ( ; t->p1 < t->count; t->p1++) {
        t->m = my_strcat(t->y1[t->p1], t->files[t->p1]);
        t->buffer = read_file(t->m);
        if (t->buffer == NULL || check_terminos(t->buffer) == 1 \
    || count_lines(t->buffer) < 1) {
            error_print(t);
        } else {
            third_debug(t);
        }
    }
}

void	debug_mode(tetris_t *t)
{
    int i = 0;

    print_first_debug(t);
    my_putstr("\nSize :  ");
    my_put_nbr(t->p->firsts);
    my_putstr("*");
    my_put_nbr(t->p->seconds);
    my_putstr("\nTetriminos :  ");
    my_put_nbr(t->count);
    second_debug(t);
    my_putstr("\nPress any key to start Tetris\n");
    if ((read(0, &t->p->c, 1)) != -1)
        check_if_begin(t);
}
