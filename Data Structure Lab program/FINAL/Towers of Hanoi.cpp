#include<iostream>
#include<math.h>
using namespace std;

int Tower(int, char, char, char);

int main()
{
    int n,m;
    char a='A', b='B', c='C';
    cout<<"Input disk number : ";
    cin>>n;
    cout<<endl;
    Tower(n,a,b,c);
    cout<<endl<<"Number of moV is "<<pow(n,2)-1<<endl;
    return 0;
}

int Tower(int x, char a, char b, char c)
{
    if(x!=0)
    {
        Tower(x-1,a,c,b);
        cout<<"Move disk "<<x<<"from "<<a<<" -> "<<c<<endl;
        Tower(x-1,b,a,c);
    }
}
