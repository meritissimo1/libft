/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 17:27:00 by user42            #+#    #+#             */
/*   Updated: 2021/06/10 17:24:41 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *strrchr(const char *str, int c)
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
