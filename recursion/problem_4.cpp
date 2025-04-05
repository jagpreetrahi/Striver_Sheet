// Linear print 1 to N by using backtracking

#include <iostream>
using namespace std;

void print(int i , int n){
    
    if( i < 1){
        return;
    }
    print(i-1, n);
    cout<<i<<endl;
    

}

int main(){

    int n = 5;
    print(n , n);
}