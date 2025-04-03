#include<iostream>
using namespace std;

void pattern7(int n){

    for(int i = 0; i < n; i++){

        // spaces 
        for(int j = 0; j < n-i; j++){
            cout << "  ";
        }

        //star
        for(int k = 0; k < 2*i + 1; k++){
            cout << "* ";
        }

        // spaces
        for(int j = 0; j < n-i; j++){
            cout << " ";
        }
        cout << endl;
    }
}

int main(){

    int n = 4;
    pattern7(n);
    return 0;
}