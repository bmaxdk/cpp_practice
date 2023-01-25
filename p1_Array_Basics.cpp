#include <iostream>
// #include <stdio.h> //if you want to write C language
using namespace std;
/*
Online GDB is useful without installation.

This problem is simply practicing Array.
In array each integer take 4bytes for integer

To run g++ -std=c++11 p1_Array_Basics.cpp   
*/
int main()
{
    int A[5];
    A[0]=12;
    A[1]=15;
    A[2]=25;
    cout<<sizeof(A)<<endl;
    cout<<A[1]<<endl;
    printf("%d\n\n", A[2]);

    // Initialize Array
    int B[5] = {2,3,4,6,10};
    cout<<sizeof(B)<<endl;
    cout<<B[1]<<endl;
    printf("%d\n\n", B[2]);

    // Initialize Array without size
    int C[] = {2,3,4,6,10};
    cout<<sizeof(C)<<endl;
    cout<<C[1]<<endl;
    printf("%d\n\n", C[2]);
    return 0;
}