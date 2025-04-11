#include <iostream>
using namespace std;

/*Brute force*/
void printFibonacci(int n , int arr[]){

    for(int i = 2; i <=n; i++){
        arr[i] = arr[i-1] + arr[i - 2];
    }
}
/*Brute Force -> It takes SC = O(N) to storing the fibonacci series*/


/* Optimized the space complextiy from O(n) to O(1) due to not storing fibnoacci series*/
void fibonacci(int n){

    if(n == 0){
        cout << 0;
    }
    else{
        int  secondLast = 0;
        int last = 1;
        int current;
        cout<<secondLast <<" " <<last <<" ";
        for(int i = 2; i <= n; i++){
            current = secondLast + last;
            secondLast = last;
            last = current;
            cout<<current<<" ";
        }
        
    }
    
}
/*Optimized for space complexity*/


/*using Recursion*/
int fibonacciRecursion(int n){

    if(n <= 1){
        return n;
    }

    return fibonacciRecursion(n-1) + fibonacciRecursion(n-2);

}
/*Using Recursion*/

int main(){

   int n = 5;
   int arr[n + 1] = {0 , 1};
   int size = sizeof(arr)/sizeof(arr[0]);
   printFibonacci(n , arr);
   for(int i = 0; i<size; i++){
    cout <<arr[i]<<" ";
   }
   fibonacci(n);
   cout<<fibonacciRecursion(n);
    
   
}