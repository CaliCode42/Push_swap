/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcali <tcali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 17:03:52 by tcali             #+#    #+#             */
/*   Updated: 2025/03/11 15:23:38 by tcali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Push_swap.h"
#include <stdio.h>

//create new node and add it at the end of the linked list.
t_list	*create_add_node(t_list **list, char *number, int index)
{
	t_list		*new_node;
	t_content	current;

	if (!list || !number)
		return (NULL);
	current.nb = ft_atoi(number);
	current.index = index;
	new_node = ft_lstnew(current);
	if (!new_node)
		return (NULL);
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
		new_node = create_add_node(list, stack[i], (i + 1));
		//printf("stack[%d] = %s\n", i, stack[i]);
		//printf("new_node's content = %i\n", new_node->content.nb);
		i++;
	}
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

char	*stdin_to_str(int arg_nb, char **args)
{
	int		i;
	char	*tmp;
	char	*str;

	i = 1;
	tmp = NULL;
	str = ft_strdup("");
	while (i < arg_nb)
	{
		tmp = ft_strjoin(str, args[i]);
		free(str);
		str = ft_strjoin(tmp, " ");
		free(tmp);
		i++;
	}
	printf("stdin_to_str : str = [%s]\n", str);
	return (str);
}

//fct to print my nodes, using the path of the linked list.
void	print_nodes_linkedlst(t_list *head)
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
