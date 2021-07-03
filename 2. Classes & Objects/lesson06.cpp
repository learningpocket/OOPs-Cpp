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
        void getInfo(float length,float breadth){     // MUTATOR
            l = length ;
            b = breadth;
        }
        void putInfo(){     // ACCESSOR
            cout << endl << "**** RECTANGLE INFO ****";
            cout << endl << "Length : " << l << "\tBreadth : " << b;
            cout << endl << "Area : " << area();
        }
};

int main(){
    
    Rectangle r[3];

    r[0].getInfo(6,6);
    r[1].getInfo(7,7);
    r[2].getInfo(8,8);

    for(int i=0; i<3;++i){
        r[i].putInfo();
    }

    return 0;
}