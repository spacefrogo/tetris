/*
** EPITECH PROJECT, 2019
** my_options
** File description:
** tetris
*/

#include "./include/my.h"

static	struct	option	long_options[]=
{
    {"help", no_argument, 0, 0},
    {"debug", no_argument, 0, 'D'},
    {"key-turn", required_argument, 0, 't'},
    {"key-drop", required_argument, 0, 'd'},
    {"key-left", required_argument, 0, 'l'},
    {"key-right", required_argument, 0, 'r'},
    {"level", required_argument, 0, 'L'},
    {"key-quit", required_argument, 0, 'q'},
    {"key-pause", required_argument, 0, 'p'},
    {"map-size", required_argument, 0, 1},
    {"without-next", no_argument, 0, 'w'},
    {0, 0, 0, 0}
};

void	first_options(tetris_t *t, char *optarg, int option, char **av)
{
    if (option == 'D')
        debug_mode(t);
    else if (option == 0)
        print_usage(av);
    else
        t->p->level = my_getnbr(optarg);
}

void	second_options(tetris_t *t, char *optarg, int option)
{
    if (option == 'l')
        t->p->left = optarg;
    else if (option == 'd')
        t->p->drop = optarg;
    else
        t->p->turn = optarg;
}

void	third_options(tetris_t *t, char *optarg, int option)
{
    if (option == 'r')
        t->p->right = optarg;
    else if (option == 'q')
        t->p->quit = optarg[0];
    else
        t->p->pause = optarg[0];
}

void	get_my_options(int ac, char **av, tetris_t *t)
{
    while (1) {
        t->op = getopt_long(ac, av, "DL:l:r:t:d:q:p:w", long_options, &t->i1);
        if (t->op == -1)
            exit(84);
        if (t->op == 'D' || t->op == 0 || t->op == 'L') {
            first_options(t, optarg, t->op, av);
            check_if_begin(t);
        } else if (t->op == 'l' || t->op == 'd' || t->op == 't') {
            second_options(t, optarg, t->op);
            check_if_begin(t);
        }
        if (t->op == 'r' || t->op == 'q' || t->op == 'p') {
            third_options(t, optarg, t->op);
            check_if_begin(t);
        } else if (t->op == 'w') {
            t->p->next = "No";
            check_if_begin(t);
        }
    }
}
