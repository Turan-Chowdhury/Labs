#include<iostream>
#include<cstdio>

using namespace std;

int _partition(int a[], int p, int r)
{
    int x = a[r];
    int i = p-1;
    for(int j=p ; j<=r-1; j++)
    {
        if(a[j]<=x)
        {
            i++;
            swap(a[i], a[j]);
        }

    }
    swap(a[i+1], a[r]);
    return i+1;
}

void quicksort(int a[], int p, int r)
{
    if(p<r)
    {
        int q = _partition(a, p, r);
        quicksort(a, p, q-1);
        quicksort(a, q+1, r);
    }
}

int main()
{
    int a[] = {2, 8, 7, 1, 3, 5, 6, 4};

    int len = sizeof(a)/sizeof(a[0]);

    quicksort(a, 0, len-1);

    int i;

    for(i=0; i< len; i++)
        cout << a[i] << " ";




    return 0;
}
