#include<iostream>

using namespace std;

class Rectangle {           // GLOBAL CLASS
        float l,b;
        float area(){       // ACCESSOR
            return l*b;
        }
        static int sides; // declare
    public:
        static char type[20];

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
        static void rectInfo();
};

int Rectangle::sides = 4; 
char Rectangle::type[] = "Quadriteral";

void Rectangle::rectInfo(){
    cout << endl << "**** INFO OF RECTANGLE ****";
    cout << endl << "SIDES : " << sides << "\tTYPE : " << type;
}


int main(){

    Rectangle obj;

    obj.rectInfo();

    Rectangle::rectInfo();

    return 0;
}