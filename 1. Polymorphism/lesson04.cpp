#include<iostream>

using namespace std;

void interest (float principal, int time, float rate)  // 1
{
    cout << endl << "Principal : " << principal << "\tRate : " << rate 
         << "\t Time : " << time << "yrs";
    cout << " #1 Simple Interest  : " << principal * rate * time << endl;
}

void interest (float principal, int time)              //2
{
    cout << endl << "Principal : " << principal << "\tRate : 0.05"  
         << "\t Time : " << time << "yrs";
    cout << " #2 Simple Interest  : " << principal * 0.05 * time << endl;
}

void interest (float principal, float rate)            //3
{
    cout << endl << "Principal : " << principal << "\tRate : " << rate 
         << "\t Time : 2yrs";
    cout << " #3 Simple Interest  : " << principal * rate * 2 << endl;
}

void interest (int time, float rate)                   //4
{
    cout << endl << "Principal : 2000" << "\tRate : " << rate 
         << "\t Time : " << time << "yrs";
    cout << " #4 Simple Interest  : " << 2000. * rate * time << endl;
}

void interest (float principal)                        //5
{
    cout << endl << "Principal : " << principal << "\tRate : 0.05"
         << "\t Time : 2yrs";
    cout << " #5 Simple Interest  : " << principal * 0.05 * 2 << endl;
}

int main(){

    cout << "case 1";
    interest(2000);
    cout << "case 2";
    interest(2500.0F,3);
    cout << "case 3";
    interest(2500.0F,3,0.11F);
    cout << "case 4";
    interest(2500.0F,0.12F);
    cout << "case 5";
    interest(6,0.07F);

    return 0;
}