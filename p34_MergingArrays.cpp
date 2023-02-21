/*
Merging is only used sorted array
Merge
Given 
A={3,8,16,20,25} l=m
i
B={4,10,12,22,23} l=n
j

every index compare the elements that is smaller and add to empty array c
increase the index that is selected

while(i<m && j<n)
{
    if(A[i]<B[j])
        c[k++]=A[i++];
    else
        c[k++]=B[j++];
}
for(;i<m;i++)
    c[k++]=A[i];
for(;j<n;j++)
    c[k++]=A[j];

Time theta(m+n)
*/




#include<iostream>

using namespace std;

class Array
{
private:
    int* A;
    int size;
    int length;

public:
    Array(int size, int length, bool sorted=false)
    {
        this->size = size;
        this->length = length;

        A = new int[size];

        if(sorted)
        {
            cout<<"Enter ints in sorted manner"<<endl;
            for(int i=0; i<length; i++)
            {
                cout<<"Enter element "<<i<<":"<<flush;
                cin>>A[i];
            }
        }

        else
        {
            for(int i=0; i<length; i++)
            {
                int val;
                val = rand() %100;
                if(rand() %2)
                {
                    A[i] = -1*val;
                }
                else
                {
                    A[i]=val;
                }
            }
        }
    
    }

    int Get(int index)
    {
        if(index>=0 && index<length)
            return A[index];
        return -1;
    }

    void Set(int index, int x)
    {
        if(index>=0 && index<length)
            A[index]=x;
    }

    void display()
    {
        for(int i=0;i<length;i++)
        {
            cout<<A[i]<<" ";
        }
        cout<<endl;
    }

    Array Merge(Array& B)
    {
        Array C(length+B.length, length+B.length);
        int i,j,k;
        i=j=k=0;
        while(i<length && j<B.length)
        {
            if(A[i]<B.Get(j))
                C.Set(k++,A[i++]);
            else
                C.Set(k++,A[j++]);
        }
        for(;i<length;i++)
            C.Set(k++,A[i]);
        for(;j<length;j++)
            C.Set(k++,A[j]);
        
        return C;
        
    }

    ~Array()
    {
        delete[] A;
    }

};


int main()
{
    Array X(10, 5, true);
    Array Y(10, 4, true);

    Array Z = X.Merge(Y);
    Z.display();

    return 0;
}