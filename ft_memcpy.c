/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguery-- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 13:56:38 by lguery--          #+#    #+#             */
/*   Updated: 2023/10/18 15:21:49 by lguery--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*a;
	unsigned char	*b;
	size_t			i;

	i = 0;
	if (!dest && !src)
		return (NULL);
	a = (unsigned char *)dest;
	b = (unsigned char *)src;
	while (i < n)
	{
		a[i] = b[i];
		i++;
	}
	return (a);
}
