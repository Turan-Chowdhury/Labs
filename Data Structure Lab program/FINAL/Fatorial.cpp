#include<iostream>
using namespace std;
int fact(int);

int main()
{
    int n, result;

    l:
    cout<<"Input a positive number : ";
    cin>>n;

    if(n<0)
        goto l;

    result = fact(n);
    cout<<endl<<"Factorial of "<<n<<" is : "<<result<<endl;

    return 0;
}

int fact(int x)
{
    if(x==0)
        return 1;
    else
        return (x*fact(x-1));
}
