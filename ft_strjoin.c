/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 12:22:50 by user42            #+#    #+#             */
/*   Updated: 2021/06/10 21:09:31 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    size_t	total_size;
	size_t	s1_size;
	char	*new_string;

	s1_size = ft_strlen(s1) + 1;
	total_size = s1_size + ft_strlen(s2);
	new_string = malloc(total_size * sizeof(char));
	if (new_string == NULL)
		return (NULL);
	ft_strlcpy(new_string, s1, s1_size);
	ft_strlcat(new_string, s2, total_size);
	return (new_string);    
}