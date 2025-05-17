#include <iostream> 
using namespace std;

void rightRotate(int arr[] , int size){

    int temp = arr[size - 1];

    for(int i = size - 1 ; i>0; i--){
        arr[i] = arr[i - 1 ];
    }
    arr[0] = temp;

    for(int i = 0; i<size; i++){
        cout << arr[i]<<" ";
    }
}

int main(){

    
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);

    rightRotate(arr, size);
}