#include<stdio.h>
int main()
{
    int head_pos,no_tracks,head_movement=0;
    printf("\nEnter the postion of the head:");
    scanf("%d",&head_pos);
    printf("\nEnter the number of tracks:");
    scanf("%d",&no_tracks);
    int track[no_tracks];
    printf("\nEnter the track sequence:");
    for(int i=0;i<no_tracks;i++)
    {
        scanf("%d",&track[i]);
    }
    for(int i=0;i<no_tracks;i++)
    {
        if(head_pos<track[i])
        {
            head_movement=head_movement+(track[i]-head_pos);
            head_pos=track[i];

        }
        else
        {
            head_movement=head_movement+(head_pos-track[i]);
            head_pos=track[i];
        }
    }
    printf("\nThe total seek time is :%d\n",head_movement);
}