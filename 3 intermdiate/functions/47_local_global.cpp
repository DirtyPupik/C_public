#include <iostream>

using std::cout;
using std::cin;
using std::string;

// Local Variables - declared inside function or {}
// Global Variables -declared outside of all functions.
// G.V are less secure
// Scope Resolution Operator    '::'    routes to global scope


// global
int myNum = 1;

void printNum(){

    // Scope Resolution Operator    '::'    global scope
    cout << ::myNum << '\n';

    // local to printNum()
    int myNum = 2;
    cout << myNum << '\n';
}

int main(){
    printNum();

    // local to main()
    int myNum = 3;
    cout << myNum << '\n';

    return 0;
}