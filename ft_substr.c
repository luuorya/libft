/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguery-- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 06:28:25 by lguery--          #+#    #+#             */
/*   Updated: 2023/11/06 15:06:01 by lguery--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*nvl;
	
	if (start > ft_strlen(s))
	{
		nvl = malloc(sizeof(char) * 1);
		if (nvl == NULL)
			return (NULL);
		nvl[0] = '\0';
		return (nvl);
	}
	if (len >= ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	nvl = (char *)malloc(sizeof(char) * (len + 1));
	if (!nvl)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (i >= start && j < len)
		{
			nvl[j] = s[i];
			j++;
		}
		i++;
	}
	nvl[j] = 0;
	return (nvl);
}
