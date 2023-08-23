#include <iostream>

using std::cout;
using std::cin;
using std::string;

    void bakePizza(){
        cout << "here is your pizza\n";
    }

    void bakePizza(string toppings){
        cout << "here is your " << toppings <<" pizza\n";
    }


int main(){
    string toppings = "paperoni";

    // two different functions can have the same name
    // as long as the arguments are different
    // thus function signature is defined
    bakePizza();
    bakePizza(toppings);

    return 0;
}