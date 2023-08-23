#include <iostream>

using std::cout;
using std::cin;
using std::string;

int searchArray(int array[] , int size , int element){
    for (int i = 0 ; i < size ; i++) {
        if(array[i] == element) {
            return i;
        }
    }
    
    return -1;

};

int main(){
    int numbers[] = {1,2,3,4,5,6,7,8,9};
    int arraySize = sizeof(numbers)/sizeof(numbers[0]);
    int index;
    int numLookUp;

    cout << "enter element to search for \n";
    cin >> numLookUp;

    index = searchArray(numbers , arraySize , numLookUp);

    if (index != -1){
        cout << numLookUp << " is at index " << index;
    } else {
        cout << "element not found";
    }

    return 0;
}