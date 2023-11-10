/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguery-- <lguery--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 06:30:07 by lguery--          #+#    #+#             */
/*   Updated: 2023/11/10 19:20:55 by lguery--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int count_word(char const *s, char c)
{
	int i;

	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			i++;
			while (*s != c && *s)
				s++;
		}
		else
			s++;
	}
	return (i);
}


char	**ft_split(char const *s, char c)
{
	char **tab;
	int i;
	int start;
	int k;

	i = 0;
	k = 0;
	tab = malloc(sizeof(char *) * (count_word(s, c) + 1));
	if (tab == NULL)
		return (NULL);
	while (s[i])
	{
		if (s[i] != c)
		{
			start = i;
			while (s[i] != c && s[i])
				i++;
			tab[k++] = ft_substr(s, start, i - start);
		}
		else
			i++;
	}
	tab[k] = NULL;
	return (tab);
}
