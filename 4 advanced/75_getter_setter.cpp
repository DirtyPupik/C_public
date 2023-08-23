#include <iostream>

using std::cout;
using std::cin;
using std::string;

// Getters and Setters
// the idea is abstraction - hiding unnecessary data from outside the class

class Stove {
    private:
    int privateTemp = 10;

    public:
        int temp = 0;
        
        int getPrivateTemp() {
            return privateTemp;
        };
        
        void setPrivateTemp(int temperature) {
            this->privateTemp = temperature;
        } 
};


int main(){

    Stove stove;
    
    // because temp attribute is public, it can be changed from outside
    stove.temp = 99999;
    
    // private temp cannot be changed or accessed directly
    cout << stove.temp << '\n' << stove.getPrivateTemp();

    // it can be set with a setter
    stove.setPrivateTemp(42069);
    cout << '\n' << stove.getPrivateTemp();

    return 0;
}