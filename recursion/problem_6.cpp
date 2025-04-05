// SUm of first N number
#include<iostream>
using namespace std;

/* Parameter Pattern*/
// int print(int n , int sum){

//     if(n < 1){
//         return sum;
//     }
//     print(n-1, sum + n);

// }

/*Functional Pattern -> In this pattern we just passed the single argument*/
int print1(int i){

    if(i == 0){
        return 0 ;
    }

    return i + print1(i-1);
}

int main(){

    int n = 5;
    int result = print1(n);
    cout<<"The First N Number Sum is "<<result;
}