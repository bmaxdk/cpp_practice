/*
Taylor Series e^x

e^x = 1 + x/1! + (x^2)/2! + (x^3)/3! ... n terms

sum(n-1)+n = sum(n)

fact(n-1) * n = fact(n)

pow(x, n-1) * x = pow(x,n)


*/


#include<iostream>


using namespace std;

double e(int x, int n)
{
    if (n==0)
        return 1;
    static double p=1, f=1;
    double r;
    r = e(x, n-1);
    p*=x;
    f*=n;
    return r + p/f;
}
int main()
{
    cout<<e(4, 40);

    return 0;
}