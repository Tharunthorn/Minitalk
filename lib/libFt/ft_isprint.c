/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmusik <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 23:25:14 by thmusik           #+#    #+#             */
/*   Updated: 2022/08/20 20:55:44 by thmusik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

/*
#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int ch;

    for (ch = 0; ch <= 127; ch++)
    {
        printf("%#04x    ", ch);
        if (ft_isprint(ch))
            printf("The character is printable %c\n", ch);
        else
            printf("Cannot Print ASCII character\n");
    }
    return 0;
}
*/
