/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmusik <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 23:24:12 by thmusik           #+#    #+#             */
/*   Updated: 2022/08/20 20:54:35 by thmusik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}

/*
#include <stdio.h>
#include <ctype.h>

int main()
{
    char c;
    c = '5';
    printf("Result when numeric character is passed: %d", ft_isdigit(c));

    c = '+';
    printf("\nResult when non-numeric character is passed: %d", ft_isdigit(c));

    return 0;
}
*/
