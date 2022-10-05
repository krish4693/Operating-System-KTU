#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
void main()
{
    pid_t pid;
    pid=fork();
    if(pid==0)
    {
        printf("\nI am a child process\n");
        printf("\nThe process ID for the process is:%d",getpid());
        
    }
    else if(pid<0)
    {
        printf("\nProblem occured in process creation!");
        exit(1);
    }
    else{
        printf("\nI am a parent process!!");
        printf("\nThe process ID for the process is:%d",getpid());


    }
}