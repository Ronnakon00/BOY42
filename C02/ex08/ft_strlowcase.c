/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ronny <ronny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/09 23:52:24 by ronny             #+#    #+#             */
/*   Updated: 2026/07/12 23:47:32 by ronny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char    *ft_strupcase(char *str)
{
    while (*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            *str = *str + ('a' - 'A');
        }
        str++;
    }
    return (str);
}

int main(){
	char aws[] = "1234AOWDAO"; 
	ft_strupcase(aws);
	printf("%s",aws);
}