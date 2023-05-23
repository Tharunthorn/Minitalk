/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmusik <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 13:17:53 by thmusik           #+#    #+#             */
/*   Updated: 2022/11/01 11:13:59 by thmusik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>

unsigned int	ft_doprint(const char *format, va_list datalist);

int				ft_formatprint(register char format, va_list data);

int				ft_printf(const char *format, ...);

int				ft_putchar(char c);

int				ft_putdecimal(int n);

int				ft_puthexadecimal(unsigned int n, register char formatindex);

int				ft_putpointer(unsigned long long ptr);

int				ft_putstring(char *s);

int				ft_putudecimal(unsigned int n);

#endif
