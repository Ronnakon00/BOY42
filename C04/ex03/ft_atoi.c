/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ronny <ronny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/14 14:42:56 by rthanett          #+#    #+#             */
/*   Updated: 2026/07/15 16:11:19 by ronny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	power(int i)
{
	int	aws;

	aws = 1;
	while (i != 0)
	{
		aws = aws * 10;
		i--;
	}
	return (aws);
}

int	ft_ne(int n)
{
	n = n / 2;
	if (n != 0)
		return (-1);
	return (1);
}

int	len_num(char *str)
{
	int	i;

	i = 0;
	while (*str >= '0' && *str <= '9')
	{
		i++;
		str++;
	}
	return (i);
}

int	to_int(char *str, int l)
{
	int	result;
	int	i;

	i = 0;
	result = 0;
	while (l != 0)
	{
		result = ((str[l] - '0') * power(i)) + result;
		l--;
		i++;
	}
	return (result);
}

int	ft_atoi(char *str)
{
	int	result;
	int	ne;
	int	i;

	i = 0;
	result = 0;
	while (!(str[i] >= '0' && str[i] <= '9'))
	{
		if (str[i] == '-')
			ne++;
		i++;
	}
	result = to_int (&str[i - 1], len_num (&str[i]));
	return (result * ft_ne(ne));
}

// int main()
// {
//     char c[] = "   ---+--+1234ab567";
//     int x = ft_atoi(c);
//     printf("%d",x);
// }