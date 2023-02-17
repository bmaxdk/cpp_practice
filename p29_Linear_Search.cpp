/*
Array ADT::Linear Search

Given:
Size = 10
Length = 10
A = {8,9,4,7,6,3,10,5,14,1}
     0,1,2,3,4,5,6, 7,8 ,9


key = 5 //what we looking for where located in index 7 //search is successful
key = 12 // Search is unsuccessful

psudocode
// Start to compare each element

for(i=0; i<Length; i++)
{
    if(key == A[i])
        return i;
}
return -1;


//Time O(n)


*/