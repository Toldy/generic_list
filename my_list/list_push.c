/*
** list_push.c for my_list in /home/colin_g/github/generic_list/my_list
**
** Made by julien colin
** Login  <colin_g@epitech.eu>
**
** Started on  lun. avril 14 05:07:17 2014 julien colin
** Last update lun. avril 14 06:33:54 2014 julien colin
*/

#include "my_list.h"

void		push_front(t_list *list, void *data)
{
    t_node*	new_node;

    if (!(new_node = __new_node(data)))
        return ;
    new_node->next = list->front;
    if (!list->size)
    {
        list->front = new_node;
        list->back = new_node;
        list->size = 1;
    }
    else
    {
        list->front->prev = new_node;
        list->front = new_node;
        ++list->size;
    }
}

void		push_back(t_list *list, void *data)
{
    t_node*	new_node;

    if (!(new_node = __new_node(data)))
        return ;
    new_node->prev = list->back;
    if (!list->size)
    {
        list->front = new_node;
        list->back = new_node;
        list->size = 1;
    }
    else
    {
        list->back->next = new_node;
        list->back = new_node;
        ++list->size;
    }
}

void				insert(t_list *list, void *data, unsigned int pos)
{
    unsigned int	i;
    t_node*			it;
    t_node*			new_node;

    if (pos == 0)
        push_front(list, data);
    else if (pos >= list->size)
        push_back(list, data);
    else
    {
        i = -1;
        if (!(new_node = __new_node(data)))
            return ;
        it = list->front;
        while (++i < pos)
            it = it->next;
        new_node->next = it;
        new_node->prev = it->prev;
        it->prev->next = new_node;
        it->prev = new_node;
        ++list->size;
    }
}
