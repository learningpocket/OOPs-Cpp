#include<iostream>

using namespace std;

void fun(int a){
    cout << "First fun() was called " << endl;
    cout << a << endl;
} 

// void fun(double a){
//     cout << "double fun() was called " << endl;
//     cout << a << endl;
// } 

void fun(float a){
    cout << "Second fun() was called" << endl;
    cout << a << endl;  
}

// void fun(char a){
//     cout << "Third fun() was called " << endl;
//     cout << a << endl;
// } 


int main(){
 // F U L UL/LU
    fun(2.3F);

    return 0;
}