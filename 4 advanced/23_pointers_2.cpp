#include <string.h>
#include <iostream>

int main(void)
{
    // str and str2 are ADDRESSES to a read-only memory, that are pushed onto the stack
    // they exist on the stack
    // both are STRING LITERALs
    char *str = "Stack";
    char *str2 = "NewStack";

    printf("0x%p : &str\n", &str);        // this is the actual address of str
    printf("0x%016llx : str\n", str);     // this is the value of str, which is a address to read-only memory
                                          // usually, the address is translated to string, but here we cast it
                                          // to an address, with 16 digits padding as zeros, and longlonghex form
    printf("0x%p : str2\n\n", str2);      // this is the address stored in str2

    str = str2;

    printf("0x%p : &str\n", &str); // str's address on the stack did not change, but it's value did.
    printf("0x%p : str\n", str);   // the new value of str is now a different address pointing to a
                                        // different read-only string, notice that the new address is the address
                                        // stored inside str2
}