/*
** main.c for code_for_test in /home/colin_g/github/generic_list/code_for_test
**
** Made by julien colin
** Login  <colin_g@epitech.eu>
**
** Started on  lun. avril 14 04:59:52 2014 julien colin
** Last update lun. avril 14 06:49:10 2014 julien colin
*/

#include <stdio.h>
#include <string.h>
#include "my_list.h"

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
        push_front(list_string, p);
        push_front(list_int, p);
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
        printf("%d\n", (int)node_int->data);
        node_int = node_int->next;
    }
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
        push_back(list_string, p);
        push_back(list_int, p);
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
        printf("%d\n", (int)node_int->data);
        node_int = node_int->next;
    }
}


int	main(int ac, char **av)
{
    t_list	list_string;
    t_list	list_int;
    char	*s1;
    char	*s2;

    list_init(&list_string);
    list_init(&list_int);
    s1 = strdup(av[ac > 1 ? 1 : 0]);
    test_push_front(&list_string, &list_int, s1);
    list_destroy(&list_string);
    list_destroy(&list_int);
    free(s1);

    list_init(&list_string);
    list_init(&list_int);
    s2 = strdup(av[ac > 1 ? 1 : 0]);
    test_push_back(&list_string, &list_int, s2);
    list_destroy(&list_string);
    list_destroy(&list_int);
    free(s2);
    return (0);
}
