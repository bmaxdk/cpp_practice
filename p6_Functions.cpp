/*
Function helps to broke down task with simple task. Modular/Procedual programming.
Reusablity is necessary. 
HEAP
STACK - add : a,b,c
CODE SECTION - main:5, 6, return add(a,b)

once add function terminate it exits from stack.
*/

#include <iostream>


using namespace std;

int add(int a, int b) // Heather function. a and b are formal parameter
{   
    //Function return begin
    int c;
    c = a+b;
    return c;
}

int addref(int &a, int &b) // Heather function. a and b are formal parameter
{   
    //Function return begin
    int c;
    c = a+b;
    return c;
}

int addref2(int &a, int &b) // Heather function. a and b are formal parameter
{   
    //Function return begin
    int c, *d;
    c = a;
    d = &a;
    cout<<"c = "<<c<<endl;
    cout<<"d = "<<d<<endl;
    cout<<"*d = "<<*d<<endl;


    a=6;
    cout<<"c = "<<c<<endl;
    cout<<"&a = "<<&a<<endl;    
    cout<<"&c = "<<&c<<endl;
    cout<<"d = "<<d<<endl;
    cout<<"*d = "<<*d<<endl;
    c = a+b;
    return c;
}


int main()
{
    int a,b;
    a= 5;
    b= 6;
    cout<<add(a,b)<<endl; //Function call. a, b are actual parameter
    cout<<addref(a,b)<<endl; 
    cout<<"a="<<a<<endl;
    cout<<addref2(a,b)<<endl; 
    cout<<"a="<<a<<endl;
    cout<<"&a = "<<&a<<endl;

    return 0;
}