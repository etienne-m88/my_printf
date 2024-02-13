/*
** EPITECH PROJECT, 2023
** printf
** File description:
** main
*/
#include "../include/my.h"

int main(void)
{
    int nb = 42;
    char *str = "bobby";
    int nbr = 21.45;

    my_printf("salut moi c'est %s, j'ai %i ans et %o enfants\n", str, nb, nbr);
    return (0);
}
