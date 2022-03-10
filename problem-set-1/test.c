#include <stdio.h>
#include "cis1101.h"

int main() {
    String name;
    int x, y;

    name = get_string("Enter your name:" );
    
    printf("Hello world.");
    printf("\nHi there %s. Welcome to the world of programming. %s", name);

    x = get_integer("Enter first number: ");
    y = get_integer("Enter second number: ");

    printf("The first number is %d and the second number is %d.", x, y);

    return 0;
}