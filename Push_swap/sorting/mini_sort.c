/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mini_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcali <tcali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 18:38:46 by tcali             #+#    #+#             */
/*   Updated: 2025/03/14 17:17:58 by tcali            ###   ########.fr       */
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

	if (is_rev_sorted(*list))
	{
		rotate_a(list);
		swap_a(list);
		//return ;
	}
	min = find_min_lst(list);
	if (min->content.index == 1 && !is_sorted(*list))
	{
		reverse_rotate_a(list);
		swap_a(list);
		//return ;
	}
	max = find_max_lst(list);
	if (min->content.index == 2)
	{
		if (max->content.index == 1)
		{
			rotate_a(list);
			return ;
		}
		swap_a(list);
		return ;
	}
	if (min->content.index == 3 && max->content.index == 2)
	{
		reverse_rotate_a(list);
		return ;
	}
}

//Mini sort if only 3 nodes in stack a

//Mini sort if only 4 nodes in stack a (2 + 2 ou 3 + 1 ??)

//Mini sort if only 5 nodes in stack a