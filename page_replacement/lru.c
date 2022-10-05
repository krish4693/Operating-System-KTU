#include<stdio.h>
void main()
{
    int pno,page[10],fno,queue[10],Pagefault=0,counter1,c2[20];
    printf("\nEnter the number of pages:");
    scanf("%d",&pno);
    printf("\nEnter the reference string:");
    for(int i=0;i<pno;i++)
    {
        scanf("%d",&page[i]);
    }
    printf("\nEnter the number of frames:");
    scanf("%d",&fno);
    int k=0;
    queue[k]=page[k];
    //printf("\n\t%d\n",frame[k]);
    Pagefault++;
    k++;
    for(int i=1;i<pno;i++)
    {
        counter1=0;
        for(int j=0;j<fno;j++)
        {
            if(page[i]!=frame[j])
            {
                counter1++;
            }
        }
        if(counter1==f)
        {
            Pagefault++;
            if(k<fno)
            {
                frame[k]=p[i];
                k++;

            }
            else
            {
                for(int r=0;r<fno;r++)
                {
                    c2[r]=0;
                    for(j=i-1;j<pno;j--)
                    {
                        if(frame[r]!=page[j])
                           c2[r]++;
                        else 
                            break;

                    }
                }
            }

        }
    }
}