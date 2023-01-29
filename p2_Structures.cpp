#include<iostream>
#include<stdio.h>
#include<cstring>
#include<string>
#include<typeinfo>
/*
Structure
1) Defining Structure
2) Size of Structure
3) Declaring a Structure
4) Accessing Members

Used ex. of rectangle, complex number, student
*/
using namespace std;

struct Rectangle
{
    int length; // Each integer takes 2 bytes or it may take 4 bytes but let's assuming it as 2 bytes
    int breadth;

};

// Complex Number a+ib
struct Complex
{
    int real; //2
    int img; //2
};

// Student
struct Student
{
    int roll; //2
    char name[25]; //character take 1byte  //25
    char depth[15]; //department name //10
    char address[50]; //50
};


int main()
{
    //Structure
    struct Rectangle r; // Declaration - r is occupying 4 bytes
    struct Rectangle r2 = {10,5}; //Declaration plus initialization.
    r.length = 3;
    r.breadth = 4;
    r2.length = 15;
    r2.breadth = 10;
    printf("Area of Rectangle r is %d\n", r.length*r.breadth);
    printf("Area of Rectangle r2 is %d\n", r2.length*r2.breadth);

    // Student   
    struct Student s;
    s.roll = 10;
    strcpy(s.name, "Howard");
    strcpy(s.depth, "Engineering");
    strcpy(s.address, "Seattle"); 
    cout<<"type of this s.name: "<<typeid(s.name).name()<<endl;
    printf("one student information: \nroll:%d\nname: %s\ndepartment: %s\naddress: %s\n",s.roll, s.name, s.depth, s.address);
    return 0;
}