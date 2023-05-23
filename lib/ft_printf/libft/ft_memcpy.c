/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmusik <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 00:43:31 by tharunthorn       #+#    #+#             */
/*   Updated: 2022/08/29 19:21:12 by thmusik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	if (!dst && !src)
		return (NULL);
	i = 0;
	while (i < n)
	{
		*(char *)(dst + i) = *(char *)(src + i);
		i++;
	}
	return (dst);
}

/*
#include <stdio.h>
#include <string.h>

int main()
{
    char str1[22];
    char str2[] = "test basic du memcpy !";

    puts("str1 before memcpy ");
    puts(str1);

    // Copies contents of str2 to str1
    ft_memcpy(str1, str2, 22);

    puts("\nstr1 after memcpy ");
    puts(str1);

    return 0;
}
*/
