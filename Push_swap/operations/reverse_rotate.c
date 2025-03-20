/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcali <tcali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 23:31:16 by tcali             #+#    #+#             */
/*   Updated: 2025/03/19 15:10:00 by tcali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Push_swap.h"

static void	reverse_rotate_list(t_list **list)
{
	t_list	*first_node;
	t_list	*last_node;

	last_node = ft_lstlast(*list);
	last_node->prev->next = NULL;
	first_node = *list;
	*list = last_node;
	last_node->next = first_node;
	last_node->prev = NULL;
	first_node->prev = last_node;
	update_index(*list);
}

void	reverse_rotate_a(t_list **a, int *operations_count)
{
	reverse_rotate_list(a);
	operations_count++;
	write(1, "rra\n", 4);
}

void	reverse_rotate_b(t_list **b, int *operations_count)
{
	reverse_rotate_list(b);
	operations_count++;
	write(1, "rrb\n", 4);
}

void	reverse_rotate_both(t_list **a, t_list **b, int *operations_count)
{
	reverse_rotate_list(a);
	reverse_rotate_list(b);
	operations_count++;
	write(1, "rrr\n", 4);
}
