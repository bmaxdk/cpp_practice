/*
This time, will use how structure pass to func.

*/

#include<iostream>


using namespace std;

typedef struct Rectangle
{
    int length;
    int breadth;
}Rectangle;


int area(Rectangle r)
{
    r.length++; 
    return r.length * r.breadth;

}

int area2_modified(Rectangle *r) //modified
{
    r->length++; 
    cout<<r->length<<", "<<r->breadth<<endl;
    return r->length * r->breadth;
}

int area3_modified(Rectangle &r) //modified
{
    r.length++; 
    cout<<r.length<<", "<<r.breadth<<endl;
    return r.length * r.breadth;
}


typedef struct Ar
{
    int array[5];
}Ar;

void print_array_struct(Ar A)
{
    A.array[0]=200;
    for(int i=0; i<5; i++)
    {
        cout<<A.array[i]<<endl;
    }
    
}

void print_array_struct2(Ar &A)
{
    A.array[0]=200;
    for(int i=0; i<5; i++)
    {
        cout<<A.array[i]<<endl;
    }
    
}

int main()
{
    Rectangle r = {3,4};
    printf("Return area of r = %i\n", area(r));
    printf("l = %i, b = %i\n", r.length, r.breadth);
    Rectangle *rptr = new Rectangle;
    rptr->length = 10;
    rptr->breadth =33;
    printf("Return area for rptr = %i\n", area(*rptr));
    printf("l = %i, b = %i\n", rptr->length, rptr->breadth);

    cout<<"See how this will modified"<<endl;
    Rectangle r2 = {3,4};
    printf("Return area2_modified of r = %i\n", area2_modified(&r2));
    printf("l = %i, b = %i\n", r2.length, r2.breadth);
    
    Rectangle *rptr2 = new Rectangle;
    rptr2->length = 10;
    rptr2->breadth =33;
    printf("Return area2_modified for rptr = %i\n", area2_modified(rptr2));
    printf("l = %i, b = %i\n", rptr2->length, rptr2->breadth);

    Rectangle r3 = {3,4};
    printf("Return area3_modified of r = %i\n", area3_modified(r));
    printf("l = %i, b = %i\n", r3.length, r3.breadth);
    
    Rectangle *rptr3 = new Rectangle;
    rptr3->length = 10;
    rptr3->breadth =33;
    printf("Return area3_modified for rptr = %i\n", area3_modified(*rptr3));
    printf("l = %i, b = %i\n", rptr3->length, rptr3->breadth);

    cout<<"Try Array"<<endl<<endl;;
    
    Ar a= {{1,2,3,4,5}};
    print_array_struct(a);
    for (int x:a.array)
    cout<<x<<endl;
    cout<<endl;
    Ar a2= {{13,23,33,43,53}};
    print_array_struct2(a2);
    for (int x:a2.array)
    cout<<x<<endl;
    cout<<endl;
    cout<<"both function will be modified which is dangerous sometimes"<<endl;

    return 0;
}