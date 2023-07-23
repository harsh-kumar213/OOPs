#include<iostream>
using namespace std;

class A
{
    public:
    void func1()
    {
        cout<<"in function 1"<<endl;
    }
};

class B:public A
{
    public:
    void func2()
    {
        cout<<"in function 2"<<endl;
    }
};

class C:public A
{
    public:
    void func3()
    {
        cout<<"in function 3"<<endl;
    }
};

int main()
{
    A a;
    cout<<"from a "; 
    a.func1();
    B b;
    cout<<"from b "; 
    b.func1();
    b.func2();
    C c;
    cout<<"from c ";
    c.func1();
    c.func3();

    return 0;
}