/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ronny <ronny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/20 11:56:21 by ronny             #+#    #+#             */
/*   Updated: 2026/07/20 11:56:56 by ronny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		check_base(char *base);
char	*ft_itoa_base(long n, char *base, int base_len);

int	get_pos(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

long	ft_atoi_base(char *nbr, char *base, int base_len)
{
	long	res;
	int		sign;
	int		pos;

	res = 0;
	sign = 1;
	while ((*nbr >= 9 && *nbr <= 13) || *nbr == ' ')
		nbr++;
	while (*nbr == '+' || *nbr == '-')
	{
		if (*nbr == '-')
			sign *= -1;
		nbr++;
	}
	while (*nbr)
	{
		pos = get_pos(*nbr, base);
		if (pos == -1)
			break ;
		res = (res * base_len) + pos;
		nbr++;
	}
	return (res * sign);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		b_from_len;
	int		b_to_len;
	long	num;

	if (!nbr || !base_from || !base_to)
		return (NULL);
	b_from_len = check_base(base_from);
	b_to_len = check_base(base_to);
	if (b_from_len == 0 || b_to_len == 0)
		return (NULL);
	num = ft_atoi_base(nbr, base_from, b_from_len);
	return (ft_itoa_base(num, base_to, b_to_len));
}
