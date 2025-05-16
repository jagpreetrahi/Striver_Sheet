#include<iostream>
#include<vector>
using namespace std;

void LeftRotateByD(int arr[] ,int size , int d){

    d = d%2;
    int temp[d];
    for(int i = d; i<=size; i++){
        temp[i-d] = arr[i];
    }

    for(int i = size-d ; i<size; i++){
          temp[i] = arr[i];
    }

    for(int i = 0; i<size; i++){
        arr[i] = temp[i];
    }
}


int main(){

    int arr[] = {1,2,3,4,5,6,7,};
    int size = sizeof(arr)/sizeof(arr[0]);
    int d = 4;

    LeftRotateByD(arr, size , d);
    cout << "After Rotating the elements to right " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

}