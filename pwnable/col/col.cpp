#include <iostream>
#include <stdio.h>
#include <string.h>

using std::cout;
using std::cin;
using std::string;

unsigned long hashcode = 0x21DD09EC;

unsigned long check_password(const char* p){
        // the function receives from the user a char pointer to a constant array of char's
        // the array consists of 20 char's, each one being 1 byte, giving total of 20 bytes

        int* ip = (int*)p;              // ip sometimes stands for instruction pointer
        // ip is a pointer to int type, and it is equal to an int-pointer-cast of the char pointer array
        // meaning, size of each block read from the array is now sizeof(int)=4 bytes, instead of 1 byte for char
        // also meaning, type is int and not char, so it wouldnt be translated via ascii
        int i;
        int res=0;
        for(i=0; i<5; i++){
                res += ip[i];
                // every round, 4 bytes (sizeof(int)), are read from the input string as integers
                // 5 rounds x 4 bytes = 20 bytes (160 bits)
                // each char can be represented as 1 byte hex number (00-ff), the total sting is 20 hex digits
                // res is signed int, ranging from 2,147,483,647 to -2,147,483,648
                // signed int in this case goes by two's complement, counting op till 0x7fffffff
                // and turning negative from 0x80000000 and counting up to -1 (eg. -10 is smaller than -1)
        }
        return res;
        // res, a signed int, is returned outside of the function as unsigned long
        // since res is only 4 byte long, it is casted from signed to unsigend
        // its best to look at the hex representation
        // 0x7fffffff => 2,147,483,647
        // 0x80000000 => 2,147,483,648
        // 0x80000001 => 2,147,483,649
        // our hash value is 0x21DD09EC, we would like to get to it as a final value
        //
        // for plaintext input - 
        // each plaintext letter is represented as 1 byte hex value (0x00), the text is stored as char array
        // one byte at a time, eg. for the string "0123" which equals \x30 \x31 \x32 \x33, it will be
        // stored in this order, but since the system works by little endian, when pulling 4 byte integer
        // the order is changed to 0x 33 32 31 30, giving the most significance to the 4th letter
        //
        // so, our hashcode is 0x21DD09EC which equals 568,134,124 in decimal.
        // we can try and devide this number by 5 (since res is made of 5 x 4 byte fields)
        // 568132124 % 5 = 4    there is a mod of 4
        // 568132124 / 5 = 113626424 (4)
        // so we get (4 * 113626424 + 113626428)
        // converting to hex we get - 0x06C5CEC8 and 0x06C5CECC
        // using python to generate the 20 byte input:
        // python -c 'print "\xc8\xce\xc5\x06" * 4 + "\xcc\xce\xc5\x06"'
        // inputing the output into the executable, we will solve this problem:
        // ./col `python -c 'print "\xc8\xce\xc5\x06" * 4 + "\xcc\xce\xc5\x06"'`
}

int main(int argc, char* argv[]){
        if(argc<2){
                printf("usage : %s [passcode]\n", argv[0]);
                return 0;
        }
        if(strlen(argv[1]) != 20){
                printf("passcode length should be 20 bytes\n");
                return 0;
        }

        if(hashcode == check_password( argv[1] )){//
                system("/bin/cat flag");
                cout << "win";
                return 0;
        }
        else
                printf("wrong passcode.\n");
        return 0;
}

