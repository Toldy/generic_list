/*
** list_destroy.c for my_list in /home/colin_g/github/generic_list/my_list
**
** Made by julien colin
** Login  <colin_g@epitech.eu>
**
** Started on  lun. avril 14 05:56:23 2014 julien colin
** Last update mar. avril 15 05:26:42 2014 julien colin
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

void	__list_destroy_with_data(t_node *node, void (*f_free)(void *))
{
    if (node->next)
        __list_destroy_with_data(node->next, f_free);
    f_free(node->data);
    free(node);
}

void	list_destroy_with_data(t_list *list, void (*f_free)(void *))
{
    if (list->size)
        __list_destroy_with_data(list->front, f_free);
}
