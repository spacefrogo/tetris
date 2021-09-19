/*
** EPITECH PROJECT, 2019
** fghjk
** File description:
** hjk
*/

#include "./include/my.h"

int	check_string(char *str, char *ptr)
{
    int i = 0;
    int k = 0;

    for (i = 0; str[i] != '\0' && (str[i] == ptr[i]); i++);
    k = str[i] - ptr[i];
    return (k);
}

int	check_string_n(char *str, char *ptr, int n)
{
    int	i = 0;
    int	k = 0;

    for (i = 0; str[i] != '\0' && i < n && (str[i] == ptr[i]); i++);
    k = str[i] - ptr[i];
    return (k);
}

int     check_column(char *str, char c)
{
    int i = 0;

    for (i = 0; str[i] != '\0' && str[i] != c; i++);
    return (i);
}

int     count_words(char *str, char c)
{
    int z = 0;
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] == c && str[i + 1] != '\0')
            z++;
        i++;
    }
    return (z + 1);
}
