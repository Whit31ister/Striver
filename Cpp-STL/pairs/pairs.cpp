#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    pair<int, int> p;
    cin >> p.first >> p.second;
    cout << p.first << " " << p.second << endl;
    
    // Nesting

    pair<int, pair<int, int>> p2;
    cin >> p2.first >> p2.second.first >> p2.second.second; 
    cout << p2.first << " " <<  p2.second.first << " " <<  p2.second.second; 

    return 0;
}
