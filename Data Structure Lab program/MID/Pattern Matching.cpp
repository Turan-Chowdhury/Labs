#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char T[100], P[100];

    cout<<endl<<"Enter a String Text : ";
    cin.getline(T,100);

    cout<<endl<<"Input Pattern : ";
    cin.getline(P,100);

    int s = strlen(T);
    int r = strlen(P);

    int k = 0;
    int max = s-r;

    while(k<=max)
    {
        for(int i=0; i<r; i++)
        {
            if(P[i] != T[k+i])
                goto increment;
        }

        cout<<endl<<"Index : "<<k<<endl;
        return 0;

    increment:
        k++;
    }

    cout<<endl<<"Index : NULL"<<endl;

    return 0;
}
