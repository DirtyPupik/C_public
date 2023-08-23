#include <iostream>

using std::cout;
using std::cin;
using std::string;

// few things about passing an array into a function:

// 1. when a function receives array, it decays into a pointer
// and the function no longer knows the size of the array

// 2. when passing the array into the function call, no need for []


double getTotal(double prices[] , int arraySize){

    double total = 0;

    for (int i = 0 ; i < arraySize ; i++) {
        total += prices[i];
    }

    cout << "&prices    in func: " << &prices << '\n';
    cout << "&prices[0] in func: " << &prices[0] << '\n';
    cout << "&prices[1] in func: " << &prices[1] << "\n\n";
    
    return total;
}

int main(){
    double prices[] = {12.44 , 31.2 , 11.01};
    int arraySize = sizeof(prices)/sizeof(prices[0]);

    cout << "&prices    in main: " << &prices << '\n';
    cout << "&prices[0] in main: " << &prices[0] << '\n';
    cout << "&prices[1] in main: " << &prices[1] << "\n\n";

    double total = getTotal(prices , arraySize);

    cout << total << "$\n";

    return 0;
}