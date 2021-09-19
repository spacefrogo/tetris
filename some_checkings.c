/*
** EPITECH PROJECT, 2019
** fghj
** File description:
** ghj
*/

#include "./include/my.h"

int	count_lines(char *str)
{
    int	i = 0;
    int	nb = 0;

    while (str[i] != '\0') {
        if (str[i] == '\n')
            nb++;
        i++;
    }
    return (nb);
}

void	error_print(tetris_t *t)
{
    my_putstr("\nTetriminos :  Name ");
    my_putstr(t->names[t->p1]);
    my_putstr(" :  Error");
}

int	check_k(char **k)
{
    int	i = 0;
    int	j = 0;
    int	p = 0;

    while (k[i]) {
        p = my_strlen(k[i]);
        if (p >= j)
            return (p);
        else
            return (j);
        i++;
    }
}

int	check_if_number(char *str)
{
    int	i = 0;

    while (str[i] != '\0') {
        if (str[i] <= 57 && str[i] > 48)
            return (0);
        i++;
    }
    return (1);
}

int	check_num(char **k)
{
    int	i = 0;

    while (k[i]) {
        if (check_if_number(k[i]) == 1)
            return (1);
        i++;
    }
    return (0);
}
