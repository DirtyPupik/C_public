#include <iostream>

using std::cout;
using std::cin;
using std::string;

// inheritance - 
// a class can recieve atrributes and methods from another class
// the receiving is the child class
// the one beeing inherited from is the parent class
// it helps reuse similar code

// animal will be the parent class
class Animal {
    public:
        bool alive = true;

        void eat(){
            cout << "this animal is eating\n";
        }
};

// dog will be the child class
class Dog : public Animal{
    // bark is uniqe to dog
    public:
    void bark(){
        cout << "bark!\n";
    }
};


int main(){

    Dog chili;

    cout << chili.alive << '\n';
    chili.eat();

    return 0;
}