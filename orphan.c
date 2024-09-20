//orphan.c

#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
#include<stdlib.h>
void main()
{
pid_t p;
p=fork();
if(p==0){
sleep(10);
printf("My id is:%d",getpid());
printf("My parent id is:%d\n",getpid());
}
else{
printf("\n My id is:%d",getpid());
}
}
