/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguery-- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 06:22:45 by lguery--          #+#    #+#             */
/*   Updated: 2023/11/06 14:18:57 by lguery--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	ibig;
	size_t	ilittle;

	ibig = 0;
	ilittle = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (big[ibig] && ibig < len)
	{
		while (big[ibig + ilittle] == little[ilittle] && ibig + ilittle < len)
		{
			ilittle++;
			if (little[ilittle] == '\0')
				return ((char *)big + ibig);
		}
		ilittle = 0;
		ibig++;
	}
	return (NULL);
}
