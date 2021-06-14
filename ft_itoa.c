/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 22:01:58 by user42            #+#    #+#             */
/*   Updated: 2021/06/10 17:10:39 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static    void    ft_mount_string(long int nbr, char *str, int nlen)
{
    *(str + nlen--) = nbr % 10 + '0';
    nbr /= 10;
    if (nbr > 0)
        ft_mount_string(nbr, str, nlen);
}

static    int    ft_intlen(int n)
{
    int    nlen;

    nlen = 0;
    while (n)
    {
        n = n / 10;
        nlen++;
    }    
    return (nlen);
}

char    *ft_itoa(int n)
{
    char        *str;
    long int    n_long;
    int            nlen;
    int            nbr;
    int            trigger_negative;

    nbr = n;
    n_long = (long int)nbr;
    nlen = ft_intlen(n);
    trigger_negative = 0;
    if (n < 0)
    {
        trigger_negative = 1;
        nlen += 1;
        n_long *= -1;
    }
    else if (n == 0)
        nlen += 1;
    str = (char *)malloc(nlen + 1);
    *(str + nlen--) = '\0';
    ft_mount_string(n_long, str, nlen);
    if (trigger_negative)
        *str = '-';
    return (str);
}
