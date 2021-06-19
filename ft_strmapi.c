/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcrodr <marcrodr@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 17:54:50 by user42            #+#    #+#             */
/*   Updated: 2021/06/19 10:33:46 by marcrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*new_string; 
	unsigned int	i;

	i = 0;
	new_string = ft_strdup(s); 
	if (!new_string)
		return (0);
	while (new_string[i]) 
	{
		new_string[i] = (*f)(i, new_string[i]); 
		i++;
	}
	new_string[i] = '\0';
	return (new_string);
}