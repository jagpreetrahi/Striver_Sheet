// Fibonacci Number
#include<iostream>
using namespace std;

int  print(int n , int i){
    
    if(i > n){
        return; 
    }
   
    return i + print(n , i + 1);
    
}

int main(){

    int n = 5;
    int result = print(n , 0);
    cout<<result;
}