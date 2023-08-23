#include <iostream>

using std::cout;
using std::cin;
using std::string;

int main(){
    // dynamic memory
    // memory allocated after program is already compiled and running
    // allocate memory in the heap rather than the stack
    // use's 'new' keyword
    // usefull when we dont know how much memory we will need like user input - flexibility

    // create a pointer
    int *pNum = NULL;

    // allocate heap memory
    pNum = new int;

    *pNum = 30;
    cout << "address: " << pNum << '\n';
    cout << "pointer: " << *pNum << '\n';

    // free the memory
    delete pNum;

    return 0;
}