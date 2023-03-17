#include <stdio.h>

int main() {

    // format specifiers % => defines and formats the data to be displayed

    // %c => character
    // %s => string (character array)
    // %f => float 
    // %lf => double 
    // %d => integer

    // %.1 => decimal precision
    // %1 => minimum field width
    // %- => Left align

    float item1 = 5.75;
    float item2 = 10.00;
    float item3 = 100.99;

    // use 2 digits of precision
    printf("Price: %.2f\n", item1);
    printf("Price: %.2f\n", item2);
    printf("Price: %.2f\n", item3);

    // allow 8 spaces before value being printed
    printf("Price: %8.2f\n", item1);
    printf("Price: %8.2f\n", item2);
    printf("Price: %8.2f\n", item3);

    // use a left align 
    printf("Price: %-8.2f\n", item1);
    printf("Price: %-8.2f\n", item2);
    printf("Price: %-8.2f\n", item3);

    return 0;
}