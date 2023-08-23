#include <iostream>

// https://www.youtube.com/watch?v=-TkoO8Z07hI


// main function initialize first with running the script
// main is a function, the return type of main() is integer

int main()
{
    // std is the standard library namespace
    // :: is scope resolution operator
    // cout is an object out of the std namespace
    // << is insertion operator
    std::cout << "hallo welt"; // std = standard , cout = character output - standard char output
    std::cout << std::endl;     // endl - end line will flush the output buffer, \n will not
    std::cout << "hallo wieder" << '\n'; 

    // variables
    // integers
    int x;           // decleration - usefull when accepting user input
    x = 5;           // assignment
    int y = 3;       // dec and assign can be done in same line:
    std::cout << x << '\n' << y << '\n'; 

    // double (floating point, decimal)
    double gpa = 3.6;
    std::cout << gpa << '\n';

    // char - single character
    char singleChar = 'A';
    char singleChar2 = 100;  // 100 in decimal converted by ascii format is 'd'
    // in case more than 1 char is supplied, will cause overflow error, will store only last letter 
    std::cout << singleChar << '\n';
    std::cout << singleChar2 << '\n';

    // boolean
    bool alive = true;

    // string
    // strings is an object that stores sequences of text 
    std::string name = "yahli";

    // declaring as constant
    const double pi = 3.1415926;

    // Namespaces
    // provide a solution for preventing name conflicts
    




    return 0;
}