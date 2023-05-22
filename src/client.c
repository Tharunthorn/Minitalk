#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
#include <string.h>

void sendTextToServer(pid_t serverPID, const char* text) {
    char singleChar;
    int textIndex;
    int bitIndex;
    int textLength;

    textIndex = 0;
    textLength = strlen(text);
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
    printf("Sent Complete\n");
}

int main(int argc, char *argv[]) {
    pid_t server_pid;
    char *text;
    int text_len;

    if (argc != 3) {
        printf("Usage: %s <pid> <signal>\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    server_pid = atoi(argv[1]); 
    text_len = strlen(argv[2]);
    text = (char *)malloc(text_len + 1);
    text = strcpy(text, argv[2]);

    sendTextToServer(server_pid, text);

    while (1) {
        pause();
    }
    
    return 0;
}