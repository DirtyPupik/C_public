#include <iostream>

using std::cout;
using std::cin;
using std::string;

int main(){
    // sizeof() - returns size in bytes

    // size of double is 8by, int is 4by
    double gpa = 2.6;
    cout << sizeof(gpa) << " Bytes for double (int is 4)\n";

    // size of string is 32by, this is only the size of the address to hold the string!
    string name = "yahel";
    cout << sizeof(name) << " Bytes for string (address)\n";

    // size of char is 1by
    char grade = 'F';
    cout << sizeof(grade) << " Bytes for char\n";

    // size of bool is 1by
    bool alive = true;
    cout << sizeof(alive) << " Bytes for boolean\n";


    // array of 5 chars (string) will be 6by since each one is 1by + null byte terminator
    char grades[] = {"ABCDE"};
    // there are 5 chars in the array but size is 6 because of '\0' - a null char is added at the end
    cout << sizeof(grades) << " Bytes for array (depends on type)\n";
    // this can be usefull to calaulate the size of an array
    cout << sizeof(grades)/sizeof(grades[0]) << " items inside the array\n";


    return 0;
}