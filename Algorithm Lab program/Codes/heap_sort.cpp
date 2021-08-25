 #include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;

int result[100];

int parent(int i)
{
    return floor(i/2);
}

int left(int i)
{
    return 2*i;
}

int right(int i)
{
    return 2*i+1;
}

void max_heapify(int a[], int i, int len)
{
    int largest;
    int l = left(i);
    int r = right(i);


    if(l<= len && a[l]>a[i])
        largest = l;
    else largest = i;

    if(r<= len && a[r]>a[largest])
        largest = r;
    if(largest != i)
    {
        swap(a[i], a[largest]);
        max_heapify(a,largest, len);
    }
}

void build_max_heap(int a[], int len)
{
    for(int i=floor(len/2); i>=1; i--)
        max_heapify(a, i, len);
}

void heapsort(int a[], int len)
{
    build_max_heap(a, len);
    for(int i=len; i>=2; i--)
    {
        result[i] = a[1];
        swap(a[1], a[i]);
        len--;
        max_heapify(a, 1, len);
    }
}

int main()
{
    int a[] = {0,16, 14, 10,8,7,9,3,2,4,1}; // zero index not used in the heap-sort algo, so it must have a unnecessary value

    int len = (sizeof(a)/sizeof(a[0]))-1; // must subtract one, because of c array index system

    heapsort(a, len);

    for(int i=1; i<len; i++)
        cout << a[i] << " ";




    return 0;
}
