/*
Pointers
* Why Pointers
* Declaration
* Initialization
* Dereferencing
* Dynamic Allocation

Pointer is address variable. Indirectly accesing data.
There are always three portion of memory
HEAP
STACK
CODE SECTION - main

code section and stack both directly access. How? by accessing heap memory.

Pointer is used for 
    * Accessing Heap
    * Accessing resourcing
    * Parameter passing

Inside main function:
data variable int a = 10;
Address variable int *p; // Declaration. point variable
p=&a; //initializing. The pointer also taking 2 bytes
printf("%d", *p) dereferencing
*/

#include<iostream>
// #include<stdlib.h> //c language

using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

int main()
{
    int *pointer; //point variable. Create in stack (every variable created in stack)
    // c language use malloc
    // p = (int *)malloc(5*sizeof(int)); //(int *)malloc(size*sizeof type) will be 5*2bytes

    // C++
    pointer = new int[5];

    int a = 11;
    int *p;
    p=&a;

    pointer = &a;


    cout<<"a= "<<a<<endl;
    cout<<"p= "<<p<<endl;
    cout<<"*p= "<<*p<<endl;
    cout<<"&a= "<<&a<<endl;

    cout<<"*pointer= "<<*pointer<<endl;
    cout<<"pointer= "<<pointer<<endl;

    cout<<"Assign address"<<endl;
    const static int &aa = *p;

    cout<<"aa= "<<aa<<endl;
    cout<<"p= "<<p<<endl;
    cout<<"*p= "<<*p<<endl;
    cout<<"&aa= "<<&aa<<endl;

    cout<<"*pointer= "<<*pointer<<endl;
    cout<<"pointer= "<<pointer<<endl;
    
    int A[4] ={1,2,3,4};
    int *pa;
    // for single,
    // pa = &A[0];
    //However, pa=&A is wrong for array
    pa = A;
    

    cout<<"pa[0] = "<<pa[0]<<endl;
    // cout<<"*pa[0] = " <<*pa[0] <<endl;
    cout<<"pa = "<<pa <<endl;
    

    for (int i=0; i<10; i++){
        cout<<pa[i]<<endl;
        //if array is going over the size, it will produce random number
    }

    cout<<"Using Heap"<<endl;
    // Create with heap
    int *ph;
    ph = new int[5]; // Dynamically create array using heap
    ph[0]=2;
    ph[1]=0;
    ph[2]=3;
    ph[3]=4;
    ph[4]=5;
    for (int i=0; i<5; i++){
        cout<<ph[i]<<endl;
    } 

    // free(ph) // C
    delete[ ] ph; //c++

    
    // Try with structure//
    int *ps1;
    char *ps2;
    float *ps3;
    double *ps4;
    struct Rectangle *ps5, location;

    // location.breadth =5;
    // location.length = 19;
    ps5 = &location;

    
    ps5->length = 1;
    ps5->breadth = 3;
    cout<<"print"<<endl;
    printf("length = %i\nbreadth = %i\n", ps5->length, ps5->breadth);
    // cout<< ps5->length<<endl;

    // *Every pointer will take same amout of memory. 8 bytes
    // *So whatever the type of pointer is independent size of pointer is independent of its data types
    cout<<sizeof(ps1)<<endl;
    cout<<sizeof(ps2)<<endl;
    cout<<sizeof(ps3)<<endl;
    cout<<sizeof(ps4)<<endl;
    cout<<sizeof(ps5)<<endl;

    printf("Address reference");
    // struct Rectangle ref;

    struct Rectangle &ref = *ps5;

    
    printf("length = %i\nbreadth = %i\n", ref.length, ref.breadth);
    cout<<sizeof(ref)<<endl;

    ref.length = 10;

    printf("length = %i\nbreadth = %i\n", ps5->length, ps5->breadth);



    return 0;

}
