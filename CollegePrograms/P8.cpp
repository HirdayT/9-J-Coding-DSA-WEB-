//Write a code for overriding through creating a function sum for circle and rectangle  in c++
#include<iostream>
using namespace std ;
class Shape{

    public:
    virtual void sum (float a , float b){
        cout<< "Method used to give generic area of shape : ";
    }
} ;

class Rectangle : public Shape{
  public :
  virtual void sum (float length , float breadth) override {
    cout<< "The area of rectangle is : " << length * breadth << endl ;
  }
};

class Circle : public Shape {
   public :
   void sum(float radius , float pi) override{
    cout<< "The area of circle is : " << pi * radius * radius << endl  ;
   }
};
    int main(){
        Circle c;
        Rectangle r ;
         Shape* s ; 
         s = &c ;
         s->sum(5.0 , 355.0/113.0) ;
         s = &r ;
         s->sum(5.0 , 3.0) ;
        return 0 ;
    }