/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcali <tcali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 17:03:52 by tcali             #+#    #+#             */
/*   Updated: 2025/03/07 16:13:50 by tcali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Push_swap.h"
#include <stdio.h>

//create new node and add it at the end of the linked list.
t_list	*create_add_node(t_list **list, char *number)
{
	t_list		*new_node;
	t_content	current;

	if (!list || !number)
		return (NULL);
	current.nb = ft_atoi(number);
	new_node = ft_lstnew(current);
	ft_lstadd_back(list, new_node);
	return (new_node);
}

//fetch number from split to new nodes in the linked list.
void	split_to_nodes(t_list **list, char **stack)
{
	t_list	*new_node;
	int		i;

	i = 0;
	new_node = NULL;
	while (stack[i])
	{
		new_node = create_add_node(list, stack[i]);
		printf("stack[%d] = %s\n", i, stack[i]);
		printf("new_node's content = %i\n", new_node->content.nb);
		i++;
	}
}

//check validity of the str. (Maybe useless...)
char	*is_str(char *str)
{
	int	i;

	if (!str)
		return (NULL);
	if (str[0] == '"')
	{
		i = 1;
		while (str[i] && str[i] != '"')
			i++;
		if (str[i] == '"' && str[i + 1] == '\0')
			return (str);
		return (NULL);
	}
	return (str);
}

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
		printf("av[1] = %s\n", av[1]);
		if (is_str(av[1]) != NULL)
		{
			stack = ft_split(is_str(av[1]), ' ');
			if (check_stack_errors(stack, get_stack_size(stack)) == 0)
			{
				printf("Error. Stack error.");
				return (1);
			}
			split_to_nodes(&a, stack);
		}
		else
		{
			printf ("Error. Invalid input.");
			return (1);
		}
	}
	a = NULL;
	last_node = NULL;
	i = 1;
	if (ac > 2)
	{
		while (i < ac)
		{
			printf("\nav[i] = %s\n", av[i]);
			stack = ft_split(av[i], ' ');
			if (check_stack_errors(stack, get_stack_size(stack)) == 0)
			{
				printf("Error. Stack error.");
				return (1);
			}
			split_to_nodes(&a, stack);
			i++;
		}
		i = 0;
	}
	while (stack[i])
	{
		free(stack[i]);
		i++;
	}
	free(stack);
	return (0);
}
