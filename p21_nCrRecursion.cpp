/*
Combination Formula(Selection Formula)  nCr = n!/(r!(n-r)!)
If there is set of objects then in how many ways we can select the subset of those objects

ex)
set {A,B,C,D,E} is given and by selecting 3 combination, how many we can select?



ABC
ABD
ACB - This is wrong. Same selection in the changin of position not to give a new selection. This case is called permutation.

In nCr, given n, we can only select 0 to n of r.

ex)
5C(0-5): 5C0, 5C1, 5C2, 5C3, 5C4, 5C5


int C(int n, int r)
{
    int f1, f2, f3;
    f1 = fact(n); // n
    f2 = fact(r); // n
    f3 = fact(n-r); //n

    return f1/(f2*f3); //1

    //total 3n -> O(n) times
}


* Pascall Triangle shows that the values of nCr can be obtained by performaing addition recursivly

                                            1 0C0
                                          /       \
                                         1 1C0   1 1C1
                                        /     \  /    \
                                       1 2C0   2 2C1  1 2C2
                                      /    \  /   \  /   \
                                    1 3C0   3 3C1  3 3C2  1 3C3 
                                             .
                                             .
                                             .

/////////////////////////////////////////////////////////////////////////
Assume 3C2 as nCr
                                           1 (n-3)C(r-2)
                                          /              \
                                         1 1C0       1 (n-2)C(r-1)
                                        /     \      /         \
                                       1 2C0   2 (n-1)C(r-1)  1 (n-1)Cr
                                      /    \  /      \         /     \
                                    1 3C0   3 3C1       3 nCr         1 3C3 
*/

#include<iostream>

using namespace std;

int c(int n, int r)
{
    // Check condition when n==r or r==0 we see that is equals to 1
    if((r==0)||(n==r))
    {
        return 1;
    }
    return c(n-1,r-1)+c(n-1,r);
}

int main()
{
    cout<<c(4,2)<<endl;
    return 0;
}
