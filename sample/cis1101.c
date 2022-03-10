#include "cis1101.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

String get_string(String prompt) {
    String value;
    char temp[100];
    
    printf("%s", prompt);
    fflush(stdin);
    gets(temp);
    value = malloc(sizeof(char)*strlen(temp));
    strcpy(value, temp);

    return value;
}

int get_integer(String prompt) {
    int value;

    printf("%s", prompt);
    fflush(stdin);
    scanf("%d", &value);

    return value;
}

float get_float(String prompt) {
    float value;

    printf("%s", prompt);
    fflush(stdin);
    scanf("%f", &value);

    return value;
}

char get_character(String prompt) {
    char value;

    printf("%s", prompt);
    fflush(stdin);
    scanf("%c", &value);

    return value;
}

void greet(String name) {
    printf("Hello, %s. Welcome to CIS 1101!\n", name);
}