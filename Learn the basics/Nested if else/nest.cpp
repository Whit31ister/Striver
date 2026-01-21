#include<bits/stdc++.h>
using namespace std;

int main(){
    int a;
    cin >> a;
    if(a<18){
        cout << "Not eligible for job";
    }else if(a>=18){
        cout << "Eligible for job"; 
    }else if(a >= 55 && a <= 57){
        cout << "Eligible for job, but retirement soon";
    }else{
        cout << "Retirement time";
    }

    return 0;
}