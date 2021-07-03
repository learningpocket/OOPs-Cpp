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

void getPutObj(Rectangle o){ // Call by Value
    o.getInfo();
    o.putInfo();
}

void getPutOrignalObj(Rectangle *o){ // Call by Reference
    o->getInfo();
    o->putInfo();
}

int main(){

    Rectangle Obj;

    Obj.getInfo(4,5);
    
    getPutOrignalObj(&Obj);

    Obj.putInfo();

    return 0;
}