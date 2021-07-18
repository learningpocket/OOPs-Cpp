#include <iostream>

using namespace std;

class A{
public:
    int a;   
};

class B: virtual public A{
public:
    int b; 
};

class C: virtual public A {
public:
    int c;  
};

class D: public B, public C {
public:
    int d;  
};

int main(){

    D obj;

    cout << " Enter a : ";
    cin >> obj.a;
    cout << " Enter b : ";
    cin >> obj.b;
    cout << " Enter c : ";
    cin >> obj.c;
    cout << " Enter d : ";
    cin >> obj.d;

    cout << " \n a : " << obj.a;
    cout << " \n b : " << obj.b;
    cout << " \n c : " << obj.c;
    cout << " \n d : " << obj.d;


    return 0;
}