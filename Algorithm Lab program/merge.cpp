#include<bits/stdc++.h>
using namespace std;

const int INF = 10000;

int a[15] = {0,5,4,9,8,2,7,0,3,1,7,0,0,0,0};

void merge_fun(int p, int q, int r)
{
    int n1 = q-p+1;
    int n2 = r-q;

    int L[n1+5], R[n2+5];

    for(int i=1; i<=n1; ++i)
        L[i] = a[p+i-1];

    for(int i=1; i<=n2; ++i)
        R[i] = a[q+i];

    L[n1+1] = INF;
    R[n2+1] = INF;

    int i=1, j=1;

    for(int k=p; k<=r; ++k){
        if(L[i]<=R[j]){
            a[k] = L[i];
            ++i;
        }
        else{
            a[k] = R[j];
            ++j;
        }
    }
}

void merge_sort(int p, int r)
{
    if(p<r){
        int q = (p+r)/2;
        merge_sort(p,q);
        merge_sort(q+1,r);
        merge_fun(p,q,r);
    }
}

int main()
{
    for(int i=1; i<=10; ++i)
        cout<<a[i]<<" ";
    cout<<endl<<endl;

    merge_sort(1,10);

    for(int i=1; i<=10; ++i)
        cout<<a[i]<<" ";
    cout<<endl;

    return 0;
}
