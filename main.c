/*
** EPITECH PROJECT, 2019
** main
** File description:
** tetris
*/

#include "./include/my.h"

int	check_buf(char *str)
{
    int	i = 0;

    while (str[i] != '\0') {
        if (str[i] != '*' && str[i] != '\n' && str[i] != ' ')
            return (1);
        i++;
    }
    return (0);
}

int	main(int ac, char **av)
{
    int i = 1;
    tetris_t	*t = my_tetris();

    if (ac == 1) {
        check_if_begin(t);
    }
    while (i < ac) {
        if (check_string(av[i], "tetriminos/") == 0 || \
    check_string(av[i], "tetriminos") == 0)
            check_if_begin(t);
        else
            get_my_options(ac, av, t);
        i++;
    }
}
