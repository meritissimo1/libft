/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcrodr <marcrodr@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 17:49:28 by marcrodr          #+#    #+#             */
/*   Updated: 2021/06/15 18:03:10 by marcrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_length;
	char	*s_start;
	char	*new_string_start;
	char	*new_string;

	if (s == NULL)
		return (NULL);
	new_string_start = malloc(sizeof(char) * (len + 1));
	if (new_string_start == NULL)
		return (NULL);
	new_string = new_string_start;
	s_length = ft_strlen(s);
	s_start = (char *)s;
	s += start;
	while ((size_t)(s - s_start) < s_length && len--)
		*new_string++ = *s++;
	*new_string = '\0';
	return (new_string_start);
}