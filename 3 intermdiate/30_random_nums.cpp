#include <iostream>
#include <ctime>

using std::cout;
using std::cin;
using std::string;

int main(){
    // rand generates random num between 0 and RAND_MAX
    // it will allways generate the same series of random numbers, it is not true random
    cout << rand() % 33 + 1 << '\n'; //  between 1 and 33    

    // we can seed the random function with a value that changes all the time like current time
    // this will generate a series of different random numbers every time
    srand(time(0));    
    cout << rand() % 33 + 1 << '\n';

    return 0;
}