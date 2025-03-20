/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mini_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcali <tcali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 18:38:46 by tcali             #+#    #+#             */
/*   Updated: 2025/03/19 15:10:54 by tcali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Push_swap.h"
#include <stdio.h>

//Micro sort if only 2 nodes in stack a (invert if not sorted).

//Must call this fct only if size of list = 3 (use ft_lstsize).
//And also only when list is NOT sorted (must check before).
void	micro_sort(t_list **list, int *operations_count)
{
	t_list	*min;
	t_list	*max;

	min = find_min_lst(list);
	max = find_max_lst(list);
	if (max->content.index == 2 && min->content.index == 3)
	{
		reverse_rotate_a(list, operations_count);
		return ;
	}
	if (max->content.index == 1 && min->content.index == 2)
	{
		rotate_a(list, operations_count);
		return ;
	}
	else
	{
		if (min->content.index == 1 && max->content.index == 2)
			reverse_rotate_a(list, operations_count);
		if (max->content.index == 1 && min->content.index == 3)
			rotate_a(list, operations_count);
		swap_a(list, operations_count);
		return ;
	}
}

//Mini sort if only 4 nodes in stack a (2 + 2 ou 3 + 1 ??)

//Must call this fct only if size of list = 4 (use ft_lstsize).
//And also only when list is NOT sorted (must check before).
void	sort_four(t_list **a, t_list **b, int *operations_count)
{
	t_list	*min;
	t_list	*max;
	int		is_nb_max_pushed;

	min = find_min_lst(a);
	max = find_max_lst(a);
	is_nb_max_pushed = 0;
	while (min->content.index != 1 && min->content.index != 1)
		rotate_a(a, operations_count);
	if (max->content.index == 1)
		is_nb_max_pushed = 1;
	push_b(a, b, operations_count);
	micro_sort(a, operations_count);
	push_a(a, b, operations_count);
	if (is_nb_max_pushed == 1)
		rotate_a(a, operations_count);
	return ;
}

//Mini sort if only 5 nodes in stack a

//Must call this fct only if size of list = 5 (use ft_lstsize).
//And also only when list is NOT sorted (must check before).
void	sort_five(t_list **a, t_list **b, int *operations_count)
{
	t_list	*min;
	t_list	*max;
	int		is_nb_max_pushed;

	min = find_min_lst(a);
	max = find_max_lst(a);
	is_nb_max_pushed = 0;
	while (min->content.index != 1 && min->content.index != 1)
		rotate_a(a, operations_count);
	if (max->content.index == 1)
		is_nb_max_pushed = 1;
	push_b(a, b, operations_count);
	sort_four(a, b, operations_count);
	push_a(a, b, operations_count);
	if (is_nb_max_pushed == 1)
		rotate_a(a, operations_count);
	return ;
}
