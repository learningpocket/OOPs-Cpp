#include<iostream>

using namespace std;

class Rectangle {           // GLOBAL CLASS
        float l,b;
        float area(){       // ACCESSOR
            return l*b;
        }
    public:
        Rectangle(){        // Default CONSTRUCTOR
            cout << " Constructor was called !!" << endl;
            l = 0 ;
            b = 0 ;
        }

        void getInfo(){     // MUTATOR
            cout << endl << "Enter Length : "; cin >> l;
            cout << "Enter Breadth : "; cin >> b;
        }
        void getInfo(float l,float b){     // MUTATOR 
            this->l = l ;
            this->b = b;
        }
        void putInfo(){     // ACCESSOR
            cout << endl << "**** RECTANGLE INFO ****";
            cout << endl << "Length : " << l << "\tBreadth : " << b;
            cout << endl << "Area : " << this->area();
        }
};

int main(){

    Rectangle obj,obj1,obj3;

    obj.putInfo();
    obj1.putInfo();

    return 0;
}