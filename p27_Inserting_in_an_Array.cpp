/*
Array ADT

size 10
Length = 6
*/

// 1.Display
// printf("%d", A[]);
//    for (int i=0; i<length; i++)
//        printf("%d", A[i]);

// 2. Add(x)/Append(x)
// A[Length] = x;
// Length++;
// Time O(1);

// 3. Insert(index,x)
// Insert(4,15)
// you need to move if there is element in 4th element before insert
// for (int i=Length; i>index; i--)
//     A[i] = A[i-1]
// A[index] = x;
// Length++;
// You need to check maximum index size all the time so set amount
// Time max O(n) and min O(1)



#include <iostream>

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

int main()
{
    Array arr = {{2,3,4,5,6}, 10, 5};

    // append
    append(&arr, 10);
    insert(&arr, 3, 20);
    insert(&arr, -3, 20);
    display(arr);

    return 0;
}
