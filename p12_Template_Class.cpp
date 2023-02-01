#include<iostream>

using namespace std;


template<class T>

class Arithmatic
{
    private:
        T a;
        T b;

    public:
        Arithmatic(T, T);
        T add();
        T sub();
        ~Arithmatic();
};

template<class T>
Arithmatic<T>::Arithmatic(T a, T b)
{
    this->a = a;
    this->b = b;
}

template<class T>
T Arithmatic<T>::add()
{
    T c;
    c=a+b;
    return c;
}

template<class T>
T Arithmatic<T>::sub()
{
    T c;
    c=a-b;
    return c;
}

template<class T>
Arithmatic<T>::~Arithmatic()
{
    cout<<"Destructor";
}

int main()
{
    Arithmatic<int> ar(3,11);
    cout<<ar.add()<<endl;
    cout<<ar.sub()<<endl;
}