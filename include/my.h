/*
** EPITECH PROJECT, 2019
** PSU_navy_2018
** File description:
** my.h
*/

#ifndef MY_H_
#define MY_H_

#include <dirent.h>
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <string.h>
#include <signal.h>
#include <curses.h>
#include <getopt.h>

typedef	struct	get_double
{
    int	i;
    int	j;
    int	k;
}	get_double_t;

typedef	struct	sort
{
    char	a;
    char	b;
}	sort_t;

typedef	struct	options
{
    char	*left;
    char	*right;
    char	*turn;
    char	*drop;
    char	quit;
    char	pause;
    char	*next;
    int	level;
    char	*size;
    char	*buffer;
    char	*name;
    int	color;
    int	firsts;
    int	seconds;
    char	c;
}	options_t;

typedef	struct	tetris
{
    char	**a;
    char	**b;
    char	**k1;
    char	*m;
    char	**c;
    int	i1;
    int	op;
    DIR	*d;
    char	**x1;
    int	count;
    char	**files;
    char	**names;
    int	i;
    int	high;
    int	lines;
    int	level;
    int	j;
    int	p1;
    char	**y1;
    int	lng;
    int	k;
    int	key;
    char	*buffer;
    int	x;
    int	y;
    int	tm;
    int	time;
    char	*termino;
    char	*next_term;
    char	*buffer2;
    char	**e;
    char	**f;
    struct	get_double	*g;
    struct	options	*p;
    int	score;
}	tetris_t;

int	main(int, char **);
int	my_strlen(char const *);
int	my_putstr(char const *);
void	my_putchar(char);
int	check_string(char *, char *);
void	first_print(char **);
void	print_usage(char **);
char	**score_map(void);
char	**game_map(void);
char	**next_termino(void);
void	print_tetris(void);
tetris_t	*my_tetris(void);
void	my_color(void);
void	check_if_begin(tetris_t *);
void	game_map_print(tetris_t *);
void	score_map_print(tetris_t *);
void	next_termino_print(tetris_t *);
char	*my_strdup(char *);
void	my_show_word_array(char **);
char	**print_file_name_dir(DIR *, char *);
char	*read_file(char *);
char	*take_only_termino(char *);
int	count_words(char *, char);
int	check_column(char *, char);
get_double_t	*get_double(void);
char	**double_array(char *, char);
void	debug_mode(tetris_t *);
char	*my_strcat(char *, char const *);
int	upp_to_low(char);
int	take_with_dir(DIR *, char *);
char	**sort_name(int, char **);
char	**take_directories(DIR *, char *);
char	**take_files(int, char *);
int	print_second_files(DIR *, char *);
char	*int_to_array(int);
void	to_init(tetris_t *);
int	my_getnbr(char const *);
int	my_put_nbr(int);
void	get_my_options(int, char **, tetris_t *);
char	**take_name(char **);
char	**take_str(int, char *);
int	check_terminos(char *);
int	check_point(char *);
int	count_dir(char **);
void	error_print(tetris_t *);
int	count_lines(char *);
int	check_num(char **);
int	check_k(char **);
int	check_buf(char *);

#endif /* MY_H_ */
