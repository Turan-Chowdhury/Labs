#include<iostream>
using namespace std;

int main()
{
    int a[100], n, item, position;

    cout<<"Enter array size : ";
    cin>>n;

    cout<<"Enter "<<n<<" elements :"<<endl;
    for(int i=0; i<n; i++)
        cin>>a[i];

    cout<<"Enter position You wanna delete : ";
    cin>>position;

    item = a[position-1];

    for(int i=position-1; i<=n-2; i++)
        a[i] = a[i+1];

    n--;

    cout<<endl<<"After Deleting : "<<endl;
    for(int i=0; i<n; i++)
        cout<<a[i]<<endl;

    return 0;
}
