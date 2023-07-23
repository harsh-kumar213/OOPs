#include<iostream>
#include<string.h>
using namespace std;

class Hero{
   
   private:
     int health;

   public:
     char *name;
     char level;
     static int timeToComplete;
    Hero(){
     name = new char[100];
    }
    //copy constructor

      Hero(Hero &temp)
      {
        char *ch = new char[12];
        strcpy(ch ,temp.name);
        
        this->name = ch;
        this->health = temp.health;
        this->level = temp.level;
      }
   void print(){
      cout<<endl;
      cout<<"Name:"<<this->name<<endl;
      cout<<"Level:"<<this->level<<endl;
      cout<<"Health:"<<this->health<<endl;
   } 

   void setHealth( int Health)
   {
       this->health = Health;
   }

   int getHealth()
   {
       return health;
   }

   void setName(char name[])
   {
        this->name = name;
   }


};

int Hero:: timeToComplete = 5;

int main()
{
    cout<<Hero::timeToComplete;

    Hero h1;
    char name[10] = "harsh";

    h1.level = 'A';
    h1.setHealth(70);
    h1.setName(name);
    cout<<endl<<"for h1"<<endl;
   h1.print();
  cout<<endl<<"for h2"<<endl;
   Hero h2(h1);
   h2.print();
    
    name[0] = 'g';

   h1.print();

   h2.print();

    return 0;
}