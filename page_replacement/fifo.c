#include<stdio.h>
void main()
{
    int pno,fno,page[20],frame[20],i,j,flag=0,count=0;
    printf("\nEnter the number of pages:");
    scanf("%d",&pno);
    printf("\nEnter the pages:\n");
    for(i=0;i<pno;i++)
    {
        scanf("%d",&page[i]);
    }
    printf("\nEnter the number of frames:");
    scanf("%d",&fno);
    int k=0;
    for(i=0;i<pno;i++)
    {
        flag=0;
        for(j=0;j<fno;j++)
        {
            if(page[i]==frame[j])
            {
                printf("\nThere is a page hit!!! page:%d is found at frame :%d",page[i],j);
                flag=1;
            }

        }
        if(flag==0)
        {
            frame[k]=page[i];
            printf("\nA page fault occured!%d page enters in %d frame:",page[i],k);
            k=(k+1)%fno;
            count++;

        }
    }
    printf("\nThe number of page fault is %d",count);
}   