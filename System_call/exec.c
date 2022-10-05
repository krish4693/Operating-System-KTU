#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
void main()
{
    execl("/usr/bin/ls","ls","-l",NULL);
}