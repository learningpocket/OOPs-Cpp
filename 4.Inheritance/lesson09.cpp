#include <iostream>

using namespace std;

class A{
    int a;
public:
    A(){
        a = 10;
    }

    friend class B;
};

class B{
    int b;
public:
    void showA( A &obj){
        cout << " A::a = " << obj.a; 
    }
};

int main(){

    A obj1;
    B obj2;

    obj2.showA(obj1);

    return 0;
}