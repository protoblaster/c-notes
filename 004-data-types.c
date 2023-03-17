#include <stdio.h>
#include <stdbool.h>

int main() {

    char a = 'C';                       // single character  %c
    char name[] = "Bro";                // array of characters  %s

    float c = 3.14;                     // float  %f (Stores up to 6-7 digits)
    double d = 3.141592653;             // double  %lf (stores up to 15 digits)

    bool e = true;                      // 1 byte (true or false)  %d

    char f = 100;                       // 1 byte (-128 to +127)  %d or %c
    unsigned char g = 255;              // 1 byte (0 to +255)  %d or %c

    short int h = 32767;                // 2 bytes (-32768 to +32767)
    unsigned short int i = 65535;       // 2 bytes (0 to +65535)

    long long int j = 94542757451547171; // 8 bytes (-9 quintillion to +9 quintillion)
    unsigned long long int k = 267246724765651; // 8 bytes (0 to +18 quintillion)

    printf("%c\n", a);          // character
    printf("%s\n", name);       // character array
    printf("%f\n", c);          // float
    printf("%lf\n", d);         // double
    printf("%d\n", e);          // boolean
    printf("%d\n", f);          // char as numeric value
    printf("%d\n", g);          // unsigned char as numberic value
    printf("%d\n", h);          // short
    printf("%u\n", i);          // unsigned int
    printf("%lld\n", j);        // long long int
    printf("%llu\n", k);        // unsigned long long int

    return 0;
}