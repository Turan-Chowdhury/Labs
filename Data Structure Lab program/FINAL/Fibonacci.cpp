#include<iostream>
using namespace std;
int fibonacci(int);

int main()
{
    int n, fib;

    l:
    cout<<"Input a positive number : ";
    cin>>n;

    if(n<0)
        goto l;

    cout<<endl<<"Fibonacci("<<n<<") is : ";

    for(int i=0; i<n; i++)
    {
        fib = fibonacci(i);
        cout<<fib<<" ";

    }

    cout<<endl;

    return 0;
}

int fibonacci(int x)
{
    if(x==0 || x==1)
        return 1;
    else
        return (fibonacci(x-1)+fibonacci(x-2));
}

