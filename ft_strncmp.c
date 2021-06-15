/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcrodr <marcrodr@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 18:55:24 by user42            #+#    #+#             */
/*   Updated: 2021/06/15 00:15:20 by marcrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_strncmp(const char *str1, const char *str2, size_t n)
{
    size_t i;

    i = 0;
    if (n == 0)
        return (0);
    while (str1[i] == str2[i] && str1[i] != '\0')
    {
        if (i < (n - 1))
            i++;
    }
    return ((unsigned char)(str1[i]) - (unsigned char)(str2[i]));
}

