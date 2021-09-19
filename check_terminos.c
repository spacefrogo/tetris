/*
** EPITECH PROJECT, 2019
** fghj
** File description:
** ghj
*/

#include "./include/my.h"

int	check_terminos(char *str)
{
    int	i = 0;

    while (str[i] != '\0') {
        if (str[i] != 49 && str[i] != 50 && str[i] != 51 && \
    str[i] != 52 && str[i] != 53 && str[i] != 54 && \
    str[i] != 55 && str[i] != 56 && str[i] != 57 && \
    str[i] != ' ' && str[i] != '*' && str[i] != '\n')
            return (1);
        i++;
    }
    return (0);
}

char	**score_map(void)
{
    char	**k = malloc(sizeof(char *) * 200);
    int	i = 0;
    int	j = 0;

    for ( ; i <= 20; i++) {
        k[i] = malloc(sizeof(char) * 200);
        j = 0;
        for ( ; j <= 30; j++) {
            if (i == 0 || i == 20)
                k[i][j] = '$';
            else {
                if (j == 0 || j == 30)
                    k[i][j] = '$';
                else
                    k[i][j] = ' ';
            }
        }
    }
    k[i] = NULL;
    return (k);
}

char	**next_termino(void)
{
    char	**k = malloc(sizeof(char *) * 200);
    int	i = 0;
    int	j = 0;

    for ( ; i <= 10; i++) {
        k[i] = malloc(sizeof(char) * 200);
        j = 0;
        for ( ; j <= 20; j++) {
            if (i == 0 || i == 10)
                k[i][j] = '~';
            else {
                if (j == 0 || j == 20)
                    k[i][j] = '~';
                else
                    k[i][j] = ' ';
            }
        }
    }
    k[i] = NULL;
    return (k);
}

char	**game_map(void)
{
    char	**k = malloc(sizeof(char *) * 200);
    int	i = 0;
    int	j = 0;

    for ( ; i <= 40; i++) {
        k[i] = malloc(sizeof(char) * 200);
        j = 0;
        for ( ; j <= 50; j++) {
            if (i == 0 || i == 40)
                k[i][j] = '#';
            else {
                if (j == 0 || j == 50)
                    k[i][j] = '#';
                else
                    k[i][j] = ' ';
            }
        }
    }
    k[i] = NULL;
    return (k);
}

int	check_point(char *k)
{
    int	i = 0;
    int	nb = 0;

    while (k[i] != '\0') {
        if (k[i] == '.')
            nb++;
        i++;
    }
    return (nb);
}
