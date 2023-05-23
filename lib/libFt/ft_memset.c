/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmusik <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 00:43:38 by tharunthorn       #+#    #+#             */
/*   Updated: 2022/09/01 09:59:08 by thmusik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *adress, int value, size_t bytelenght)
{
	int		i;

	i = 0;
	if (!adress)
		return (0);
	while (bytelenght--)
	{
		*(unsigned char *)(adress + i) = value;
		i++;
	}
	return (adress);
}

/*
#include <stdio.h>
#include <string.h>

int main()
{
    char str[50] = "GeeksForGeeks is for programming geeks.";
    printf("\nBefore memset(): %s\n", str);

    // Fill 8 characters starting from str[13] with '.'
    ft_memset(str + 13, '.', 8 * sizeof(char));

    printf("After memset():  %s", str);
    return 0;
}
*/
