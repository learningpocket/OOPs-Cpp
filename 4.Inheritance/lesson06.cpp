#include <iostream>

using namespace std;

class Animal{
    public : 
        virtual void sound(){       // virtual function
            cout<<"\n Animal class : make sound ";
        }

        void sleep(){
            cout<<"\n Animal class : sleeping ";
        }
};

class Dog: public Animal{
    public:
    virtual void sound(){
        cout<<"\n Dog class : bow bow ";
    }
};

class Cat: public Animal{
    public:
    virtual void sound(){
        cout<<"\n Cat class : meow meow ";
    }
};

int main(){

    Dog dog;
    Cat cat;

    dog.sleep();
    dog.sound();

    cat.sleep();
    cat.sound();

    return 0;
}