/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 17:26:41 by user42            #+#    #+#             */
/*   Updated: 2021/06/10 22:01:04 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t    ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    if (!dst || !src)
		return (0);
    size_t i;
    int len;

    i = 0;
    len = 0;
    len = ft_strlen(src);
    while (src[i] != '\0' || i < dstsize)
    {
        dst[i] = src[i];
        i++; 
    }
    dst[i] = '\0';
    return (len);
}
