#include<iostream>
using namespace std;

class Animal
{
    public:
    int age;
    int weight;

    public:
    void speak(){
        cout<<"speaking"<<endl;
    }
};

class Dog:public Animal{

};

class GermanShephard:public Dog{

};

int main()
{
    GermanShephard d;
    d.speak();
    return 0;
}