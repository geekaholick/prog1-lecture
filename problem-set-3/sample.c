#include <stdio.h>
#include "cis1101.h"

void welcome(String name);
int get_product(int a, int b);
int get_number(String msg);

int main(void) {
    int num1, num2, result;

    greet("Kyle");
    welcome("Jennyca");
    welcome("Ramil");
    welcome("Ace");

    num1 = get_number("Enter first number");
    num2 = get_number("Enter second number");

    printf("The result is %d.\n", get_product(5, 10));

    result = get_product(num1, num2);
    printf("%d * %d = %d\n", num1, num2, result);

    return 0;
}

int get_product(int a, int b) {
    int answer = 0;

    for(int i=0; i<b; ++i) {
        answer += a;
    }

    return answer;
}

int get_number(String msg) {
    int value;

    printf("%s: ", msg);
    scanf("%d", &value);

    return value;
}

void welcome(String name) {
    printf("Hi there %s, welcome to CIS1101.\n", name);
}