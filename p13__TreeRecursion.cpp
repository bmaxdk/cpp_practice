#include<iostream>
/*
This is study using Tree Recursion.
This concepts are also can be used in BFS or DFS.

                  fun(3)
               /   |     \
              3   fun(2)  fun(2)
                /  |      |  \         \
              2   fun(1)  2   fun(1)      fun(1)
                /  |   \       | \  \      | \  \  
               1 fun(0) fun(0) 1 f(0)f(0)  1 f(0)f(0)
*/
void fun(int n)
{
    if(n>0)
    {
        printf("%d ", n);
        fun(n-1);
        fun(n-1);
    }
}

int main()
{
    fun(3);
    return 0;
}