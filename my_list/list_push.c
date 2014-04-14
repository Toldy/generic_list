/*
** list_push.c for my_list in /home/colin_g/github/generic_list/my_list
**
** Made by julien colin
** Login  <colin_g@epitech.eu>
**
** Started on  lun. avril 14 05:07:17 2014 julien colin
** Last update lun. avril 14 05:20:47 2014 julien colin
*/

#include "my_list.h"

void		push_front(t_list *list, void *data)
{
    t_node*	node;

    if (!(node = __new_node(data)))
        return ;
    node->next = list->front;
    if (!list->size)
    {
        list->front = node;
        list->back = node;
        list->size = 1;
    }
    else
    {
        list->front->prev = node;
        list->front = node;
        ++list->size;
    }
}
