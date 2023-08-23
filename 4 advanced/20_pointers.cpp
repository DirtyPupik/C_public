#include <iostream>

using std::cout;
using std::cin;
using std::string;

int main(){
    // Pointer - a variable that stores memory address of other variable
    // sometimes its easier to work with an address
    // further read - https://www.simplilearn.com/tutorials/c-tutorial/pointers-in-c

    // & address operator
    // * dereference operator


    // strings in c++ are treated different than in c
    string name = "yahel";
    
    // create pointer to the string 'name'  address
    // this is not necessary in C, since char arrays contain address of first letter
    string *pName = &name;

    // show the pointer address
    cout << pName << '\n';

    // access the value that in the address
    cout << *pName << '\n';





    // another example
    
    int a = 7;
    int *aPtr;
    aPtr = &a;

    // its also possible to write
    // int* aPtr = &a;

    cout << '\n' << &a;
    cout << '\n' << a;
    cout << '\n' << aPtr;
    cout << '\n' << *aPtr;
    cout << '\n' << &(*aPtr) << "\n\n";     // just for fun, if we loop, we get address back





    // another example
    printf("char array:\n");

    char arr[] = "Hello";   // create a char array named arr
    // arr contains the address of the first letter (char = 1 byte)
    // theres a null byte at the end (\0) to end reading

    char* ptr = arr;        // dereference a pointer named ptr which will contain the content of arr

    cout << arr << "\n";            // go to address stored in arr and read till null byte
    cout << ptr << '\n';            // go to address stored in ptr and read till null byte
    cout << ptr[4] << '\n';         // since ptr=arr, it can be treated as an array of chars, same as arr
    cout << *ptr << '\n';           // char* = go to the address in ptr and read sizeof(char) bytes (1by)
    cout << &ptr << '\n';           // address of ptr in memory
    cout << &arr << "\n";           // address of arr in memory
    cout << *arr << "\n";           // dereference to the address stored in arr (H)
    cout << * (char*) arr << "\n\n";         // well.. thats just magic (actualy, pointer casting)

    printf("%c ", *ptr);       // H
    printf("%c ", *(ptr + 1)); // e
    printf("%c ", *(ptr + 2)); // l
    printf("%c ", *(ptr + 3)); // l
    printf("%c ", *(ptr + 4)); // o



    // string literal - forbidden by standard yet works, it will rise warning
    // Read only string in a shared segment.
    // When a string value is directly assigned to a pointer, in most of the compilers,
    // the content is stored in a read-only block (generally in data segment) 
    // that is shared among functions (shared read-only),
    // while the pointer itself is stored in read-write
    // so the pointer can be changed but the string can't
    char *string_literal = "\n\nthis is a string literal";

    printf("\n\n0x%p : &string_literal\n", &string_literal);    // address of the pointer
    printf("0x%p : string_literal\n", string_literal);      // address stored inside the pointer
    cout << (void *) string_literal;                        // address stored inside the pointer ver2
    // notice data segment has a different address from stack





    return 0;
}



