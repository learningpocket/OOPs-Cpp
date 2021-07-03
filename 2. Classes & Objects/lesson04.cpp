#include<iostream>

using namespace std;

class Rectangle {        // GLOBAL CLASS
        float l,b;
        float area(){  // ACCESSOR
            return l*b;
        }
    public:
        void getInfo(){ // MUTATOR
            cout << "Enter Length : "; cin >> l;
            cout << "Enter Breadth : "; cin >> b;
        }
        void putInfo(){ // ACCESSOR
            cout << endl << "**** RECTANGLE INFO ****";
            cout << endl << "Length : " << l << "\tBreadth : " << b;
            cout << endl << "Area : " << area();
        }
};

Rectangle objG;

void rect(){
    cout << endl << "Function- not of class";
    objG.getInfo();
    objG.putInfo();
}


int main(){

    objG.getInfo();
    objG.putInfo();

    rect();

    return 0;
}