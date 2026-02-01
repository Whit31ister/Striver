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

class child: public Demo{
    void access(){
        //a = 10;
        //b = 20;
        c = 30;
    }
};

int main(){
Demo d;
child c;
d.set();
d.show();
//d.a = 5;
//d.b = 10;
d.c = 17;
cout << d.c;
return 0;
}
//