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



# Improving Linear Search
1. Transposition: Whenver you repeatly search swap the previous one
for(i=0; i<Length; i++)
{
    if(key==A[i])
    {
        swap(A[i], A[i-1]);
        return i-1;
    }
}

2. Move to Front/Head: Swap with first element which improve linear search
for(i=0; i<Length; i++)
{
    if(ket==A[i])
    {
        swap(A[i], A[0]);
        return 0;
    }
}

*/