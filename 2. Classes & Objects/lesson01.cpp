#include<iostream>

using namespace std;

class Salesman{
    private:
        int id;
        char name[25];
        float target, salesMade, commision;
        void calCommision();
    
    public:
        void enterInfo();
        void getInfo();
        float addSales(float s);
};

void Salesman::enterInfo(){
    cout << "Enter Salesman id : " ;  cin >> id;
    cout << "Enter Salesman name : " ; gets(name);
    cout << "Enter target : " ; cin >> target;
    cout << "Enter sales made : " ; cin >> salesMade;
}

void Salesman::getInfo(){
    cout << "Salesman id : " << id;
    cout << "Salesman name : " ; puts(name);
    cout << "target : " << target;
    cout << "sales made : " << salesMade;
}

float Salesman::addSales(float s){
    salesMade += s;
    return salesMade;
}

void Salesman::calCommision(){
    float comm = 0;
    if(target <= salesMade)
        comm = salesMade * 0.02;
    
    commision = comm;
}

int main(){

    return 0;
}