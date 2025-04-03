#include <iostream>
using namespace std;

void pattern9(int n){

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

    // bottom pyramid
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
    
    pattern9(n);
    return 0;
}