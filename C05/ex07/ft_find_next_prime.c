/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ronny <ronny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/16 16:54:01 by ronny             #+#    #+#             */
/*   Updated: 2026/07/16 20:10:28 by ronny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_is_prime(int nb)
{
	int i;

	i = 2;
	if (nb == 0 || nb == 1)
		return (0);
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
        i++;
	}
	return (1);
}

int ft_find_next_prime(int nb)
{
    if (ft_is_prime(nb + 1) == 1)
        return (nb + 1);
    return (ft_find_next_prime(nb + 1));
}

int main()
{
    int x;
    x = ft_find_next_prime(13);
    printf("%d",x);
}