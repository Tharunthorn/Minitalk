/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmusik <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 00:43:18 by tharunthorn       #+#    #+#             */
/*   Updated: 2022/08/30 13:06:24 by thmusik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && s)
	{
		if (*(unsigned char *)(s + i) == (unsigned char)c)
			return ((void *)(s + i));
		i++;
	}
	return (NULL);
}

/*
#include <stdio.h>
#include <string.h>

int main()
{
    const char str[] = "http://www.tutorialspoint.com";
    const char ch = '.';
    char *ret;

    ret = ft_memchr(str, ch, strlen(str));

    printf("String after |%c| is - |%s|\n", ch, ret);

    return (0);
}
*/
