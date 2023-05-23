/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_formatprint.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmusik <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 20:03:34 by thmusik           #+#    #+#             */
/*   Updated: 2022/11/01 11:58:13 by thmusik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"
#include "../include/ft_printf.h"

int	ft_formatprint(register char format, va_list data)
{
	int	outputlenght;

	outputlenght = 0;
	if (format == 'c')
		outputlenght += ft_putchar(va_arg(data, unsigned int));
	else if (format == 's')
		outputlenght += ft_putstring(va_arg(data, char *));
	else if (format == 'p')
		outputlenght += ft_putpointer(va_arg(data, unsigned long long));
	else if (format == 'd' || format == 'i')
		outputlenght += ft_putdecimal(va_arg(data, int));
	else if (format == 'u')
		outputlenght += ft_putudecimal(va_arg(data, unsigned int));
	else if (format == 'x' || format == 'X')
		outputlenght = ft_puthexadecimal(va_arg(data, unsigned int), format);
	else if (format == '%')
		outputlenght += ft_putchar('%');
	return (outputlenght);
}
