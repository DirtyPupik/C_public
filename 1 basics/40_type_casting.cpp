#include <iostream>
#include <stdio.h>
#include <string.h>

using std::cout;
using std::cin;
using std::string;

int main(){
    // there is implicit and explicit casting
    // implicit is automated
    // explicit is user made
    // explicit example - we cast into integer
    double x = (int) 3.141;
    cout << x;
    // type conversions is also nessecery in integer devision
    return 0;
}