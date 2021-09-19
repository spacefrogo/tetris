/*
** EPITECH PROJECT, 2019
** fghjk
** File description:
** fghjk
*/

#include "./include/my.h"

int	file_size(char *filepath)
{
    int	size = 0;
    struct	stat	st;

    stat(filepath, &st);
    size = st.st_size;
    return (size);
}

char	*read_file(char *a)
{
    int fd = 0;
    int	size = file_size(a);
    char *buffer = malloc(sizeof(char) * (size + 1));

    fd = open(a, O_RDONLY);
    if (fd == -1 || size == 0)
        return (NULL);
    read(fd, buffer, size - 1);
    close(fd);
    buffer[size] = '\0';
    return (buffer);
}

char	*take_first_line(char *buffer)
{
    int	i = 0;
    char	*str = malloc(sizeof(char) * my_strlen(buffer) + 1);

    while (buffer[i] != '\n') {
        str[i] = buffer[i];
        i++;
    }
    str[i] = '\0';
    return (str);
}

char	*take_only_termino(char *buffer)
{
    char	*a = take_first_line(buffer);
    int	i = my_strlen(a) + 1;
    int k = 0;
    char	*str = malloc(sizeof(char) * (my_strlen(buffer) + 10));

    while (buffer[i] != '\0') {
        str[k] = buffer[i];
        i++;
        k++;
    }
    str[k] = '\0';
    return (str);
}

char	**take_files(int z, char *av)
{
    int i = 0;
    char	**str = malloc(sizeof(char *) * (z + 1));

    while (i < z) {
        str[i] = malloc(sizeof(char) * (my_strlen(av) + 1));
        str[i] = my_strcat(my_strdup(av), "/");
        i++;
    }
    str[i] = NULL;
    return (str);
}
