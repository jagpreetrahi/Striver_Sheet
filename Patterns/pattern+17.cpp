#include<iostream>
using namespace std;

void pattern17(int n){

    for(int i = 0; i<n; i++){
        for(int j =0; j<n; j++){

            if(i == 0 || i == n-1 || j == 0 || j == n-1){
                cout<<4<<" ";
            }
            else if(j == j + 1 || j == n-2 || i == i + 1 || i == n-2){
                cout<<3<<" ";
            }
            else if(i == n){

            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }


}

int main(){

    int n = 7;
    pattern17(n);
    return 0;
}