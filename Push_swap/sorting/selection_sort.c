/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   selection_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcali <tcali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 13:11:12 by tcali             #+#    #+#             */
/*   Updated: 2025/03/20 12:49:15 by tcali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Push_swap.h"
#include <stdio.h>

//Better to keep in stack a the biggest numbers and push the rest in revert
//order to stack b. This way when I push them back to stack a, everythiing
//will be sorted.
void	selection_sort(t_list **a, t_list **b)
{
	int		list_size;
	t_list	*min;

	list_size = ft_lstsize(*a);
	while (list_size > 5)
	{
		min = find_min_lst(a);
		while (min->content.index != 1)
		{
			if (min->content.index <= (list_size / 2))
				rotate_a(a);
			if (min->content.index > (list_size / 2))
				reverse_rotate_a(a);
		}
		push_b(a, b);
		list_size--;
	}
	if (list_size <= 5 && !is_sorted(*a))
		sort_five(a, b);
	while ((*b))
		push_a(a, b);
}
