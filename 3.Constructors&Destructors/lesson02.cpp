#include<iostream>

using namespace std;

class Rectangle {           // GLOBAL CLASS
        float l,b;
        float area(){       // ACCESSOR
            return l*b;
        }
    public:
        Rectangle(){        // Default CONSTRUCTOR
            cout << " Default Constructor was called !!" << endl;
            l = 0 ;
            b = 0 ;
        }

        Rectangle(float l, float b){    // Parameterized Constructor
            cout << " Parameterized Constructor was called !!" << endl;
            this->l = l;
            this->b = b;
        }

        void getInfo(){     // MUTATOR
            cout << endl << "Enter Length : "; cin >> l;
            cout << "Enter Breadth : "; cin >> b;
        }
        // void getInfo(float l,float b){     // MUTATOR 
        //     this->l = l ;
        //     this->b = b;
        // }
        void putInfo(){     // ACCESSOR
            cout << endl << "**** RECTANGLE INFO ****";
            cout << endl << "Length : " << l << "\tBreadth : " << b;
            cout << endl << "Area : " << this->area();
        }
};

int main(){

    Rectangle obj,obj1;
    Rectangle obj3(2,3);

    obj.putInfo();
    obj1.putInfo();
    obj3.putInfo();

    return 0;
}