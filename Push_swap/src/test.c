/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcali <tcali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 16:51:41 by tcali             #+#    #+#             */
/*   Updated: 2025/03/18 17:10:21 by tcali            ###   ########.fr       */
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
	printf("Forward list:\n");
	while (head)
	{
		printf("node (%d) : [%d] ---> ", head->content.index, head->content.nb);
		head = head->next;
	}
	printf("NULL\n");
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
	printf("stack a\n");
	print_nodes_linkedlst(*a);
	printf("________________\n");
	if (ft_lstsize(*a) == 3)
	{
		while (!is_sorted(*a))
			micro_sort(a);
		if (is_sorted(*a))
			printf("stack a IS sorted.\n");
	}
	print_nodes_linkedlst(*a);
	printf("________________\n");
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