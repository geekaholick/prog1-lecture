#ifndef CIS1101_H
#define CIS1101_H

typedef char *String;

String get_string(String prompt);
void greet(String name);
int get_integer(String prompt);
float get_float(String prompt);
char get_character(String prompt);

#endif