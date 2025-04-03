#include <iostream>
using namespace std;

void pattern2(int n){

    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){ // another cond - j < i + 1 
            cout << "* ";
        }
        cout << endl;
    }
}

int  main(){

    int n = 5;

    pattern2(n);

    return 0;
}