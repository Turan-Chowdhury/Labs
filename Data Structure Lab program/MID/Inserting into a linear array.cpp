#include<iostream>
using namespace std;

int main()
{
    int a[100], n, position, item;

    cout<<"Enter array size : ";
    cin>>n;

    cout<<"Enter "<<n<<" elements :"<<endl;
    for(int i=0; i<n; i++)
        cin>>a[i];

    cout<<"What to insert : ";
    cin>>item;

    cout<<"Enter position : ";
    cin>>position;

    int j = n-1;
    while(j>=position-1)
    {
        a[j+1] = a[j];
        j--;
    }

    a[position-1] = item;
    n++;

    cout<<endl<<"After Inserting :"<<endl;

    for(int i=0; i<n; i++)
        cout<<a[i]<<endl;

    return 0;
}
