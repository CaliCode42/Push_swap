/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcali <tcali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 16:59:40 by tcali             #+#    #+#             */
/*   Updated: 2025/03/11 17:33:17 by tcali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Push_swap.h"
#include <stdio.h>

//Fct which returns the quantity of nb in the **split (stack) str.
int	get_stack_size(char **stack)
{
	int	size;

	size = 0;
	while (stack[size])
	{
		size++;
	}
	//printf ("size of stack = [%d]\n", size);
	return (size);
}

int	main(int ac, char **av)
{
	t_list	*a;
	char	*input;
	char	**stack;
	int		i;

	if (ac < 2)
	{
		printf("Must give a list of numbers.\n");
		return (1);
	}
	a = NULL;
	if (ac == 2)
	{
		//printf("av[1] = %s\n", av[1]);
		stack = ft_split(av[1], ' ');
	}
	if (ac > 2)
	{
		//printf("\nav[%d] = %s\n", i, av[i]);
		input = stdin_to_str(ac, av);
		stack = ft_split(input, ' ');
	}
	if (!stack || check_stack_errors(stack, get_stack_size(stack)) == 0)
	{
		printf("Error. Stack error.\n");
		return (1);
	}
	i = 0;
	split_to_nodes(&a, stack);
	while (stack[i])
		free(stack[i++]);
	free(stack);
	print_nodes_linkedlst(a);
	return (0);
}