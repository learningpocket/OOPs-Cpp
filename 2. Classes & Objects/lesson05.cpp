#include<iostream>

using namespace std;



int main(){
    class Rectangle {    // LOCAL CLASS
        float l,b;
        float area(){
            return l*b;
        }
    public:
        void getInfo(){
            cout << "Enter Length : "; cin >> l;
            cout << "Enter Breadth : "; cin >> b;
        }
        void putInfo(){
            cout << endl << "**** RECTANGLE INFO ****";
            cout << endl << "Length : " << l << "\tBreadth : " << b;
            cout << endl << "Area : " << area();
        }
    };

    

    return 0;
}