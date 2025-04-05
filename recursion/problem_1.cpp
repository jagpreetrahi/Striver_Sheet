//  Print Name five time 
#include <iostream>
using namespace std;

void print(int i , int n){
   
    if(i >= n){
        return ;
    }
    cout<<"Harry"<<endl;;
    print(i+1, n);
}

int main(){
    int n = 5;
    print(0, n);
}