#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "My_lab.h"
int main() {
    long p;
    char s[100];
    while (printf("Number: ") && scanf("%i", &p) != 1) {
        char c;
        while (scanf("%c", &c) == 1 && c != '\n');
        printf("CHISLOO\n");
    }

    itoab(p, s);
   
    printf("%s\n", s);
    return 0;
}