/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguery-- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 06:19:13 by lguery--          #+#    #+#             */
/*   Updated: 2023/10/27 14:13:15 by lguery--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t dest_len = ft_strlen(dst);
    size_t source_len = ft_strlen(src);
    size_t i = 0;

    if (size <= dest_len)
        return (source_len + size);

    while (dest_len + i < size - 1 && src[i] != '\0')
    {
        dst[dest_len + i] = src[i];
        i++;
    }

    dst[dest_len + i] = '\0';

    return dest_len + source_len;
}
