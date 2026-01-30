#include<bits/stdc++.h>
using namespace std;

int star_pattern(int count){
    int j = 0;
    int i = 0;
    for (i = 0; i < count; i++)
    {
        for (j = 0; j< i; j++)
        {
            cout << " * ";
        }
        cout << endl;
    }
}

int pyramid_pattern(int count){
    for (int i = 1; i <= count; i++)
    {
        for (int space = 1; space <= count-i; space++)
        {
            cout << " ";
        }
        for (int star = 1; star <= i; star++)
        {
            cout << "* ";
        }
        cout << endl;   
    }
}

int main(){
    int j = 0;
    int i = 0;
    int count;
    cin >> count;
    star_pattern(count);
    cout << endl;
    cout << endl;
    cout << endl;
    pyramid_pattern(count);
    return 0;
}