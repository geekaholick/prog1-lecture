#include <stdio.h>
#include <windows.h>

int main(void)
{
    int side1, side2;

    printf("Enter first: ");
    scanf("%d", &side1);

    printf("Enter second: ");
    scanf("%d", &side2);

    for (int row = 0; row < side2; ++row){
        for (int col = 0; col < side1; ++col){
            printf("* ");
            Sleep(1000);
        }
        printf("\n");
    }

    system("PAUSE");
    system("CLS");

    for(int i = 0; i < 256; i++) {
        printf("[%d] %c - ", i, i);
    }

    
    system("PAUSE");
    system("CLS");

    for(int i = 0; i < 80; i++) {
        printf("%c", 176);
        Sleep(500);
    }

    system("PAUSE");
    system("CLS");

    return 0;
}