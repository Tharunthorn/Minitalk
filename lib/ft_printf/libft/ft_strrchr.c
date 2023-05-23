/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmusik <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 09:18:52 by thmusik           #+#    #+#             */
/*   Updated: 2022/09/14 00:21:12 by thmusik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	if (!s)
		return (NULL);
	i = ft_strlen(s);
	while (i >= 0)
	{
		if (*(s + i) == (char)c)
			return ((char *)(s + i));
		i--;
	}
	return (NULL);
}

/*
#include <stdio.h>
#include <string.h>

int main()
{
    const char str[] = "abbbbbbbb";
    const char ch = 'a';
    char *ret;

    ret = ft_strrchr(str, ch);

    printf("String after |%c| is - |%s|\n", ch, ret);

    return (0);
}
*/
