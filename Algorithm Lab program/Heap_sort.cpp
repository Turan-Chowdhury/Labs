#include<bits/stdc++.h>
using namespace std;

int a[15] = {0,5,4,9,8,2,7,0,3,1,7};
int heap_size = 10;

void exchange(int *a, int *b){
    int t;
    t = *a;
    *a = *b;
    *b = t;
}

void max_heapify(int i)
{
    int l = i*2, r = i*2+1, largest;

    if(l<=heap_size && a[l]>a[i])
        largest = l;
    else
        largest = i;

    if(r<=heap_size && a[r]>a[largest])
        largest = r;

    if(largest != i){
        exchange(&a[i],&a[largest]);
        max_heapify(largest);
    }

}

void build_max_heap()
{
    for(int i=floor(heap_size/2); i>=1; --i)
        max_heapify(i);
}

void heap_sort()
{
    build_max_heap();

    for(int i=10; i>=2; --i){
        exchange(&a[1],&a[i]);
        heap_size--;
        max_heapify(1);
    }
}

int main()
{
    for(int i=1; i<=10; ++i)
        cout<<a[i]<<" ";
    cout<<endl<<endl;

    heap_sort();

    for(int i=1; i<=10; ++i)
        cout<<a[i]<<" ";
    cout<<endl;

    return 0;
}
