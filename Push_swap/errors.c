/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcali <tcali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 14:16:32 by tcali             #+#    #+#             */
/*   Updated: 2025/03/06 14:37:51 by tcali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Push_swap.h"

char	*check_stack_errors(char **stack)
{
	int	i;
	int	j;
	int	error;
	
	if (!stack)
	return (NULL);
	i = 0;
	error = 0;
	while (stack[i])
	{
		j = 0;
		while (stack[i][j])
		{

		}
	//convert stacked char* to int (if impossible >> Error)
	//check only nb between INT MIN & INT MAX
	//check duplicates
}