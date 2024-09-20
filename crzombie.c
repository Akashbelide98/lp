#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main() {
    pid_t pid = fork();

    if (pid < 0) {
        // Fork failed
        perror("fork");
        exit(EXIT_FAILURE);
    } else if (pid == 0) {
        // Child process
        printf("Child process (PID: %d) sleeping for 10 seconds...\n", getpid());
        sleep(10); // Sleep to allow time for parent to exit
        printf("Child process (PID: %d) exiting.\n", getpid());
        exit(EXIT_SUCCESS);
    } else {
        // Parent process
        printf("Parent process (PID: %d) exiting without waiting for the child.\n", getpid());
        exit(EXIT_SUCCESS);
    }

    return 0;
}
