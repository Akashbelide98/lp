//SIGQUIT

#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>

void handle_sigquit(int sig){
    printf("caught SIGQUIT , exiting..\n");
    exit(0);
}
int main(){
    //register the signal
    signal(SIGQUIT,handle_sigquit);
    while(1){
        printf("running... (press ctrl+\\ to stop\n");
    }
    return 0;
}
