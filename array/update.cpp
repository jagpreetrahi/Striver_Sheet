#include <iostream>
using namespace std;


int arr[4] = {1,3,4,2};
int size = sizeof(arr)/sizeof(arr[0]);


int main(){

    // Before Update
    cout<<"Before update an element from array"<<endl;
    for(int i = 0; i <size; i++){
        cout<<"Array at index "<<i<<" "<<arr[i]<<endl;
    }

    arr[3] = 5;
    cout<<"After the Update"<<endl;
    for(int i = 0; i<size; i++){
        cout<<"Array at index "<<i<<" "<<arr[i]<<endl;
    }
}