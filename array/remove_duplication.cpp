#include <iostream>
#include <set>
using namespace std;

/* ---- Brute Force----  TC -> Nlogn  + N due to set in order to insert element and -- SC - O(n) - Imagine all element are unique */
int removeDuplicate(int arr[] , int size){

    set<int> st;
    int count = 0;
    for(int i = 0; i<size; i++){
        st.insert(arr[i]);
    }

    for(auto it : st){
       
        arr[count++] = it;
    }


    return count;

}

/* --- Optimal Approach  TC -> O(N)*/

int checkDuplicates(int arr[] , int size){

    int i = 0;
    for(int j = 1; j<=size; j++){
        if(arr[i] != arr[j]){
            arr[i+1] = arr[j];
            i++;
        }
    }
    return i;
 }

int main(){

    int arr[] = {1,2,2,3,3,3,4,5,5,6};
    int size = sizeof(arr)/sizeof(arr[0]);

    int result = checkDuplicates(arr , size);
    cout <<"The count of the unique element is "<<result;
}