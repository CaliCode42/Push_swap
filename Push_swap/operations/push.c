/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcali <tcali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 14:43:39 by tcali             #+#    #+#             */
/*   Updated: 2025/03/19 15:10:12 by tcali            ###   ########.fr       */
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

/*
static void	switch_index(t_list *list1, t_list *list2)
{
	int	tmp;

	tmp = list1->content.index;
	list1->content.index = list2->content.index;
	list2->content.index = tmp;
}
*/
//
/*
Fct Push could be optimized by giving a char as an arg and using ft_printf to
print pa or pb depending on the given char. Will it really simplify the code?
*/

void	update_index(t_list *list)
{
	int	index;

	index = 1;
	while (list)
	{
		list->content.index = index;
		list = list->next;
		index++;
	}
}

static void	push_first_node(t_list **src, t_list **dst)
{
	t_list	*first_node_src;

	if (!src || !*src)
		return ;
	first_node_src = *src;
	*src = (*src)->next;
	if (*src)
		(*src)->prev = NULL;
	first_node_src->next = *dst;
	if (*dst)
	{
		(*dst)->prev = first_node_src;
	}
	*dst = first_node_src;
	update_index(*src);
	update_index(*dst);
}

void	push_b(t_list **a, t_list **b, int *operations_count)
{
	push_first_node(a, b);
	operations_count++;
	write(1, "pb\n", 3);
}

void	push_a(t_list **a, t_list **b, int *operations_count)
{
	push_first_node(b, a);
	operations_count++;
	write(1, "pa\n", 3);
}
