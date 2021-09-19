##
## EPITECH PROJECT, 2019
## PSU_tetris_2018
## File description:
## Makefile
##

SRC	=	main.c					\
		./help_function/my_strcat.c		\
		./help_function/my_getnbr.c		\
		./help_function/help_functions.c	\
		./help_function/upp_to_low.c		\
		./help_function/my_strdup.c		\
		check_string.c				\
		usage.c					\
		score_map.c				\
		print_first.c				\
		init_struct.c				\
		color.c					\
		take_directories.c			\
		read_file.c				\
		double.c				\
		debug_mode.c				\
		sort_tetriminos.c			\
		check_terminos.c			\
		int_to_array.c				\
		my_options.c				\
		some_checkings.c

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-g -g3 -ggdb -I ./include -lncurses

NAME	=	tetris

all:		$(NAME)

$(NAME):	$(OBJ)
		gcc -o $(NAME) $(OBJ) $(CFLAGS)

clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f *~ $(NAME)

re:		fclean all
