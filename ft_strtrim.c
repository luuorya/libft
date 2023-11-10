/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguery-- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 06:29:30 by lguery--          #+#    #+#             */
/*   Updated: 2023/11/09 21:19:57 by lguery--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;

	while (ft_strchr(set, *s1) && *s1)
		s1++;
	i = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[i]) && i >= 0)
		i--;
	return (ft_substr(s1, 0, i + 1));
}
