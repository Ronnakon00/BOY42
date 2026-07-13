/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ronny <ronny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/09 23:52:24 by ronny             #+#    #+#             */
/*   Updated: 2026/07/12 23:18:40 by ronny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_numeric(char *str)
{
    while (*str != '\0')
    {
        if (!(*str >= '0' && *str <= '9'))
        {
            return (0);
        }
        str++;
    }
    return (1);
}

int main(){
	int aws;
	aws = ft_str_is_alpha("1234");
	printf("%d",aws);
}