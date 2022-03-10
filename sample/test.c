#include <stdio.h>
// #include "cis1101.h"

int main() {
    String name;
    printf("Hello, world!\n");
    greet("NJ");

    greet(get_string("Enter your name: "));
    printf("%d is a number.", get_integer("Enter a number: "));
    printf("%.2f is a float number.", get_float("Enter a number: "));
    printf("%c is a character.", get_character("Enter a character: "));

    return 0;
}