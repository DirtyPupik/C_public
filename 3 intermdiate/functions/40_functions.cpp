#include <iostream>

using std::cout;
using std::cin;
using std::string;

// Functions
// function is a block of reuseable code
// void type is for Non-Value Returning functions
// functions MUST be declared before the main() -   no hoisting!
// functions CAN be defined after the main() for readablity


// name is declared globaly
string name = "yahli";  

// declaring the function
void myFunction(int age);      

int main(){
    int age = 30;       
    // age is declared locally to main(), therefore we need to pass it when 
    // calling myFunction inside main()
    // also we need to supply the info in decleration and definition
    myFunction(age);
    return 0;
}

// defining the function
// age is local to main() so it must be supplied
// name is global scope
void myFunction(int age){   
    cout << "hello " << name << " you are " << age << " years old";
};      
