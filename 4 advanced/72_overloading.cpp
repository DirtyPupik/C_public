#include <iostream>

using std::cin;
using std::cout;
using std::string;

// constructor overloading

class Pizza
{
public:
    string topping1;
    string topping2;

    // we can create serval constructor to allow inserting different number of arguments
    // during the object initiation
    // the empty one is for plain pizza
    Pizza(){};
    Pizza(string topping1)
    {
        this->topping1 = topping1;
    };
    Pizza(string topping1, string topping2)
    {
        this->topping1 = topping1;
        this->topping2 = topping2;
    };
};

int main()
{

    Pizza pizza0;
    Pizza pizza1("pineapple");
    Pizza pizza2("duck", "onion");

    cout << pizza1.topping1 << '\n';
    cout << pizza2.topping2;

    return 0;
}