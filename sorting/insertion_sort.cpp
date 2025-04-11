#include <iostream>
using namespace std;

void insertion_sort(int arr[] , int n){

    for(int i = 1; i<n; i++){
        int j = i;
        while(j > 0 && arr[j-1] > arr[j]){
            int temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp;
            j--;
            cout<<"runs\n";
        }
        
    }
}

int main(){

    int n = 6;
    int arr[n] = {13,24,46,20,56,9};
    insertion_sort(arr , n);
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}