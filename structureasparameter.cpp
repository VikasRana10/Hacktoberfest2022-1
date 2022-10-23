// Structure as Parameter
//(1) Call by Value(this is simple one & generally it is not used)
//(2) Call by address (This is used in most of the cases)
//(3) Call by refrence (This should not be used in large programs)

//(1) Call by Value(this is simple one & generally it is not used)
#include<iostream>
#include<stdio.h>
using namespace std;

struct Rectangle
{
    int L; //Length
    int B; //Breadth
};

void fun(struct Rectangle R) //R is a formal parameter
{
    R.L=20;
    R.B=40;
    cout<<"Length: "<<R.L<<endl<<"Breadth: "<<R.B<<endl;
}

int main()
{
    struct Rectangle r={10,5};  // r is a actual parameter
    fun(r);
    printf("Length: %d\n Breadth: %d\n", r.L,r.B);
}

//(2) Call by address (This is used in most of the cases)
#include<iostream>
using namespace std;

struct Rectangle
{
    int Length;
    int Breadth;
};

void fun(struct Rectangle *p) // Derefrencing using pointer
{
    p->Breadth={20};
    p->Length={40};
    cout<<"Length:"<<p->Length<<endl;
    cout<<"Breadth:"<<p->Breadth<<endl;
}

int main()
{
    struct Rectangle r={10,5};   // Actual parameter are modified
    fun(&r);
    cout<<"Length:"<<r.Length<<endl;
    cout<<"Breadth:"<<r.Breadth<<endl;

}
