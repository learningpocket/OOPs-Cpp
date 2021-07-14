#include<iostream>

using namespace std;

class Rectangle {           // GLOBAL CLASS
        
        float area(){       // ACCESSOR
            return l*b;
        }
    public:
        float l,b;

        Rectangle(float l=0, float b=0){    // Parameterized Constructor with default argument
            cout << " Parameterized Constructor was called !!" << endl;
            this->l = l;
            this->b = b;
        }

        Rectangle(Rectangle &obj){  // Copy Constructor
            cout << " Copy Constructor was called !!" << endl;
            l = obj.l;
            b = obj.b;
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

    Rectangle obj1(2,3);
    Rectangle obj2 = obj1;

    obj1.putInfo();
    obj2.putInfo();

    return 0;
}