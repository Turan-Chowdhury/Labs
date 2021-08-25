#include<iostream>
#include<cstdio>
#include<cmath>

/*

        NOT COMPLETE

*/

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

int heap_maximum(int a[])
{
    return a[1];
}

int heap_extract_max(int a[], int len)
{
    if(len<1)
        cout << "Heap undeflow\n";
    int max = a[1];
    a[1] = a[len];
    len--;
    max_heapify(a, 1, len);
    return max;
}

void heap_increase_key(int a[], int i, int key)
{
    if(key < a[i])
        cout << "New key is smaller than current key\n";
    a[i] = key;
    while(i>1 && a[parent(i)] < a[i])
    {
        swap(a[i], a[parent(i)]);
        i = parent(i);
    }
}

void max_heap_insert(int a[], int key, int len)
{
    len++;
    a[len]=-(2<<30);
    heap_increase_key(a, len, key);
}

int main()
{
    int a[] = {0,16, 14, 10,8,7,9,3,2,4,1}; // zero index not used in the heap-sort algo, so it must have a unnecessary value

    int len = (sizeof(a)/sizeof(a[0]))-1; // must subtract one, because of c array index system

    //heapsort(a, len);

    build_max_heap(a, len);

    for(int i=1; i<len; i++)
        cout << a[i] << " ";

    cout << "Max heap: " << heap_extract_max(a, len);

    max_heap_insert(a, 31, len);

    cout << endl;

    for(int i=1; i<len; i++)
        cout << a[i] << " ";





    return 0;
}
