#include <iostream>

using std::cout;
using std::cin;
using std::string;

int main(){
    // general synthex
    // arrays can contain only values of the SAME DATA TYPE
    string cars[] = {"mazda" , "mercedes" , "audi"};

    // print the memory address of the array
    cout << cars << '\n';

    // print value from the array
    cout << cars[0] << '\n';

    // change or add value
    cars[0] = "dacia";
    cout << cars[0] << "\n\n";

    
    // arrays can be declared empty - but array size must be supplied
    int numbers[2];
    numbers[0] = 1;
    numbers[1] = 2;
    cout << numbers[0] << '\n';


    // 2D-array
    /*
    00 01 02
    10 11 12
    20 21 22
    */
    // first number is for rows, can be left empty
    // second number is for columns, must be supplied

    int matrix[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    cout << '\n' << matrix[1][1];

    // to calculate the number of rows and columns:
    // int matrix is 4 bytes per integer (cell)
    int rows = sizeof(matrix)/sizeof(matrix[0]);
    int columns = sizeof(matrix[0])/sizeof(matrix[0][0]);

    cout << "\n\n" << rows << '\n' << columns;


    return 0;
}