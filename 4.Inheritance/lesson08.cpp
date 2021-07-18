#include <iostream>

using namespace std;

class Animal{       //  INTERFACE
    public : 
        virtual void sound()=0; // PURE VIRTUAL FUNCTION

};

class Dog: public Animal{       // CONCRETE CLASS
    public:
    virtual void sound(){
        cout<<"\n Dog class : bow bow ";
    }
};

class Cat: public Animal{       // CONCRETE CLASS
    public:
    virtual void sound(){
        cout<<"\n Cat class : meow meow ";
    }
};

int main(){

    Dog dog;
    Cat cat;

    Animal *animal = new Cat();

    animal->sound();
    // dog.sleep();
    // dog.sound();

    // cat.sleep();
    // cat.sound();

    return 0;
}