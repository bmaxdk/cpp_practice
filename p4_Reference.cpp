/*
Reference
type &r : ampersand r
Have to initialize.
ex. int a =10; int &r = a;
*/

#include<iostream>

using namespace std;

int main()
{
    int a= 10;
    int &r=a; //Declaration : reference r assign a


    cout <<"a = "<< a<<endl;
    r++;
    cout<<"r = "<<r<<endl<<"a = "<< a<<endl;
    cout << sizeof(a)<<endl<<sizeof(r)<<endl;

    return 0;
}