#include <iostream>

using std::cout;
using std::cin;
using std::string;

int main(){

    // Memory Adress
    // location in memory where data is stored
    // can be accessed with &

    bool tired = true;
    // char name[] = "yahel";  // suppose to be 5+1=6 bytes
    bool high = true;
    bool alive = true;
    int age = 30;
    char grade = 'F';

    // turn into decimal and ull see that the distance between the address is the number of bytes allocated
    // to the address of that type (eg: bool=1, int=4, double=8)
    cout << &tired << '\n';
    // cout << &name << '\n';
    cout << &high << '\n';
    cout << &alive << '\n';
    cout << &age << '\n';
    cout << (void *) &grade << '\n';

    /*
    the reason for (void *):
    
    By default, the << operator of std::ostream (which is the base class of std::cout) treats pointers
    to character types (char*) as C-style strings and attempts to output the characters until it
    encounters a null terminator ('\0'). It interprets the pointer as a string, rather than printing
    the actual memory address.

    In the code snippet, grade is defined as a char, and when &grade is passed to cout, it is a pointer
    to a single character. By casting it to a void*, we are indicating to the cout that we want to treat
    the pointer as a generic memory address, rather than a C-style string. 
    */
    

    // when passing arguments to a function, the function will create a copy of the original inside it
    // in order to change the original variable, reference to address (&)

    return 0;
}