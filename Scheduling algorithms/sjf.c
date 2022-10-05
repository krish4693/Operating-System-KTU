
#include<stdio.h>

struct process
{
    int at;
    int bt;
    int ct;
    int tt;
    int wt;
    int visited;
};
void main()
{
    int process_no;
    printf("\nEnter the number of process:");
    scanf("%d",&process_no);
    printf("\nEnter the arrival time and burst tiem of processes:\n");
    struct process a[process_no];
    for(int i=0;i<process_no;i++)
    {
        scanf("%d%d",&a[i].at,&a[i].bt);
        a[i].visited=0;

    }
    for(int i=0;i<process_no;i++)
    {
        for(int j=0;j<process_no-i-1;j++)
        {
            if(a[j].at>=a[j+1].at)
            {
                if(a[j].at>a[j+1].at)
                {
                    struct process temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                }
                else
                {
                    if(a[j].bt>a[j+1].bt)
                    {
                        struct process temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                    }
                }
            }
        }
    }
    printf("\n");
    // for(int i=0;i<process_no;i++)
    // {
    //     printf("%d",a[i].bt);
    // }
    a[0].ct=a[0].at+a[0].bt;
    a[0].tt=a[0].ct-a[0].at;
    a[0].wt=a[0].tt-a[0].bt;
    a[0].visited=1;
    int ct=a[0].ct;
    

}