/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putudecimal.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharunthornmusik <tharunthornmusik@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 22:38:46 by thmusik           #+#    #+#             */
/*   Updated: 2023/05/23 14:52:41 by tharunthorn      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"
#include "../include/ft_printf.h"

unsigned int	ft_uintlen(unsigned	int n)
{
	int	len;

	len = 0;
	while (n > 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

char	*unsigned_itoa(unsigned int n)
{
	char	*str;
	int		len;

	len = ft_uintlen(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	while (len > 0)
	{
		str[len - 1] = (n % 10) + '0';
		n = n / 10;
		len--;
	}
	return (str);
}

char	*ft_uitoa(unsigned int n)
{
	char			*number;
	unsigned int	len;

	len = ft_uintlen(n);
	number = (char *)malloc(sizeof(char) * (len + 1));
	if (!number)
		return (0);
	*(number + len) = '\0';
	while (n != 0)
	{
		*(number + len - 1) = n % 10 + 48;
		n = n / 10;
		len--;
	}
	return (number);
}

int	ft_putudecimal(unsigned int n)
{
	unsigned int	len;
	char			*number;

	if (n == 0)
		len = write(1, "0", 1);
	else
	{
		number = ft_uitoa(n);
		ft_putstr_fd(number, 1);
		len = ft_strlen(number);
		free(number);
	}
	return (len);
}
