/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atio_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ronny <ronny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/14 14:42:56 by rthanett          #+#    #+#             */
/*   Updated: 2026/07/15 16:25:36 by ronny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int check_base (char *c)
{
	int i;
	int j;
	int len;
	
	i = 0;
	len = 0;
	while(c[i] != '\0')
	{
		if (c[i] == '+' || c[i] == '-' || c[i] == ' ')
			return (0);
		j = i + 1;
		while (c[j] != '\0')
		{
			if (c[i] == c[j])
				return(0);
			j++;
		}
		len++;
		i++;
	}
	if(len == 1)
		return (0);
	return (len);
}

int	ft_atoi_base(char *str, char *base)
{
    int i;
    int len;
	int ne;
	int result;

    len = check_base(base);
	result = 0;
	ne = 0;
	i = 0;
	while (!(str[i] >= '0' && str[i] <= '9'))
	{
		if(str[i] == '-')
			ne++;
		i++;
	}
    
    ne = ne / 2;
	if(ne != 0)
		return (result * -1);
	return (result);
}

int main()
{
    char c[] = "0123456789ABCDEF";
    char c1[] = "hello";
    ft_atio_base(c1,c);
}