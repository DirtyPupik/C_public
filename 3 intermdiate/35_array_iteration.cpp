#include <iostream>

using std::cout;
using std::cin;
using std::string;

int main(){
    char grades[] = {'A' , 'B' , 'C' , 'D' , 'F'};

    // arrays can be iterated with for loop
    for (int i = 0 ; i < sizeof(grades)/sizeof(grades[0]) ; i++) {
        cout << grades[i] << '\n';
    }

    // arrays can alternetivly be iterated with for each - see section 40
    

    return 0;
}