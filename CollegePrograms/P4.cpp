//Write a code for factorial in c++
#include<iostream>
using namespace std;
int main(){
    int num ;
cout<<"Enter the number you want to find factorial of : ";
cin>> num ;
 for(int i = num - 1 ; i >= 1 ; i--){
    num *= i ;
 }
 cout<< "Factorial of the number is : "<<num ;
}