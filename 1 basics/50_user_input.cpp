#include <iostream>

// cout << (insertion operator)
// cin >> (extraction operator)
// if shit goes nuts after user input, it might be of a new line char '\n'

int main(){
    std::string name;   // declare a variable
    std::cout << "whats your name? ";
    std::cin >> name;   // accept user input and define the variable
    // cin will not accept spaces!
    std::cout << "hello " << name << '\n';

    // in order to accept spaces we will need to use getline() function
    // using getline after cin must have use of >> std::ws to remove whitespaces
    // after input in cin theres a \n newline which the getline takes in if we dont
    
    std::string fullName;
    std::cout << "whats your full name? ";
    std::getline(std::cin >> std::ws, fullName);
    std::cout << "heyyy " << fullName << '\n';


    return 0;
}