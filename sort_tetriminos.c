/*
** EPITECH PROJECT, 2019
** fghj
** File description:
** fghj
*/

#include "./include/my.h"

sort_t	*check_for_sort(char *str, char *ptr)
{
    int	i = 0;
    sort_t	*s = malloc(sizeof(sort_t));

    while (upp_to_low(str[i]) == upp_to_low(ptr[i]))
        i++;
    s->a = str[i];
    s->b = ptr[i];
    s->a = upp_to_low(s->a);
    s->b = upp_to_low(s->b);
    return (s);
    free (s);
}

char	**sort_name(int n, char **ptr)
{
    char	*str = NULL;
    int i = 0;
    int j = 0;
    sort_t	*s = malloc(sizeof(sort_t));

    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            s = check_for_sort(ptr[i], ptr[j]);
            if (s->a > s->b) {
                str = ptr[i];
                ptr[i] = ptr[j];
                ptr[j] = str;
            }
        }
    }
    return (ptr);
    free (s);
}

int	print_second_files(DIR *d, char *av)
{
    int z = take_with_dir(d, av);
    char	**f = sort_name(z, take_directories(d, av));
    char	**p = take_files(z, av);
    char	*k = NULL;
    int i = 0;

    while (i < z) {
        k = my_strcat(p[i], f[i]);
        my_putstr(k);
        my_putchar('\n');
        i++;
    }
    return (0);
}

char	**take_concat_files(DIR *d, char *av)
{
    int i = 0;
    int z = take_with_dir(d, av);
    char	**f = sort_name(z, take_directories(d, av));
    char	**p = take_files(z, av);
    char	**str = malloc(sizeof(char *) * (z + 1));

    while (i < z) {
        str[i] = malloc(sizeof(char) * (my_strlen(p[i]) + my_strlen(f[i]) + 3));
        str[i] = my_strcat(p[i], f[i]);
        i++;
    }
    str[i] = NULL;
    return (str);
}
