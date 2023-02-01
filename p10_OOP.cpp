#include <iostream>

using namespace std;

class Rectangle
{
    private:
        int length=0;
        int breadth=0;
    
    public:
        Rectangle(int, int);
        int area();
        int peri();
        int getLength();
        void setLength(int);
        ~Rectangle();

};
Rectangle::Rectangle(int l, int b)
{
    length = l;
    breadth = b;
}

int Rectangle::area()
{
    return length*breadth;
}

int Rectangle::peri()
{
    return 2*(length+breadth);
}

int Rectangle::getLength()
{
    return length;
}

void Rectangle::setLength(int l)
{
    length = l;
}

Rectangle::~Rectangle()
{

}
int main()
{
    Rectangle r = Rectangle(3,5);
    cout<<"Area = "<<r.area()<<endl;
    cout<<"Perimeter = "<<r.peri()<<endl;
    cout<<"get length = "<<r.getLength()<<endl;
    r.setLength(39);
    cout<<"get length = "<<r.getLength()<<endl;
    
    cout<<"Area = "<<r.area()<<endl;
    cout<<"Perimeter = "<<r.peri()<<endl;
    
    r.~Rectangle();
    cout<<"get length = "<<r.getLength()<<endl;

    cout<<"Perimeter = "<<r.peri()<<endl;


    return 0;
}
