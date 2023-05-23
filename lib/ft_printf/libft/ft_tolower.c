/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmusik <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 09:21:55 by thmusik           #+#    #+#             */
/*   Updated: 2022/08/20 21:58:00 by thmusik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (c + 32);
	}
	return (c);
}

/*
#include <stdio.h>
#include <ctype.h>

int main()
{
    char ch;

    ch = 'A';
    printf("%c in lowercase is represented as  %c",
           ch, tolower(ch));

    return 0;
}
*/
