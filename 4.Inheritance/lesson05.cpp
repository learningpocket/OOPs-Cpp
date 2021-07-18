#include <iostream>

using namespace std;

class A {
public:
    int a; 
    A(){
        cout << "\n Constructor of class A ";
    } 
    ~A(){
        cout << "\n Destructor of class A ";
    } 
};

class B: public A {
public:
    int b; 
    B(){
        cout << "\n Constructor of class B ";
    }
    ~B(){
        cout << "\n Destructor of class B ";
    }
};

class C: public B {
public:
    int c;  
    C(){
        cout << "\n Constructor of class C ";
    }
    ~C(){
        cout << "\n Destructor of class C ";
    }
};

int main(){

    C obj;

    return 0;
}