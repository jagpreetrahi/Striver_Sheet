#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

/*  ---- Brute Force --- TC  ---> O(n+d) , SC ---> O(d)*/
void LeftRotateByD(int arr[] ,int size , int d){

   d = d%size;
   vector<int> temp;
  
   // store the first d element in the temp array
   for(int i = 0; i<d; i++){
      temp.push_back(arr[i]);
   }

   // shifting the remain element in the array
   for(int i = d; i<size; i++){
       arr[i-d] = arr[i];
   }

   // put back into the array from temp array  normally way to access the temp element is init
   // a j with zero and increament it , another way is 
 
   for(int i = size-d; i<size; i++){
      arr[i] = temp[i - (size - d)];
      
   }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

/* ---- Optimal Approach  TC ---> O(2n) , SC ----> O(1)*/
void reverseLeft(int arr[] , int size , int d){

    d = d%size;

    reverse(arr , arr + d);
    reverse(arr +d , arr + size);
    reverse(arr, arr + size);

    for(int i = 0; i<size; i++){
        cout <<arr[i] <<" ";
    }

}


int main(){

    int arr[] = {1,2,3,4,5,6};
    int size = sizeof(arr)/sizeof(arr[0]);
    int d = 4;

    // LeftRotateByD(arr, size , d);
    reverseLeft(arr , size ,d);
  
  

}