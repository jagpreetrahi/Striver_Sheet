#include<iostream>
using namespace std;

void pattern13(int n){

    for(int i = 0; i<n; i++){
        char value = 'A';
        for(char j = value; j < value + (n -i); j++){
            cout <<j;
        }
        cout<<endl;
    }
}


int main(){

    int n = 4;
    pattern13(n);
    return 0;
}