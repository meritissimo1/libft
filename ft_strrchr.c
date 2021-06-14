/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcrodr <marcrodr@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 17:27:00 by user42            #+#    #+#             */
/*   Updated: 2021/06/13 23:39:38 by marcrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strrchr(const char *str, int c)
{
    int i;
    int len;

    i = 0;
    len = ft_strlen(str);
    while (*str)
        str++;
    str--;
    while (i < len)
    {
        if (c == *str)
            return ((char *)str);
        i++;
        str--;
    }
    return (0);
}
