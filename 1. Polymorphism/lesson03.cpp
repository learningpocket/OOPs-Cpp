#include<iostream>

using namespace std;

void interest (float principal, int time=5, float rate=0.05){
    cout << endl << "Principal : " << principal << "\tRate : " << rate 
         << "\t Time : " << time << "yrs";
    cout << " Simple Interest  : " << principal * rate * time << endl;
}

int main(){

    interest(2500,3,0.04);
    interest(2500,4);
    interest(2500,0.03);

    return 0;
}