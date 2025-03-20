/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcali <tcali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 16:59:40 by tcali             #+#    #+#             */
/*   Updated: 2025/03/20 13:00:18 by tcali            ###   ########.fr       */
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

//fct to fetch std input to a linked list of nb.
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

//fct to initialize a list to NULL.
void	init_list(t_list *list)
{
	if (!list)
		return ;
	list->content.nb = 0;
	list->content.index = 0;
	list->next = NULL;
	list->prev = NULL;
}

//fct to sort stack a.
void	ft_sort_stack(t_list **a)
{
	t_list	*b;

	b = NULL;
	init_list(b);
	if (!*a || !a)
		return ;
	while (!is_sorted(*a))
		selection_sort(a, &b);
	if (is_sorted(*a))
		return ;
}

int	main(int ac, char **av)
{
	t_list	*a;
	char	**stack;
	int		i;

	stack = parse_input(ac, av);
	if (stack == NULL)
		return (printf("Error\n"), 1);
	if (!stack || check_stack_errors(stack, get_stack_size(stack)) == 0)
		return (printf("Error\n"), 1);
	a = NULL;
	i = 0;
	split_to_nodes(&a, stack);
	while (stack[i])
		free(stack[i++]);
	free(stack);
	ft_sort_stack(&a);
	return (0);
}
