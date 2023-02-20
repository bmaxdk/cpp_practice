/*
Check if Array is Sorted


shift
let current array:
{4,8,13,16,20,25,28,33}
Insert 18
x=18 
i=Length-1;
while(x<A[i])
{
    A[i+1] = A[i];
    i--;
}
A[i+1] = x



2. sorted chck

Algorithm isSorted(A,n)
{
    for(i=0;i<n-1;i++)
    {
        if(A[i]>A[i+1])
            return false;
    }
    return true
}

3. -re on left side
i=0;
j=Length-1;

while(i<j)
{
    while(A[i]<0){i++;}
    while(A[j]>=0){j--;}
    if(i<j)
    {
        swap(A[i],A[j])
    }
}
O(n)

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

void Reverse(Array *arr)
{
    for(int i=0, j=arr->length-1; i<=j; i++, j--)
        swap(&arr->A[i], &arr->A[j]);
}

void InsertSort(Array *arr, int x)
{
    int i = arr->length-1;
    if(arr->length==arr->size)
        return;
    while(i>=0 && arr->A[i]>x)
    {
        arr->A[i+1] = arr->A[i];
        i--;
    }
    arr->A[i+1]=x;
    arr->length++;
}

int isSorted(Array arr)
{
    for(int i=0;i<arr.length-1;i++)
    {
        if(arr.A[i]>arr.A[i+1])
            return 0;
    }
    return 1;
}

void REarrange(Array *arr)
{
    int i,j;
    i=0;
    j=arr->length-1;

    while (i<j)
    {
        while(arr->A[i]<0) i++;
        while(arr->A[j]>=0) j--;
        if(i<j)
            swap(&arr->A[i], &arr->A[j]);
    }
    
}

int main()
{
    Array arr = {{2,-3,4,-5,6}, 10, 5};
    // InsertSort(&arr,20);
    REarrange(&arr);
    display(arr);
    cout<<isSorted(arr)<<endl;
    return 0;
}
