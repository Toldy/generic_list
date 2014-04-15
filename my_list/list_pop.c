/*
** list_pop.c for my_list in /home/colin_g/github/generic_list/my_list
**
** Made by julien colin
** Login  <colin_g@epitech.eu>
**
** Started on  mar. avril 15 04:28:06 2014 julien colin
** Last update mar. avril 15 05:01:53 2014 julien colin
*/

#include "my_list.h"

void	*pop_front(t_list *list)
{
    t_node*	to_del;
    void*	popped;

    if (!list->size)
        return (0);
    else if (list->size == 1)
    {
        popped = list->front->data;
        free(list->front);
        list_init(list);
    }
    else
    {
        to_del = list->front;
        popped = to_del->data;
        list->front = list->front->next;
        list->front->prev = 0;
        free(to_del);
        --list->size;
    }
    return (popped);
}

void	*pop_back(t_list *list)
{
    t_node*	to_del;
    void*	popped;

    if (!list->size)
        return (0);
    else if (list->size == 1)
    {
        popped = list->back->data;
        free(list->back);
        list_init(list);
    }
    else
    {
        to_del = list->back;
        popped = to_del->data;
        list->back = list->back->prev;
        list->back->next = 0;
        free(to_del);
        --list->size;
    }
    return (popped);
}
