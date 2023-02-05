/*
Fibonacci Series

            0                   n=0
fib(n) =    1                   n=1
         fib(n-2)+fib(n-1)      n>1

*/

#include<iostream>

using namespace std;

// Excessive Recurssion(duplicate call)
int rFS(int n)
{
    if(n<=1)
        return n;
    return rFS(n-1)+rFS(n-2);
} // time O(2^n)


//Memoization
// int m[20];
int * m = new int [20];

int rFS2(int n)
{

    if(n<=1)
    {
        m[n]=n;
        return n;
    }

    if (m[n-2] == -1)
        m[n-2] = rFS2(n-2);

    if (m[n-1] == -1)
        m[n-1] = rFS2(n-1);
    

    return m[n-2]+m[n-1];

} // time O(n)



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
} //O(n), O(n)

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
} //O(1), O(n)
using namespace std;

int main()
{
    // for(int x: m)
    // {
    //     cout<<x<<endl;
    //     // x =-1;
    // }
    for (int i; i<=20; i++)
    {
        m[i]= -1;
    }
    cout<<rFS(7)<<endl;
    cout<<rFS2(7)<<endl;
    cout<<iFS(7)<<endl;
    cout<<iFS2(7)<<endl;


    return 0;
}