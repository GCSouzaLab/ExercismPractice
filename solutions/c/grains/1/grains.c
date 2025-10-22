#include "grains.h"

uint64_t square(uint8_t index) {
    if (index > 64 || index < 1) {
        return 0;
    }

    if (index == 1) return 1;
    uint64_t result = 1;
   return result << (index - 1);
}

uint64_t total(void) {
    uint64_t sum = 0;
    uint64_t one = 1;
    
    for (uint64_t i = 0; i<64; i++) {
        sum += one << i;
    }    
    return sum;
}