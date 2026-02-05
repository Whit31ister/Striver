#include<bits/stdc++.h>
using namespace std;

vector<pair<int, int>> get_pairs(){
    vector<pair<int, int>> v3;
    v3.emplace_back({1,2});
    v3.emplace_back({4,3});
    return v3;
} //dawdawd


int main(int argc, char const *argv[])
{
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);
    cout << v[0] << " " <<  v[1] << endl; 
    
    vector<pair<int, int>> v1;
    v1.push_back({1,2});
    v1.emplace_back(2,6);
    return v;
    
    return 0;
}
