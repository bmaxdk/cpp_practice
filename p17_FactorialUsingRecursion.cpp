/*
Factorial of a Number
n! = 1*2*3*4*...*n
n! = 1*2*3*...(n-1)*n
n! = (n-1)! * n

        1            n=0, n=1
n! = 
      (n-1)! * n     n>0
*/

#include<iostream>
using namespace std;

int rNfactorial(int n)
{
    // if((0==n)||(0==1))
    if (n==0)
        return 1;
    return rNfactorial(n-1) * n;
}

int iNfactorial(int n)
{
    int r=1;
    for (int i=2; i<=n; i++)
        r*=i;
    return r;
}

int main()
{
    cout<<rNfactorial(4)<<endl;

    cout<<iNfactorial(4)<<endl;
}