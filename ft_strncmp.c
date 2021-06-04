/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 18:55:24 by user42            #+#    #+#             */
/*   Updated: 2021/06/04 17:34:43 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_strncmp(const char *str1, const char *str2, size_t n)
{
    size_t i;

    i = 0;
    if (n == 0)
        return (0);
    while (str1 == str2 && str1 != '\0')
    {
        if (i < (n - 1))
            i++;
    }
    return ((unsigned char)(str1[i]) - (unsigned char)(str2[i]))
}
