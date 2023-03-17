#include <stdio.h>
#include <stdlib.h>

int main() {

    // constants --> a value that cannot be changed during the program's execution

    //float pi = 3.14159;
    //printf("PI is: %f", pi);
    //pi = 2.98                         --> value of PI changed
    
    // to make a constant we use the const keyword
    // a common naming convention is to capitalize all letters of the name of a constant

    const float PI = 3.14159;
    printf("PI is: %f", PI);

    // PI = 3.1234;                     --> PI cannot be changed because it is a constant

    return 0;
}