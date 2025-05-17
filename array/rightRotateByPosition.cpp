#include <iostream>
#include <vector>
using namespace std;


void rightRotateByD(int arr[] , int size , int d){

    d = d%size;

    vector<int> temp;

    //store d element inside the temp array 
    for(int i = size - d; i<size; i++){
       temp.push_back(arr[i]);
    }

    // shifting element
    for (int i = size - d- 1; i >= 0; i--){
        arr[i + d] =  arr[i];
    }

    // put back element
    for(int i = 0; i<d; i++){
        arr[i] = temp[i];
    }
   
    for(int i = 0; i<size; i++){
        cout <<arr[i] <<" ";
    }
}

int main(){

    int arr[] = {1,2,3,4,5,6,7,8,9};
    int size = sizeof(arr) / sizeof(arr[0]);

    int d = 4;

    rightRotateByD(arr, size , d);
}