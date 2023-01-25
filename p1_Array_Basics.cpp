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
    cout<<sizeof(A)<<endl; //20 from 4*5elements=20
    cout<<A[1]<<endl;
    printf("%d\n\n", A[2]);

    // Initialize Array
    int B[6] = {2,3,4,6,10};
    cout<<sizeof(B)<<endl;
    cout<<B[1]<<endl;
    printf("%d\n\n", B[2]);
    printf("%d\n\n", B[5]); //zero. whatever it's not assigned is zero


    // Initialize Array without size
    int C[] = {2,3,4,6,10};
    cout<<sizeof(C)<<endl;
    cout<<C[1]<<endl;
    printf("%d\n\n", C[2]);
    printf("%d\n\n", C[5]);

    // for loop
    int D[10]={2,3,5,6,10};
    for(int i=0; i<10; i++){
        cout<<D[i]<<endl;
    }

    for(int x:D) //you can think x in A
    {
        cout<<x<<endl;
    }
    
    return 0;
}