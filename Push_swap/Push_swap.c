/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcali <tcali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 17:03:52 by tcali             #+#    #+#             */
/*   Updated: 2025/03/04 18:18:06 by tcali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Push_swap.h"
#include <stdio.h>

t_list	*create_add_node(t_list **list, char *nb)
{
	t_list	*new_node;

	if (!list || !nb)
		return (NULL);
	new_node = ft_lstnew(nb);
	ft_lstadd_back(list, new_node);
	return (new_node);
}

int	main(int ac, char **av)
{
	t_list	*a;
	t_list	*last_node;
	char	**stack;
	int		i;

	if (ac < 2)
	{
		printf("Must give a list of numbers.");
		return (1);
	}
	if (ac == 2)
	{
		printf ("Must give more than one number.");
		return (1);
	}
	a = NULL;
	last_node = NULL;
	i = 1;
	while (i < ac)
	{
		stack = ft_split(av[i], ' ');
		last_node = create_add_node(&a, stack[0]);
		printf("stack[0] = %s\n", stack[0]);
		printf("last_node's content = %s\n", (char *)last_node->content);
		i++;
	}
	i = 0;
	while (stack[i])
	{
		free(stack[i]);
		i++;
	}
	free(stack);
	return (0);
}
