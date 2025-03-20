/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcali <tcali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 17:10:32 by tcali             #+#    #+#             */
/*   Updated: 2025/03/19 15:09:47 by tcali            ###   ########.fr       */
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

static void	switch_index(t_list *list1, t_list *list2)
{
	int	tmp;

	tmp = list1->content.index;
	list1->content.index = list2->content.index;
	list2->content.index = tmp;
}

static void	swap_nodes(t_list **list)
{
	t_list	*first_node;
	t_list	*second_node;

	if (!*list || !list || !(*list)->next)
		return ;
	first_node = *list;
	second_node = (*list)->next;
	first_node->next = second_node->next;
	if (second_node->next)
		second_node->next->prev = first_node;
	second_node->prev = NULL;
	second_node->next = first_node;
	first_node->prev = second_node;
	*list = second_node;
	switch_index(*list, (*list)->next);
}

void	swap_a(t_list **a, int *operations_count)
{
	swap_nodes(a);
	operations_count++;
	write(1, "sa\n", 3);
}

void	swap_b(t_list **b, int *operations_count)
{
	swap_nodes(b);
	operations_count++;
	write(1, "sb\n", 3);
}

void	swap_both(t_list **a, t_list **b, int *operations_count)
{
	swap_nodes(a);
	swap_nodes(b);
	operations_count++;
	write(1, "ss\n", 3);
}
