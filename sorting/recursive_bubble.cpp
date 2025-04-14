#include <iostream>
using namespace std;

void RecursiveBubbleSort(int arr[] , int n){

    if(n == 1) return ;
    int didSwap = 0;
    for(int j = 0; j<=n-2; j++){

        if(arr[j] > arr[j+1]){
            int temp = arr[j+1];
            arr[j+1] = arr[j];
            arr[j] = temp;
            didSwap = 1;
        }
        
    }
    if(didSwap == 0){
        return;
    }
    RecursiveBubbleSort(arr , n-1);
}

int main(){

    int n = 6;
    int arr[n] = {1,2,3,4,5};
    RecursiveBubbleSort(arr, n);
    for(int i = 0; i<n; i++){
        cout <<arr[i]<<" ";
    }
}