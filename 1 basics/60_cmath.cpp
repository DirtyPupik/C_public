#include <iostream>
#include <cmath>

// cmath is a header library that contains useful math functions

int main() {
    using std::cout;
    using std::cin;
    // finding the hypotenuse!
    double a;
    double b;
    double c;

    cout << "enter first leg length: " << '\n';
    cin >> a;

    cout << "enter second leg length: " << '\n';
    cin >> b;

    // note - this bullshit can be done with **0.5 and **2
    c = sqrt(pow(a,2)+pow(b,2));
    cout << "the hypotenuse lenght is: " << c;

    return 0;
}