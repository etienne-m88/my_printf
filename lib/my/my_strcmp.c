/*
** EPITECH PROJECT, 2023
** strcmp
** File description:
** task06
*/

int my_strcmp(char const *s1, char const *s2)
{
    int i = 0;

    if (s1[i] == s2[i])
        return (0);
    if (s1[i] < s2[i])
        return (-1);
    if (s1[i] > s2[i])
        return (1);
}
