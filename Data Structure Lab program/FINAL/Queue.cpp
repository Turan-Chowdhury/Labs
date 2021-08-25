#include<iostream>
#include<stdlib.h>
using namespace std;
const int SIZE = 5;
void Qinsert(int);
void Qdelete();
int Q[SIZE];
int f=-1, r=-1;

int main()
{
    int choice, i, num;
    cout<<endl<<" Program for Circular Queue demonstration through array";

    while(1)
    {
        cout<<endl<<endl<<" Main Menu"<<endl<<endl<<" 1. Insertion"<<endl<<" 2. Deletion"<<endl<<" 3. Exit";
        cout<<endl<<endl<<" Enter Your Choice : ";
        cin>>choice;

        switch(choice)
        {
            case 1: cout<<endl<<endl<<" Enter The Queue Element : ";
                    cin>>num;
                    Qinsert(num);
                    break;

            case 2: Qdelete();
                    break;

            case 3: exit(1);

            default: cout<<endl<<endl<<" Invalid Choice.";
        }
    }
}

void Qinsert(int item)
{
    if((f == r+1) || (f==0 && r==SIZE-1))
        cout<<endl<<endl<<"Queue is Overflow";
    else
    {
        if(f == -1)
            f=r=0;
        else
            r = (r+1)%SIZE;

        Q[r] = item;

        cout<<endl<<endl<<" Front = "<<f<<"  Rear = "<<r;
    }
}

void Qdelete()
{
    int elem;

    if(f == -1)
        cout<<endl<<endl<<" Queue is Underflow";
    else
    {
        elem = Q[f];

        if(f==r)
            f=r=-1;
        else
            f = (f+1)%SIZE;

        cout<<endl<<endl<<" Deleted element from Queue is : "<<elem;
        cout<<endl<<endl<<" Front = "<<f<<"  Rear = "<<r;
    }
}
