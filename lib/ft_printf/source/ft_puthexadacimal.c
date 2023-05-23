/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexadacimal.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmusik <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 18:05:26 by thmusik           #+#    #+#             */
/*   Updated: 2022/11/01 11:06:25 by thmusik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"
#include "../include/ft_printf.h"

int	ft_hexlen(unsigned int num)
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

void	ft_putnbr_base(unsigned int nbr, char *base)
{
	int		len;
	long	nb;

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
		ft_putnbr_base(nb / len, base);
		ft_putnbr_base(nb % len, base);
	}
}

int	ft_puthexadecimal(unsigned int n, register char formatindex)
{
	if (n == 0)
		return (write(1, "0", 1));
	else if (formatindex == 'x')
		ft_putnbr_base(n, "0123456789abcdef");
	else if (formatindex == 'X')
		ft_putnbr_base(n, "0123456789ABCDEF");
	return (ft_hexlen(n));
}
