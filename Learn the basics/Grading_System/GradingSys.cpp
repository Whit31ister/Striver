#include<bits/stdc++.h>
using namespace std;

int main(){
    int marks;
    cin >> marks;
    if(marks < 25){
        cout << "F";
    } else if (marks > 25 && marks < 45)
    {
        cout << "E";
    } else if (marks > 45 && marks < 49)
    {
        cout << "D";
    }else if (marks > 49 && marks < 59)
    {
        cout << "C";
    }
    // it continues like this
    cout << "Heloo world";

    return 0;
}