#include<iostream>
using namespace std;

#define max 5

bool push(int& top, int& data);
bool pop(int& top, int& data);

int stack[max];

int main()
{
    int option, top, data;
    bool reply;

    top = -1;

    do{
        cout<<endl<<" 1. push";
        cout<<endl<<" 2. pop";
        cout<<endl<<" 3. exit";

        cout<<endl<<"Select proper option : ";
        cin>>option;

        switch(option)
        {
            case 1: cout<<endl<<" Enter a value : ";
                    cin>>data;

                    reply = push(top,data);

                    if(reply)
                        cout<<" Pushed value is "<<data<<endl<<endl;
                    else
                        cout<<" Overflow / Stack is full"<<endl<<endl;

                    break;

            case 2: reply = pop(top,data);

                    if(reply)
                        cout<<endl<<" Popped value is "<<data<<endl<<endl;
                    else
                        cout<<endl<<" Underflow / Stack is empty"<<endl<<endl;

                    break;

            case 3: return 0;
        }
    } while(1);
}

bool push(int& top, int& data)
{
    if(top == max-1)
        return(false);
    else
    {
        top++;
        stack[top] = data;
        return(true);
    }
}

bool pop(int& top, int& data)
{
    if(top == -1)
        return(false);
    else
    {
        data = stack[top];
        top--;
        return(true);
    }
}
