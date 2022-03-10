#include <stdio.h>

int main() {
    int first_number, second_number, quotient, remainder, value;
    
    printf("Enter first number: ");
    scanf("%d", &first_number);
    printf("Enter second number: ");
    scanf("%d", &second_number);
    
    quotient = (first_number / second_number);
    remainder = first_number % second_number;
    value = first_number <= second_number;

    printf("%d / %d = %d r.%d", first_number, second_number, quotient, remainder);
    printf("%d <= %d ===> %d", first_number, second_number, value);

    return 0;   
}