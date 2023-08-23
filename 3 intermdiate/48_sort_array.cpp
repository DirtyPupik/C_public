#include <iostream>

using std::cout;
using std::cin;
using std::string;

// Bubble Sort - simple sorting algorithem

void sort(int array[] , int size) {
    int temp;
    for (int i = 0 ; i < size - 1 ; i++) {
        for (int j = 0 ; j < size - i - 1 ; j++) {
            
            // the if statement tells if order is ascending or decending
            // to change to decending, change to <
            if (array[j] > array[j + 1]) {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

}

int main(){
    int array[] = {5,1,2,7,4,3,9,8,6};
    int size = sizeof(array)/sizeof(array[0]);

    sort(array , size);
    for (int element : array) {
        cout << element << '\n';
    }

    return 0;
}