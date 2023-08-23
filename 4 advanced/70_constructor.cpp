#include <iostream>

using std::cout;
using std::cin;
using std::string;

// constructor - a special method that is automaticaly called when an object is instantiated

class Student {
    public:
        int age2;
        string name2;
    
    // the constructor has the same name as the class
    // it can be used to assign values
    Student(string name , int age) {
        this->name2 = name;
        this->age2 = age;
        
    }
};

int main(){

    // because theres a constructor for assiging the initial 
    // values we can insert them in initialization
    Student student1("bob" , 45);

    return 0;
}