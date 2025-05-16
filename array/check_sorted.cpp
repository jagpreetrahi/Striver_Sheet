#include <iostream>
using namespace std;

bool checkSorted(int arr[] , int size){
  
    // start a loop from i = 1 because first element considering as always sorted
    for(int i = 1; i<= size; i++){

        if(arr[i-1] <= arr[i]) {}
        else{
           return false;
        }
    }
    return true;
}


int main(){

    int arr[] = {1,2,2,3,4};
    int size = sizeof(arr)/sizeof(arr[0]);

    char result = checkSorted(arr, size);
    if(result){
        cout<<"THe array is sorted";
    }
    else{
        cout<<"The array is not sorted";
    }
}