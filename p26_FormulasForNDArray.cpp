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

