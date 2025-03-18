/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mini_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcali <tcali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 18:38:46 by tcali             #+#    #+#             */
/*   Updated: 2025/03/18 17:40:44 by tcali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Push_swap.h"
#include <stdio.h>

//Micro sort if only 2 nodes in stack a (invert if not sorted).

//Must call this fct only if size of list = 3 (use ft_lstsize).
//And also only when list is NOT sorted (must check before).
void	micro_sort(t_list **list)
{
	t_list	*min;
	t_list	*max;

	min = find_min_lst(list);
	max = find_max_lst(list);
	if (max->content.index == 2 && min->content.index == 3)
	{
		reverse_rotate_a(list);
		return ;
	}
	if (max->content.index == 1 && min->content.index == 2)
	{
		rotate_a(list);
		return ;
	}
	else
	{
		if (min->content.index == 1 && max->content.index == 2)
			reverse_rotate_a(list);
		if (max->content.index == 1 && min->content.index == 3)
			rotate_a(list);
		swap_a(list);
		return ;
	}
}

//Mini sort if only 4 nodes in stack a (2 + 2 ou 3 + 1 ??)

//Must call this fct only if size of list = 4 (use ft_lstsize).
//And also only when list is NOT sorted (must check before).
void	sort_four(t_list **a, t_list **b)
{
	t_list	*min;
	t_list	*max;
	int		is_nb_max_pushed;

	min = find_min_lst(a);
	max = find_max_lst(a);
	is_nb_max_pushed = 0;
	while (min->content.index != 1 && min->content.index != 1)
		rotate_a(a);
	if (max->content.index == 1)
		is_nb_max_pushed = 1;
	push_b(a, b);
	micro_sort(a);
	push_a(a, b);
	if (is_nb_max_pushed == 1)
		rotate_a(a);
	return ;
}

//Mini sort if only 5 nodes in stack a

//Must call this fct only if size of list = 5 (use ft_lstsize).
//And also only when list is NOT sorted (must check before).
void	sort_five(t_list **a, t_list **b)
{
	t_list	*min;
	t_list	*max;
	int		is_nb_max_pushed;

	min = find_min_lst(a);
	max = find_max_lst(a);
	is_nb_max_pushed = 0;
	while (min->content.index != 1 && min->content.index != 1)
		rotate_a(a);
	if (max->content.index == 1)
		is_nb_max_pushed = 1;
	push_b(a, b);
	sort_four(a, b);
	push_a(a, b);
	if (is_nb_max_pushed == 1)
		rotate_a(a);
	return ;
}
