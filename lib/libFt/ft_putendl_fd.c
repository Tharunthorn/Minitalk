/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmusik <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 08:59:54 by thmusik           #+#    #+#             */
/*   Updated: 2022/09/03 11:31:39 by thmusik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	size_t	len;

	if (s && fd != -1)
	{
		len = ft_strlen(s);
		write(fd, s, len);
		write(fd, "\n", 1);
	}
}
/*
int main(int argc, char **argv)
{
    (void)argc;
    ft_putendl_fd(argv[1], 1);
    return (0);
}
*/
