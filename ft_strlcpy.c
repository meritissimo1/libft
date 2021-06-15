/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcrodr <marcrodr@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 17:26:41 by user42            #+#    #+#             */
/*   Updated: 2021/06/15 15:37:41 by marcrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	char			current_char;
	unsigned int	iterator;

	if (src == NULL)
		return (0);
	if (size > 0)
	{
		iterator = 0;
		current_char = src[iterator];
		while (current_char != '\0' && iterator < (size - 1))
		{
			dst[iterator] = current_char;
			iterator++;
			current_char = src[iterator];
		}
		dst[iterator] = '\0';
	}
	return (ft_strlen(src));
}