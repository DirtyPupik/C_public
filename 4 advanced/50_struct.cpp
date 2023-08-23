#include <iostream>

using std::cout;
using std::cin;
using std::string;

// Struct - a structure that contains many variables of many data types
// variables inside the struct are known as "members"
// very similar to classes and instances
// a common practice is that struct starts with capital letter

struct Student {
    string name;
    double gpa;
    bool enrolled;
};

void printStudentName(Student student) {        // a no return function that take a Student type struct named student
    cout << &student.name << '\n';
    cout << student.name << '\n';
}

int main(){
    // create an instance of the struct
    struct Student student1;                     // this is true to both C and C++         
    Student student2;                            // in C++, no need to use struct keyword. in C its complimantory
    typedef struct Student Student_t;            // it is possible to use typedef in order to do the same as in C++
    Student_t student3;

    Student *studentPtr;                         // a struct pointer can be made
    studentPtr = &student2;                      // assignment of the struct type pointer

    // members are accessed with '.' - Class Member Access Operator
    student1.name = "spongebob";
    student1.gpa = 2.6;
    student1.enrolled = true;

    student2.name = "patrik";                   // few instances of a struct can be made.
    studentPtr -> gpa = 1.1;                    // struct pointer members are accessed with ->
    cout << student2.name << '\n';   
    printf("%s\n", student2.name.c_str());      // in order to print a C string - use c_str() from std namespace
    printf("%.2f\n\n", student2.gpa);           // %.x sets the precision


    cout << &student1.name << '\n';     // address of  student1 struct in main()

    
    // When passing a struct to function, it passes by value and not by reference. a copy is made
    printStudentName(student1);


    return 0;
}