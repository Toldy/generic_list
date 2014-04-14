/*
** list_destroy.c for my_list in /home/colin_g/github/generic_list/my_list
**
** Made by julien colin
** Login  <colin_g@epitech.eu>
**
** Started on  lun. avril 14 05:56:23 2014 julien colin
** Last update lun. avril 14 06:03:50 2014 julien colin
*/

#include "my_list.h"

void	__list_destroy(t_node *node)
{
    if (node->next)
        __list_destroy(node->next);
    free(node);
}

void	list_destroy(t_list *list)
{
    if (list->size)
        __list_destroy(list->front);
}
