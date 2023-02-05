/*
Fibonacci Series

            0                   n=0
fib(n) =    1                   n=1
         fib(n-2)+fib(n-1)      n>1

*/

#include<iostream>
int rFS(int n)
{
    if(n<=1)
        return n;
    return rFS(n-1)+rFS(n-2);
}

int iFS(int n)
{
    if(n<=1)
        return n;
    int * r;
    r = new int[n];
    r[0]=0;
    r[1]=1;
    for(int i=2; i<=n; i++)
    {
        r[i] = r[i-1]+r[i-2];
    }
    return r[n];
}

int iFS2(int n)
{
    if(n<=1)
        return n;
    int r, n0 = 0, n1 = 1;
    for (int i=2; i<=n; i++)
    {
        r = n0+n1;
        n0 = n1;
        n1 = r;
    }
    return r;
}
using namespace std;

int main()
{
    cout<<rFS(7)<<endl;
    cout<<iFS(7)<<endl;
    cout<<iFS2(7)<<endl;
    return 0;
}