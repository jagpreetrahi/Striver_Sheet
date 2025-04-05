//  Reverse N to 1
#include<iostream>
using namespace std;

void print(int i , int n){

    if(i < 1){
        return;
    }
    cout<<i<<endl;
    print(i - 1, n);
}

int main(){

    int n = 5;
    print(n, n);
}