/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmusik <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 12:58:51 by thmusik           #+#    #+#             */
/*   Updated: 2022/09/14 00:17:56 by thmusik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	srclen;

	srclen = ft_strlen(src);
	if (srclen + 1 < dstsize)
		ft_memcpy(dst, src, srclen + 1);
	else if (dstsize != 0)
	{
		ft_memcpy(dst, src, dstsize - 1);
		dst[dstsize - 1] = '\0';
	}
	return (srclen);
}

/*
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int	main(int argc, char **argv)
{
	(void)argc;
	printf("%s\n", argv[1]);
	printf("strlcpy: %lu\n", ft_strlcpy(argv[1], argv[2], atoi(argv[3])));
	printf("%s\n", argv[1]);
}*/
