//code for method overloading to find  area of circle in c++
#include<iostream>
using namespace std;
float area(float r){
    return 3.14 * r * r ;
}

float area(double pi , float r){
    
    return pi * r * r ;
}



int main(){
    float r ;
cout<<"Enter the radius of the circle : ";
cin>> r ;
cout<<"Area of the circle is : "<<area(r)<<endl;
cout<<"Precise area according to requirement is :  "<<area((355.0/113.0) , r)<<endl;
}