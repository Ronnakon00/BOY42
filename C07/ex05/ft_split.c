/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthanett <rthanett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/20 11:57:47 by ronny             #+#    #+#             */
/*   Updated: 2026/07/21 18:09:01 by rthanett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char    **ft_split(char *str, char *charset)
{
    int	i;
	char *start;
	char len_word;
	
    while (*str != '\0')
    {
      i = 0;
	  start = str;
	  len_word++;
	  while (charset[i] != '\0')
	  {
		if (*str == charset[i])
			
	  }
    }
}