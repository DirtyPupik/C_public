#include <iostream>

using std::cout;
using std::cin;
using std::string;

// a function tamplate can accept different types of data
// also return type can be auto in case return is double or int

template <typename T , typename U>
auto max(T x , U y) {
    return (x > y) ? x : y;
}

int main(){
    cout << max('0' , 111.21) << '\n';
    return 0;
}