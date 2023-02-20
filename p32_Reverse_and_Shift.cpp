/*
Reverse

for(i=0, j=Length-1; i<j; i++, j--)
{
    //swap(B[j],A[i]);
    temp = A[i];
    A[i] = A[j];
    A[j] = temp
}

left shift {6,3,8,5,9} -> {3,8,5,9,0}
left rotate {6,3,8,5,9} -> {3,8,5,9,6}
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

int main()
{
    Array arr = {{2,3,4,5,6}, 10, 5};
    Reverse(&arr);
    display(arr);
    return 0;
}
