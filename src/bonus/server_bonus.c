/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharunthornmusik <tharunthornmusik@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 12:29:13 by tharunthorn       #+#    #+#             */
/*   Updated: 2023/05/23 13:44:58 by tharunthorn      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <signal.h>
#include "../../lib/libFt/libft.h"
#include "../../lib/ft_printf/include/ft_printf.h"



void signal_handler(int sig_num) {
    static int	bit_itr = 8;
	static unsigned char    c;

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

int main(void) {
    pid_t my_pid;

    my_pid = getpid();
    ft_printf("PID: %d\n", my_pid);

    signal(SIGUSR1, signal_handler);
    signal(SIGUSR2, signal_handler);

    while (1) {
        pause();
    }

    return (0);
}