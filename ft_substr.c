/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcrodr <marcrodr@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 17:49:28 by marcrodr          #+#    #+#             */
/*   Updated: 2021/06/19 10:33:46 by marcrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	s_len; 

	if (!s)
		return (0);
	if (ft_strlen(s) < start) 
		return (ft_calloc(1, sizeof(char))); 
	s_len = ft_strlen(s + start); 
	if ((s_len) < len) 
		len = s_len; 
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (0);
	ft_strlcpy(str, (s + start), len + 1); 
	return (str);
}