#include<iostream>
using namespace std;

void pattern8(int n){

    for (int i =0; i < n; i++){
        // spaces
        for(int k =0; k <= i; k++){
            cout <<"  ";
        }
        for(int j = 0; j < 2*n - (2*i+1); j++){
            cout<<"* ";
        }
        // spaces
        for(int k =0; k <= i; k++){
            cout <<"  ";
        }
        
        cout <<endl;
    }
}

int main(){

    int n = 5;
    pattern8(n);

    return 0;
}