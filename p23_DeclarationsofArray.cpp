/*
Arrays
*/

#include<iostream>

using namespace std;


int main()
{
    int A[5] = {2,5, 4, 9, 8};

    for(int i=0; i<5; i++)
    {
        printf("%d\n", A[i]);
        //print address use u
        // printf("%u \n", &A[i]);
    }
    printf("%d\n", A[2]);
    printf("%d\n", 2[A]);
    printf("%d\n", *(A+2));

    int *p;
    p=new int[5]; //create array in heap
    p[0] = 5;
    cout<<p[0]<<endl;
    cout<<p[1]<<endl;
    cout<<p[2]<<endl;
    A[6] =300;
    for (int x: A) cout<<x<<endl;// you can't use this for p and index 6 cannot be printed. You cannot update array size like this.
    
    delete []p; // you don't want memory leak problem so always delete array in pointer once not using
}
