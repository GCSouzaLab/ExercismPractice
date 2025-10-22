#include "hamming.h"
#include <stddef.h>
#include <string.h>

int compute(const char *lhs, const char *rhs) {
    int count=0;

    size_t len1 = strlen(lhs);
    size_t len2 = strlen(rhs);
    size_t final_len = len1 > len2 ? len1 : len2;

    if (len1 != len2) return -1;
    
    for (size_t i = 0; i < final_len; i++) {
        if (lhs[i] !=  rhs[i]) {
            count++; 
        }
    }
    return count;
}
