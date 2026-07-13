/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthanett <rthanett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/13 15:38:04 by rthanett          #+#    #+#             */
/*   Updated: 2026/07/13 22:31:09 by rthanett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;
	int	val;

	i = 0;
	val = 0;
	while (n != 0)
	{
		if (s1[i] != s2[i])
		{
			val = s1[i] - s2[i];
			return (val);
		}
		i++;
		n--;
	}
	if (s1[i] == '\0' && n != 0)
	{
		val = s1[i] - s2[i];
	}
	return (val);
}

// int main (void)
// {
//     char a[] = "green";
//     char b[] = "greenhouse";
//     int x;
//     ft_strcmp(a,b,6);
//     printf("%d" ,x);
// }