#include<iostream>

using namespace std;

class Rectangle {           // GLOBAL CLASS
        float l,b;
        float area(){       // ACCESSOR
            return l*b;
        }
    public:
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

    Rectangle obj;

    obj.getInfo(5,6);
    obj.putInfo();

    return 0;
}