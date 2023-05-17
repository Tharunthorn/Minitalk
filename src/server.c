#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>

void signalHandler(int sigNum) {
    if (sigNum == SIGUSR1) {
        printf("Server received a signal from the client.\n");
        // Handle the signal or perform necessary actions
    }
}

int main(void) {
    pid_t my_pid;

    my_pid = getpid();
    printf("PID: %d\n", my_pid);

    signal(SIGUSR1, signalHandler);

    while (1) {
        pause();
    }

    return (0);
}
