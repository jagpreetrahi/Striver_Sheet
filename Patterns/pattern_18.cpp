#include<iostream>
using namespace std;


void pattern18(int n){

    // upper pattern
    int inis = 0;
    for(int i = 0; i<n; i++){
        
       // star
       for(int j = 0; j<n -i; j++){
          cout<<"* ";
       }

       for(int k = 0; k<inis; k++){
           cout<<"  ";
       }

       for(int s = 0; s<n - i; s++){
        cout<<"* ";
       }
        inis += 2;
       cout<<endl;
          
    }

    // lower pattern
    inis = 2*n - 2;
    for(int i = 0; i <n; i++){
        for(int j = 0; j<=i; j++){
            cout<<"* ";
        }
        for(int k = 0; k<inis; k++){
            cout<<"  ";
        }
        for(int s = 0; s<=i; s++){
            cout<<"* ";
        }
        inis -=2;
        cout<<endl;
    }
    
}

int main(){
    
    int n = 5;
    pattern18(n);
    return 0;
}