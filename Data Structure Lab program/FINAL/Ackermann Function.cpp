#include<iostream>
using namespace std;

int A(int m, int n)
{
    if(m==0)
        return (n+1);
    else if(m!=0 && n==0)
        return A(m-1,1);
    else if(m!=0 && n!=0)
        return A(m-1,A(m,n-1));
}

int main()
{
    int m, n, result;

    cout<<" Input m : ";
    cin>>m;
    cout<<" Input n : ";
    cin>>n;

    result = A(m,n);

    cout<<endl<<" A("<<m<<","<<n<<") = "<<result<<endl;

    return 0;
}
