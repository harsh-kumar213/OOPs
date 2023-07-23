#include<iostream>
using namespace std;

class A
{

    public:
    int a;
    int b;

    void operator+ (A &obj2)
    {
        int value1 = this->a;
        int value2 = obj2.a;
        cout<<"operator overloaded "<<value1-value2;
    }

    public:
    void sayHello()
    {
        cout<<"hello harsh"<<endl;
    }

    void sayHello(string name)
    {
        cout<<"hello "<<name<<endl;
    }

    int sayHello(char name)
    {
        cout<<"hello"<<endl;
        return 1;
    }
};

int main()
{
    // A obj;
    // obj.sayHello();
    // obj.sayHello("harsh");
    // obj.sayHello('h');
    
     A obj1;
     A obj2;

     obj1.a = 5;
     obj2.a = 1;
  
     obj1+obj2;


    return 0;
}