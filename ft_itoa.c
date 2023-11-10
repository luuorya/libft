/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguery-- <lguery--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 21:39:44 by lguery--          #+#    #+#             */
/*   Updated: 2023/11/09 22:03:55 by lguery--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	taille_itoa(int n)
{
	int	taille;

	taille = 0;
	if (n == -2147483648)
		return (11);
	if (n < 0)
	{
		n = -n;
		taille++;
	}
	while (n > 9)
	{
		n = n / 10;
		taille++;
	}
	taille++;
	return (taille);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		taille;
	int		negative;

	negative = 1;
	taille = taille_itoa(n);
	str = malloc(sizeof(char) * taille + 1);
	if (str == NULL)
		return (NULL);
	str[0] = '0';
	str[taille] = '\0';
	if (n < 0)
	{
		negative = -1;
		str[0] = '-';
	}
	taille--;
	while (n)
	{
		str[taille] = (((n % 10) * negative) + '0');
		taille--;
		n = n / 10;
	}
	return (str);
}
