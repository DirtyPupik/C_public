#include <iostream>
#include <vector>

// typedef - an alias, different name for something
// the long expression is for pairlist, the pairlist_t is the alias
// when defining new type, a good practice of _t at the end of the name is used
// it might be better to use _tc , as _t is used for "type", such as uint64_t

// typedef std::vector<std::pair<std::string, int>> pairlist_t;
// another example:
typedef std::string str_t;
// another different syntex is:
using int_t = int;




// typedef can be done with struct decleration
// this one:
typedef struct struct_name {
    int a;
    float b;
} type_name;
// is the same as this one:
struct struct_name2 {
    int A;
    float B;
};
typedef struct_name2 type_name2;




int main()
{
    str_t firstName = "yahel";

    return 0;
}