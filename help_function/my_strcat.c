/*
** EPITECH PROJECT, 2018
** PSU_minishell1_2018
** File description:
** my_strcat
*/

#include "my.h"

char	*my_strcat(char *dest, char const *src)
{
    int	i = 0;
    int	j = my_strlen(dest);

    while (src[i] != '\0') {
        dest[j + i] = src[i];
        i++;
    }
    dest[j + i] = '\0';
    return (dest);
}
