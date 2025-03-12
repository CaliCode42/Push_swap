/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcali <tcali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 12:36:51 by tcali             #+#    #+#             */
/*   Updated: 2025/03/12 16:09:53 by tcali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "../libft/libft.h"
# include <unistd.h>
# include <stdlib.h>

typedef struct s_stack
{
	int				nb;
	int				index;
	struct s_stack	*prev;
	struct s_stack	*next;
}					t_stack;

//main.c
int		get_stack_size(char **stack);

//Read from standard input
void	split_to_nodes(t_list **list, char **stack);
char	*stdin_to_str(int arg_nb, char **args);

//errors.c
int		check_stack_errors(char **stack, int size);

//Nodes management
t_list	*create_add_node(t_list **list, char *number, int index);
void	split_to_nodes(t_list **list, char **stack);

//Operations
void	swap_a(t_list **a);
void	swap_b(t_list **b);
void	swap_both(t_list **a, t_list **b);
void	push_a(t_list **a, t_list **b);
void	push_b(t_list **a, t_list **b);

//Testers
void	print_nodes_linkedlst(t_list *head);
void	ft_testing(t_list **a);

#endif