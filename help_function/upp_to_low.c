/*
** EPITECH PROJECT, 2019
** sdfgh
** File description:
** sdfgh
*/

#include "my.h"

int	upp_to_low(char c)
{
    if (c >= 'A' && c <= 'Z')
        return (c + 32);
    else
        return (c);
}
