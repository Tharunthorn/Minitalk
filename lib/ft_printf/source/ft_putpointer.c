/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmusik <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 14:37:01 by thmusik           #+#    #+#             */
/*   Updated: 2022/11/01 11:08:25 by thmusik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"
#include "../include/ft_printf.h"

int	ft_pointerlen(unsigned long long num)
{
	int	len;

	len = 0;
	while (num != 0)
	{
		len++;
		num = num / 16;
	}
	return (len);
}

void	ft_putlong_base(unsigned long long nbr, char *base)
{
	unsigned long long	len;
	unsigned long long	nb;

	len = ft_strlen(base);
	nb = nbr;
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	if (nb < len)
		ft_putchar(base[nb]);
	if (nb >= len)
	{
		ft_putlong_base(nb / len, base);
		ft_putlong_base(nb % len, base);
	}
}

int	ft_putpointer(unsigned long long ptr)
{
	int	print_length;

	print_length = 0;
	print_length += write(1, "0x", 2);
	if (ptr == 0)
		print_length += write(1, "0", 1);
	else
	{
		ft_putlong_base(ptr, "0123456789abcdef");
		print_length += ft_pointerlen(ptr);
	}
	return (print_length);
}
