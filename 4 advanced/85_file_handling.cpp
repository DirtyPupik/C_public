#include <iostream>

using std::cout;
using std::cin;
using std::string;

/*
there are 3 steps while working with files:
1. open a file
2. preform file operations
3. close the file
*/

int main(){
    // to work with files we use FILE (data type) pointer
    FILE* fptr;

    // than we open a file (referenced to a pointer) 
    // in order to create a new file: fopen with attributes as “a” or “a+” or “w” or “w+”
    // using other attributes will open an already existing file
    // meaning it will connect the C program to external file, the conection pointer is fptr
    // opening a new file will overwrite an existing one
    // for info about attributes see:
    // https://www.tutorialspoint.com/c_standard_library/c_function_fopen.htm
    fptr = fopen("test.txt", "a+");      // a for append

    // the output of fptr will be NULL in case file did not open correctly
    cout << fptr << '\n' << '\n';


    // fputs is used to add content
    // fputs only accepts char array
    char sentence[] = "\nanother new line";
    fputs(sentence,fptr);

    // after appending, the cursor is at the end of the file
    // if we want to read, we first need to move the cursor to the begining of the file
    // READING FROM THE END WILL CASUE ERRORS
    fseek(fptr , 0 , SEEK_SET);

    // fgets is used to read content
    // fgets needs an array to store the file content
    // lets create a 256 char's array
    char buffer[256];
    // for fgets the syntax is:
    // fgets(array to write to , how much to write from what is read , file to be read)
    //
    // below we write to the buffer array, we write 256 char's we have read from our fptr
    // fgets can only read one line at a time! to read everything we use while loop
    while ( fgets(buffer, 256, fptr) )
    {
        cout << buffer; 
    }


    // after all operations have been completed, CLOSE THE FILE!
    fclose(fptr);
    // the pointer still exist, but not connected to an open file
    

    
    

    




    return 0;
}