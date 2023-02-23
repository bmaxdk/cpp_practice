/*
Array ADT

Set Operation:
* Union
* Intersection
* Difference
* Set Membership


# Unition
ex1. not sorted
A = {3, 5, 10, 4, 6} m
B = {12, 4, 7, 2, 5} n


1. First add/copy fist array
C = {3, 5, 10, 4, 6,_,_,_,_,_}
//m element time

2. search and add each element of B.
// taking m*n time for searching

3. total m+m*n searching
so it is order of O(n^2) slow..


ex2. sorted
A = {3,4,5,6,10} m elements
     i

B = {2,4,5,7,12} n elements
     j
1. use merge procedule
evety element i, j check smaller and increment the index i or j that was used for copy

since it is merge process, it is O(m+n) ~ O(n)


# Intersection
ex1. not sorted
A = {3, 5, 10, 4, 6} m
B = {12, 4, 7, 2, 5} n

1. Start to chcking element A and B for each index
O(n^2)

ex2. sorted
A = {3,4,5,6,10} m elements
     i

B = {2,4,5,7,12} n elements
     j

1. Use same process Merging!

# Difference
ex1. not sorted
A = {3, 5, 10, 4, 6} m
B = {12, 4, 7, 2, 5} n

1. O(n^2)

ex2. sorted
A = {3,4,5,6,10} m elements
     i

B = {2,4,5,7,12} n elements
     j

A-B

1. We can again same process merging
If A element is small add to C array.
A = {3,4,5,6,10} m elements
     i  

B = {2,4,5,7,12} n elements
       j

C = {3}

//
A = {3,4,5,6,10} m elements
       i

B = {2,4,5,7,12} n elements
       j

C = {3, }

//
A = {3,4,5,6,10} m elements
         i

B = {2,4,5,7,12} n elements
         j

C = {3, }

//
A = {3,4,5,6,10} m elements
           i

B = {2,4,5,7,12} n elements
           j

C = {3, 6}

//
A = {3,4,5,6,10} m elements
              i

B = {2,4,5,7,12} n elements
              j

C = {3, 6, 12}

* we are only copying from A

O(n+m) ~ O(n)



*/