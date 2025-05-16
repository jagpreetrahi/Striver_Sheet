#include <iostream>
#include <vector>
using namespace std;

/* Brutte Force --- TC - O(N) and SC ---> O(N)*/
vector<int> LeftRotateArray(int arr[] , int size){

    vector<int> temp;
    for(int i = 1; i <size; i++){
        temp.push_back(arr[i]);
    }
    temp.push_back(arr[0]);

    return temp;

}
/* Optimal Way */
void RotateArrayByLeft(int arr[] , int size){

    int temp = arr[0];
    for(int i = 0; i<size; i++){
        arr[i]  = arr[i + 1];
    }
    arr[size-1] = temp;

    for(int i =0 ; i<size; i++){
        cout<< "The array is "<<arr[i]<<endl;
    }
 }
int main(){

    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);

    vector<int> result = LeftRotateArray(arr, size);

    RotateArrayByLeft(arr , size);

   

    

    return 0;
}