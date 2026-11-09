//Write a sum overloading with all types (different parameters, upcasting,fixed length) in c++
#include<iostream>
using namespace std ;
void sum(int a , int b){
    cout<< "The sum of two integers is : " << a + b << endl ;
}

void sum(float a , float b){
    cout<< "The sum of two floats is : " << a + b << endl ;
}

/* void sum(int a , int b, int c){
     cout<< "The sum of three values  is : " << a + b + c<< endl ;
}
*/ 

void sum(float a , float b , float c , float d = 5){
    cout<< "The sum of four values is : " << a + b + c + d << endl ;
}

int main(){
    cout<<"Different parameters: "<<endl ;
    sum(10,15) ;
    sum(10.5f , 15.5f) ;
    cout<<"Upcasting: "<<endl ;
    sum(10,15.8) ;
    cout<<"Fixed length : "<<endl ;
    sum(10.2,20.3,30.4);


}
