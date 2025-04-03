#include<iostream>
using namespace std;

void pattern12(int n){
    char value = 'A';
    for(int i = 0; i<n; i++){
        for(char j  = value; j <= value + i; j++){
            cout <<j;
        }
        cout <<endl;
    }
}


int main(){

    int n = 5;
    pattern12(n);
    return 0;
}