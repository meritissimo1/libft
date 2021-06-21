/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 17:27:00 by user42            #+#    #+#             */
/*   Updated: 2021/06/21 13:47:35 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	if (c > 256)
		c -= 256;
	i = ft_strlen(str);
	while (i >= 0)
	{
		if (str[i] == c)
		{
			return ((char *)&str[i]);
		}
		i--;
	}
	return (NULL);
}
