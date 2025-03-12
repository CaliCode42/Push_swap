/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcali <tcali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 16:51:41 by tcali             #+#    #+#             */
/*   Updated: 2025/03/12 23:46:45 by tcali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Push_swap.h"
#include <stdio.h>
/*
typedef struct s_list
{
	t_content		content;
	struct s_list	*prev;
	struct s_list	*next;
}				t_list;
*/

//fct to initialize a list to NULL.
void	init_list(t_list *list)
{
	if (!list)
		return ;
	list->content.nb = 0;
	list->content.index = 0;
	list->next = NULL;
	list->prev = NULL;
}

//fct to print my nodes, using the path of the linked list.
void	print_nodes_linkedlst(t_list *head)
{
	/*t_list	*last;

	last = NULL;
	printf("_________________\n");*/
	printf("Forward list:\n");
	while (head)
	{
		printf("node (%d) : [%d] ---> ", head->content.index, head->content.nb);
		//last = head;
		head = head->next;
	}
	printf("NULL\n");
	/*printf("_________________\n");
	printf("Backward list:\n");
	while (last)
	{
		printf("node (%d) : [%d] ---> ", last->content.index, last->content.nb);
		last = last->prev;
	}
	printf("NULL\n");*/
}

//fct to call in my main in order to test my other fcts.
void	ft_testing(t_list **a)
{
	t_list	*b;

	b = NULL;
	init_list(b);
	if (!*a || !a)
		return ;
	printf("________________\n");
	printf("stack\n");
	print_nodes_linkedlst(*a);
	printf("________________\n");
	rotate_a(a);
	printf("________________\n");
	printf("ra\n");
	print_nodes_linkedlst(*a);
	printf("________________\n");
	reverse_rotate_b(a);
	printf("________________\n");
	printf("rrb\n");
	print_nodes_linkedlst(*a);
}

//just a check fct, to print my array of int
/*void	print_array(int *arr, int size)
{
	int	i;

	i = 0;
	printf("[");
	while (i < size) 
	{
		printf("%d", arr[i]);
		if (i < size - 1)
			printf(", ");
		i++;
	}
	printf("]\n");
}*/

//tester for my push fcts
/*
void	ft_testing(t_list **a)
{
	t_list	*b;

	b = NULL;
	init_list(b);
	if (!*a || !a)
		return ;
	printf("________________\n");
	printf("stack a\n");
	print_nodes_linkedlst(*a);
	printf("________________\n");
	push_b(a, &b);
	printf("________________\n");
	printf("stack a\n");
	print_nodes_linkedlst(*a);
	printf("________________\n");
	printf("stack b\n");
	print_nodes_linkedlst(b);

	printf("________________\n");
	push_b(a, &b);
	printf("________________\n");
	printf("stack a\n");
	print_nodes_linkedlst(*a);
	printf("________________\n");
	printf("stack b\n");
	print_nodes_linkedlst(b);

	printf("________________\n");
	push_b(a, &b);
	printf("________________\n");
	printf("stack a\n");
	print_nodes_linkedlst(*a);
	printf("________________\n");
	printf("stack b\n");
	print_nodes_linkedlst(b);

	printf("________________\n");
	push_b(a, &b);
	printf("________________\n");
	printf("stack a\n");
	print_nodes_linkedlst(*a);
	printf("________________\n");
	printf("stack b\n");
	print_nodes_linkedlst(b);

	printf("________________\n");
	push_a(a, &b);
	printf("________________\n");
	printf("stack a\n");
	print_nodes_linkedlst(*a);
	printf("________________\n");
	printf("stack b\n");
	print_nodes_linkedlst(b);

	printf("________________\n");
	push_a(a, &b);
	printf("________________\n");
	printf("stack a\n");
	print_nodes_linkedlst(*a);
	printf("________________\n");
	printf("stack b\n");
	print_nodes_linkedlst(b);

	printf("________________\n");
	push_a(a, &b);
	printf("________________\n");
	printf("stack a\n");
	print_nodes_linkedlst(*a);
	printf("________________\n");
	printf("stack b\n");
	print_nodes_linkedlst(b);

	printf("________________\n");
	push_a(a, &b);
	printf("________________\n");
	printf("stack a\n");
	print_nodes_linkedlst(*a);
	printf("________________\n");
	printf("stack b\n");
	print_nodes_linkedlst(b);
}
*/