/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmusik <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 08:21:55 by thmusik           #+#    #+#             */
/*   Updated: 2022/09/01 09:04:44 by thmusik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset((void *)s, 0, n);
}

/*
#include <stdio.h>
#include <string.h>

int main()
{
    char str[50] = "GeeksForGeeks is for programming geeks.";
    printf("\nBefore memset(): %s\n", str);

    // Fill 8 characters starting from str[13] with '.'
    ft_bzero(str + 13, 8 * sizeof(char));

    printf("After bzero():  %s", str);
    return 0;
}
*/
