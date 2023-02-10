/*
Arrays in Compilers
Type A[d1][d2][d3][d4]

Row-major (left to right)
Addr(A[i1][i2][i3][i4]) = L0 + (i1*d2*d3*d4 + i2*d3*d4 + i3*d4 + i4) * w
        n               n
= L0 + sum  [ip * proudctPI dq] * w
        p=1         q = p+n

How many multiplication?
nD -> n-1 + n-2 + ....2+1 = n(n-1)/2 = O(n^2)

How to reduce it?
i1*d2*d3*d4 + i2*d3*d4 + i3*d4 + i4
i4 + d4*[i3 + d3[i2 + d2[i1]]]
O(n)
This rule is Hoiner's Rule


Col-major (right to left)
Addr(A[i1][i2][i3][i4]) = L0 + (i4*d1*d2*d3 + i3*d1*d2 + i2*d1 + i1) * w
*/

#include<iostream>

using namespace std;

//sizeof(int) =4
int main()
{
    unsigned int x[4][3] = {{1,2,3}, {4,5,6}, {7,8,9}, {10,11,12}};
    printf("%u, %u, %u\n", x+3, *(x+3), *(x+2)+3);
    return 0;
}

/*
L0 = 2000
1,0  |2,4  |3,8
4,12 |5,16 |6,20
7,24 |8,28 |9,32
10,36|11,40|12,44

how to access 8?
*(*(x+2)+1) == 8
how about addres??
(*(x+2)+1) ==2028

so
x+3 = 2036
*(x+3) = 2036
*(x+2)+3 = 2036
*/