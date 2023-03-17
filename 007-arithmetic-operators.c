#include <stdio.h>
#include <stdlib.h>

int main() {

    //  +   Addition
    //  -   Subtraction
    //  *   Multiply 
    //  /   Divide
    //  %   Modulus
    //  ++  Increment
    //  --  Decrement

    int x = 5;
    int y = 2;

    int z = x + y;
    int a = x - y;
    int b = x * y;
    int c = x / y;
    int d = x % y;
    int e = x++;
    int f = x--;

    printf("%d\n", z);
    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);
    printf("%d\n", d);
    printf("%d\n", e);
    printf("%d\n", f);

    return 0;
}