/*
** my_list.h for my_list in /home/colin_g/github/generic_list/my_list
**
** Made by julien colin
** Login  <colin_g@epitech.eu>
**
** Started on  lun. avril 14 04:56:28 2014 julien colin
** Last update mar. avril 15 05:26:07 2014 julien colin
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

void	*pop_front(t_list *list);
void	*pop_back(t_list *list);

t_node*		__new_node(void *data);

void	list_destroy(t_list *list);
void	list_destroy_with_data(t_list *list, void (*f_free)(void *));

#endif /* !MY_LIST_H_ */
