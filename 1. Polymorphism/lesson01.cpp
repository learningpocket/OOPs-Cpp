#include<iostream>

using namespace std;

void fun(int a, int b){
    cout << "First fun() was called " << endl;
    cout << a + b << endl;
} 

void fun(float a, float b){
    cout << "Second fun() was called" << endl;
    cout << a + b << endl;  
}

void fun(int a){
    cout << "Third fun() was called " << endl;
    cout << a << endl;
} 


int main(){

    int x=1,y=2;
    float p=1,q=2;

    fun(x,y); // 1st
    fun(p,q); // 2nd
    fun(x);


    return 0;
}