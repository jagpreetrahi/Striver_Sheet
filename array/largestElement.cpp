#include <iostream>
#include <algorithm>
using namespace std;



/* -> Brute Force    -> TC -> Nlog(n)
    sorting an array in ascending order
    
    sort(arr , arr + size);
    for(int i = 0; i<size; i++){
        cout<<arr[i]<<endl;
    }
    cout<<"The largest element of this array"<<" "<<arr[size -1];
*/

/* ---- Optimal Approach--------  Takes TC -> O(n)*/
int largestElement(int arr[] , int size){

    int largest = arr[0];
    for(int i = 1; i<size; i++){
        if(largest <arr[i]){
            largest = arr[i];
        }
    }
    return largest;
}

int main(){

    int arr[] = {1,2,5,4,};
    int size = sizeof(arr)/sizeof(arr[0]);
    int result = largestElement(arr , size);
    cout<<"The largest Element inside the array is "<<result;  
}