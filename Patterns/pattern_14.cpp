#include <iostream>
using namespace std;

void pattern15(int n ){

    for(char ch = 'A'; ch < 'A' + n; ch++){
         for(char j = 'A' ; j <= ch; j++ ){
             cout << ch;
         }
         cout <<endl;
    }

}

int main(){

    int n = 5;
    pattern15(n);
    return 0;
}