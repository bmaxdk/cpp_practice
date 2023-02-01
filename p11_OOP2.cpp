#include<iostream>

using namespace std;

class Rectangle
{
    private:
        int length;
        int breadth;
    
    public:
        Rectangle();
        Rectangle(int, int);
        int area();
        int peri();
        int getLength();
        void setLength(int);
        ~Rectangle();
};

Rectangle::Rectangle()
{
    length=0;
    breadth=0;
}

Rectangle::Rectangle(int l, int b)
{
    length = l;
    breadth = b;

}

int Rectangle::area()
{
    return length * breadth;
}

int Rectangle::peri()
{
    return 2*(length*breadth);
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
    cout<<"Destructor"<<endl;
}

int main()
{
    Rectangle r(3, 23);

    cout<<"area = "<<r.area()<<endl;
    cout<<"peri = "<<r.peri()<<endl;
    cout<<"length = "<<r.getLength()<<endl;
    r.setLength(99);
    cout<<"area = "<<r.area()<<endl;
    cout<<"peri = "<<r.peri()<<endl;
    cout<<"length = "<<r.getLength()<<endl;
    
}
