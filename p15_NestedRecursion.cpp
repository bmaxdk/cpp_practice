/*
Nested Recursion
parameter it self is parameter. Recursion inside of recursion.


        fun(95)
         |
        fun(fun(95+11))
         |
         fun(96)
         |
        fun(fun(107))
         |
         fun(97)
         |
        fun(fun(108))
         |
         fun(98)
         |
        fun(fun(109))
         |
         fun(99)
         |
        fun(fun(110))
         |
         fun(100)
         |
        fun(fun(111))
         |
         fun(101)
         |
         91
        
*/
#include<iostream>
using namespace std;
int fun(int n)
{
    if(n>100)
        return n-10;
    return(fun(fun(n+11)));
}

int main()
{
    cout<<fun(95)<<endl;
    return 0;
}
