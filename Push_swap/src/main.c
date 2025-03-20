/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcali <tcali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 16:59:40 by tcali             #+#    #+#             */
/*   Updated: 2025/03/19 14:51:08 by tcali            ###   ########.fr       */
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
	return (size);
}

char	**parse_input(int ac, char **av)
{
	char	*input;
	char	**stack;

	if (ac < 2)
		stack = NULL;
	if (ac == 2)
	{
		stack = ft_split(av[1], ' ');
	}
	if (ac > 2)
	{
		input = stdin_to_str(ac, av);
		stack = ft_split(input, ' ');
	}
	return (stack);
}

int	main(int ac, char **av)
{
	t_list	*a;
	char	**stack;
	int		i;

	stack = parse_input(ac, av);
	if (stack == NULL)
		return (printf("Error\nInvalid list of numbers.\n"), 1);
	if (!stack || check_stack_errors(stack, get_stack_size(stack)) == 0)
		return (printf("Error\nInvalid list of numbers.\n"), 1);
	a = NULL;
	i = 0;
	split_to_nodes(&a, stack);
	while (stack[i])
		free(stack[i++]);
	free(stack);
	ft_testing(&a);
	return (0);
}
