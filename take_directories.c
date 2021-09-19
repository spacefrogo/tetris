/*
** EPITECH PROJECT, 2019
** ghjk
** File description:
** ghjkl
*/

#include "./include/my.h"

int	take_with_dir(DIR *d, char *str)
{
    struct	dirent	*dir;
    int	i = 0;

    d = opendir(str);
    while ((dir = readdir(d)) != NULL) {
        if (dir->d_name[0] != '.') {
            i++;
        }
    }
    return (i);
    closedir(d);
}

char	**take_str(int z, char *av)
{
    int	i = 0;
    char	**str = malloc(sizeof(char *) * (z + 1));

    while (i < z) {
        str[i] = malloc(sizeof(char) * (my_strlen(av) + 1));
        str[i] = my_strcat(my_strdup(av), "/");
        i++;
    }
    str[i] = NULL;
    return (str);
}

char	**take_directories(DIR *d, char *str)
{
    char	**s = NULL;
    struct	dirent	*dir;
    int	i = 0;
    int	k = 0;
    int	z = take_with_dir(d, str);

    s = malloc(sizeof(*s) * (z + 1));
    while ((dir = readdir(d)) != NULL) {
        if (dir->d_name[0] != '.') {
            s[i] = malloc(sizeof(*s[i]) * (my_strlen(dir->d_name)) + 1);
            s[i] = my_strdup(dir->d_name);
            i++;
        }
    }
    s[i] = NULL;
    return (s);
    free(s);
}

int	count_dir(char **k)
{
    int	i = 0;

    while (k[i]) {
        i++;
    }
    return (i);
}

char	**take_name(char **k)
{
    int	i = 0;
    int j = 0;
    int	z = count_dir(k);
    char	**p = malloc(sizeof(char *) * (z + 1));

    for ( ; k[i] != NULL; i++) {
        p[i] = malloc(sizeof(char) * (my_strlen(k[i]) + 1));
        j = 0;
        if (check_point(k[i]) == 0) {
            for ( ; k[i][j] != '\0'; j++) {
                p[i][j] = k[i][j];
            }
        } else {
            for ( ; k[i][j] != '.'; j++) {
                p[i][j] = k[i][j];
            }
        }
    }
    p[i] = NULL;
    return (p);
}
