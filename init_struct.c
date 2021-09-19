/*
** EPITECH PROJECT, 2019
** ghjk
** File description:
** ghj
*/

#include "./include/my.h"

options_t	*get_options(void)
{
    options_t	*p = malloc(sizeof(options_t));

    p->left = "^EOD";
    p->right = "^EOC";
    p->turn = "^EOA";
    p->drop = "^EOB";
    p->quit = 'q';
    p->pause = 'p';
    p->next = "Yes";
    p->level = 1;
    p->firsts = 48;
    p->seconds = 150;
    return (p);
}

tetris_t	*my_tetris(void)
{
    tetris_t	*t = malloc(sizeof(tetris_t));

    t->a = game_map();
    t->b = score_map();
    t->c = next_termino();
    t->d = opendir("./tetriminos");
    if (t->d == NULL)
        exit (84);
    t->count = take_with_dir(t->d, "./tetriminos");
    t->files = sort_name(t->count, take_directories(t->d, "./tetriminos"));
    t->names = take_name(t->files);
    t->y1 = take_str(t->count, "./tetriminos");
    t->x1 = NULL;
    t->k1 = NULL;
    t->buffer2 = NULL;
    t->m = NULL;
    t->g = get_double();
    t->p = get_options();
    to_init(t);
    return (t);
}

void	to_init(tetris_t *t)
{
    t->g->i = 0;
    t->g->j = 0;
    t->j = 0;
    t->i = 0;
    t->p1 = 0;
    t->k = 5;
    t->key = 0;
    t->lines = 0;
    t->x = 0;
    t->op = 0;
    t->i1 = 0;
    t->y = 0;
    t->tm = 0;
    t->g->k = 0;
    t->score = 0;
    t->high = 0;
    t->level = 1;
    t->lng = 0;
    t->time = 0;
    t->buffer = NULL;
}
