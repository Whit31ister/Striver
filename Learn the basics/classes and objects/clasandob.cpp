#include<bits/stdc++.h>
using namespace std;

// class creation
class numbers{
public:
    int a;
    int b;
    int c;
//class function
    void outting(){
        cout << "A:" << a << endl;
        cout << "B:" << b << endl;
        cout << "C:" << c << endl;
    } // lmao
};
//main function
int main(){    
    numbers num; // object declaire 
//variable dec?
     int A;
     int B;
     int C;
//input for objects
     cout << "Enter A: ";
     cin >> A;
     cout << "Enter B: ";
     cin >> B;
     cout << "Enter C: \n";
     cin >> C;
//asign or something
     num.a = A;
     num.b = B;
     num.c = C;
//class wale function ka call
     num.outting();

    return 0;
}