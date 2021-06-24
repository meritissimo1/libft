/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 12:29:01 by user42            #+#    #+#             */
/*   Updated: 2021/06/22 19:23:03 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_count_words(const char *s, char c)
{
	int	c_words;
	int	trigger;

	c_words = 0;
	trigger = 0;
	while (*s != '\0')
	{
		if (*s != c && trigger == 0)
		{
			trigger = 1;
			c_words++;
		}
		else if (*s == c)
			trigger = 0;
		s++;
	}
	return (c_words);
}

static char	*ft_word_dup(const char *s, size_t start, size_t finish)
{
	char	*word;
	int		i;
	int		printable;

	i = 0;
	printable = 0;
	word = ft_calloc(((finish - start) + 1), sizeof(char));
	while (start < finish)
	{
		if (ft_isprint(s[start]))
			printable++;
		word[i] = s[start];
		i++;
		start++;
	}
	if (printable > 0)
		return (word);
	else
		return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**strs;
	size_t	i;
	size_t	j;
	int		index;

	strs = ft_calloc((ft_count_words(s, c) + 1), sizeof(char *));
	if (!s || !strs)
		return (0);
	i = 0;
	j = 0;
	index = 0;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && index < 0)
			index = i;
		else if ((s[i] == c || i == ft_strlen(s)) && index >= 0)
		{
			if ((size_t)index < i)
				strs[j++] = ft_word_dup(s, index, i);
			index = -1;
		}
		i++;
	}
	strs[j] = 0;
	return (strs);
}
