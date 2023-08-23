#include <iostream>

using std::cout;
using std::cin;
using std::string;

double squereArea(double length){
    return length * length;
}

int main(){
    double length = 6.3;
    double area = squereArea(length);
    cout << "the area is " << area << "cm^2";
    return 0;
}