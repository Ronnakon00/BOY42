/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ronny <ronny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/20 03:45:08 by ronny             #+#    #+#             */
/*   Updated: 2026/07/22 15:52:25 by ronny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	check_and_len(int min, int max)
{
	int	count;
	int	temp;

	count = 0;
	temp = min;
	if (min >= max)
		return (0);
	while (temp < max)
	{
		count++;
		temp++;
	}
	return (count);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*dest;
	int	size;
	int	i;

	size = check_and_len(min, max);
	if (size == 0)
	{
		*range = NULL;
		return (0);
	}
	dest = (int *)malloc(sizeof(int) * size);
	if (dest == NULL)
		return (-1);
	i = 0;
	while (i < size)
	{
		dest[i] = min;
		min++;
		i++;
	}
	*range = dest;
	return (size);
}
