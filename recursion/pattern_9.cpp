// Check the string is palidrome
#include<iostream>
using namespace std;

bool print(string str, int i , int n){

    if(i == n/2) return true;

    if(str[i] != str[n-i-1]){
        return false;
    }

    return print(str, i+1,   n);
}


int main(){

    string str = "JAGGY";
    int i = 0;
    int n = str.length();
    bool result = print(str, i , n);
    if(result){
        cout<<"Given string is Palindrome";
    }
    else{
        cout<<"Given string is not palindrome";
    }
    
}

/* for only alpha numeric character 
    string filtered;
    for(char c : s){
        if(isalnum(c)){
            filtered += tolower(c);
        }
    }
    int left = 0;
    int right = filtered.length() -1;
    while(left < right){

        if(s[left] != s[right]) return false;
        left++;
        right--;
    }

    return true;
*/    