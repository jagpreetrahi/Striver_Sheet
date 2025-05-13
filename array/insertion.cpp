#include <iostream>
using namespace std;


// Insertion Operation in an array

    int arr[5] = {};
    int size = sizeof(arr)/sizeof(arr[0]);

int main(){

    // itearate a loop to insert an element in an narray
    cout<<"Array before insertion";
    for(int i = 0; i<size; i++){
        cout<<"Array value at index "<<i<<" "<<arr[i]<<endl;
    }

    cout<<"After Insertion";
    for(int i = 0; i<size; i++){
        arr[i] = i + 2;
       cout<<"Array value at index "<<i<<" "<<arr[i]<<endl;
    }
    
}