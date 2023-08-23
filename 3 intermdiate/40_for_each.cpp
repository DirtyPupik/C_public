#include <iostream>

using std::cout;
using std::cin;
using std::string;

int main(){

    char grades[] = {'A' , 'B' , 'C' , 'D' , 'F'};

    // For Each Loop
    // there is less flexibilty but also less syntax
    for (char grade : grades) {
        cout << grade << '\n';
    }    

    return 0;
}