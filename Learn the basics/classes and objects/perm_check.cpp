#include<bits/stdc++.h>
using namespace std;

class Demo{
private: 
    int a;
protected: 
    int b;
public: 
    int c;
    void set(){
        a = 10;
        b = 20;
        c = 30;
    }
    void show(){
        cout << a << " " << b << " " << c << endl;
}
};

int main(){
Demo d;
d.set();
d.show();
return 0;
}