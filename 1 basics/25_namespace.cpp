#include <iostream>

// namespace decleraction
namespace myCoolSpace
{
    int x = 420;
}

namespace evenBetterSpace
{
    int x = 69;
}

int main()
{
    // using namespace std;
    // this line allows the use of namespace, than no need to specify it every time
    // but std contains a lot of names, so conflict is likely
    // one could use:
    using std::cout;
    using std::string;

    int x = 666; // this is the local space x
    cout << x << '\n';
    cout << myCoolSpace::x << '\n';    // notice usage of namespace
    cout << evenBetterSpace::x << '\n';

    return 0;
}