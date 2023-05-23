/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharunthornmusik <tharunthornmusik@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 12:29:04 by tharunthorn       #+#    #+#             */
/*   Updated: 2023/05/23 13:30:30 by tharunthorn      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <signal.h>
#include "../../lib/libFt/libft.h"
#include "../../lib/ft_printf/include/ft_printf.h"

void sendTextToServer(pid_t serverPID, const char* text) {
    char singleChar;
    int textIndex;
    int bitIndex;
    int textLength;

    textIndex = 0;
    textLength = ft_strlen(text);
    while (textIndex < textLength) {
        singleChar = text[textIndex];
        bitIndex = 7;
        while (bitIndex >= 0) {
            if (singleChar & 1) {
                kill(serverPID, SIGUSR1);
            } else {
                kill(serverPID, SIGUSR2);
            }
            singleChar = singleChar >> 1;
            bitIndex--;
            usleep(1000);
        }
        textIndex++;
    }
}

int main(int argc, char *argv[]) {
    pid_t server_pid;
    char *text;
    int text_len;

    if (argc != 3) {
        ft_printf("Usage: %s <pid> <messagel>\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    server_pid = ft_atoi(argv[1]); 
    text_len = ft_strlen(argv[2]);
    text = (char *)malloc(text_len + 1);
    ft_strlcpy(text, argv[2], text_len + 1);

    sendTextToServer(server_pid, text);

    while (1) {
        pause();
    }
    
    return 0;
}