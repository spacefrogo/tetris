/*
** EPITECH PROJECT, 2019
** fgh
** File description:
** hj
*/

#include "./include/my.h"

int	number_of_digits(int a)
{
    int	i = 0;

    if (a == 0)
        return (i + 1);
    for (i = 0; a != 0; i++) {
        a = a / 10;
    }
    return (i);
}

char	to_char(int a)
{
    return (a % 10 + 48);
}

char	*int_to_array(int a)
{
    int	i = number_of_digits(a);
    char	*str = malloc(sizeof(char) * (i + 1));
    int j = 0;

    while (j != i) {
        str[j] = to_char(a);
        a = a / 10;
        j++;
    }
    str[j] = '\0';
    return (str);
}
