//Write a code for fibonacci series in C++.
#include<iostream>
using namespace std ;
int main(){
    int num , first = 0 , second = 1, next ;
    cout<<"Enter the number of terms till which you want to fiboinacci series : ";
    cin>>num ;
    cout<<"Fibonacci series is : "<<endl ;
    for(int i =0 ;i < num ; i++){
        if(i <= 1) next = i ;
        else{
            next = first + second ;
            first = second ;
            second = next ;
        }
        cout<<next<<" " ;   
    }
    return 0 ;
}
 