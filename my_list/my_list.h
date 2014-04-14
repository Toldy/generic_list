/*
** my_list.h for my_list in /home/colin_g/github/generic_list/my_list
**
** Made by julien colin
** Login  <colin_g@epitech.eu>
**
** Started on  lun. avril 14 04:56:28 2014 julien colin
** Last update lun. avril 14 06:33:24 2014 julien colin
*/

#ifndef MY_LIST_H_
# define MY_LIST_H_

# include <stdlib.h>

typedef struct		s_node
{
    struct s_node	*prev;
    struct s_node	*next;
    void			*data;
}					t_node;

typedef struct		s_list
{
    unsigned int	size;
    t_node			*front;
    t_node			*back;
}					t_list;

void	list_init(t_list *list);

void		push_front(t_list *list, void *data);
void		push_back(t_list *list, void *data);
void		insert(t_list *list, void *data, unsigned int pos);

t_node*		__new_node(void *data);

void        list_destroy(t_list *list);

#endif /* !MY_LIST_H_ */
