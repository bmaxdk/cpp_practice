#include <iostream>

using namespace std;


struct Rectangle
{
    int length;
    int breadth;
    // char name[10]; //20 bytes 10*2bytes
};

int main()
{
    static Rectangle r, *c;

    c = &r;
    r={19,20};
    // r.length =19;
    // r.breadth = 20;
    
    cout<<r.length<<", "<<r.breadth<<endl;
    c->length =1;
    c->breadth =3;

    cout<<r.length<<", "<<r.breadth<<endl<<c->length<<", "<<c->breadth<<endl; 
    cout<<sizeof(r)<<endl<<sizeof(c)<<endl;
    
    printf("A: struct in heap");
    static Rectangle *p;

    p = new Rectangle; //rectangle structure in heap
    p->length = 11;
    p->breadth =22;
    p[1].length =40;
    p[2].length =99;
    cout<<p->length<<", "<<p->breadth<<endl; 
    cout<<p[0].length<<",[0] "<<p[0].breadth<<endl; 

    cout<<p[1].length<<",[1] "<<p[1].breadth<<endl; 
    cout<<p[2].length<<",[2] "<<p[2].breadth<<endl; 
    cout<<p[3].length<<",[3] "<<p[3].breadth<<endl; 
    cout<<p[4].length<<",[4] "<<p[4].breadth<<endl; 
    cout<<sizeof(r)<<endl<<sizeof(p)<<endl;
    cout<<sizeof(p[1])<<endl<<sizeof(p[2])<<endl;
    cout<<sizeof(p[3])<<endl<<sizeof(p[4])<<endl;
    cout<<sizeof(p[3].length)<< "<<--.length"<<endl<<sizeof(p[6])<<endl;

    cout<<r.length<<", "<<r.breadth<<endl<<c->length<<", "<<c->breadth<<endl; 
    cout<<sizeof(r)<<endl<<sizeof(c)<<endl;


    printf("B: struct in heap");

    static Rectangle *p2;

    p2 = new Rectangle[5]; //rectangle structure in heap2
    p2->length = 11;
    p2->breadth =22;
    p2[1].length =40;
    p2[2].length =99;
    cout<<p2->length<<", "<<p2->breadth<<endl; 
    cout<<p2[0].length<<",[0] "<<p2[0].breadth<<endl; 

    cout<<p2[1].length<<",[1] "<<p2[1].breadth<<endl; 
    cout<<p2[2].length<<",[2] "<<p2[2].breadth<<endl; 
    cout<<p2[3].length<<",[3] "<<p2[3].breadth<<endl; 
    cout<<p2[4].length<<",[4] "<<p2[4].breadth<<endl; 
    cout<<sizeof(r)<<endl<<sizeof(p2)<<endl;
    cout<<sizeof(p2[1])<<endl<<sizeof(p2[2])<<endl;
    cout<<sizeof(p2[3])<<endl<<sizeof(p2[4])<<endl;
    cout<<sizeof(p2[3].length)<< "<<--.length"<<endl<<sizeof(p2[6])<<endl;

    cout<<r.length<<", "<<r.breadth<<endl<<c->length<<", "<<c->breadth<<endl; 
    cout<<sizeof(r)<<endl<<sizeof(c)<<endl;

    return 0;

}