#include <stdio.h>
#include <stdlib.h>

int main() {

    // this is a comment

    /* this is a multiline comment */

    // escape sequences => an escape sequence is a \ followed by a letter or combination of
    //                     characters that do things in C programs
    //                     
    //                     \n => newline
    //                     \t => tab
    //                     \' => display '
    //                     \" => display "

    // there are many more escape sequences but these are the most common

    printf("1\t2\t3\t\n4\t5\t6\t\n7\t8\t9\t\n");

    printf("\"I love pasta\" - A. Lincoln probably");

    return 0;
}