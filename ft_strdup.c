/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 16:11:31 by user42            #+#    #+#             */
/*   Updated: 2021/06/10 11:32:57 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strdup(const char *s1)
{
    size_t len;
    char *new_str;

    len = ft_strlen(s1) + 1;
    new_str = malloc((len) * sizeof(char));
    if (new_str == NULL)
        return (NULL);
    ft_memcpy(new_str, s1, len);
        return (new_str);
}
