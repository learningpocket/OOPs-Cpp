#include<iostream>

using namespace std;

class Salesman{
        int id;
        char name[25];
        float target, salesMade, commision;
        void calCommision(){  // MUTATOR
            float comm = 0;
            if(target <= salesMade)
                comm = salesMade * 0.02;
            
            commision = comm;
        }
    public:
        void enterInfo(){ // MUTATOR
            cout << "Enter Salesman id : " ;  cin >> id;
            cout << "Enter Salesman name : "; cin >> name ;
            cout << "Enter target : " ; cin >> target;
            cout << "Enter sales made : " ; cin >> salesMade;
        }
        void getInfo(){ //ACCESSORS
            cout << "Salesman id : " << id << endl;
            cout << "Salesman name : " << name << endl;
            cout << "target : " << target << endl;
            cout << "sales made : " << salesMade << endl;
        }
        float addSales(float s){ // MUTATOR
            salesMade += s;
            return salesMade;
        }
};


int main(){

    Salesman obj1,obj2;

    cout<< "Enter id :";
    // cin >> obj1.id;

    // obj1.enterInfo();
    // obj1.getInfo();

    // obj2.enterInfo();
    // obj2.getInfo();

    return 0;
}