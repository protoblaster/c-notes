#include <stdio.h>
#include <stdlib.h>

int main() {

    // variables are a container for data, the variable name behaves
    // as the data it is storing. we use the variable name to access
    // it's data

    // variables must be declared and assigned a value
    // the data type must also be specified

    int x;              // declaration
    x = 123;            // assignment
    int y = 321;        // declaration and assignment 

    // format specifiers 
    // placeholders are used for variables in strings
    //
    // %d => integer
    // %f => float
    // %s => array
    // %c => char

    printf("%d\n", x);
    printf("%d\n", y);

    char name[] = "Joseph";
    int age = 21;
    float gpa = 3.1;
    char averageGrade = 'C';

    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("GPA: %f\n", gpa);
    printf("Average Grade: %c\n", averageGrade);

    return 0;
}