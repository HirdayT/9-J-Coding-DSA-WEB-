//Write a code for tribonacchi series in C++.
#include<iostream>
using namespace std ;
int main(){
    int num , first = 0 , second = 1, third = 2, next ;
    cout<<"Enter the number of terms till which you want to tribonacci series : ";
    cin>>num ;
    cout<<"Tribonacci series is : "<<endl ;
    for(int i =0 ;i < num ; i++){
        if(i <= 2) next = i ;
        else{
            next = first + second + third ;
            first = second ;
            second = third ;
            third = next ;
        }
        cout<<next<<" " ;   
    }
    return 0 ;
}
 