#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);
    cout << v[0] << " " <<  v[1] << endl; 
    
    vector<pair<int, int>> v1;
    v1.push_back({1,2});
    v1.emplace_back(2,6);
    
    return 0;
}
