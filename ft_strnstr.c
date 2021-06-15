/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcrodr <marcrodr@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 17:26:50 by user42            #+#    #+#             */
/*   Updated: 2021/06/15 16:02:03 by marcrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char *haystack_start;
	char *needle_pointerator;
	char *possible_match;

	haystack_start = (char *)haystack;
	if (*needle == '\0')
		return (haystack_start);
	while (*haystack)
	{
		needle_pointerator = (char *)needle;
		possible_match = (char *)haystack;
		while (*needle_pointerator &&
			*haystack == *needle_pointerator &&
			(unsigned long)(haystack - haystack_start) < len)
		{
			needle_pointerator++;
			haystack++;
		}
		if (*needle_pointerator == '\0')
			return (possible_match);
		haystack = possible_match + 1;
	}
	return (NULL);
}