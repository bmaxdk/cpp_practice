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
    return r.length * r.breadth;

}
int main()
{
    Rectangle r = {3,4};
    printf("Return area of r = %i\n", area(r));

    Rectangle *rptr = new Rectangle;
    rptr->length = 10;
    rptr->breadth =33;
    printf("Return area for rptr = %i\n", area(*rptr));
}