#include <iostream>

using std::cout;
using std::cin;
using std::string;

int main(){
    
    // do while loop
    // do some code FIRST, then repeat if condition is true

    int num;

    do {
        cout << "enter a positive num\n";
        cin >> num;        
        } while(num < 0);
    
    cout << "\nnum is: " << num;

    return 0;
}