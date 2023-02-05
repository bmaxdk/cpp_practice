/*
Exponent (m)^n

m^n = m*m*...for n times

pow(m,n) = (m*m*...for n-1 times) * m
pow(m,n) = pow(m,n-1) * m

             1              n=0
pow(m,n) = 
            pow(m,n-1) * m  n>0


*/

#include<iostream>
#include<math.h>
using namespace std;


int rExponent(int m, int n)
{
    if (n==0)
        return 1;
    return rExponent(m, n-1) * m;
}

int iExponent(int m, int n)
{
    if(n==0)
        return 1;

    int r=m;
    for (int i=2; i<=n; i++)
    {
        r*=m;
    }
    return r;
}

int main()
{
    cout<<rExponent(4,8)<<endl;
    cout<<iExponent(4,8)<<endl;
    cout<<pow(4,8)<<endl;

    return 0;
}