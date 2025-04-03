#include <iostream>
using namespace std;


void pattern1(int n){

    //outer loop
    for(int i = 0; i < n; i++){
        //inner loop
        for(int j = 0; j < n ; j++){

            cout << "* ";
        }
        cout << endl;
    }
}

int main(){

    int n = 5;

    pattern1(n);

    return 0;
}