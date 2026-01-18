#include<bits/stdc++.h>
using namespace std;
// Write a program that takes an input of age
// and prints if you are adult or not

int main(){
    int adult_age = 18;
    int user_age;
    cin >> user_age;
    if(user_age >= adult_age){
        cout << "You are an Adult";
    } else {
        cout << "You are a Minor";
    }
    
    return 0;
}