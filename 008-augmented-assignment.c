#include <stdio.h>

int main() {

    // augmented assignment operators ==> used to replace a statement where an operator
    //                                    takes a variable as one of it's arguments
    //                                    and then assigns the result back to the same
    //                                    variable
    //                                    x = x + 1
    //                                    x += 1

    int x = 10;
    printf("%d\n", x);

    // these 4 lines of code increase the value of x 
    x = x + 2;
    printf("%d\n", x);

    x += 2;
    printf("%d\n", x);

    // these 4 lines of code decrease the value of x
    x = x - 2;
    printf("%d\n", x);

    x -= 2;
    printf("%d\n", x);

    // we can also multiply and divide x using *= or /=
    x *= 10;
    printf("%d\n", x);

    x /= 10;
    printf("%d\n", x);

    return 0;
}