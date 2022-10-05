#include<stdio.h>
#include<stdlib.h>
struct processstruct
{
    int pid;
    int at;
    int bt;
    int rt;
    int ct;
    int tt;
    int wt;
}process[10];

void main()
{   int pno,timesplice,sum=0,time=0;
    printf("\nEnter the number of process:");
    scanf("%d",&pno);
    printf("\nEnter the pid,at,bt of the processes\n");
    for(int i=0;i<pno;i++)
    {
        scanf("%d%d%d",&process[i].pid,&process[i].at,&process[i].bt);
        sum+=process[i].bt;
        process[i].rt=process[i].bt;
    }
    printf("\npid\tAT\tBT");
    for(int i=0;i<pno;i++)
    {
        printf("\n%d\t%d\t%d",process[i].pid,process[i].at,process[i].bt);
    }
    printf("\nEnter the timesplice:");
    scanf("%d",&timesplice);
    printf("%d",sum);
    while(sum>0)
    {
        for(int i=0;i<pno;i++) 
        {
            if(process[i].at<=time&&process[i].rt>0)
            {
                if(process[i].rt>=timesplice)
                {
                    time=time+timesplice;
                    process[i].rt=process[i].rt-timesplice;
                    sum=sum-timesplice;
                }
                else 
                {
                    time=time+process[i].rt;
                    process[i].rt=0;
                    sum=sum-process[i].rt;
                }
                if(process[i].rt==0)
                {
                    process[i].ct=time;
                }
            }
        }
    }
    float ttt=0.0,twt=0.0;
    for(int i=0;i<pno;i++)
    {
        process[i].tt=process[i].ct-process[i].at;
        process[i].wt=process[i].tt-process[i].bt;
        ttt+=process[i].tt;
        twt+=process[i].wt;
    }
    printf("\nThe average tt time is %f",(ttt/pno));
    printf("\nThe average wt time is %f",(twt/pno));



    
}



