#include <iostream>

using std::cout;
using std::cin;
using std::string;

    // Recursion
    // a programming technique where a function
    // invokes itself from within
    // break a complex concept into a repeatable single
    
    // (iterative vs recursive)

    // advantages
    // less code and is cleaner
    // useful for sorting and searching algorithms

    // disadvantages
    // uses more memory
    // slower

// this is iterative approach
// we invoke the walk function from main
void walkIteration(int steps) {
    for (int i = 0 ; i < steps ; i++) {
        cout << "you take a step (iteration)\n";
    }
};

// this is recursive approach
// it can cause stack overflow if ran endlessly
// invocation is coming from main but it continue to invoke itself
void walkRecursion(int steps) {
    if (steps > 0) {
        cout << "you take a step (recursion)\n";
        walkRecursion(steps -1);
    }
}


// iterative factorial
int itfac(int num) {
    int result = 1;
    for (int i = 1 ; i <= num ; i++) {
        result = result * i;
    }
    return result;
};

// recursive factorial
int refac(int num) {
    if (num > 1) {
        return num * refac(num - 1);
    } else {
        return 1; 
    }
}

int main(){
    walkIteration(3);
    walkRecursion(3);

    cout << itfac(10) << '\n';
    cout << refac(10) << '\n';


    return 0;
}