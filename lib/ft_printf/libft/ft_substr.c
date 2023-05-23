/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmusik <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 22:18:19 by thmusik           #+#    #+#             */
/*   Updated: 2022/09/14 00:22:00 by thmusik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	void	*subs;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!s)
		return (0);
	if (len > ft_strlen(s))
		len = ft_strlen(s) + 1;
	subs = malloc(((len + 1) * sizeof(char)));
	if (!subs)
		return (0);
	while (*(s + i))
	{
		if (i >= start && j < len)
		{
			*(char *)(subs + j) = *(s + i);
			j++;
		}
		i++;
	}
	*(char *)(subs + j) = '\0';
	return (subs);
}

/*
#include<stdio.h>

int	main(int argc, char **argv)
{
	(void)argc;
	char *s = ft_substr(argv[1], atoi(argv[2]), atoi(argv[3]));
	printf("%s\n", argv[1]);
	printf("%s\n", s);
}
*/
