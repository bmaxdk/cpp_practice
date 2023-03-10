/*
Static vs Dynamic Array

How to increase array size?

*/

#include<iostream>

using namespace std;

int main()
{
    int *p = new int[3];
    p[0] = 3;
    p[1] = 5;
    p[2] = 7;

    // to increase size
    int *q = new int[10];

    for(int i=0; i<3; i++) q[i] = p[i]; // copy value from p to q;
    //Now q is coppied;

    delete []p; //let's free the memory of p

    // pointer p is pointed q heap.
    p = q; // now bot p and q is pointed heap address

    //lets eliminate q pointing heap array.
    q=NULL;

    // Check
    for(int i=0; i<10; i++) cout<<p[i]<<endl;
    // for(int i=0; i<10; i++) cout<<q[i]<<endl; // it will give fault error ;

    return 0;
}