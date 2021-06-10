/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 17:26:21 by user42            #+#    #+#             */
/*   Updated: 2021/06/09 12:33:24 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
    char *tmp;
	tmp = (char *)malloc(sizeof(char) * len);    
	if (tmp == NULL)
		return (NULL);
	ft_memcpy(tmp, src, len);          
	ft_memcpy(dst, tmp, len);
	free(tmp);
	return (dst);
}
