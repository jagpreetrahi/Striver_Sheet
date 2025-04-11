#include <iostream>
using namespace std;

void selectionSort(int arr[] , int n)
{
    for(int i = 0; i<=n-2; i++){
        int minimum = i;

        for(int j = i +1 ; j<=n-1; j++){

            if(arr[j] < arr[minimum]){
                minimum = j;
            }
        }
        int temp = arr[minimum];
        
        arr[minimum] = arr[i];
        
        arr[i] = temp;
    }
}

int main(){

    int n = 6;
    int arr[n] = {13,24,56,20,46,9};
    selectionSort(arr , n);
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}