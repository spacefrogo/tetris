/*
** EPITECH PROJECT, 2019
** fghjk
** File description:
** fghjk
*/

#include "./include/my.h"

void	first_usage(char **av)
{
    my_putstr("Usage:\t");
    my_putstr(av[0]);
    my_putstr(" [options]\nOptions:\n");
    my_putstr(" --help\t\t\tDisplay this help\n");
    my_putstr(" -L --level={num}\t");
    my_putstr("Start Tetris at level num (def: 1)\n");
    my_putstr(" -l --key-left={K}\tMove the tetrimino");
    my_putstr(" LEFT using the K key (def: left arrow)\n");
    my_putstr(" -r --key-right={K}\tMove the tetrimino ");
    my_putstr("RIGHT using the K key (def: right arrow)\n");
    my_putstr(" -t --key-turn={K}\tTURN the tetrimino clockwise");
    my_putstr(" 90d using the K key (def: top arrow)\n");
}

void	print_usage(char **av)
{
    first_usage(av);
    my_putstr(" -d --key-drop={K}\tDROP the tetrimino");
    my_putstr(" using the K key (def: down arrow)\n");
    my_putstr(" -q --key-quit={K}\tQUIT the game");
    my_putstr(" using the K key (def: 'q' key)\n");
    my_putstr(" -p --key-pause={K}\tPAUSE/RESTART the");
    my_putstr(" game using the K key (def: space bar)\n");
    my_putstr(" --map-size={row,col}\tSet the numbers of");
    my_putstr(" rows and columns of the map (def: 20,10)\n");
    my_putstr(" -w --without-next\tHide next");
    my_putstr(" tetrimino (def: false)\n");
    my_putstr(" -D --debug \t\tDebug mode (def: false)\n");
}
