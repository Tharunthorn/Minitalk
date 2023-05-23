/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putdecimal.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmusik <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 09:09:53 by thmusik           #+#    #+#             */
/*   Updated: 2022/11/01 10:56:42 by thmusik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"
#include "../include/ft_printf.h"

int	ft_putdecimal(int n)
{
	int		len;
	char	*number;

	number = ft_itoa(n);
	ft_putstr_fd(number, 1);
	len = ft_strlen(number);
	free(number);
	return (len);
}
