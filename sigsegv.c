//SIGSEGV
#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>

void handle_sigsegv(int sig) {
    printf("\nCaught SIGSEGV (Segmentation Fault). Exiting...\n");
    exit(0);
}

int main() {
    signal(SIGSEGV, handle_sigsegv);
    int *p = NULL;

    while (1) {
        printf("Accessing null pointer...\n");
        *p = 42;  // This will cause a SIGSEGV
        sleep(1);
    }
    return 0;
}


