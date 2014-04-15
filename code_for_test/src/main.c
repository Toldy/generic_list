/*
** main.c for code_for_test in /home/colin_g/github/generic_list/code_for_test
**
** Made by julien colin
** Login  <colin_g@epitech.eu>
**
** Started on  lun. avril 14 04:59:52 2014 julien colin
** Last update mar. avril 15 05:30:59 2014 julien colin
*/

#include <stdio.h>
#include <string.h>
#include "my_list.h"

int			*new_int(int n)
{
    int*	ret;

    ret = malloc(sizeof(int));
    *ret = n;
    return (ret);
}

void	free_int(void *v)
{
    int	*n;

    n = v;
    free(n);
}

char		*new_string(char *s)
{
    char*	ret;

    ret = strdup(s);
    return (ret);
}

void		free_string(void *v)
{
    char	*s;

    s = v;
    free(s);
}

void		test_push_front(t_list *list_string, t_list *list_int, char *s)
{
    char*	p;
    t_node*	node_string;
    t_node*	node_int;

    printf("<< __ %s __ >>\n", __FUNCTION__);
    p = strtok(s, " ");
    while (p)
    {
        printf("list_string add [%s]\n", (char *)p);
        printf("list_int    add [%d]\n", (int)p);
        push_front(list_string, new_string(p));
        push_front(list_int, new_int((int)p));
        p = strtok(0, " ");
    }
    printf("Content of node_string :\n");
    node_string = list_string->front;
    while (node_string)
    {
        printf("%s\n", (char*)node_string->data);
        node_string = node_string->next;
    }
    printf("Content of node_int :\n");
    node_int = list_int->front;
    while (node_int)
    {
        printf("%d\n", *((int*)node_int->data));
        node_int = node_int->next;
    }
    printf("\n");
}

void		test_push_back(t_list *list_string, t_list *list_int, char *s)
{
    char*	p;
    t_node*	node_string;
    t_node*	node_int;

    printf("<< __ %s __ >>\n", __FUNCTION__);
    p = strtok(s, " ");
    while (p)
    {
        printf("list_string add [%s]\n", (char *)p);
        printf("list_int    add [%d]\n", (int)p);
        push_back(list_string, new_string(p));
        push_back(list_int, new_int((int)p));
        p = strtok(0, " ");
    }
    printf("Content of node_string :\n");
    node_string = list_string->front;
    while (node_string)
    {
        printf("%s\n", (char*)node_string->data);
        node_string = node_string->next;
    }
    printf("Content of node_int :\n");
    node_int = list_int->front;
    while (node_int)
    {
        printf("%d\n", *((int*)node_int->data));
        node_int = node_int->next;
    }
    printf("\n");
}

void		test_insert(t_list *list_string, t_list *list_int, char *s)
{
    char*	p;
    t_node*	node_string;
    t_node*	node_int;
    int		i;

    i = 0;
    printf("<< __ %s __ >>\n", __FUNCTION__);
    p = strtok(s, " ");
    while (p)
    {
        printf("list_string insert at %d [%s]\n", i % 2, (char *)p);
        printf("list_int    insert at %d [%d]\n", i % 2, (int)p);
        insert(list_string, new_string(p), i % 2);
        insert(list_int, new_int((int)p), i++ % 2);
        p = strtok(0, " ");
    }
    printf("Content of node_string :\n");
    node_string = list_string->front;
    while (node_string)
    {
        printf("%s\n", (char*)node_string->data);
        node_string = node_string->next;
    }
    printf("Content of node_int :\n");
    node_int = list_int->front;
    while (node_int)
    {
        printf("%d\n", *((int*)node_int->data));
        node_int = node_int->next;
    }
    printf("\n");
}

int	main(int ac, char **av)
{
    t_list	list_string;
    t_list	list_int;
    char	*s1;
    char	*s2;
    //char	*content;
    //int		*c_int;

    list_init(&list_string);
    list_init(&list_int);
    s1 = strdup(av[ac > 1 ? 1 : 0]);
    test_push_front(&list_string, &list_int, s1);
    printf("pop test\n");
    /*while ((content = pop_front(&list_string)))
        printf("%s\n", content);
    while ((c_int = pop_front(&list_string)))
        printf("%d\n", *((int*)c_int));
*/
    list_destroy_with_data(&list_string, free_string);
    list_destroy_with_data(&list_int, free_int);
    free(s1);

    list_init(&list_string);
    list_init(&list_int);
    s2 = strdup(av[ac > 1 ? 1 : 0]);
    test_push_back(&list_string, &list_int, s2);
    list_destroy_with_data(&list_string, free_string);
    list_destroy_with_data(&list_int, free_int);
    free(s2);

    list_init(&list_string);
    list_init(&list_int);
    s2 = strdup(av[ac > 1 ? 1 : 0]);
    test_insert(&list_string, &list_int, s2);
    list_destroy_with_data(&list_string, free_string);
    list_destroy_with_data(&list_int, free_int);
    free(s2);

    return (0);
}
