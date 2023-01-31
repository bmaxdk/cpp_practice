/*

Array can be pass only by address.
*/

#include<iostream>

using namespace std;

void printfun(int A[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<A[i]<<endl;
    }
    A[0]=33; //It will modified since array only can pass by address
}

void printfun2(int *A, int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<A[i]<<endl;
    }
}

int * fun(int n)
{
    int *p;
    p = new int[5];
    return p;
}

int main()
{

    int A[5] = {1,2,3,4,5};
    printfun(A, 5);
    printfun2(A,5);

    int *B;
    B = fun(5);
    B[0] = 3;
    B[1] = 4;
    B[2] = 5;
    B[3] = 6;
    B[4] = 7;

    printfun2(B, 5);

    printfun(B, 5);
    delete[] B;



    return 0;
}