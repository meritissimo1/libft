/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 17:26:50 by user42            #+#    #+#             */
/*   Updated: 2021/06/04 17:33:34 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strnstr (const char	*big, const char *little, size_t len)
{
    int l;
    int b;

    b = 0;
    if (little[0] == '\0')
        return ((char *)big);
    while (*big)
    {
        l = 0;
        while (big[b + l] == little[l] && (b + l) < len)
        {
            if (big[b + l] == '\0' && *little[l] == '\0')
                return ((char *)&big[b]);
            l++;
        }
        if (little[l] == '\0')
            return ((char *) big + b);
        b++;
    }
    return (0);
}