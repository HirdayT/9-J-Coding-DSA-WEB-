//Write a code for prime numbers in c++
#include<iostream>
using namespace std;

bool isPrime(int num){
    if(num ==1 )return false;
    if(num ==2 )return true;
    if(num % 2 == 0)return false;
    for(int i =3 ; i <= num/ i; i+= 2){
        if(num % i == 0)return false;
    }
    return true;
}
int main(){
    int n ;
cout<<" Give the number till which you want to print prime numbers : ";
cin>>n ;
 for(int i = 1 ; i <= n ; i++){
    if(isPrime(i)){
        cout<<i<<" ";
    }
 }
}