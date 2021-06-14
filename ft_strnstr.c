/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 17:26:50 by user42            #+#    #+#             */
/*   Updated: 2021/06/10 17:22:35 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	char	*haystack;
	char	*needle;
	char	*needle_in_haystack;
	size_t	count_haystack;
	size_t	count_needle;

	count_haystack = 0;
	haystack = (char *)str;
	if (*to_find == '\0')
		return (haystack);
	while (*haystack != '\0')
	{
		count_needle = 0;
		needle = (char *)to_find;
		needle_in_haystack = haystack;
		while (*needle_in_haystack++ == *needle && *needle++ != '\0' &&
											count_haystack + count_needle < n)
			++count_needle;
		if (*needle == '\0')
			return (haystack);
		++haystack;
		++count_haystack;
	}
	return (NULL);
}
