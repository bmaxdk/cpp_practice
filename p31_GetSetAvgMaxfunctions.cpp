/*
1. get(index)
if (index>0 && index<Length)
{
    return A[index]
}

2. set(index, x)
if (index>0 && index<Length)
{
    A[index]=x;
}

3. max()
// For unsorted list, need to check all
max = A[0];
for (i=1; i<Length; i++)
{
    if (max < A[i])
        max = A[i];
}
return max;

4. sum()
total = 0;
for(i=0; i<Length; i++)
{
    total += A[i];
}
return total;
Time O(n)



5. Recursive sum

            0                   n<0
sum(A,n) =  
            sum(A, n-1) + A[n]  n>=0

int sum(A,n)
{
    if(n<0)
        return 0;
    else
        return sum(A, n-1) + A[n];
}
Time O(n)

6. Recursive avg

int avg(A,n)
{
    if(n<0)
        return 0;
    else
        return (avg(A, n-1) + A[n])/n;
}
Time O(n)


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

int Get(Array arr, int index)
{
    if(index>=0 && index<arr.length)
        return arr.A[index];
    return -1;
}

void Set(Array *arr, int index, int x)
{
    if(index>=0 && index<arr->length)
        arr->A[index] = x;
}

int Max(Array arr)
{
    int max = arr.A[0];
    for(int i=0; i<arr.length; i++)
    {
        if(arr.A[i] > max)
        {
            max = arr.A[i];
        }
    }
    return max;
}

int Sum(Array arr)
{
    int s=0;
    for(int i=0; i<arr.length; i++)
        s += arr.A[i];
    return s;
}

int Avg(Array arr)
{
    return (float)Sum(arr)/arr.length;
}

int main()
{
    Array arr = {{2,3,4,5,6}, 10, 5};

    cout<<Get(arr, 3)<<endl;
    Set(&arr,3,100);
    display(arr);
    cout<<Max(arr)<<endl;
    printf("Sum = %d\nAvg = %f\n", Sum(arr), Avg(arr));

    return 0;
}
