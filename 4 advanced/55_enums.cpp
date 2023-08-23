#include <iostream>

using std::cout;
using std::cin;
using std::string;

// enums - enumerations
// user defined data type that consists of name:integer pairs
// like python dictionary

// first declare enum set
enum Day {sunday = 1 , monday = 2 , tuesday = 3};

int main(){

    // for example, switch cannot take strings but it can take enums
    // assign the enum value to 'today'
    Day today = sunday;

    switch (today)
    {
    case sunday:
        cout << "its sunday";
        break;
    case monday:
        cout << "its monday";
        break;
    case tuesday:
        cout << "its tuesday";
        break;
    
    default:
        break;
    }

    return 0;
}