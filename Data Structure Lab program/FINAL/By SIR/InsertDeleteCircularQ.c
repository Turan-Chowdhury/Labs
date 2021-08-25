//Program for Circular Queue implementation through Array
#include <stdio.h>
#include<stdlib.h>
#define SIZE 5
void Qinsert(int);
void Qdelete();
int Q[SIZE];
int f=-1,r=-1;
void main()
{
    int choice,i,num;
    printf("\n Program for Circular Queue demonstration through array");
    while(1)
    {
        printf("\n\n Main Menu\n1.Insertion\n2.Deletion\n3.Exit");
        printf("\n\n Enter Your Choice : ");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            printf("\n\n Enter The Queue Element : ");
            scanf("%d",&num);
            Qinsert(num);
            break;
        case 2:
            Qdelete();
            break;
        case 3:
            exit(0);
        default:
            printf("\n\n Invalid Choice . ");
        }

    }                                       //end of  outer while
}                                           //end of main
void Qinsert(int item)
{
    if ((f == r + 1) || (f == 0 && r == SIZE - 1))
    {
        printf("\n\n Queue is Overflow");
    }
    else
    {
        if (f == -1)
            f = r = 0;
        else
            r = (r + 1) % SIZE;
        Q[r] = item;

        printf("\n\n Front = %d    Rear = %d ",f,r);
    }
}
void Qdelete()
{
    int elem;
    if(f == -1)
    {
        printf("\n\n Queue is Underflow");
    }
    else
    {
        elem=Q[f];
        if(f==r)
            f=r=-1;
        else
            f= (f+1)%SIZE;
        printf("\n\n Deleted Element from Qqueue is : %d ",elem);
        printf("\n\n Front = %d    Rear = %d ",f,r);

    }
}





