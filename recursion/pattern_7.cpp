// Factorial of N number
#include<iostream>
using namespace std;

/*Parameter Pattern*/
int print(int n , int mul){
     
    if(n == 0){
        return mul;
    }
    
    print(n-1, mul * n);

}

/*Functional Pattern*/
int print1(int n){

    if(n == 0){
        return 1;
    }
    return n * print1(n-1);
}

int main(){

    int n = 5;
    int result = print(n , 1);
    int result1 = print1(n);
    cout<<result;
}