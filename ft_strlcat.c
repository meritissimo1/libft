/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcrodr <marcrodr@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 17:26:37 by user42            #+#    #+#             */
/*   Updated: 2021/06/14 00:54:56 by marcrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize)
{
    size_t i;
    size_t len;

    i = 0;
    if (dstsize <= ft_strlen(dst))
        return (dstsize + ft_strlen(src));
    len = ft_strlen(dst);
    while (src[i] != '\0' && i + 1 < dstsize)
    {
        dst[len] += src[i];
        i++;
        len++;
    }
    dst[i] = '\0';
    return (ft_strlen(dst) + ft_strlen(&dst[len]));
}
