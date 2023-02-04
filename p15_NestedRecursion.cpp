/*
Nested Recursion

parameter it self is parameter. Recursion inside of recursion.

Nested recursion is used when a function calls itself within another function that also calls the first function. 
This type of recursion is used in algorithms where there are multiple, smaller problems that can be solved by breaking down the larger problem into smaller subproblems.

Nested recursion is used when a problem can be divided into two or more subproblems that are similar in nature, but with a smaller input size. 
In this case, the subproblems are solved recursively and the solutions are combined to solve the original problem.

Examples of problems that can be solved using nested recursion include the calculation of the Fibonacci sequence, the calculation of factorials, and the generation of permutations and combinations.

It is important to note that nested recursion can lead to stack overflow errors if the recursion depth is too deep. 
Therefore, it is important to carefully analyze the problem and determine if nested recursion is the best solution, or if another approach, such as iterative or dynamic programming, would be more appropriate.

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
