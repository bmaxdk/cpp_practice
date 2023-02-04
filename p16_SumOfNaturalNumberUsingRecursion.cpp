/*
Sum of First n Natural Numbers

The key here is understand how you decide large part and smaller part.

EX.
1 + 2 + 3 + 4 + 5 + 6 + 7
1 + 2 + 3 + ...+ n

This is basically
sum(n) = 1 + 2 + 3 + ... + (n-1) + n
sum(n) = sum(n-1) + n 
Here you see how you break down to use in recursion method to solve.

Make sure you focus large and smaller part!


                0       n=0
sum(n) = 
          sum(n-1)+n    n>0


*/

#include<iostream>

using namespace std;

int rsum(int n)
{
    if (n==0)
        return 0;
    return rsum(n-1)+n;
}

int csum(int n)
{
    return n*(n+1)/2;
}

int isum(int n)
{
    int i,s=0;
    for(i=1; i<=n; i++)
    {
        s+=i;
    }
    return s;
}
int main()
{
    // For best case use formula instead of using recursion
    cout<< csum(10)<<endl; //time O(1)  space O(1)

    cout<< isum(10)<<endl; // time O(n) space O(1)
    cout<< rsum(10)<<endl; //  time O(n) space O(n)
    return 0;
}