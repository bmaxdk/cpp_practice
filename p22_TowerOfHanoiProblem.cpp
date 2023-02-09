/*
Tower of Hanoi


TOH(Source, Auxiliary , Destination)

# 1Disk
            1
            A   B   C
Given: TOH(1,A,B,C)

                    1
            A   B   C
1. move disk from A to C using B
/..................................................................../
# 2Disk
            1
            2
            A   B   C
Given: TOH(2,A,B,C) //source A, destination C, an auxiliary to B
            
            2   1
            A   B   C
1. TOH(1, A,C,B)

                1   2
            A   B   C
2. move disk from A to C using B


                    1
                    2
            A   B   C
3. TOH(1,B,A,C)


/..................................................................../
# 3Disk

            1
            2
            3
            A   B   C

Given: TOH(3, A, B, C)


                1
            3   2
            A   B   C
1. TOH(2, A, C, B//From prebous step in 2 Disk problem we know how 1, 2 can move to B which is recursive


                1
                2   3
            A   B   C
2. Move disk from A to C using B

                    1
                    2
                    3
            A   B   C
3. TOH(2, B, A, C)


/..................................................................../
# nDisk

            1
            2
            .
            .
            n
            A   B   C

Given: TOH(n, A, B, C)

                1
                2
                .
                .
            n  n-1
            A   B   C
1. TOH(n-1, A, C, B)//From prebous step in 2 Disk problem we know how 1, 2 can move to B which is recursive


                1
                2
                .
                .
               n-1  n
            A   B   C
2. Move disk from A to C using B

                    1
                    2
                    .
                    .
                    n
            A   B   C
3. TOH(n-1, B, A, C)

/..................................................................../
Let n =3, A=1, B=2, C=3
                                     (3, 1, 2, 3)
                                  /       |        \
                          (2,1,3,2)     1 to 3      (2,2,1,3)
                         /   |   \                    /    |    \
               (1,1,2,3)  1 to 2  (1,3,1,2)   (1,2,3,1)  2 to 1  (1,1,2,3)
               /    |   \         /    |   \      |                  |
      (0,1,3,2)  1 to 3  (0,) (0,)  3 to 2 (0,)  2to1              1to3


step

Let n =3, A=1, B=2, C=3
                                    1(3, 1, 2, 3)
                                  /       |        \
                        2(2,1,3,2)     1 to 3         9(2,2,1,3)
                         /   |   \                    /    |      \
               3(1,1,2,3)  1to2 6(1,3,1,2)     10(1,2,3,1)  2to3  13(1,1,2,3)
               /    |   \         /   |   \        /   |  \             /  |   \
      4(0,1,3,2)  1to3 5(0,) 7(0,)  3to2 8(0,) 11(0,) 2to1 12(0,)  14(0,) 1to3 15(0,)

after step 4
(1,3)
after 5th step
(1,2)
after 7th step
(3,2)
after 8th step
(1,3)
after 11th step
(2,1)
after 12th step
(2,3)
after 14th step
(1,3)

this is in order traverse

This is making 15 calls when n=3
when n == 2, 7 calls

1+2+2^2 + 2^4 = 2^4 -1


2^n-1
Time O(n^2)



moves
(1,3)
(1,2)
(3,2)
(1,3)
(2,1)
(2,3)
(1,3)

*/

#include<iostream>

using namespace std;


void TOH(int n, int A, int B, int C)
{
    if(n>0)
    {
        TOH(n-1, A, C, B);
        printf("from %d to %d\n", A, C);
        TOH(n-1, B, A, C);
    }
}
int main()
{
    // int n, A, B, C;
    // TOH(n, A, B, C);
    TOH(3,1,2,3);
    return 0;
}