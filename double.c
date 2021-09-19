/*
** EPITECH PROJECT, 2019
** ghj
** File description:
** jk
*/

#include "my.h"

get_double_t	*get_double(void)
{
    get_double_t	*m = malloc(sizeof(get_double_t));

    m->i = 0;
    m->j = 0;
    m->k = 0;
    return (m);
}

char	*malloc_it(int k)
{
    char	*str = malloc(sizeof(char *) * k);

    str = malloc(sizeof(char **) * (k + 1));
    return (str);
}

char    **allocate_memory(int line, int cols)
{
    char        **map = malloc(sizeof(char *) * line + 1);
    int i = 0;

    map[i] = malloc(sizeof(char *) * cols + 1);
    for (i = 0; i < line; i++)
        map[i] = malloc(sizeof(char) * cols + 1);
    map[i] = NULL;
    return (map);
}

char    **double_array(char *str, char c)
{
    char    **tab = NULL;
    int     i = check_column(str, c);
    int     j = count_words(str, c);
    tetris_t	*m = my_tetris();

    tab = allocate_memory(j, i);
    for (; str[m->g->k] != '\0'; m->g->k++) {
        for (;str[m->g->k] == c;  m->g->k++) {
            tab[m->g->i][m->g->j] = '\0';
            m->g->j = 0;
            m->g->i++;
            tab[m->g->i] = malloc_it(check_column(str, c));
        }
        tab[m->g->i][m->g->j] = str[m->g->k];
        m->g->j++;
        tab[m->g->i][m->g->j] = '\0';
    }
    tab[m->g->i + 1] = NULL;
    return (tab);
}
