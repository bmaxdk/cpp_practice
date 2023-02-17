/*
Array ADT

4. Delete(index)
let Delete(3)

size = 10
Length = 8

*we dont know wheter the element is located in the array or not
Key is shift element to left start from given index

x = A[index];
for (int i=indx; i<Length-1; i++)
{
    A[i] = A[i+1];
}
Length--;
// index should not be beyond the size. Keep it mind for boundary
// Time O(n)
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

void append(Array *arr, int x)
{
    // Check Condition
    if(arr->length < arr->size)
        arr->A[arr->length++] = x;
}


void insert(Array *arr, int index, int x)
{
    if(index>=0 && arr->length < arr->size)
    {
        int cur_index = arr->size;
        for(cur_index; index < cur_index; cur_index--)
        {
            arr->A[cur_index] = arr->A[cur_index-1];
        }
        arr->A[index] = x;
        arr->length++;
    }
}

int Delete(Array *arr, int index)
{
    int x=0;
    if(index>=0 && index < arr->length)
    {
        x=arr->A[index];
        for(int i=index; i < arr->length-1; i++)
            arr->A[i] = arr->A[i+1];
        arr->length--;
        return x;
    }
    return 0;
}

int main()
{
    Array arr = {{2,3,4,5,6}, 10, 5};

    // append
    append(&arr, 10);
    insert(&arr, 3, 20);
    insert(&arr, -3, 20);
    Delete(&arr, 3);
    display(arr);

    return 0;
}
