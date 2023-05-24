/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharunthornmusik <tharunthornmusik@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 12:29:13 by tharunthorn       #+#    #+#             */
/*   Updated: 2023/05/24 16:47:35 by tharunthorn      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../lib/libFt/libft.h"

void	signal_handler(int sig_num)
{
	static int				bit_itr = 8;
	static unsigned char	c;

	if (bit_itr > 7)
		bit_itr = 0;
	if (sig_num == SIGUSR1)
		c |= (1 << bit_itr);
	bit_itr++;
	if (bit_itr > 7 && c)
	{
		write(1, &c, 1);
		c = 0;
		return ;
	}
	return ;
}

int	main(void)
{
	pid_t	my_pid;

	my_pid = getpid();
	write(1, "PID: ", 5);
	ft_putnbr_fd(my_pid, 1);
	write(1, "\n", 1);
	signal(SIGUSR1, signal_handler);
	signal(SIGUSR2, signal_handler);
	while (1)
		pause();
	return (0);
}
