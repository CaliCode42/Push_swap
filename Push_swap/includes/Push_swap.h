/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcali <tcali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 12:36:51 by tcali             #+#    #+#             */
/*   Updated: 2025/03/20 12:47:15 by tcali            ###   ########.fr       */
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
void	update_index(t_list *list);

//Operations
void	swap_a(t_list **a);
void	swap_b(t_list **b);
void	swap_both(t_list **a, t_list **b);
void	push_a(t_list **a, t_list **b);
void	push_b(t_list **a, t_list **b);
void	rotate_a(t_list **a);
void	rotate_b(t_list **b);
void	rotate_both(t_list **a, t_list **b);
void	reverse_rotate_a(t_list **a);
void	reverse_rotate_b(t_list **b);
void	reverse_rotate_both(t_list **a, t_list **b);

//Sorting
int		is_sorted(t_list *list);
int		is_rev_sorted(t_list *list);
t_list	*find_min_lst(t_list **list);
t_list	*find_max_lst(t_list **list);
void	micro_sort(t_list **list);
void	sort_four(t_list **a, t_list **b);
void	sort_five(t_list **a, t_list **b);
void	selection_sort(t_list **a, t_list **b);

//Testers
void	print_nodes_linkedlst(t_list *head);
void	ft_testing(t_list **a);

#endif