/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcali <tcali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 23:11:58 by tcali             #+#    #+#             */
/*   Updated: 2025/03/19 15:09:46 by tcali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Push_swap.h"

static void	rotate_list(t_list **list)
{
	t_list	*first_node;
	t_list	*last_node;

	first_node = *list;
	*list = (*list)->next;
	(*list)->prev = NULL;
	last_node = ft_lstlast(*list);
	last_node->next = first_node;
	first_node->prev = last_node;
	first_node->next = NULL;
	update_index(*list);
}

void	rotate_a(t_list **a, int *operations_count)
{
	rotate_list(a);
	operations_count++;
	write(1, "ra\n", 3);
}

void	rotate_b(t_list **b, int *operations_count)
{
	rotate_list(b);
	operations_count++;
	write(1, "rb\n", 3);
}

void	rotate_both(t_list **a, t_list **b, int *operations_count)
{
	rotate_list(a);
	rotate_list(b);
	operations_count++;
	write(1, "rr\n", 3);
}
