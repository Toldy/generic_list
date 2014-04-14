/*
** list_node.c for my_list in /home/colin_g/github/generic_list/my_list
**
** Made by julien colin
** Login  <colin_g@epitech.eu>
**
** Started on  lun. avril 14 05:09:49 2014 julien colin
** Last update lun. avril 14 05:11:25 2014 julien colin
*/

#include "my_list.h"

t_node*		__new_node(void *data)
{
    t_node*	new;

    if (!(new = malloc(sizeof(t_node))))
        return (0);
    new->data = data;
    new->prev = 0;
    new->next = 0;
    return (new);
}
