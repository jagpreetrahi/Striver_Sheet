// Fibonacci Number
#include<iostream>
using namespace std;

void print(int n , int sum, int i){
    
    if(i > n){
        return; 
    }
    print(n , sum , sum + 1);
    
}

int main(){

    int n = 5;
    print(n , 0, 0);
}