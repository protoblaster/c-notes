#include <stdio.h>
#include <stdlib.h>

int main() {

    // to ask for input we use scanf

    int age;
    
    printf("Enter your age: ");
    scanf("%d", &age);

    printf("You are %d years old!\n", age);

    return 0;
}