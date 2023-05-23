/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmusik <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 19:45:47 by thmusik           #+#    #+#             */
/*   Updated: 2022/09/20 21:20:44 by thmusik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_splitcount(char const *s, char c)
{
	size_t	index;
	size_t	word;

	index = 0;
	word = 0;
	while (s && *(s + index))
	{
		if (*(s + index) != c)
		{
			word++;
			while (*(s + index) != c && *(s + index))
				index++;
		}
		else
			index++;
	}
	return (word);
}

static size_t	ft_splitsize(char const *s, char c, size_t index)
{
	size_t	size;

	size = 0;
	while (*(s + index) != c && *(s + index))
	{
		size++;
		index++;
	}
	return (size);
}

static void	ft_free(char **strs, size_t index)
{
	while (index-- > 0)
		free(*(strs + index));
	free(strs);
}

char	**ft_split(char const *s, char c)
{
	char	**strs;
	size_t	i;
	size_t	word;
	size_t	size;
	size_t	j;

	i = 0;
	j = -1;
	word = ft_splitcount(s, c);
	strs = (char **)ft_calloc(sizeof(char *), word + 1);
	while (++j < word)
	{
		while (*(s + i) == c)
			i++;
		size = ft_splitsize(s, c, i);
		*(strs + j) = ft_substr(s, i, size);
		if (!(*(strs + j)) || !strs)
		{
			ft_free(strs, j);
			return (NULL);
		}
		i += size;
	}
	*(strs + j) = 0;
	return (strs);
}
