/*
3 ways of create 2D Arrays



for mxn matrix
L0=initial memory address
w= size of data type

Row major formula for 2D arrays:
A[i][j] = L0 +[i*n+j]*w

if start form index 1 then
A[i][j] = L0 +[(i-1)*n+(j-1)]*w


Column Major formula for 2D arrays:
A[i][j] = L0 +[j*m+i]*w
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
            C[i][j]=A[i][j];
        }
    }
    cout<<"C"<<endl;
    cout<<C[2][3]<<endl;
    return 0;
}