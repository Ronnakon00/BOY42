/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ronny <ronny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/16 15:15:26 by ronny             #+#    #+#             */
/*   Updated: 2026/07/16 16:24:01 by ronny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_iterative_power(int nb, int power)
{
    if (power < 0)
        return (0);
    if (power == 0)
        return (1);
    return (nb * ft_iterative_power(nb, power - 1));
}

// int main()
// {
// 	int x;
// 	x = ft_iterative_power(3,2);	
// 	printf("%d",x);
// }