#include<bits/stdc++.h>
using namespace std;

int main(){

    int arry[5];
    for (size_t i = 0; i < 4; i++)
    {
        cin >> arry[i];
    }
    arry[2] += 10;
    cout << arry[2]; // output
    return 0;
}