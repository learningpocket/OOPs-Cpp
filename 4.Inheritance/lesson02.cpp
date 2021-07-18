#include <iostream>

using namespace std;

class A{
    int x1;
protected:
    int y1;
public:
    int z1;
    void getxyz1(){
        cout << "Enter x1 : "; cin >> x1;
        cout << "Enter y1 : "; cin >> y1;
        cout << "Enter z1 : "; cin >> z1;
    }
    void putxyz1(){
        cout <<endl<< "x1 : " << x1 << "\t";
        cout << "y1 : " << y1 << "\t";
        cout << "z1 : " << z1 << "\t";
    }

};

class B : private A {            // Public MODE
    int x2;
protected:
    int y2;
public:
    int z2;
    void getxyz(){
        cout << "Enter x2 : "; cin >> x2;
        cout << "Enter y2 : "; cin >> y2;
        cout << "Enter z2 : "; cin >> z2;
        getxyz1();
    }
    void putxyz(){
        cout <<endl<< "x2 : " << x2 << "\t";
        cout << "y2 : " << y2 << "\t";
        cout << "z2 : " << z2 << "\t";
        putxyz1();
    }

    void puty1(){
        cout <<endl<< "y1 : " << y1;
    }

};

int main(){

    B obj;

    obj.getxyz();
    obj.putxyz();

    return 0;
}