#include<iostream>
using namespace std;

void pattern16(int n){

    for(int i = 0; i<n; i++){
        //spaces
        for(int j = 0; j <n-i; j++){
            cout << "  ";
        }
        // letter
        char value = 'A';
        for(int j = 0; j < 2*i; j++ ){
            cout<<value<<" ";
        }
         //spaces
        for(int k = 0; k < n-i; k++){
            cout <<" ";
        }
        cout<< endl;
    }
   
}

int main(){

    int n = 4;
    pattern16(n);
    return 0;
}