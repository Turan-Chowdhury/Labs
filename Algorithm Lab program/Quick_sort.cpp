#include<bits/stdc++.h>
using namespace std;

int a[15] = {0,5,4,9,8,2,7,0,3,1,7,0,0,0,0};

void exchange(int *a, int *b){
    int t;
    t = *a;
    *a = *b;
    *b = t;
}

int PARTITION(int p, int r)
{
    int x = a[r];
    int i = p-1;

    for(int j=p; j<r; ++j)
        if(a[j]<=x){
            ++i;
            exchange(&a[i],&a[j]);
        }

    exchange(&a[i+1],&a[r]);

    return (i+1);
}

void quick_sort(int p, int r)
{
    if(p<r){
        int q = PARTITION(p,r);
        quick_sort(p,q-1);
        quick_sort(q+1,r);
    }
}

int main()
{
    for(int i=1; i<=10; ++i)
        cout<<a[i]<<" ";
    cout<<endl<<endl;

    quick_sort(1,10);

    for(int i=1; i<=10; ++i)
        cout<<a[i]<<" ";
    cout<<endl;

    return 0;
}

