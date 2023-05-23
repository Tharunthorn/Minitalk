/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstring.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmusik <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 20:13:08 by thmusik           #+#    #+#             */
/*   Updated: 2022/10/30 20:50:47 by thmusik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"
#include "../include/ft_printf.h"

int	ft_putstring(char *s)
{
	if (s)
	{
		ft_putstr_fd(s, 1);
		return (ft_strlen(s));
	}
	ft_putstr_fd("(null)", 1);
	return (6);
}
