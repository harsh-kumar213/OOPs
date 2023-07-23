#include<iostream>
using namespace std;

 class Human{
   
    public:
      int age;
      int weight;
      int height;

     int getAge()
     {
         return this->age;
     }

     void setWeight(int w)
     {
        this->weight = w;
     }

 };

 
    class Male : public Human{
          public:
           string color;

         void sleep(){
            cout<<"male sleeping"<<endl;
         }  
    };

 int main()
 {

    Male obj1;
    



    return 0;
 }