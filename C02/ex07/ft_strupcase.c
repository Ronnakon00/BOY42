/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ronny <ronny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/09 23:52:24 by ronny             #+#    #+#             */
/*   Updated: 2026/07/12 23:39:16 by ronny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char    *ft_strupcase(char *str)
{
    while (*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            *str = *str - ('a' - 'A');
        }
        str++;
    }
    return (str);
}

int main(){
	char aws[] = "1234asdwfwf"; 
	ft_strupcase(aws);
	printf("%s",aws);
}