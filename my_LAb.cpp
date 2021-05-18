#include "My_lab.h"
#include <stdio.h>
void zeruly(char s[]) {
    int count = 0, end = 0;
    int j = 1;
    for (int i = 0; s[j] != '\0'; i++) {
        if (s[i] != s[j]) {
            count++;
        }
        else {
            if (count > end) {
                end = count;
                count = 0;
            }
            else {
                count = 0;
            }
        }
       j++;
    }
    if (count > end) {
        end = count;
    }
    printf("%d\n", end);

}
void reverse(char s[]) {
    int c, i, j;
    int count;
    for ( count = 0; s[count] != '\0'; count++) {
        ;
    };
    for (i = 0, j = count - 1; i < j; ++i, --j) {
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }
    zeruly(s);
}
void itoab(long n, char s[]) {
    int i, j;
    int sign;
    int transf;

    sign = n;
    transf = 0;
    i = 0;
    
        do {
            if (n % 2) {
                if (n > 0) {
                    s[i++] = '1';
                }
                else {
                    s[i++] = '0';
                }
            }
            else {
                if (n > 0) {
                    s[i++] = '0';
                }
                else {
                    s[i++] = '1';
                }
            }
        } while (n /= 2);

        if (i < 32) {
            for (i; i < 32; i++) {
                if (sign > 0) {
                    s[i] = '0';
                }
                else {
                    s[i] = '1';
                }
            }
        }
        if (sign <= 0) {
            j = 0;
            while (transf != 1) {
                if (s[j] == '1') {
                    s[j] = '0';
                }
                else {
                    s[j] = '1';
                    transf = 1;
                }
                ++j;
            }
        }
        s[i] = '\0';
    reverse(s);
}
