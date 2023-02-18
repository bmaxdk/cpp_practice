/*
Array ADT::Linear Search

Given:
Size = 10
Length = 10
A = {8,9,4,7,6,3,10,5,14,1}
     0,1,2,3,4,5,6, 7,8 ,9


key = 5 //what we looking for where located in index 7 //search is successful
key = 12 // Search is unsuccessful

psudocode
// Start to compare each element

for(i=0; i<Length; i++)
{
    if(key == A[i])
        return i;
}
return -1;


//Time O(n)



# Improving Linear Search
1. Transposition: Whenver you repeatly search swap the previous one
for(i=0; i<Length; i++)
{
    if(key==A[i])
    {
        swap(A[i], A[i-1]);
        return i-1;
    }
}

2. Move to Front/Head: Swap with first element which improve linear search
for(i=0; i<Length; i++)
{
    if(ket==A[i])
    {
        swap(A[i], A[0]);
        return 0;
    }
}

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


int LinearSearch(Array arr, int key) //Not using addres since we only searching for the value
{
    for(int i=0; i<arr.length; i++)
    {
        if(key == arr.A[i])
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    Array arr = {{2,3,4,5,6}, 10, 5};

    // append(&arr, 10);
    // insert(&arr, 3, 20);
    // insert(&arr, -3, 20);
    // // Delete
    // cout<<Delete(&arr, 3)<<endl;

    printf("%d\n", LinearSearch(arr, 6));

    display(arr);

    return 0;
}
