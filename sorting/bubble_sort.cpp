#include <iostream>
using namespace std;

void BubbleSort(int arr[] , int n){

    for(int i = 0; i<n-1; i++){
       int didSwap = 0;
        for(int j = 0; j<n-i-1; j++){

            if(arr[j] > arr[j + 1]){
                int temp = arr[j + 1];
                arr[j+1] = arr[j];
                arr[j] = temp;
                didSwap = 1;
            }
        }
        if(didSwap == 0){
            break;
        }
       
    }
}

int main(){

    int n = 6;
    int arr[n] = {6,5,4,3,2,1};
    BubbleSort(arr , n);
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}