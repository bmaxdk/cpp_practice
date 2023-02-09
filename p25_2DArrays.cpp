/*
3 ways of create 2D Arrays
*/

#include<iostream>

using namespace std;

int main()
{
    // 1. create in stack
    int A[3][4] = {{1,2,3,4},{2,4,6,8},{3,5,7,9}};

    // 2. partially created in heap
    int *B[3];
    B[0] = new int[4];
    B[1] = new int[4];
    B[2] = new int[4];

    // 3. created in heap; Doubled pointer
    int **C;
    C = new int *[3];

    C[0] = new int[4];
    C[1] = new int[4];
    C[2] = new int[4];    

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<4; j++)
        {
            C[i][j]=i+j;
        }
    }
    cout<<"C"<<endl;
    cout<<C[2][3]<<endl;
    return 0;
}