#include <iostream>

using std::cout;
using std::cin;
using std::string;

int main(){

    // here we see example of blocking user from proceeding without entering anything
    string name;
    while (name.empty()) {
        cout << "enter name\n";
        std::getline(cin , name);
    }
    cout << "hello " << name;

    // do while loop
    // do some code FIRST, then repeat if condition is true
    do {
        cout << "\nthis is a gay person's name, enter new name\n";
        std::getline(cin >> std::ws , name);
        }
        while(name == "yogev");
    
    cout << "\ncool name";

    return 0;
}