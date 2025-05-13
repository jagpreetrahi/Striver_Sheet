#include <iostream>
using namespace std;

int arr[4] = {1,3,4,2};
int size = sizeof(arr)/sizeof(arr[0]);


int main(){

    // Before deletion 
    cout<<"Before deletion an element from array"<<endl;
    for(int i = 0; i <size; i++){
        cout<<"Array at index "<<i<<" "<<arr[i]<<endl;
    }

    //after deletion 
    for(int i = 1; i<size; i++){
        arr[i] = arr[i + 1];
        
    }
    size--;
    cout<<"After the deleetion"<<endl;
    for(int i = 0; i<size; i++){
        cout<<"Array at index "<<i<<" "<<arr[i]<<endl;
    }
}