#include <iostream>
#include <algorithm>
using namespace std;

/* ---- Brute Force ----- TC -> Nlog(n)*/
void getElement(int arr[] , int size){

    // edge case - Let's say array has onlyl one element
    if(size == 0 || size == 1){
        cout <<"The second smallest  is"<<-1<<" "<<"The second largest is "<<-1<<endl;
    }
    sort(arr, arr + size);
    int small = arr[1];
    int largest = arr[size - 1];
    cout <<"The largest element is "<<largest<<" "<<"The smallest element is "<<small<<endl;

}

/* ----- Better Approach -----  TC -> O(n)*/
void  secondLargest(int arr[] , int size){

    if(size == 0 || size == 1){
        cout <<"The second smallest  is"<<-1<<" "<<"The second largest is "<<-1<<endl;
    }

    int largest = arr[0];
    int smallest = INT32_MAX;
    int second_smallest = INT32_MAX;
    int secondLargest = -1;

    for(int i = 0; i<size; i++){
        if(largest < arr[i]){
            largest = arr[i];
        }

        if(smallest > arr[i] ){
            smallest = arr[i];
           
        }
    }
    for(int i = 0; i < size ; i++){
        if(secondLargest < arr[i] && arr[i] != largest){
            secondLargest = arr[i];
            
        }
        if(second_smallest > arr[i] && arr[i] != smallest){
            second_smallest = arr[i];
           
        }
    }
     cout<<"The largest element is "<<secondLargest<<endl;
       cout<<"The smallest element is "<<second_smallest<<endl;
}

/* Optimal Approach */
int optimalApproach(int arr[] , int size){

    if(size<2) return -1;

    int largest = INT16_MIN;
    int secondLargest = INT16_MIN;

    for(int i = 0; i<size; i++){

        if(largest < arr[i]){
            secondLargest = largest;
            largest = arr[i];
        }
        else if(secondLargest < arr[i] && arr[i] != largest){
               secondLargest = arr[i];
        }
    }
    return secondLargest;

}



int main(){

    
    int arr[] = {1,2,3,7,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    //getElement(arr, size);
    secondLargest(arr , size);
    

    return 0;
    
}
