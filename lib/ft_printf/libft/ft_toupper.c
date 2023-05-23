/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmusik <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 01:13:24 by thmusik           #+#    #+#             */
/*   Updated: 2022/08/20 21:58:20 by thmusik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (c - 32);
	}
	return (c);
}

/*
#include <stdio.h>
#include <ctype.h>

int main()
{
    char ch;

    ch = 'a';
    printf("%c in uppercase is represented as  %c",
           ch, ft_toupper(ch));

    return 0;
}
*/
