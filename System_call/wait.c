#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/wait.h>
void main()
{
    pid_t pid;
    pid=fork();
    int status;
    if(pid==0)
    {
        printf("\nChild");
        sleep(10);
    }
    
    else{
        printf("\nParent");\
        wait(&status);
        printf("The exit status is %d\n",WEXITSTATUS(status));


    }
}