/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcrodr <marcrodr@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 17:26:34 by user42            #+#    #+#             */
/*   Updated: 2021/06/14 19:24:35 by marcrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *str, int c)
{
    int i;
    int len;

    if (c > 256)
    c -= 256;
    i = 0;
    len = ft_strlen(str);
    while (i <= len)
    {
        if (str[i] == c)
            return ((char *)&str[i]);
        i++;
    }
    return (0);
}
