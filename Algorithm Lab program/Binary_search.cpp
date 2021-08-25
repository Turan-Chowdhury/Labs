#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[10] = {0,1,2,3,4,5,6,7,8,9}, item, loc;

    for(int i=0; i<10; ++i)
        cout<<a[i]<<" ";
    cout<<endl<<endl;

    cout<<"What to search? ";
    cin>>item;

    int beg = 0, end = 9, mid = (beg+end)/2;

    while(beg <= end){
        if(item<a[mid])
            end = mid-1;
        else if(item == a[mid]){
            cout<<endl<<item<<" found at location "<<mid+1<<endl;
            break;
        }
        else
            beg = mid+1;

        mid = (beg+end)/2;
    }

    if(beg>end)
        cout<<endl<<"Not found! "<<item<<" isn't present in the list"<<endl;

    return 0;
}

