/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcali <tcali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 14:16:32 by tcali             #+#    #+#             */
/*   Updated: 2025/03/07 16:11:12 by tcali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Push_swap.h"
#include <stdio.h>

//convert stacked char* to int
//check if only nb between INT MIN & INT MAX
int	is_valid_nb(char *str, int *value)
{
	int 	i;
	long	temp;

	if (!str || !*str)
		return (0);
	i = 0;
	temp = 0;
	if (str[i] == '+' || str[i] == '-')
		i++;
	if (!ft_isdigit(str[i]))
		return (0);
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			return (0);
		i++;
	}
	temp = ft_atoi(str);
	if (temp < -2147483648 || temp > 2147483647)
		return (0);
	*value = (int)temp;
	return (1);
}

//check duplicates
int	has_duplicates(int *arr, int size)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (arr[i] == arr [j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

//just a check fct, to print my array of int
/*void	print_array(int *arr, int size)
{
	int	i;

	i = 0;
	printf("[");
	while (i < size) 
	{
		printf("%d", arr[i]);
		if (i < size - 1)
			printf(", ");
		i++;
	}
	printf("]\n");
}*/

int	check_stack_errors(char **stack, int size)
{
	int	i;
	int	*numbers;
	int	value;

	if (!stack)
		return (0);
	numbers = (int *)malloc(sizeof(int) * size);
	if (!numbers)
		return (0);
	i = 0;
	value = 0;
	while (i < size)
	{
		if (!is_valid_nb(stack[i], &value))
			return (free(numbers), 0);
		numbers[i] = value;
		//printf("current nb = [%d]\n", numbers[i]);
		i++;
	}
	if (has_duplicates(numbers, size))
		return (free(numbers), 0);
	//print_array(numbers, size);
	free(numbers);
	return (1);
}
