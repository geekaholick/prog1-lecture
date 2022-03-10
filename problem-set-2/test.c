#include <stdio.h>
#include <windows.h>

int main(void) {
    // char first, second, third;

    // system("CLS");
    // printf("Enter a first charcter: ");
    // fflush(stdin);
    // scanf("%c", &first);
    // printf("Enter a second charcter: ");
    // fflush(stdin);
    // scanf("%c", &second);
    // printf("Enter a third charcter: ");
    // fflush(stdin);
    // scanf("%c", &third);

    // printf("%d[%c] - %d[%c] - %d[%c]", first, first, second, second, third, third);

    float value;

    printf("Enter a value: ");
    scanf("%f", &value);

    printf("%f", value);

    return 0;
}