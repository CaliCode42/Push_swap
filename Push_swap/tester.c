/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcali <tcali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 13:38:30 by tcali             #+#    #+#             */
/*   Updated: 2025/02/27 15:20:19 by tcali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Push_swap.h"
#include "libft/libft.h"
#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>

int	main(int ac, char **av)
{
	t_list	*stack_a;
	char	**numbers;

	numbers = ft_split(av[1], ' ');
	printf("list of numbers : %s\n", numbers[1]);
}
