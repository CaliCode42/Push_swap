/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcali <tcali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 12:36:51 by tcali             #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2025/03/04 17:31:37 by tcali            ###   ########.fr       */
=======
/*   Updated: 2025/02/20 12:45:57 by tcali            ###   ########.fr       */
>>>>>>> c07e2e5 (added beggining of file Push_swap.h w/ prototype of linked list.)
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
<<<<<<< HEAD
# include "libft/libft.h"
# include <unistd.h>
# include <stdlib.h>

typedef struct s_stack
{
	int				nb;
	int				index;
	struct s_stack	*prev;
	struct s_stack	*next;
}					t_stack;
=======
# include <unistd.h>
# include <stdlib.h>

typedef struct s_node
{
	int	nb;
	int	index;
}			t_node;

typedef struct s_stack
{
	/* data */
	t_node	*prev;
	t_node	*next;
}			t_stack;
>>>>>>> c07e2e5 (added beggining of file Push_swap.h w/ prototype of linked list.)

#endif