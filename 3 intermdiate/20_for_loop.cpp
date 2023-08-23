#include <iostream>

using std::cout;
using std::cin;
using std::string;

int main(){
    // for loops can recieve up to 3 statements - index, condition, incrementor / decrem..
    for (int i=9 ; i <=15 ; i++) {
        // 13 is unlucky number
        if (i == 13) {
            continue;
        }
        cout << i << '\n';
    }
    return 0;
}