/*
Reference
*/

#include<iostream>

using namespace std;

int main()
{
    int a= 10;
    int &r=a; //Declaration : reference r assign a


    cout <<"a = "<< a<<endl;
    r++;
    cout<<"r = "<<r<<endl;
    cout <<"a = "<< a<<endl;

}