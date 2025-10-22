#include "luhn.h"
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdio.h>

bool luhn(const char *num) {
    char clean[strlen(num) + 1];
    int j = 0;
    for (int i = 0; num[i]; i++) {
        if (!isspace((unsigned char)num[i])) {
            clean[j++] = num[i];
        }
    }
    clean[j] = '\0';
    
    if (strlen(clean) <= 1) return false;

    int aux = 0;
    int total = 0;
    int i = strlen(clean) - 1;
    while (clean[i] != '\0') {
        if (!isdigit((unsigned char)clean[i])) return false;
        
        int value = clean[i] - '0';

        int result = 0;
        if (aux == 1) {
             result = value * 2;
        } else {
            result = value;
        }
        aux = 1 - aux;
        
        if (result > 9) {
            result -= 9;
        }
        
        total += result;
        i--;
    }

    if (total % 10 == 0) {
        return true;
    }
    return false;
}