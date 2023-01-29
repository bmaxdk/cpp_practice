#include<iostream>
/*
Domonstration for parameter passing
*/
using namespace std;

// * call by reference
void swap1(int &x, int &y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
}

// call by adddress
void swap2(int *x, int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

int main()
{
    int x,y;
    x=1;
    y=8;
    swap1(x,y);
    printf("Swap1\nx=%d\ny=%d\n", x, y);
    swap2(&x,&y);
    printf("Swap2\nx=%d\ny=%d\n", x, y);

}