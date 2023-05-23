/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmusik <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 00:43:34 by tharunthorn       #+#    #+#             */
/*   Updated: 2022/09/03 15:56:59 by thmusik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*d;
	char	*s;

	if (!dst || !src)
		return (NULL);
	d = (char *)dst;
	s = (char *)src;
	if (dst == src)
		return (dst);
	if (s < d)
	{
		while (len--)
			*(d + len) = *(s + len);
		return (dst);
	}
	while (len--)
		*d++ = *s++;
	return (dst);
}

/*
#include <stdio.h>
#include <string.h>

int main()
{
    char str1[] = "Geeks"; // Array of size 100
    char str2[] = "Quize"; // Array of size 5

    puts("str1 before memmove ");
    puts(str1);

    // Copies contents of str2 to sr1
    ft_memmove(str1, str2, sizeof(str2));

    puts("\nstr1 after memmove ");
    puts(str1);
    return 0;
}
*/
