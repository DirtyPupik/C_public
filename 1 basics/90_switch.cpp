#include <iostream>

using std::cout;
using std::cin;

int main(){    
    char grade;

    cout << "what letter grade? (A/B/C/F)";
    cin >> grade;

    switch(grade){
        case 'A':
            cout << "great";
            break;
        
        case 'B':
            cout << "good";
            break;

        case 'C':
            cout << "fine..";
            break;
        
        case 'F':
            cout << "loser";
            break;

        default:
            cout << "not a valid input";
    }

    return 0;
}