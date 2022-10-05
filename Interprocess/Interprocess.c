#include<stdio.h>
#include<stdlib.h>
void main()
{
    int bfs,p,a[10];
    printf("\nEnter the buffer size:");
    scanf("%d",&bfs);
    printf("\nThe item is producing.....\n");
    int out=0,in=0;
    while((in+1)%(bfs+1)!=out)
    {
        scanf("%d",&p);
        a[in]=p;
        in=(in+1)%(bfs+1);
    }
    while(in!=out)
    {
        p=a[out];
        printf("\n%d is consumed\n",p);
        out=(out+1)%(bfs+1);
    }
}