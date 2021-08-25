#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int a, b, c, d, x, x1, x2;

    cout<<"Input a,b,c : ";
    cin>>a>>b>>c;
    cout<<endl;

    d = (b*b-4*a*c);

    if(d<0)
        cout<<"Roots are Imaginary"<<endl;
    else if(d>0)
     {
        x1 = (-b+sqrt(d))/(2*a);
        x2 = (-b-sqrt(d))/(2*a);
        cout<<"Roots are : "<<endl<<endl<<"x1 = "<<x1<<endl<<"x2 = "<<x2<<endl;
     }
    else
     {
        x = -b/(2*a);
        cout<<"Root is :"<<endl<<endl<<"x = "<<x<<endl;
     }

    return 0;
}
