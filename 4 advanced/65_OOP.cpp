#include <iostream>

using std::cout;
using std::cin;
using std::string;

// Object - a collection of attributes and methods
// phone attributes - serial, version, speaker type
// phone methods - call, sms, play game
// the difference from struct is that in structs the default 
// accessibility is public, whereas in classes the default is private.

class Human {
    // a public access modifier
    public:

        string name;
        int age;

        void eat() {
            cout << "eating\n";
        };

        void sleep() {
            cout << "sleeping\n";
        };
};


int main(){

    Human human1;
    

    return 0;
}