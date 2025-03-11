/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcali <tcali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 16:51:41 by tcali             #+#    #+#             */
/*   Updated: 2025/03/11 16:59:49 by tcali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Push_swap.h"
#include <stdio.h>

//fct to print my nodes, using the path of the linked list.
/*void	print_nodes_linkedlst(t_list *head)
{
	t_list	*last;

	last = NULL;
	printf("_________________\n");
	printf("Forward list:\n");
	while (head)
	{
		printf("node (%d) : [%d] ---> ", head->content.index, head->content.nb);
		last = head;
		head = head->next;
	}
	printf("NULL\n");
	printf("_________________\n");
	printf("Backward list:\n");
	while (last)
	{
		printf("node (%d) : [%d] ---> ", last->content.index, last->content.nb);
		last = last->prev;
	}
	printf("NULL\n");
}*/

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
