/*
** main.c for code_for_test in /home/colin_g/github/generic_list/code_for_test
**
** Made by julien colin
** Login  <colin_g@epitech.eu>
**
** Started on  lun. avril 14 04:59:52 2014 julien colin
** Last update lun. avril 14 05:44:28 2014 julien colin
*/

#include <stdio.h>
#include <string.h>
#include "my_list.h"

int	main(int ac, char **av)
{
    t_list	list_string;
    t_list	list_int;
    char*	p;
    t_node *node_string;
    t_node *node_int;

    list_init(&list_string);
    list_init(&list_int);
    p = strtok(av[ac > 1 ? 1 : 0], " ");
    while (p)
    {
        push_front(&list_string, p);
        push_front(&list_int, p);
        p = strtok(0, " ");
    }
    node_string = list_string.front;
    node_int = list_int.front;
    while (node_string && node_int)
    {
        printf("%d %s\n", (int)node_int->data, (char*)node_string->data);
        node_string = node_string->next;
        node_int = node_int->next;
    }
    return (0);
}
