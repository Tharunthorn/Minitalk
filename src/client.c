/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharunthornmusik <tharunthornmusik@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 14:42:05 by tharunthorn       #+#    #+#             */
/*   Updated: 2023/05/24 16:40:06 by tharunthorn      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <signal.h>
#include "../lib/libFt/libft.h"

void	send_text_to_server(pid_t server_pid, const char *text)
{
	char	single_char;
	int		text_index;
	int		bit_index;
	int		text_length;

	text_index = 0;
	text_length = ft_strlen(text);
	while (text_index < text_length)
	{
		single_char = text[text_index];
		bit_index = 7;
		while (bit_index >= 0)
		{
			if (single_char & 1)
				kill(server_pid, SIGUSR1);
			else
				kill(server_pid, SIGUSR2);
			single_char = single_char >> 1;
			bit_index--;
			usleep(1000);
		}
		text_index++;
	}
}

int	main(int argc, char *argv[])
{
	pid_t	server_pid;
	char	*text;
	int		text_len;

	if (argc != 3)
	{
		write(1, "Invalid Arguments\n", 18);
		exit(EXIT_FAILURE);
	}
	server_pid = ft_atoi(argv[1]);
	text_len = ft_strlen(argv[2]);
	text = (char *)malloc(text_len + 1);
	ft_strlcpy(text, argv[2], text_len + 1);
	send_text_to_server(server_pid, text);
	while (1)
		pause();
	return (0);
}
