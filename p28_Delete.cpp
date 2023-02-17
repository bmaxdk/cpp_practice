/*
Array ADT

4. Delete(index)
let Delete(3)

size = 10
Length = 8

*we dont know wheter the element is located in the array or not
Key is shift element to left start from given index

x = A[index];
for (int i=indx; i<Length-1; i++)
{
    A[i] = A[i+1];
}
Length--;
// index should not be beyond the size. Keep it mind for boundary
// Time O(n)
*/



#include<iostream>

using namespace std;