// Reverse an array
#include<iostream>
using namespace std;

/* Two pointer using */
void  print(int arr[] , int m , int n){

    if(m >= n){
        return ;
    
    }
    swap(arr[m] , arr[n]);
    print(arr, m+1 , n-1);
   

}

/*Recursion using one pointer*/
void print1(int arr[] , int i, int size){

    if(i == size/2){
        return;
    }
    swap(arr[i], arr[size - i -1]);
    print1(arr, i+1 , size);
}

int main(){

    int arr[] = {2, 4, 5, 6, 7};
    
    int m = 0;
    int size = sizeof(arr)/sizeof(arr[0]);
    int n =  size - 1;
    print1(arr, 0, size);
    for(int i = 0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}