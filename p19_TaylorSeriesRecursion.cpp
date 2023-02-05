/*
Taylor Series e^x

e^x = 1 + x/1! + (x^2)/2! + (x^3)/3! ... n terms

sum(n-1)+n = sum(n)

fact(n-1) * n = fact(n)

pow(x, n-1) * x = pow(x,n)


Multiplication usage here is n(n+1) = O(n^2)

We can reduce.
e^x = 1 + x/1! + (x^2)/2! + (x^3)/3! ... n terms
1 + x/1 + (x^2)/(1*2) + (x^3)/(1*2*3)

1 + x/1 [1 + x/2[1 + x/3[1 + x/4]]] 
O(n)
*/


#include<iostream>


using namespace std;

double re(int x, int n)
{
    if (n==0)
        return 1;
    static double p=1, f=1;
    double r;
    r = re(x, n-1);
    p*=x;
    f*=n;
    return r + p/f;
}


double ieH(int x, int n)
{
    double s=1;

    for(;n>0;n--)
    {
        s = 1+x*s/n;
    }
    return s;
}

double reH(int x, int n)
{
    static double s;
    if (n == 0)
        return s;
    s = 1+(x*s)/n;
    return reH(x, n-1);

}
int main()
{
    cout<<re(4, 40)<<endl;
    cout<<ieH(4, 40)<<endl;
    cout<<reH(4, 40)<<endl;
    cout<<3.0*2.0/4.0<<endl;
    cout<<3.0/4.0*2.0 <<endl;



    return 0;
}