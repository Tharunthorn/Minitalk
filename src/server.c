#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>

void signalHandler(int sigNum) {
    static int	bit_itr = 8;
	static unsigned char    c;

	if (bit_itr > 7)
		bit_itr = 0;
	if (sigNum == SIGUSR1)
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
    printf("PID: %d\n", my_pid);

    signal(SIGUSR1, signalHandler);
    signal(SIGUSR2, signalHandler);

    while (1) {
        pause();
    }

    return (0);
}