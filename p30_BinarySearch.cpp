/*
Array ADT

Binary Search in sorted array
*low
*high
*mid = floor((low+high)/2)

// Iter version
Algorithm BinSearch(l, h, key)
{
    while(l<=h)
    {
        mid = floor((l+h)/2);
        if (key ==A[mid])
        {
            return mid;
        }
        else if(key <A[mid])
            h = mid-1;
        else
            l = mid+1;
    }
    return -1;
}

// Recursive Version
Algorithm RBinarySearch(l,h, key)
{
    if(l<=h)
    {
        mid=floor((l+h)/2);
        if(key==A[mid])
            return mid;
        else if(key<A[mid])
            return RBinarySearch(l, mid-1, key);
        else
            return RBinarySearch(mid+1, h, key);
        
    }
    return -1;
}
// It is tail reculsive

* itrative is better since this recursive is keep stack
*/

#include<iostream>

using namespace std;


typedef struct Array
{
    int A[10];
    int size;
    int length;
} Array;

void display(Array arr)
{
    printf("\nElements are \n");
    for(int i=0; i<arr.length; i++)
        printf("%d ", arr.A[i]);
    printf("\n");

}


void swap(int *a, int *b)
{
    int temp;
    temp=*a;
    *a = *b;
    *b = temp;
}

int BinarySearch(Array arr, int key)
{
    int l, mid, h;
    l=0;
    h=arr.length-1;
    while(l<=h)
    {
        mid=(l+h)/2;
        if(key == arr.A[mid])
            return mid;
        else if(key<arr.A[mid])
            h=mid-1;
        else
            l=mid+1;
    }
    return -1;
}

int RBinarySearch(int a[], int l, int h, int key)
{
    int mid;
    if(l<=h)
    {
        mid = (l+h)/2;
        if(key == a[mid])
            return mid;
        else if(key<a[mid])
            return RBinarySearch(a, l, mid-1, key);
        else
            return RBinarySearch(a, mid+1, h, key);
    }
    return -1;
}

int main()
{
    Array arr = {{2,3,4,5,6}, 10, 5};
    display(arr);

    printf("%d\n", BinarySearch(arr, 5));
    printf("%d\n", RBinarySearch(arr.A, 0, arr.length-1, 5));
    return 0;
    //
}
