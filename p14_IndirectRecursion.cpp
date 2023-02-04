/*
Indirect Recursion
one another circular fashion. Have a cycle

A->B->C->A

                                funA(20)
                                 /   \
                                20   funB(19)
                                      /    \
                                    19     funA(9)
                                           /    \
                                          9     funB(8)
                                                /    \
                                               8      funA(4)
                                                      /   \
                                                     4    funB(3)
                                                          /    \
                                                         3     funA(1)
                                                               /   \
                                                              1    funB(0)
 
*/

#include<iostream>
void funB(int);

void funA(int n)
{
    if(n>0)
    {
        printf("%d ", n);
        funB(n-1);
    }
}

void funB(int n)
{
    if(n>0)
    {
        printf("%d ", n);
        funA(n/2);
    }
}



int main()
{
    funA(20);
    return 0;
}