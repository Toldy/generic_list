/*
** list_create.c for my_list in /home/colin_g/github/generic_list/my_list
**
** Made by julien colin
** Login  <colin_g@epitech.eu>
**
** Started on  lun. avril 14 04:38:06 2014 julien colin
** Last update lun. avril 14 04:56:22 2014 julien colin
*/

#include "my_list.h"

void	list_init(t_list *list)
{
    list->size = 0;
    list->front = 0;
    list->back = 0;
}
