#include<iostream>
using namespace std;

void interchange(int &a, int &b)
{
    int temp;

    temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a[100], n, i;

    cout<<"Enter array size : ";
    cin>>n;

    cout<<"Enter "<<n<<" elements :"<<endl;
    for(int i=0; i<n; i++)
        cin>>a[i];

    for(int p=1; p<=n-1; p++)
    {
        i=0;
        while(i<(n-p))
        {
            if(a[i]>a[i+1])
                interchange(a[i],a[i+1]);

            i++;
        }
    }

    cout<<endl<<"After Sorting :"<<endl;

    for(int j=0; j<n; j++)
        cout<<a[j]<<endl;

    return 0;
}
