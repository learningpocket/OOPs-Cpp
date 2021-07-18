#include <iostream>

using namespace std;

class A{
public:
    int x;   
};

class B{
public:
    int x; 
};

class C : public A,public B{
public:
    int y;  
};

int main(){

    C obj;

    cout << " Enter y : ";
    cin >> obj.y;

    cout << " Enter x of A : ";
    cin >> obj.A::x;
    cout << " Enter x of B : ";
    cin >> obj.B::x;

    cout << " \n y : " << obj.y;
    cout << " \n x of A : " << obj.A::x;
    cout << " \n x of B : " << obj.B::x;


    return 0;
}