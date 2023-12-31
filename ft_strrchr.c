/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguery-- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 06:20:33 by lguery--          #+#    #+#             */
/*   Updated: 2023/10/21 06:20:54 by lguery--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int i;

	i = 0;
	
	while (s[i] != '\0')
		i++;
		
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return((char *)s + i);
		i--;
	}
	return (NULL);
}
