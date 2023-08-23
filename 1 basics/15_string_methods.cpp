#include <iostream>

using std::cout;
using std::cin;
using std::string;


int main(){
    string name;
    cout << "enter name\n";
    std::getline(cin, name);

    // lenght of string
    cout << name.length();
    
    // clear the string
    // name.clear()
    
    // append
    name.append("@fake.com");
    cout << "\nyour new mail is " << name << '\n';

    // print indexed char in string
    cout << name.at(0) << '\n';

    // insert in index
    name.insert(5 , "$");
    cout << name << '\n';

    // find the index of first occurence of a supplied char
    cout << name.find('$') << '\n';

    // erase a portion with start and end index
    cout << name.erase(5,256);

    return 0;
}